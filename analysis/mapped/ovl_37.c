/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_37::0290a0 ovl_37_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_37_entry_290a_0000(void)

{
  undefined2 uVar1;
  
  if (-1 < _DAT_2a22_e331) {
    if (1 < _DAT_2a22_e331) {
      if (_DAT_2a22_e331 == 2) {
        FUN_ovl_37__029124(0xe890,6000,500);
        uVar1 = 6000;
      }
      else {
        if (_DAT_2a22_e331 != 3) {
          return;
        }
        uVar1 = 0xfe0c;
      }
      FUN_ovl_37__029124(uVar1,6000,500);
      FUN_17ba_03b2();
      return;
    }
    FUN_ovl_37__029124(0xe890,6000,500);
    FUN_ovl_37__029124(6000,6000,500);
    FUN_ovl_37__029124(0,0xe890,500);
  }
  return;
}



/* ovl_37::029124 FUN_ovl_37__029124 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_37__029124(undefined2 param_1,int param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  _DAT_3000_aac9[0x19] = 0x405;
  *_DAT_3000_aac9 = 0x100;
  _DAT_3000_aac9[0x12] = 0x3c;
  _DAT_3000_aac9[0x11] = 0x1000;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0x15] = 300;
  puVar1[0x18] = 300;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  if (param_2 < 1) {
    uVar2 = 0x8000;
  }
  else {
    uVar2 = 0;
  }
  _DAT_3000_aac9[0xb] = uVar2;
  _DAT_3000_aac9[0xf] = uVar2;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xd] = 0;
  puVar1[0xc] = 0;
  _DAT_3000_aac9[0x10] = 0;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = param_1;
  puVar1[4] = param_1;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = param_2;
  puVar1[5] = param_2;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = param_3;
  puVar1[6] = param_3;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1c) = 1;
  return;
}



/* ovl_37::0291d2 ovl_37_entry_290a_0132 */

void __cdecl16far ovl_37_entry_290a_0132(void)

{
  FUN_ovl_37__0291d8();
  return;
}



