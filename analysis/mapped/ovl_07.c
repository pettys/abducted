/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_07::022dc0 ovl_07_entry_22dc_0000 */

void __cdecl16far ovl_07_entry_22dc_0000(void)

{
  FUN_1000_08be(2);
  return;
}



/* ovl_07::022dce ovl_07_entry_22dc_000e */

void __cdecl16far ovl_07_entry_22dc_000e(void)

{
  FUN_1000_08be(0xc);
  return;
}



/* ovl_07::022ddc ovl_07_entry_22dc_001c */

int __cdecl16far ovl_07_entry_22dc_001c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_1000_08be(0xd);
  iVar2 = FUN_1000_08be(3);
  iVar3 = FUN_1000_08be(8);
  return iVar3 + iVar2 + iVar1;
}



/* ovl_07::022e0e ovl_07_entry_22dc_004e */

int __cdecl16far ovl_07_entry_22dc_004e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_1000_08be(0x11);
  iVar2 = FUN_1000_08be(0xf);
  iVar3 = FUN_1000_08be(10);
  return iVar3 + iVar2 + iVar1;
}



/* ovl_07::022e40 ovl_07_entry_22dc_0080 */

void __cdecl16far ovl_07_entry_22dc_0080(void)

{
  int iVar1;
  int iVar2;
  int local_6;
  
  local_6 = 0;
  while( true ) {
    if (0x13 < local_6) {
      return;
    }
    iVar1 = FUN_19c7_4e32();
    iVar2 = (iVar1 % 8) * 2;
    if (*(int *)((undefined *)&DAT_3000_ca3d + iVar2) == 0) break;
    local_6 = local_6 + 1;
  }
  *(undefined2 *)((undefined *)&DAT_3000_ca3d + iVar2) = 1;
  *(undefined1 *)*(undefined2 *)(*(int *)(iVar2 + 0x5e48) + 10) = 0;
  *(undefined1 *)*(undefined2 *)(*(int *)((iVar1 % 8) * 2 + 0x5e48) + 0xc) = 0;
  DAT_2a22_e4af = DAT_2a22_e4af + '\x01';
  return;
}



/* ovl_07::022e98 ovl_07_entry_22dc_00d8 */

void __cdecl16far ovl_07_entry_22dc_00d8(void)

{
  int local_4;
  
  local_4 = 0;
  do {
    *(undefined2 *)((undefined *)&DAT_3000_ca3d + local_4 * 2) = 0;
    local_4 = local_4 + 1;
  } while (local_4 < 8);
  DAT_2a22_e4af = 0;
  DAT_2a22_f309 = 1;
  return;
}



/* ovl_07::022ec6 ovl_07_entry_22dc_0106 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_07_entry_22dc_0106(int param_1)

{
  int iVar1;
  int local_4;
  
  if (param_1 == 0xb) {
    ovl_07_entry_22dc_00d8();
  }
  for (local_4 = 0; local_4 < _DAT_2a22_e5c4; local_4 = local_4 + 1) {
    iVar1 = local_4 * 0x32;
    if ((char)((undefined *)&DAT_2a22_e5da)[iVar1] == param_1) {
      ((undefined *)&DAT_2a22_e5da)[iVar1] = 0;
      ((undefined *)&DAT_2a22_e601)[iVar1] = 0xff;
      ((undefined *)&DAT_2a22_e5ff)[iVar1] = 1;
      ((undefined *)&DAT_2a22_e5dd)[iVar1] = DAT_2a22_bd82;
      FUN_19c7_480c(iVar1 + -0x5e72,0x5112);
    }
  }
  return;
}



/* ovl_07::022f28 ovl_07_entry_22dc_0168 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_07_entry_22dc_0168(void)

{
  _DAT_2a22_a5c6 = _DAT_2a22_a5c6 + 1;
  return;
}



/* ovl_07::022f2e ovl_07_entry_22dc_016e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_07_entry_22dc_016e(void)

{
  int iVar1;
  int iVar2;
  undefined1 local_a;
  
  iVar1 = FUN_19c7_4e32();
  iVar1 = iVar1 % _DAT_2a22_e5c4;
  local_a = (undefined1)iVar1;
  DAT_2a22_a5bc = local_a;
  DAT_2a22_a5bd = local_a;
  iVar2 = FUN_19c7_4e32();
  _DAT_2a22_e39b = iVar2 % 100 + *(int *)((undefined *)&DAT_2a22_e5d0 + iVar1 * 0x32) + -0x32;
  iVar2 = FUN_19c7_4e32();
  _DAT_2a22_e5a6 = iVar2 % 100 + *(int *)((undefined *)&DAT_2a22_e5d2 + iVar1 * 0x32) + -0x32;
  iVar2 = FUN_19c7_4e32();
  _DAT_2a22_e5aa = iVar2 % 100 + *(int *)((undefined *)&DAT_2a22_e5d4 + iVar1 * 0x32) + -0x32;
  return;
}



/* ovl_07::022fb0 ovl_07_entry_22dc_01f0 */

