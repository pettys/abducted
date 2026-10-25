/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_51::0290a0 ovl_51_entry_290a_0000 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_51_entry_290a_0000(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if ((_DAT_2a22_e333 != 2) || (_DAT_2a22_e331 < 0)) {
    return;
  }
  if (_DAT_2a22_e331 < 2) {
    _DAT_2a22_e331 = 2;
  }
  else if (_DAT_2a22_e331 != 2) {
    if (_DAT_2a22_e331 != 3) {
      return;
    }
    uVar3 = 0xfd12;
    uVar2 = 0x9c4;
    uVar1 = 0xfe0c;
    goto LAB_ovl_51__0290c8;
  }
  FUN_ovl_51__02910c(0xfe0c,0x9c4,0xfd12);
  FUN_ovl_51__02910c(2000,500,0x2ee);
  uVar3 = 0;
  uVar2 = 0xf060;
  uVar1 = 0;
LAB_ovl_51__0290c8:
  FUN_ovl_51__02910c(uVar1,uVar2,uVar3);
  return;
}



/* ovl_51::02910c FUN_ovl_51__02910c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_51__02910c(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  _DAT_3000_aac9 = (undefined2 *)FUN_132b_0410();
  _DAT_3000_aac9[0x19] = 0x1003;
  *_DAT_3000_aac9 = 0x100;
  if (_DAT_2a22_e331 < 2) {
    _DAT_3000_aac9[0x18] = 0x65;
    uVar2 = 0x96;
  }
  else {
    _DAT_3000_aac9[0x18] = 0x28;
    uVar2 = 100;
  }
  puVar1 = _DAT_3000_aac9;
  _DAT_3000_aac9[0xe] = uVar2;
  puVar1[0x12] = uVar2;
  _DAT_3000_aac9[0x11] = 0x7fff;
  _DAT_3000_aac9[0x15] = 0x50;
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



/* ovl_51::0291ca ovl_51_entry_290a_012a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_51_entry_290a_012a(void)

{
  if (*(char *)(_DAT_3000_aac9 + 0x32) == '\x03') {
    FUN_ovl_51__0291de();
  }
  return;
}



/* ovl_51::0291de FUN_ovl_51__0291de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_51__0291de(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  
  FUN_132b_0e94();
  if (*(char *)(_DAT_3000_aac9 + 0x37) == '\0') {
    if ((_DAT_3000_ab6f < CONCAT11((char)((uint)_DAT_3000_aab6 >> 8) + '\x02',(char)_DAT_3000_aab6))
       || (iVar1 = FUN_19c7_4e0a(_DAT_3000_aab8), 0x2fff < iVar1)) {
      *(int *)(_DAT_3000_aac9 + 0x20) = _DAT_3000_aaba;
      *(int *)(_DAT_3000_aac9 + 0x1e) = _DAT_3000_aab8;
    }
    else {
      uVar2 = FUN_19c7_4e32();
      if ((uVar2 & 1) == 0) {
        uVar3 = 0x7fff;
      }
      else {
        uVar3 = 0x8001;
      }
      *(undefined2 *)(_DAT_3000_aac9 + 0x1e) = uVar3;
      *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 1;
    }
  }
  else if (*(char *)(_DAT_3000_aac9 + 0x37) == '\x01') {
    if (0x31 < _DAT_3000_aab6) {
      *(int *)(_DAT_3000_aac9 + 0x1a) = *(int *)(_DAT_3000_aac9 + 0x1a) + _DAT_2a22_face * 0x400;
      *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 2;
    }
  }
  else if (*(char *)(_DAT_3000_aac9 + 0x37) == '\x02') {
    iVar4 = _DAT_2a22_face * 0x200;
    *(int *)(_DAT_3000_aac9 + 0x1a) = *(int *)(_DAT_3000_aac9 + 0x1a) + iVar4;
    iVar1 = FUN_19c7_4e0a(*(undefined2 *)(_DAT_3000_aac9 + 0x1a));
    if ((iVar1 < iVar4) && (*(int *)(_DAT_3000_aac9 + 0x1a) != -0x8000)) {
      *(undefined2 *)(_DAT_3000_aac9 + 0x1a) = 0;
      *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 3;
    }
  }
  else if (799 < _DAT_3000_aab6) {
    *(undefined1 *)(_DAT_3000_aac9 + 0x37) = 0;
  }
  if (((_DAT_3000_aab6 < 200) && (iVar1 = FUN_19c7_4e0a(_DAT_3000_aab8), iVar1 < 0x800)) &&
     (iVar1 = FUN_19c7_4e0a(_DAT_3000_aaba), iVar1 < 0x800)) {
    if (*(int *)(_DAT_3000_aac9 + 0x28) != 0) {
      *(int *)(_DAT_3000_aac9 + 0x28) = *(int *)(_DAT_3000_aac9 + 0x28) + -1;
      return;
    }
    *(undefined2 *)(_DAT_3000_aac9 + 0x28) = _DAT_2a22_fad6;
    _DAT_3000_aacd = (undefined2 *)FUN_132b_0410();
    _DAT_3000_aacd[0x19] = CONCAT11(*(undefined1 *)(_DAT_3000_aac9 + 0x33),1);
    *_DAT_3000_aacd = 0x11;
    uVar3 = *(undefined2 *)(_DAT_3000_aac9 + 2);
    _DAT_3000_aacd[1] = uVar3;
    _DAT_3000_aacd[4] = uVar3;
    uVar3 = *(undefined2 *)(_DAT_3000_aac9 + 4);
    _DAT_3000_aacd[2] = uVar3;
    _DAT_3000_aacd[5] = uVar3;
    uVar3 = *(undefined2 *)(_DAT_3000_aac9 + 6);
    _DAT_3000_aacd[3] = uVar3;
    _DAT_3000_aacd[6] = uVar3;
    _DAT_3000_aacd[0xb] = *(int *)(_DAT_3000_aac9 + 0x16) + _DAT_3000_aab8;
    _DAT_3000_aacd[0xc] = *(int *)(_DAT_3000_aac9 + 0x18) + _DAT_3000_aaba;
    _DAT_3000_aacd[0xd] = -0x8000 - *(int *)(_DAT_3000_aac9 + 0x1a);
    _DAT_3000_aacd[0xe] = 400;
    _DAT_3000_aacd[0x15] = 0;
    _DAT_3000_aacd[0x13] = _DAT_2a22_fad6;
    if (_DAT_2a22_e331 < 2) {
      uVar3 = 100;
    }
    else {
      uVar3 = 0x10;
    }
    _DAT_3000_aacd[0x17] = uVar3;
    if (_DAT_3000_aacb == _DAT_3000_d121) {
      FUN_1951_017a(4);
      return;
    }
  }
  else {
    *(undefined2 *)(_DAT_3000_aac9 + 0x28) = 0;
  }
  return;
}


