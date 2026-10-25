/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_42::0290a0 ovl_42_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_42_entry_290a_0000(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (_DAT_2a22_e331 < 2) {
    FUN_ovl_42__0290e2(0xfc18,4000,1000);
    uVar2 = 0xfc18;
    uVar1 = 1000;
  }
  else {
    uVar2 = 1000;
    uVar1 = 0;
  }
  FUN_ovl_42__0290e2(uVar1,4000,uVar2);
  return;
}



/* ovl_42::0290e2 FUN_ovl_42__0290e2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_42__0290e2(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  *_DAT_3000_aac9 = 0x100;
  _DAT_3000_aac9[0x19] = 0x904;
  _DAT_3000_aac9[0x11] = (undefined *)&DAT_2a22_5850;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xe] = 0x50;
  puVar1[0x12] = 0x50;
  _DAT_3000_aac9[0x18] = 300;
  _DAT_3000_aac9[0x15] = 0x104;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xf] = 0;
  puVar1[0x10] = 0;
  _DAT_3000_aac9[0xb] = 0xe000;
  _DAT_3000_aac9[0xd] = 0;
  _DAT_3000_aac9[0xc] = 0x2000;
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



/* ovl_42::029188 ovl_42_entry_290a_00e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_42_entry_290a_00e8(void)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  FUN_132b_0e94();
  if (_DAT_3000_ab61 != 0) {
    uVar1 = FUN_19c7_4e32();
    if ((uVar1 & 1) == 0) {
      uVar2 = 0xd000;
    }
    else {
      uVar2 = 0x3000;
    }
    *(undefined2 *)(_DAT_3000_aac9 + 0x20) = uVar2;
  }
  if (_DAT_3000_ab5f == 0) {
    *(undefined2 *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
  }
  if ((*(int *)(_DAT_3000_aac9 + 0x30) < *(int *)(_DAT_3000_aac9 + 0x2c)) && (1 < _DAT_2a22_e331)) {
    *(undefined2 *)(_DAT_3000_aac9 + 0x1e) =
         CONCAT11((char)((uint)_DAT_3000_aab8 >> 8) + -0x80,(char)_DAT_3000_aab8);
    FUN_17ba_037a();
  }
  else {
    *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
    if ((_DAT_3000_aab6 < 2000) &&
       ((iVar3 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar3 < 0x4001 &&
        (iVar3 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar3 < 0x4001)))) {
      if (_DAT_3000_aab8 < 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = 1;
      }
      *(int *)(_DAT_3000_aac9 + 0x1e) = iVar3 * -0x4000 + _DAT_3000_aab8;
    }
  }
  if (1 < _DAT_2a22_e333) {
    local_4 = _DAT_3000_aab6;
    _DAT_3000_aacb = (undefined *)&DAT_3000_a412;
    for (local_a = 2; local_a < _DAT_3000_aaa8; local_a = local_a + 1) {
      if ((((*(int *)(_DAT_3000_aacb + 0x32) != 0) && (1 < (byte)_DAT_3000_aacb[0x32])) &&
          (_DAT_3000_aacb[0x33] != *(char *)(_DAT_3000_aac9 + 0x33))) &&
         (FUN_132b_0ea4(), _DAT_3000_aab6 < 0x640)) goto LAB_ovl_42__0292ab;
      _DAT_3000_aacb = _DAT_3000_aacb + 0x3c;
    }
    _DAT_3000_aacb = (undefined *)&DAT_3000_a39a;
    if (local_4 < 2000) {
LAB_ovl_42__0292ab:
      if (*(int *)(_DAT_3000_aac9 + 0x28) == 0) {
        *(int *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6 << 4;
        FUN_1897_0502((undefined *)&DAT_2a22_581a,*(undefined2 *)(_DAT_3000_aac9 + 0x16),
                      -*(int *)(_DAT_3000_aac9 + 0x18),-*(int *)(_DAT_3000_aac9 + 0x1a));
        for (local_a = 0; local_a < 3; local_a = local_a + 1) {
          _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
          _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),2);
          *_DAT_3000_aacd = 0x102;
          local_6 = 0;
          local_c = 0;
          local_8 = *(int *)(_DAT_3000_aac9 + 0x2a) + 100;
          FUN_14b9_03be((undefined *)&DAT_2a22_581a,&local_6,&local_8,&local_c);
          iVar3 = *(int *)(_DAT_3000_aac9 + 2) + local_6;
          _DAT_3000_aacd[1] = iVar3;
          _DAT_3000_aacd[4] = iVar3;
          iVar3 = *(int *)(_DAT_3000_aac9 + 4) + local_8;
          _DAT_3000_aacd[2] = iVar3;
          _DAT_3000_aacd[5] = iVar3;
          iVar3 = *(int *)(_DAT_3000_aac9 + 6) + local_c;
          _DAT_3000_aacd[3] = iVar3;
          _DAT_3000_aacd[6] = iVar3;
          _DAT_3000_aacd[0xb] = *(undefined2 *)(_DAT_3000_aac9 + 0x16);
          _DAT_3000_aacd[0xc] = *(int *)(local_a * 2 + -0x7c48) + *(int *)(_DAT_3000_aac9 + 0x18);
          _DAT_3000_aacd[0xd] = *(undefined2 *)(_DAT_3000_aac9 + 0x1a);
          *(undefined1 *)((int)_DAT_3000_aacd + 0x3b) = 1;
          _DAT_3000_aacd[0x1a] = _DAT_3000_aacb;
          if (_DAT_3000_aacb == (undefined *)&DAT_3000_a39a) {
            _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 * 0xe;
            _DAT_3000_aacd[0x11] = 0xa00;
            _DAT_3000_aacd[0xe] = 0x78;
            _DAT_3000_aacd[0x15] = 0x60;
            iVar3 = FUN_14b9_02b2(0x40);
            iVar3 = iVar3 + 0xc0;
          }
          else {
            _DAT_3000_aacd[0x13] = _DAT_2a22_fad6 << 3;
            _DAT_3000_aacd[0x11] = 0x4000;
            _DAT_3000_aacd[0xe] = 0xb4;
            _DAT_3000_aacd[0x15] = 0x30;
            iVar3 = FUN_14b9_02b2(0x40);
            iVar3 = iVar3 + 0x40;
          }
          _DAT_3000_aacd[0x17] = iVar3;
          FUN_1951_017a(0xd);
        }
      }
    }
    if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
    }
  }
  return;
}