void __cdecl16far ovl_07_entry_22dc_01f0(void)

{
  FUN_19c7_480c(0xa18e,0x5124);
  DAT_2a22_e5da = 0x11;
  DAT_2a22_e601 = 1;
  DAT_2a22_e5dd = DAT_2a22_bd93;
  DAT_2a22_e5ff = 0;
  return;
}



/* ovl_07::022fd6 ovl_07_entry_22dc_0216 */

void __cdecl16far ovl_07_entry_22dc_0216(int param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int local_4;
  
  iVar2 = param_1 * 0x17;
  ((undefined *)&DAT_2a22_f233)[iVar2] = 0;
  ((undefined *)&DAT_2a22_f232)[iVar2] = 0;
  *(undefined1 *)(iVar2 + -0x521c) = 0;
  local_4 = 0;
  do {
    pcVar3 = (char *)(param_1 * 0x17 + local_4 + -0x5217);
    pcVar1 = (char *)(local_4 + param_1 * 0x1d + -0x60a6);
    *pcVar1 = *pcVar1 + *pcVar3;
    *pcVar3 = '\0';
    local_4 = local_4 + 1;
  } while (local_4 < 0x10);
  return;
}



/* ovl_07::02302c FUN_ovl_07__02302c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_07__02302c(void)

{
  undefined2 uVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_a;
  int local_8;
  int local_4;
  
  local_8 = -1;
  iVar2 = ((((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 +
           (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0)) - _DAT_2a22_9554) -
          (uint)(_DAT_2a22_fac5 + _DAT_2a22_ded0 < _DAT_2a22_9552);
  if ((-1 < iVar2) && ((0 < iVar2 || (2000 < (_DAT_2a22_fac5 + _DAT_2a22_ded0) - _DAT_2a22_9552))))
  {
    _DAT_2a22_9552 = _DAT_2a22_fac5 + _DAT_2a22_ded0;
    _DAT_2a22_9554 =
         ((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 + (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0)
    ;
    for (local_c = 0; local_c < _DAT_2a22_e5c4; local_c = local_c + 1) {
      if ((((undefined *)&DAT_2a22_e5da)[local_c * 0x32] == '\t') &&
         (((undefined *)&DAT_2a22_e5ff)[local_c * 0x32] == '\0')) {
        local_8 = local_c;
      }
    }
    if (local_8 != -1) {
      local_a = 16000;
      local_4 = -1;
      local_c = 1;
      do {
        local_10 = FUN_19c7_4e32();
        local_10 = local_10 % _DAT_2a22_e5c4;
        iVar2 = local_10 * 0x32;
        if ((((((undefined *)&DAT_2a22_e5da)[iVar2] == '\t') ||
             (((undefined *)&DAT_2a22_e5da)[iVar2] == '\r')) ||
            (((undefined *)&DAT_2a22_e5da)[iVar2] == '\v')) ||
           ((((undefined *)&DAT_2a22_e5da)[iVar2] == '\x01' ||
            (((undefined *)&DAT_2a22_e601)[iVar2] == '\x02')))) {
          local_10 = -1;
        }
        if (local_10 == 0x2f) {
          local_10 = -1;
        }
        if (local_10 != -1) {
          uVar1 = FUN_1edc_000e(*(int *)((undefined *)&DAT_2a22_e5d2 + local_10 * 0x32) -
                                *(int *)((undefined *)&DAT_2a22_e5d2 + local_8 * 0x32),
                                *(int *)((undefined *)&DAT_2a22_e5d4 + local_10 * 0x32) -
                                *(int *)((undefined *)&DAT_2a22_e5d4 + local_8 * 0x32),0,0);
          iVar2 = FUN_1edc_000e(*(int *)((undefined *)&DAT_2a22_e5d0 + local_10 * 0x32) -
                                *(int *)((undefined *)&DAT_2a22_e5d0 + local_8 * 0x32),uVar1);
          if (iVar2 < local_a) {
            local_4 = local_10;
            local_a = iVar2;
          }
        }
        local_c = local_c + 1;
      } while (local_c < 0x14);
      if (local_4 != -1) {
        local_8 = local_8 * 0x32;
        ((undefined *)&DAT_2a22_e5da)[local_8] = 0;
        ((undefined *)&DAT_2a22_e601)[local_8] = 0xff;
        ((undefined *)&DAT_2a22_e5ff)[local_8] = 2;
        FUN_19c7_480c(local_8 + -0x5e72,0x5135);
        local_c = 0;
        do {
          *(undefined1 *)(local_c + local_4 * 0xb + -0x54bc) = 0xff;
          local_c = local_c + 1;
        } while (local_c < 0xb);
        local_4 = local_4 * 0x32;
        ((undefined *)&DAT_2a22_e5da)[local_4] = 9;
        *(undefined1 *)(local_4 + -0x5e75) = 0;
        ((undefined *)&DAT_2a22_e601)[local_4] = 2;
        ((undefined *)&DAT_2a22_e5ff)[local_4] = 0;
        FUN_19c7_480c(local_4 + -0x5e72,0x5143);
      }
    }
  }
  return;
}



/* ovl_07::023208 FUN_ovl_07__023208 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_ovl_07__023208(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  bool bVar6;
  int local_c;
  int local_8;
  int local_6;
  
  local_c = -1;
  iVar2 = FUN_1000_08be(2);
  if (iVar2 != 0) {
    local_c = 2;
  }
  iVar2 = FUN_1000_08be(0xc);
  uVar3 = FUN_1000_08be(2);
  if ((int)uVar3 < iVar2) {
    local_c = 0xc;
  }
  if (local_c == -1) {
    return uVar3;
  }
  if (_DAT_2a22_955a == -1) {
    for (local_8 = 0; local_8 < _DAT_2a22_e5c4; local_8 = local_8 + 1) {
      iVar2 = FUN_19c7_4e32();
      iVar5 = (iVar2 % _DAT_2a22_e5c4) * 0x32;
      if ((((undefined *)&DAT_2a22_e5ff)[iVar5] == '\x01') &&
         ((char)((undefined *)&DAT_2a22_e5da)[iVar5] != local_c)) {
        _DAT_2a22_9556 = _DAT_2a22_fac5 + _DAT_2a22_ded0;
        _DAT_2a22_9558 =
             ((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 +
             (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0);
        _DAT_2a22_955a = iVar2 % _DAT_2a22_e5c4;
      }
    }
  }
  iVar2 = _DAT_2a22_955a;
  iVar5 = ((((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 +
           (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0)) - _DAT_2a22_9558) -
          (uint)(_DAT_2a22_fac5 + _DAT_2a22_ded0 < _DAT_2a22_9556);
  if ((iVar5 < 0) ||
     (((iVar5 < 1 && ((_DAT_2a22_fac5 + _DAT_2a22_ded0) - _DAT_2a22_9556 < 0x641)) ||
      (_DAT_2a22_955a == -1)))) goto LAB_ovl_07__023340;
  iVar5 = _DAT_2a22_955a * 0x32;
  if ((((undefined *)&DAT_2a22_e5ff)[iVar5] == '\x01') &&
     ((char)((undefined *)&DAT_2a22_e5da)[iVar5] != local_c)) {
    if (local_c == 2) {
      ((undefined *)&DAT_2a22_e5da)[iVar5] = 2;
      ((undefined *)&DAT_2a22_e601)[iVar5] = 1;
      ((undefined *)&DAT_2a22_e5ff)[iVar5] = 0;
      uVar4 = 0x5156;
    }
    else {
      if (local_c != 0xc) goto LAB_ovl_07__02333a;
      iVar5 = _DAT_2a22_955a * 0x32;
      ((undefined *)&DAT_2a22_e5da)[iVar5] = 0xc;
      ((undefined *)&DAT_2a22_e601)[iVar5] = 1;
      ((undefined *)&DAT_2a22_e5ff)[iVar5] = 0;
      uVar4 = 0x516d;
    }
    FUN_19c7_480c(iVar2 * 0x32 + -0x5e72,uVar4);
  }
LAB_ovl_07__02333a:
  _DAT_2a22_955a = -1;
LAB_ovl_07__023340:
  if (((local_c != -1) && (*(char *)(local_c * 0x1d + -0x60ec) < '\x18')) && (_DAT_2a22_955c == -1))
  {
    iVar2 = ovl_07_entry_22dc_001c();
    if (iVar2 == 0) {
      _DAT_2a22_955c = 2;
    }
    iVar2 = ovl_07_entry_22dc_004e();
    if (iVar2 == 0) {
      _DAT_2a22_955c = 1;
    }
    iVar2 = ovl_07_entry_22dc_001c();
    if ((iVar2 == 0) && (iVar2 = ovl_07_entry_22dc_004e(), iVar2 == 0)) {
      _DAT_2a22_955c = -1;
    }
    if (_DAT_2a22_955c != -1) {
      _DAT_2a22_955e = _DAT_2a22_fac5 + _DAT_2a22_ded0;
      _DAT_2a22_9560 =
           ((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 +
           (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0);
    }
  }
  iVar2 = _DAT_2a22_955a;
  uVar3 = (_DAT_2a22_fac5 + _DAT_2a22_ded0) - _DAT_2a22_955e;
  iVar5 = ((((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 +
           (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0)) - _DAT_2a22_9560) -
          (uint)(_DAT_2a22_fac5 + _DAT_2a22_ded0 < _DAT_2a22_955e);
  if (iVar5 < 0) {
    return uVar3;
  }
  if ((iVar5 < 1) && (uVar3 < 0x5dd)) {
    return uVar3;
  }
  if (_DAT_2a22_955c == -1) {
    return uVar3;
  }
  local_6 = -1;
  local_8 = 0;
  do {
    uVar3 = (uint)(local_8 < _DAT_2a22_e5c4);
    if (local_6 != -1) {
      if (local_6 != -1) {
        if (local_c == 2) {
          iVar5 = _DAT_2a22_955a * 0x32;
          ((undefined *)&DAT_2a22_e5da)[iVar5] = 2;
          ((undefined *)&DAT_2a22_e601)[iVar5] = 1;
          ((undefined *)&DAT_2a22_e5ff)[iVar5] = 0;
          uVar4 = 0x517f;
        }
        else {
          if (local_c != 0xc) {
            _DAT_2a22_955c = 0xffff;
            return uVar3;
          }
          iVar5 = _DAT_2a22_955a * 0x32;
          ((undefined *)&DAT_2a22_e5da)[iVar5] = 0xc;
          ((undefined *)&DAT_2a22_e601)[iVar5] = 1;
          ((undefined *)&DAT_2a22_e5ff)[iVar5] = 0;
          uVar4 = 0x5196;
        }
        uVar3 = FUN_19c7_480c(iVar2 * 0x32 + -0x5e72,uVar4);
      }
      _DAT_2a22_955c = 0xffff;
      return uVar3;
    }
    cVar1 = ((undefined *)&DAT_2a22_e5da)[local_8 * 0x32];
    if (((undefined *)&DAT_2a22_e5ff)[local_8 * 0x32] != '\0') {
      cVar1 = -1;
    }
    if ((cVar1 == '\x03') || (cVar1 == '\b')) {
LAB_ovl_07__02342c:
      bVar6 = _DAT_2a22_955c == 2;
LAB_ovl_07__023431:
      if (bVar6) {
        local_6 = local_8;
      }
    }
    else {
      if (cVar1 == '\n') {
LAB_ovl_07__02344a:
        bVar6 = _DAT_2a22_955c == 1;
        goto LAB_ovl_07__023431;
      }
      if (cVar1 == '\r') goto LAB_ovl_07__02342c;
      if ((cVar1 == '\x0f') || (cVar1 == '\x11')) goto LAB_ovl_07__02344a;
    }
    local_8 = local_8 + 1;
  } while( true );
}



/* ovl_07::0234b8 ovl_07_entry_22dc_06f8 */