/* ovl_37::0291d8 FUN_ovl_37__0291d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_37__0291d8(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  
  if (_DAT_2a22_e333 == 2) {
    if (_DAT_3000_aaae == 2) {
      FUN_17ba_03ca();
    }
    uVar1 = FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 4) - _DAT_3000_a39e,
                          *(int *)(_DAT_3000_aac9 + 6) - _DAT_3000_a3a0,0,0);
    iVar2 = FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 2) - _DAT_3000_a39c,uVar1);
    iVar2 = (iVar2 - *(int *)(_DAT_3000_aac9 + 0x2a)) - _DAT_3000_a3c4;
    _DAT_3000_aab6 = iVar2;
    if ((*(byte *)(_DAT_3000_aac9 + 0x37) < 2) && ((DAT_2a22_fad4 & 3) == 0)) {
      FUN_17ba_02cc();
    }
    FUN_132b_0e94();
    if (((*(char *)(_DAT_3000_aac9 + 0x37) == '\0') && (_DAT_3000_ab61 != 0)) && (iVar2 < 2000)) {
      uVar3 = FUN_19c7_4e32();
      if ((uVar3 & 1) == 0) {
        uVar1 = 0xd000;
      }
      else {
        uVar1 = 0x3000;
      }
      *(undefined2 *)(_DAT_3000_aac9 + 0x20) = uVar1;
      *(undefined2 *)(_DAT_3000_aac9 + 0x1e) = 0;
      *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
      *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 3;
      return;
    }
    if (*(char *)(_DAT_3000_aac9 + 0x37) == '\x03') {
      if (_DAT_3000_ab5f == 0) {
        *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 0;
        return;
      }
    }
    else {
      *(undefined2 *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
      *(undefined2 *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
      if (_DAT_3000_aab6 < 0x5dc) {
        *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 1;
        *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = 0;
        iVar2 = FUN_19c7_4e0a(_DAT_3000_aab8);
        if ((iVar2 < 0xaab) && (iVar2 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar2 < 0xaab)) {
          *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 2;
          if (*(int *)(_DAT_3000_aac9 + 0x28) == 0) {
            *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 >> 1;
            *(undefined1 *)(_DAT_3000_aac9 + 0x38) = 2;
          }
          else if (*(int *)(_DAT_3000_aac9 + 0x28) == 1) {
            *(undefined1 *)(_DAT_3000_aac9 + 0x38) = 4;
          }
          else {
            *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
          }
          iVar2 = _DAT_3000_abb9 * 2;
          *(int *)(iVar2 + -0x3ac7) = _DAT_3000_aac9;
          *(undefined2 *)(iVar2 + -0x3abf) = _DAT_3000_aacb;
          _DAT_3000_abb9 = _DAT_3000_abb9 + 1;
          *(undefined2 *)(_DAT_3000_aacb + 0x1c) = 0;
          *(undefined2 *)(_DAT_3000_aacb + 0x2e) = 0;
          if (_DAT_3000_aacb == (undefined *)&DAT_3000_a39a) {
            if (*(int *)(_DAT_3000_aac9 + 0x26) == 0) {
              *(int *)(_DAT_3000_aac9 + 0x26) = _DAT_2a22_fad6 << 2;
              FUN_1697_0374(1);
              return;
            }
            *(int *)(_DAT_3000_aac9 + 0x26) = *(int *)(_DAT_3000_aac9 + 0x26) + -1;
            return;
          }
          if (_DAT_3000_aab6 < 0x32) {
            FUN_132b_0466((int)(_DAT_3000_aacb + 0x42d6) / 0x3c);
            *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 0;
            iVar2 = _DAT_3000_aac9;
            *(undefined2 *)(_DAT_3000_aac9 + 0x28) = 0;
            *(undefined2 *)(iVar2 + 0x26) = 0;
            uVar1 = FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 4) - _DAT_3000_a39e,
                                  *(int *)(_DAT_3000_aac9 + 6) - _DAT_3000_a3a0,0,0);
            iVar2 = FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 2) - _DAT_3000_a39c,uVar1);
            _DAT_3000_aab6 = (iVar2 - *(int *)(_DAT_3000_aac9 + 0x2a)) - _DAT_3000_a3c4;
            FUN_17ba_02cc();
            return;
          }
          FUN_ovl_37__029456();
        }
      }
      else {
        *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
        *(undefined1 *)(_DAT_3000_aac9 + 0x38) = 1;
      }
    }
  }
  return;
}



/* ovl_37::029456 FUN_ovl_37__029456 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_37__029456(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  
  uVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9 = _DAT_3000_aacb;
  _DAT_3000_aacb = uVar1;
  FUN_132b_0ea4();
  uVar1 = FUN_1ed2_006e(*(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba);
  uVar4 = _DAT_2a22_face * 0x32 >> 0xf;
  iVar2 = ((int)((_DAT_2a22_face * 0x32 ^ uVar4) - uVar4) >> 5 ^ uVar4) - uVar4;
  *(int *)(_DAT_3000_aac9 + 0x14) = iVar2;
  uVar1 = FUN_1ed2_0008(iVar2,uVar1);
  *(undefined2 *)(_DAT_3000_aac9 + 8) = *(undefined2 *)(_DAT_3000_aac9 + 2);
  *(undefined2 *)(_DAT_3000_aac9 + 10) = *(undefined2 *)(_DAT_3000_aac9 + 4);
  *(undefined2 *)(_DAT_3000_aac9 + 0xc) = *(undefined2 *)(_DAT_3000_aac9 + 6);
  uVar3 = FUN_1ed2_007e(*(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8);
  iVar2 = FUN_1ed2_0008(uVar1,uVar3);
  *(int *)(_DAT_3000_aac9 + 2) = *(int *)(_DAT_3000_aac9 + 2) + iVar2;
  uVar3 = FUN_1ed2_006e(*(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8);
  iVar2 = FUN_1ed2_0008(uVar1,uVar3);
  *(int *)(_DAT_3000_aac9 + 4) = *(int *)(_DAT_3000_aac9 + 4) + iVar2;
  uVar1 = FUN_1ed2_007e(*(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba);
  uVar4 = _DAT_2a22_face * 0x32 >> 0xf;
  iVar2 = FUN_1ed2_0008(((int)((_DAT_2a22_face * 0x32 ^ uVar4) - uVar4) >> 5 ^ uVar4) - uVar4,uVar1)
  ;
  *(int *)(_DAT_3000_aac9 + 6) = *(int *)(_DAT_3000_aac9 + 6) + iVar2;
  iVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9 = _DAT_3000_aacb;
  _DAT_3000_aacb = iVar2;
  return;
}


