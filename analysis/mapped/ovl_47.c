/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_47::0290a0 ovl_47_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_47_entry_290a_0000(void)

{
  if (_DAT_2a22_e331 < 0) {
    return;
  }
  if (_DAT_2a22_e331 < 2) {
    FUN_ovl_47__0291a6(0,6000,0);
  }
  else {
    if (_DAT_2a22_e331 < 2) {
      return;
    }
    if (3 < _DAT_2a22_e331) {
      return;
    }
  }
  FUN_ovl_47__029104(0xfd12,6000,0);
  FUN_ovl_47__029104(0x2ee,6000,0);
  FUN_ovl_47__029104(0,6000,1000);
  return;
}



/* ovl_47::029104 FUN_ovl_47__029104 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_47__029104(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  _DAT_3000_aac9[0x19] = 0xe03;
  *_DAT_3000_aac9 = 0x100;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xe] = 0x96;
  puVar1[0x12] = 0x96;
  _DAT_3000_aac9[0x11] = 0x3200;
  _DAT_3000_aac9[0x18] = 0x14;
  _DAT_3000_aac9[0x15] = 0x14;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xb] = 0x8000;
  puVar1[0xf] = 0x8000;
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
  return;
}



/* ovl_47::0291a6 FUN_ovl_47__0291a6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_47__0291a6(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x101;
  _DAT_3000_aac9[0x19] = 0xe06;
  _DAT_3000_aac9[0x18] = 700;
  _DAT_3000_aac9[0x15] = 0x2a0;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[1] = param_1;
  puVar2[4] = param_1;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[2] = param_2;
  puVar2[5] = param_2;
  puVar2 = _DAT_3000_aac9;
  _DAT_3000_aac9[3] = param_3;
  puVar2[6] = param_3;
  _DAT_3000_aac9[0xb] = 0x8000;
  _DAT_3000_aac9[0x11] = 0;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1d) = 1;
  *(undefined1 *)(_DAT_3000_aac9 + 0x1c) = 0x1f;
  _DAT_3000_aacb = _DAT_3000_aac9;
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x184;
  _DAT_3000_aac9[0x19] = 0xe07;
  _DAT_3000_aac9[0x18] = 1;
  _DAT_3000_aac9[0x15] = 0x70;
  _DAT_3000_aac9[7] = 0;
  _DAT_3000_aac9[8] = 0;
  _DAT_3000_aac9[9] = 0xf0;
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



/* ovl_47::0292f2 ovl_47_entry_290a_0252 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_47_entry_290a_0252(void)

{
  if (*(char *)(_DAT_3000_aac9 + 0x32) == '\x03') {
    FUN_ovl_47__029312();
    return;
  }
  if (*(char *)(_DAT_3000_aac9 + 0x32) == '\x06') {
    FUN_ovl_47__029538();
    return;
  }
  return;
}



/* ovl_47::029312 FUN_ovl_47__029312 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_47__029312(void)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 4) - _DAT_3000_a39e,
                        *(int *)(_DAT_3000_aac9 + 6) - _DAT_3000_a3a0,0,0);
  iVar2 = FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 2) - _DAT_3000_a39c,uVar1);
  _DAT_3000_aab6 = (iVar2 - *(int *)(_DAT_3000_aac9 + 0x2a)) - _DAT_3000_a3c4;
  if ((DAT_2a22_fad4 & 3) == 0) {
    FUN_17ba_02cc();
  }
  FUN_132b_0e94();
  if (*(char *)(_DAT_3000_aac9 + 0x37) == '\0') {
    if (((_DAT_3000_ab6f < CONCAT11((char)((uint)_DAT_3000_aab6 >> 8) + '\x02',(char)_DAT_3000_aab6)
         ) || (iVar2 = FUN_19c7_4e0a(_DAT_3000_aab8), 0x2fff < iVar2)) ||
       (iVar2 = FUN_19c7_4e0a(_DAT_3000_aaba), 0x2fff < iVar2)) {
      *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
      *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
    }
    else {
      if (_DAT_3000_aaba < 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = 1;
      }
      *(int *)(_DAT_3000_aac9 + 0x20) = iVar2 * -0x2000;
      if (_DAT_3000_aab8 < 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = 1;
      }
      *(int *)(_DAT_3000_aac9 + 0x1e) = iVar2 * -0x4000;
      *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 1;
    }
  }
  else if (499 < _DAT_3000_aab6) {
    *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 0;
  }
  if (_DAT_2a22_e333 == 2) {
    if (((_DAT_3000_aab6 < 800) && (iVar2 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar2 < 0x800)) &&
       ((iVar2 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar2 < 0x800 &&
        (*(int *)(_DAT_3000_aac9 + 0x28) == 0)))) {
      *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6;
      _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
      _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),1);
      *_DAT_3000_aacd = 0x11;
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 2);
      _DAT_3000_aacd[1] = uVar1;
      _DAT_3000_aacd[4] = uVar1;
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 4);
      _DAT_3000_aacd[2] = uVar1;
      _DAT_3000_aacd[5] = uVar1;
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 6);
      _DAT_3000_aacd[3] = uVar1;
      _DAT_3000_aacd[6] = uVar1;
      _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
      _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
      _DAT_3000_aacd[0xd] = -0x8000 - *(int *)(_DAT_3000_aac9 + 0x1a);
      _DAT_3000_aacd[0xe] = 400;
      _DAT_3000_aacd[0x15] = 0;
      _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 << 1;
      _DAT_3000_aacd[0x17] = 0x10;
      if (_DAT_3000_aacb == _DAT_3000_d121) {
        FUN_1951_017a(4);
      }
    }
    if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  return;
}



/* ovl_47::029538 FUN_ovl_47__029538 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_47__029538(void)

{
  undefined2 uVar1;
  int iVar2;
  
  if (*(int *)(_DAT_3000_aac9 + 0x6e) != 0xe07) {
    *(byte *)(_DAT_3000_aac9 + 0x38) = *(byte *)(_DAT_3000_aac9 + 0x38) & 0xfe;
    *(undefined1 *)(_DAT_3000_aac9 + 0x3a) = 0;
  }
  uVar1 = FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 4) - _DAT_3000_a39e,
                        *(int *)(_DAT_3000_aac9 + 6) - _DAT_3000_a3a0,0,0);
  iVar2 = FUN_1edc_000e(*(int *)(_DAT_3000_aac9 + 2) - _DAT_3000_a39c,uVar1);
  _DAT_3000_aab6 = (iVar2 - *(int *)(_DAT_3000_aac9 + 0x2a)) - _DAT_3000_a3c4;
  if ((DAT_2a22_fad4 & 3) == 0) {
    FUN_17ba_02cc();
  }
  FUN_132b_0e94();
  if (_DAT_2a22_e333 == 2) {
    if ((_DAT_3000_aab6 < 2000) && (*(int *)(_DAT_3000_aac9 + 0x28) == 0)) {
      *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6;
      _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
      _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),1);
      *_DAT_3000_aacd = 0x11;
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 2);
      _DAT_3000_aacd[1] = uVar1;
      _DAT_3000_aacd[4] = uVar1;
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 4);
      _DAT_3000_aacd[2] = uVar1;
      _DAT_3000_aacd[5] = uVar1;
      uVar1 = *(undefined2 *)(_DAT_3000_aac9 + 6);
      _DAT_3000_aacd[3] = uVar1;
      _DAT_3000_aacd[6] = uVar1;
      _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
      _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
      _DAT_3000_aacd[0xd] = -0x8000 - *(int *)(_DAT_3000_aac9 + 0x1a);
      _DAT_3000_aacd[0xe] = 400;
      _DAT_3000_aacd[0x15] = 0;
      _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 * 5;
      _DAT_3000_aacd[0x17] = 0x10;
      if (_DAT_3000_aacb == _DAT_3000_d121) {
        FUN_1951_017a(4);
      }
    }
    if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  return;
}