void __cdecl16far ovl_07_entry_22dc_06f8(void)

{
  FUN_ovl_07__02302c();
  FUN_ovl_07__023208();
  return;
}



/* ovl_07::0234c2 ovl_07_entry_22dc_0702 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_07_entry_22dc_0702(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == 0xe) {
    return;
  }
  switch(param_1) {
  case 0:
    if (DAT_2a22_e4d0 == '\0') {
      DAT_2a22_e4c0 = DAT_2a22_e4c0 + -3;
    }
    else {
      DAT_2a22_e4c0 = DAT_2a22_e4c0 + '\x02';
    }
    if (param_2 == 0) {
      DAT_2a22_e39e = DAT_2a22_e39e + '\x0e';
    }
    else if (param_2 != 1) {
      if ((param_2 < 2) || (3 < param_2)) goto switchD_ovl_07__0234df_caseD_2;
      goto LAB_ovl_07__02363b;
    }
    DAT_2a22_f393 = 1;
    DAT_2a22_f336 = 1;
    DAT_2a22_e4dd = DAT_2a22_e4dd + -6;
    DAT_2a22_e39e = DAT_2a22_e39e + '\x06';
    bVar2 = _DAT_3000_ca37 == 0;
    break;
  case 1:
    DAT_2a22_f320 = DAT_2a22_f320 + '\x01';
    DAT_2a22_e44c = DAT_2a22_e44c + '\x02';
    if (param_2 == 0) {
      DAT_2a22_e3bb = DAT_2a22_e3bb + '\x15';
      DAT_2a22_e4dd = DAT_2a22_e4dd + '\f';
LAB_ovl_07__0236b0:
      DAT_2a22_e4c0 = DAT_2a22_e4c0 + -4;
      DAT_2a22_e3bb = DAT_2a22_e3bb + '\x03';
      DAT_2a22_e39e = DAT_2a22_e39e + -2;
      DAT_2a22_e56e = DAT_2a22_e56e + -4;
      DAT_2a22_f392 = 1;
      goto switchD_ovl_07__0234df_caseD_2;
    }
    if (param_2 == 1) goto LAB_ovl_07__0236b0;
    if ((param_2 < 2) || (3 < param_2)) goto switchD_ovl_07__0234df_caseD_2;
    DAT_2a22_e4c0 = DAT_2a22_e4c0 + -2;
    DAT_2a22_e3bb = DAT_2a22_e3bb + '\x04';
    DAT_2a22_e39e = DAT_2a22_e39e + -1;
    DAT_2a22_e4dd = DAT_2a22_e4dd + '\x02';
    goto LAB_ovl_07__023603;
  default:
    goto switchD_ovl_07__0234df_caseD_2;
  case 6:
    DAT_2a22_e3bb = DAT_2a22_e3bb + '\x03';
    DAT_2a22_f320 = DAT_2a22_f320 + '\x01';
    if (param_2 == 0) {
      DAT_2a22_e4dd = DAT_2a22_e4dd + '\x06';
    }
    else if (param_2 != 1) {
      if ((1 < param_2) && (param_2 < 4)) {
        DAT_2a22_e44c = DAT_2a22_e44c + '\x02';
        DAT_2a22_e39e = DAT_2a22_e39e + -1;
        DAT_2a22_e4c0 = DAT_2a22_e4c0 + -2;
        DAT_2a22_e4dd = DAT_2a22_e4dd + '\x02';
        DAT_2a22_e56e = DAT_2a22_e56e + -2;
      }
      goto switchD_ovl_07__0234df_caseD_2;
    }
    DAT_2a22_e44c = DAT_2a22_e44c + '\x05';
    DAT_2a22_e39e = DAT_2a22_e39e + -2;
    DAT_2a22_e4c0 = DAT_2a22_e4c0 + -4;
    DAT_2a22_e4dd = DAT_2a22_e4dd + '\x06';
    DAT_2a22_f392 = 1;
    if (_DAT_3000_ca37 == 6) goto joined_r0x00023553;
    goto LAB_ovl_07__023558;
  case 7:
    if ((-1 < param_2) && (param_2 < 4)) {
      DAT_2a22_e56e = DAT_2a22_e56e + -4;
      DAT_2a22_e3bb = DAT_2a22_e3bb + -4;
    }
    goto switchD_ovl_07__0234df_caseD_2;
  case 8:
    DAT_2a22_f321 = DAT_2a22_f321 + '\x01';
    if (param_2 < 0) goto switchD_ovl_07__0234df_caseD_2;
    if (1 < param_2) {
      if ((1 < param_2) && (param_2 < 4)) {
        DAT_2a22_e4c0 = DAT_2a22_e4c0 + -1;
        DAT_2a22_e39e = DAT_2a22_e39e + -1;
        DAT_2a22_e56e = DAT_2a22_e56e + -4;
        if (_DAT_2a22_9550 != 0) {
          DAT_2a22_f397 = 1;
        }
      }
      goto switchD_ovl_07__0234df_caseD_2;
    }
    DAT_2a22_f397 = 1;
    DAT_2a22_e517 = DAT_2a22_e517 + '\x02';
    DAT_2a22_e4c0 = DAT_2a22_e4c0 + -2;
    DAT_2a22_e39e = DAT_2a22_e39e + -2;
    bVar2 = _DAT_3000_ca37 == 8;
    break;
  case 9:
    if (param_2 < 0) goto switchD_ovl_07__0234df_caseD_2;
    if (param_2 < 2) goto LAB_ovl_07__02363b;
    goto LAB_ovl_07__0235f3;
  case 10:
    if (param_2 < 0) goto switchD_ovl_07__0234df_caseD_2;
    if (1 < param_2) {
      if ((param_2 < 2) || (3 < param_2)) goto switchD_ovl_07__0234df_caseD_2;
      DAT_2a22_e4c0 = DAT_2a22_e4c0 + '\x06';
      goto LAB_ovl_07__023603;
    }
    DAT_2a22_f336 = 1;
    DAT_2a22_f393 = 1;
    DAT_2a22_e4dd = DAT_2a22_e4dd + -6;
    DAT_2a22_e4c0 = DAT_2a22_e4c0 + '\f';
    DAT_2a22_e39e = DAT_2a22_e39e + '\x06';
    bVar2 = _DAT_3000_ca37 == 10;
    break;
  case 0xb:
    DAT_2a22_e3bb = DAT_2a22_e3bb + '\x03';
    DAT_2a22_f320 = DAT_2a22_f320 + '\x01';
    DAT_2a22_e44c = DAT_2a22_e44c + '\x02';
    if (param_2 < 0) goto switchD_ovl_07__0234df_caseD_2;
    if (param_2 < 2) {
      DAT_2a22_e4dd = DAT_2a22_e4dd + '\x12';
      DAT_2a22_f392 = 1;
      DAT_2a22_e4c0 = DAT_2a22_e4c0 + -4;
      DAT_2a22_e56e = DAT_2a22_e56e + -4;
      DAT_2a22_e39e = DAT_2a22_e39e + -6;
      goto switchD_ovl_07__0234df_caseD_2;
    }
    if ((param_2 < 2) || (3 < param_2)) goto switchD_ovl_07__0234df_caseD_2;
    DAT_2a22_e4dd = DAT_2a22_e4dd + '\x04';
    DAT_2a22_e4c0 = DAT_2a22_e4c0 + -2;
LAB_ovl_07__023751:
    DAT_2a22_e39e = DAT_2a22_e39e + -1;
LAB_ovl_07__02363b:
    DAT_2a22_e56e = DAT_2a22_e56e + -4;
    goto switchD_ovl_07__0234df_caseD_2;
  case 0xc:
    if (param_2 < 0) goto switchD_ovl_07__0234df_caseD_2;
    if (1 < param_2) {
      if ((1 < param_2) && (param_2 < 4)) {
        DAT_2a22_e56e = DAT_2a22_e56e + -2;
        DAT_2a22_e4fa = DAT_2a22_e4fa + '\x06';
      }
      goto switchD_ovl_07__0234df_caseD_2;
    }
    DAT_2a22_e4fa = DAT_2a22_e4fa + '\f';
    DAT_2a22_f252 = 1;
    DAT_2a22_e3c7 = 0;
    DAT_2a22_e3bb = DAT_2a22_e3bb + -9;
    bVar2 = _DAT_3000_ca37 == 0xc;
    break;
  case 0xd:
    DAT_2a22_f321 = DAT_2a22_f321 + '\x01';
    if (param_2 == 0) {
      DAT_2a22_e517 = DAT_2a22_e517 + '\x01';
    }
    else if (param_2 != 1) {
      if ((param_2 < 2) || (3 < param_2)) goto switchD_ovl_07__0234df_caseD_2;
      DAT_2a22_e517 = DAT_2a22_e517 + '\x01';
      DAT_2a22_e4c0 = DAT_2a22_e4c0 + -1;
      DAT_2a22_e39e = DAT_2a22_e39e + -1;
      DAT_2a22_f397 = 1;
      goto LAB_ovl_07__02363b;
    }
    DAT_2a22_f397 = 1;
    DAT_2a22_e517 = DAT_2a22_e517 + '\x02';
    DAT_2a22_e4c0 = DAT_2a22_e4c0 + -2;
    DAT_2a22_e39e = DAT_2a22_e39e + -6;
    bVar2 = _DAT_3000_ca37 == 0xd;
    break;
  case 0xe:
    goto switchD_ovl_07__0234df_caseD_2;
  case 0xf:
    DAT_2a22_f321 = DAT_2a22_f321 + '\x01';
    if (DAT_2a22_e558 != '\0') {
      DAT_2a22_f399 = 1;
      DAT_2a22_e558 = '\0';
    }
    if (param_2 < 0) goto switchD_ovl_07__0234df_caseD_2;
    if (1 < param_2) {
      if ((param_2 < 2) || (3 < param_2)) goto switchD_ovl_07__0234df_caseD_2;
      DAT_2a22_e4c0 = DAT_2a22_e4c0 + -1;
      goto LAB_ovl_07__023751;
    }
    DAT_2a22_e517 = DAT_2a22_e517 + '\x02';
    DAT_2a22_e4c0 = DAT_2a22_e4c0 + -2;
    DAT_2a22_e39e = DAT_2a22_e39e + -2;
    bVar2 = _DAT_3000_ca37 == 0xf;
    break;
  case 0x10:
    if (param_2 < 0) goto switchD_ovl_07__0234df_caseD_2;
    if (param_2 < 2) {
      DAT_2a22_e4fa = DAT_2a22_e4fa + -3;
      DAT_2a22_e39e = DAT_2a22_e39e + '\x03';
      DAT_2a22_e56e = DAT_2a22_e56e + -6;
      goto switchD_ovl_07__0234df_caseD_2;
    }
LAB_ovl_07__0235f3:
    if ((1 < param_2) && (param_2 < 4)) {
LAB_ovl_07__023603:
      DAT_2a22_e56e = DAT_2a22_e56e + -3;
    }
    goto switchD_ovl_07__0234df_caseD_2;
  }
  if (bVar2) {
joined_r0x00023553:
    if (DAT_2a22_e468 == '\x01') {
      DAT_2a22_e56e = DAT_2a22_e56e + -4;
      DAT_2a22_e468 = '\x02';
      goto switchD_ovl_07__0234df_caseD_2;
    }
  }
LAB_ovl_07__023558:
  DAT_2a22_e56e = DAT_2a22_e56e + -4;
  DAT_2a22_e468 = '\x03';
switchD_ovl_07__0234df_caseD_2:
  DAT_2a22_f322 = DAT_2a22_f322 + '\x01';
  if (_DAT_2a22_9550 != 0) {
    DAT_2a22_f37c = 1;
  }
  _DAT_2a22_9550 = 1;
  iVar1 = FUN_1000_08be(param_1);
  if ((iVar1 == 0) && (DAT_2a22_f37b = 1, param_1 == 0xb)) {
    ovl_07_entry_22dc_00d8();
  }
  FUN_1000_0556();
  return;
}



/* ovl_07::023906 ovl_07_entry_22dc_0b46 */

bool __cdecl16far ovl_07_entry_22dc_0b46(int param_1)

{
  uint uVar1;
  
  switch(param_1) {
  case 0:
  case 6:
  case 10:
  case 0xc:
    if ((char)((undefined *)&DAT_2a22_e39e)[param_1 * 0x1d] < '\r') {
      return false;
    }
    uVar1 = FUN_19c7_4e32();
    goto joined_r0x0002395a;
  case 1:
  case 0xb:
    if ((char)((undefined *)&DAT_2a22_e39e)[param_1 * 0x1d] < '\x13') {
      return false;
    }
    break;
  default:
    uVar1 = FUN_19c7_4e32();
    return (uVar1 & 3) == 0;
  case 9:
  case 0x10:
    break;
  case 0xd:
    if (DAT_2a22_e517 < '\x04') {
      return false;
    }
    uVar1 = FUN_19c7_4e32();
joined_r0x0002395a:
    if ((uVar1 & 1) == 0) {
      return false;
    }
    break;
  case 0xf:
    if (DAT_2a22_e551 < '\x02') {
      return false;
    }
  }
  return true;
}


