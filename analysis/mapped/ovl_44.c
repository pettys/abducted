/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_44::0290a0 ovl_44_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_44_entry_290a_0000(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if (_DAT_2a22_e331 < 0) {
    return;
  }
  if (_DAT_2a22_e331 < 2) {
    FUN_ovl_44__02910c(0xf830,6000,0,0x3000);
    FUN_ovl_44__02910c(2000,6000,0,0xd000);
    uVar3 = 0x8000;
    uVar2 = 0xf6a0;
    uVar1 = 0;
  }
  else {
    if (_DAT_2a22_e331 < 2) {
      return;
    }
    if (3 < _DAT_2a22_e331) {
      return;
    }
    uVar3 = 0xc000;
    uVar2 = 2000;
    uVar1 = 0xfd12;
  }
  FUN_ovl_44__02910c(uVar1,6000,uVar2,uVar3);
  return;
}



/* ovl_44::02910c FUN_ovl_44__02910c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_ovl_44__02910c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 *puVar1;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  _DAT_3000_aac9[0x19] = 0xb05;
  *_DAT_3000_aac9 = 0x100;
  _DAT_3000_aac9[0x12] = 0x96;
  _DAT_3000_aac9[0x11] = (undefined *)&DAT_2a22_5850;
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0x15] = 100;
  puVar1[0x18] = 100;
  _DAT_3000_aac9[0x1a] = (undefined *)&DAT_3000_a39a;
  _DAT_3000_aac9[0xb] = param_4;
  _DAT_3000_aac9[0xd] = 0;
  _DAT_3000_aac9[0xc] = 0;
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



/* ovl_44::02919e ovl_44_entry_290a_00fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_44_entry_290a_00fe(void)

{
  int iVar1;
  
  if (_DAT_2a22_e333 == 2) {
    *(undefined2 *)(_DAT_3000_aac9 + 0x1c) = *(undefined2 *)(_DAT_3000_aac9 + 0x24);
    FUN_132b_0e94();
    *(undefined2 *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
    *(undefined2 *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
    if (((_DAT_3000_aab6 < 0x32) &&
        (iVar1 = FUN_132b_1672(_DAT_3000_aac9,(undefined *)&DAT_3000_a39a), iVar1 != 0)) &&
       (iVar1 = FUN_186e_001e(_DAT_3000_aac9,(undefined *)&DAT_3000_a39a), iVar1 != 0)) {
      thunk_EXT_FUN_0000_0000(0x186e,0x1e);
      FUN_1951_017a(10);
      dispatch_ovl_07_22dc_0080();
      FUN_132b_0466((_DAT_3000_aac9 + 0x42d6) / 0x3c);
    }
  }
  return;
}


