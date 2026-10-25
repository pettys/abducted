/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_46::0290a0 ovl_46_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_46_entry_290a_0000(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if (_DAT_2a22_e331 == 0) {
    FUN_ovl_46__02912a(0,6000,0xfc18);
    FUN_ovl_46__02926e(3000,5000,0xfc18);
    uVar3 = 0xfc18;
    uVar2 = 4000;
    uVar1 = 0xf448;
  }
  else if (_DAT_2a22_e331 == 1) {
    FUN_ovl_46__02912a(0,6000,0xfc18);
    uVar3 = 0xfc18;
    uVar2 = 0x1194;
    uVar1 = 3000;
  }
  else {
    if ((_DAT_2a22_e331 < 2) || (3 < _DAT_2a22_e331)) {
      return;
    }
    uVar3 = 1000;
    uVar2 = 6000;
    uVar1 = 0xfc18;
  }
  FUN_ovl_46__02926e(uVar1,uVar2,uVar3);
  return;
}



/* ovl_46::02912a FUN_ovl_46__02912a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_46__02912a(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x101;
  _DAT_3000_aac9[0x19] = 0xd06;
  _DAT_3000_aac9[0x18] = 2000;
  _DAT_3000_aac9[0x15] = 2000;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  _DAT_3000_aac9[0xb] = 0x8000;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = param_1;
  puVar2[4] = param_1;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = param_2;
  puVar2[5] = param_2;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = param_3;
  puVar2[6] = param_3;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1d) = 1;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1c) = 1;
  _DAT_3000_aacb = _DAT_3000_aac9;
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x184;
  _DAT_3000_aac9[0x19] = 0xd07;
  _DAT_3000_aac9[0x18] = 1;
  _DAT_3000_aac9[0x15] = 0x365;
  _DAT_3000_aac9[7] = 0;
  _DAT_3000_aac9[8] = 0;
  _DAT_3000_aac9[9] = 0xfee0;
  uVar1 = _DAT_3000_aacb[1];
  _DAT_3000_aac9[1] = uVar1;
  _DAT_3000_aac9[4] = uVar1;
  uVar1 = _DAT_3000_aacb[2];
  _DAT_3000_aac9[2] = uVar1;
  _DAT_3000_aac9[5] = uVar1;
  uVar1 = _DAT_3000_aacb[3];
  _DAT_3000_aac9[3] = uVar1;
  _DAT_3000_aac9[6] = uVar1;
  _DAT_3000_aac9[0xb] = _DAT_3000_aacb[0xb];
  _DAT_3000_aac9[0xc] = _DAT_3000_aacb[0xc];
  _DAT_3000_aac9[0xd] = _DAT_3000_aacb[0xd];
  _DAT_3000_aac9[0x17] = 0;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1b) = 3;
  return;
}



/* ovl_46::02926e FUN_ovl_46__02926e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_46__02926e(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x100;
  _DAT_3000_aac9[0x19] = 0xd04;
  _DAT_3000_aac9[0x11] = 0xc00;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xe] = 0x1e;
  puVar2[0x12] = 0x1e;
  _DAT_3000_aac9[0x18] = 0x2ee;
  _DAT_3000_aac9[0x15] = 0x2ee;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xf] = 0;
  puVar2[0x10] = 0;
  if (param_1 < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = 1;
  }
  _DAT_3000_aac9[0xb] = iVar3 << 0xd;
  _DAT_3000_aac9[0xd] = 0;
  _DAT_3000_aac9[0xc] = 0;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = param_1;
  puVar2[4] = param_1;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = param_2;
  puVar2[5] = param_2;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = param_3;
  puVar2[6] = param_3;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1d) = 1;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1c) = 1;
  _DAT_3000_aacb = _DAT_3000_aac9;
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x183;
  _DAT_3000_aac9[0x19] = 0xd07;
  _DAT_3000_aac9[0x18] = 1;
  _DAT_3000_aac9[0x15] = 0xc0;
  _DAT_3000_aac9[7] = 0;
  _DAT_3000_aac9[8] = 0xfd90;
  _DAT_3000_aac9[9] = 0;
  uVar1 = _DAT_3000_aacb[1];
  _DAT_3000_aac9[1] = uVar1;
  _DAT_3000_aac9[4] = uVar1;
  uVar1 = _DAT_3000_aacb[2];
  _DAT_3000_aac9[2] = uVar1;
  _DAT_3000_aac9[5] = uVar1;
  uVar1 = _DAT_3000_aacb[3];
  _DAT_3000_aac9[3] = uVar1;
  _DAT_3000_aac9[6] = uVar1;
  _DAT_3000_aac9[0xb] = _DAT_3000_aacb[0xb];
  _DAT_3000_aac9[0xc] = _DAT_3000_aacb[0xc];
  _DAT_3000_aac9[0xd] = _DAT_3000_aacb[0xd];
  _DAT_3000_aac9[0x17] = 0;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1b) = 3;
  return;
}



/* ovl_46::0293f8 ovl_46_entry_290a_0358 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_46_entry_290a_0358(void)

{
  if (*(char *)(_DAT_3000_aac9 + 0x32) == '\x06') {
    FUN_ovl_46__029672();
    return;
  }
  if (*(char *)(_DAT_3000_aac9 + 0x32) == '\x04') {
    FUN_ovl_46__029418();
  }
  return;
}



/* ovl_46::029418 FUN_ovl_46__029418 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_46__029418(void)

{
  int iVar1;
  int iVar2;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  if (*(int *)(_DAT_3000_aac9 + 0x6e) != 0xd07) {
    *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xfe;
    *(undefined1 *)(_DAT_3000_aac9 + 0x3a) = 0;
  }
  FUN_132b_0e94();
  if (0x5dc < _DAT_3000_aab6) {
    *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
    *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
  }
  iVar1 = ((_DAT_3000_aac9 + 0x42d6) / 0x3c) * 300 + -0xd48;
  if (((-_DAT_3000_aab6 != iVar1 && _DAT_3000_aab6 <= -iVar1) &&
      (iVar1 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar1 < 0x4001)) &&
     (iVar1 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar1 < 0x4001)) {
    if (_DAT_3000_aab8 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 1;
    }
    *(int *)(_DAT_3000_aac9 + 0x1e) = iVar1 * -0x4000 + _DAT_3000_aab8;
  }
  if (1 < _DAT_2a22_e333) {
    if (_DAT_3000_aab6 < 0x9c4) {
      iVar1 = FUN_19c7_4e0a(_DAT_3000_aab8);
      iVar1 = FUN_19c7_4e0a(iVar1 + -0x4000);
      if ((iVar1 < 0x800) && (*(int *)(_DAT_3000_aac9 + 0x28) == 0)) {
        *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 * 10;
        if (_DAT_3000_aab8 < 0) {
          iVar1 = -1;
        }
        else {
          iVar1 = 1;
        }
        iVar1 = iVar1 * 0x4000 + *(int *)(_DAT_3000_aac9 + 0x16);
        FUN_1897_0502((undefined *)&DAT_2a22_581a,iVar1,-*(int *)(_DAT_3000_aac9 + 0x18),
                      -*(int *)(_DAT_3000_aac9 + 0x1a));
        local_8 = 0;
        do {
          _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
          _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),2);
          *_DAT_3000_aacd = 0x102;
          local_6 = 0;
          local_a = 0;
          local_4 = *(int *)(local_8 * 2 + -0x7c02);
          FUN_14b9_03be((undefined *)&DAT_2a22_581a,&local_4,&local_6,&local_a);
          iVar2 = *(int *)(_DAT_3000_aac9 + 2) + local_4;
          _DAT_3000_aacd[1] = iVar2;
          _DAT_3000_aacd[4] = iVar2;
          iVar2 = *(int *)(_DAT_3000_aac9 + 4) + local_6;
          _DAT_3000_aacd[2] = iVar2;
          _DAT_3000_aacd[5] = iVar2;
          iVar2 = *(int *)(_DAT_3000_aac9 + 6) + local_a;
          _DAT_3000_aacd[3] = iVar2;
          _DAT_3000_aacd[6] = iVar2;
          _DAT_3000_aacd[0xb] = iVar1;
          _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
          _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 * 7;
          _DAT_3000_aacd[0xe] = 0xfa;
          _DAT_3000_aacd[0x15] = 0xb4;
          _DAT_3000_aacd[0x17] = 0x30;
          _DAT_3000_aacd[0x11] = 0x7fff;
          iVar2 = FUN_14b9_02b2(4);
          *(bool *)((int)_DAT_3000_aacd + 0x3b) = iVar2 == 0;
          local_8 = local_8 + 1;
        } while (local_8 < 3);
        FUN_1951_017a(0xd);
      }
    }
    if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  return;
}



/* ovl_46::029672 FUN_ovl_46__029672 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_46__029672(void)

{
  int iVar1;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  if (1 < _DAT_2a22_e333) {
    if (*(int *)(_DAT_3000_aac9 + 0x6e) != 0xd07) {
      *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xfe;
      *(undefined1 *)(_DAT_3000_aac9 + 0x3a) = 0;
    }
    FUN_132b_0e94();
    if ((_DAT_3000_aab6 < 0x9c4) && (*(int *)(_DAT_3000_aac9 + 0x28) == 0)) {
      *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 * 10;
      FUN_1897_0502((undefined *)&DAT_2a22_581a,*(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8,
                    -(*(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba),
                    -*(int *)(_DAT_3000_aac9 + 0x1a));
      local_8 = 0;
      do {
        _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
        _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),2);
        *_DAT_3000_aacd = 0x102;
        local_6 = 2000;
        local_a = 0;
        local_4 = *(int *)(local_8 * 2 + -0x7c02);
        FUN_14b9_03be((undefined *)&DAT_2a22_581a,&local_4,&local_6,&local_a);
        iVar1 = *(int *)(_DAT_3000_aac9 + 2) + local_4;
        _DAT_3000_aacd[1] = iVar1;
        _DAT_3000_aacd[4] = iVar1;
        iVar1 = *(int *)(_DAT_3000_aac9 + 4) + local_6;
        _DAT_3000_aacd[2] = iVar1;
        _DAT_3000_aacd[5] = iVar1;
        iVar1 = *(int *)(_DAT_3000_aac9 + 6) + local_a;
        _DAT_3000_aacd[3] = iVar1;
        _DAT_3000_aacd[6] = iVar1;
        _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
        _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
        _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 * 7;
        _DAT_3000_aacd[0xe] = 0xfa;
        _DAT_3000_aacd[0x15] = 0xb4;
        _DAT_3000_aacd[0x17] = 0x30;
        _DAT_3000_aacd[0x11] = 0x7fff;
        iVar1 = FUN_14b9_02b2(4);
        *(bool *)((int)_DAT_3000_aacd + 0x3b) = iVar1 == 0;
        local_8 = local_8 + 1;
      } while (local_8 < 3);
      FUN_1951_017a(0xd);
    }
    if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  return;
}


