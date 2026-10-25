/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_13::0252a0 FUN_ovl_13__0252a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_13__0252a0(int param_1,undefined2 param_2)

{
  FUN_1eea_0004(param_1,param_2,
                (param_1 - (uint)*(byte *)(_DAT_2a22_4914 + 4)) * 3 + _DAT_2a22_4914 + 6,0x2e67);
  return;
}



/* ovl_13::0252da FUN_ovl_13__0252da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_13__0252da(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *local_14;
  undefined1 *local_12;
  int local_10;
  int local_c;
  int local_4;
  
  bVar1 = *(byte *)(_DAT_2a22_4914 + 4);
  local_4 = 0xff;
  local_c = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[3]) {
    if (param_1[2] == 1) {
      iVar5 = ((param_1[1] + *param_1) - (uint)bVar1) * 3 + _DAT_2a22_4914;
      uVar2 = *(undefined1 *)(iVar5 + 5);
      uVar3 = *(undefined1 *)(iVar5 + 4);
      uVar4 = *(undefined1 *)(iVar5 + 3);
      local_14 = (undefined1 *)(iVar5 + 2);
      local_12 = (undefined1 *)(iVar5 + 5);
      for (local_10 = param_1[1] * 3 + -3; local_10 != 0; local_10 = local_10 + -1) {
        *local_12 = *local_14;
        local_14 = local_14 + -1;
        local_12 = local_12 + -1;
      }
      *local_12 = uVar2;
      puVar6 = local_12 + -2;
      local_12[-1] = uVar3;
    }
    else {
      iVar5 = (*param_1 - (uint)bVar1) * 3 + _DAT_2a22_4914;
      uVar2 = *(undefined1 *)(iVar5 + 6);
      uVar3 = *(undefined1 *)(iVar5 + 7);
      uVar4 = *(undefined1 *)(iVar5 + 8);
      local_14 = (undefined1 *)(iVar5 + 9);
      local_12 = (undefined1 *)(iVar5 + 6);
      for (local_10 = param_1[1] * 3 + -3; local_10 != 0; local_10 = local_10 + -1) {
        *local_12 = *local_14;
        local_14 = local_14 + 1;
        local_12 = local_12 + 1;
      }
      *local_12 = uVar2;
      puVar6 = local_12 + 2;
      local_12[1] = uVar3;
    }
    *puVar6 = uVar4;
    if (*param_1 < local_4) {
      local_4 = *param_1;
    }
    if (local_c < param_1[1] + *param_1) {
      local_c = param_1[1] + *param_1;
    }
  }
  FUN_ovl_13__0252a0(local_4,local_c - local_4);
  return;
}



/* ovl_13::025440 FUN_ovl_13__025440 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * __cdecl16far FUN_ovl_13__025440(void)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *local_a;
  char local_8;
  undefined1 *local_6;
  
  bVar1 = *(byte *)(_DAT_2a22_4914 + 4);
  if (_DAT_2a22_dc5a == 0) {
    _DAT_2a22_dc5a = 1;
    local_a = (undefined *)&DAT_3000_d06f;
    local_8 = -0x70;
    local_6 = (undefined1 *)((0xb0 - (uint)bVar1) * 3 + _DAT_2a22_4914 + 6);
    do {
      *local_a = *local_6;
      local_8 = local_8 + -1;
      local_a = local_a + 1;
      local_6 = local_6 + 1;
    } while (local_8 != '\0');
  }
  if (_DAT_2a22_dc58 != 0) {
    FUN_ovl_13__0252da(0x73f8);
    _DAT_2a22_dc58 = _DAT_2a22_dc58 + -1;
  }
  iVar2 = FUN_19c7_4e32();
  puVar3 = (undefined1 *)(iVar2 / 0x14);
  if (iVar2 % 0x14 == 0) {
    _DAT_2a22_dc58 = 0x10;
    puVar3 = (undefined1 *)((0xb0 - (uint)bVar1) * 3 + _DAT_2a22_4914 + 6);
    local_6 = (undefined1 *)&DAT_3000_d06f;
    local_8 = -0x70;
    local_a = puVar3;
    do {
      puVar3 = (undefined1 *)CONCAT11((char)((uint)puVar3 >> 8),*local_6);
      *local_a = *local_6;
      local_8 = local_8 + -1;
      local_a = local_a + 1;
      local_6 = local_6 + 1;
    } while (local_8 != '\0');
  }
  return puVar3;
}



/* ovl_13::0254f6 FUN_ovl_13__0254f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_13__0254f6(void)

{
  undefined2 uVar1;
  
  switch(_DAT_3000_d06d) {
  case 1:
    uVar1 = 0x7400;
    break;
  case 2:
    FUN_ovl_13__025440();
    return;
  case 3:
    uVar1 = 0x7408;
    break;
  case 4:
    uVar1 = 0x7428;
    break;
  case 5:
    uVar1 = 0x73d0;
    break;
  case 6:
    uVar1 = 0x73c8;
    break;
  default:
    return;
  case 8:
    uVar1 = 0x7410;
    break;
  case 9:
    uVar1 = 0x73e0;
    break;
  case 10:
    uVar1 = 0x73b0;
    break;
  case 0xd:
    uVar1 = 0x73c0;
    break;
  case 0xe:
    uVar1 = 0x7418;
    break;
  case 0xf:
    uVar1 = 0x73b8;
    break;
  case 0x10:
    uVar1 = 0x73d8;
  }
  FUN_ovl_13__0252da(uVar1);
  return;
}



/* ovl_13::025580 ovl_13_entry_2558_0000 */

void __cdecl16far ovl_13_entry_2558_0000(void)

{
  return;
}



/* ovl_13::025582 ovl_13_entry_2558_0002 */

void __cdecl16far ovl_13_entry_2558_0002(void)

{
  return;
}



/* ovl_13::025584 FUN_ovl_13__025584 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_13__025584(int param_1,undefined2 param_2)

{
  undefined2 local_1e [5];
  undefined1 local_14;
  undefined1 local_13;
  int local_12;
  undefined2 local_10;
  int local_e;
  int local_6;
  undefined2 local_4;
  
  local_e = (param_1 - (uint)*(byte *)(_DAT_2a22_4914 + 4)) * 3 + _DAT_2a22_4914 + 6;
  local_4 = 0x2e67;
  local_13 = 0x10;
  local_14 = 0x17;
  local_12 = param_1;
  local_10 = param_2;
  local_1e[0] = 0x2e67;
  local_6 = local_e;
  FUN_19c7_4afe(0x10,&local_14,&local_14,local_1e);
  return;
}



/* ovl_13::0255e6 ovl_13_entry_2558_0066 */

void __cdecl16far ovl_13_entry_2558_0066(int param_1)

{
  undefined2 uVar1;
  
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    uVar1 = *(undefined2 *)(param_1 * 4 + 0x2a8);
  }
  else {
    uVar1 = *(undefined2 *)(param_1 * 4 + 0x2a6);
  }
  FUN_20a6_0232(2,uVar1,uVar1);
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_ovl_13__025584(0x80,0x80);
  }
  FUN_11e1_04a6();
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    thunk_EXT_FUN_0000_0000(0x11e1,0x7858,0x7868);
  }
  return;
}



/* ovl_13::025654 ovl_13_entry_2558_00d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_13_entry_2558_00d4(undefined2 param_1,int param_2)

{
  undefined2 uVar1;
  
  _DAT_3000_d06d = param_2;
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    uVar1 = *(undefined2 *)(param_2 * 4 + 0x2a8);
  }
  else {
    uVar1 = *(undefined2 *)(param_2 * 4 + 0x2a6);
  }
  _DAT_2a22_e337 = param_1;
  _DAT_2a22_e339 = 0;
  _DAT_2a22_e33b = 0x2558;
  _DAT_2a22_e33d = 2;
  _DAT_2a22_e33f = 0x2558;
  _DAT_2a22_e341 = 3;
  _DAT_2a22_e343 = 0xffff;
  _DAT_2a22_e345 = 0xffff;
  _DAT_2a22_e347 = 0xffff;
  _DAT_2a22_fade = 0;
  FUN_11e1_002a((undefined *)&DAT_2a22_e337);
  _DAT_2a22_fd3a = 2;
  FUN_20a6_0232(2,uVar1);
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    thunk_EXT_FUN_0000_0000(0x20a6,0x7858,0x7868);
  }
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_ovl_13__025584(0x80,0x80);
  }
  return;
}



/* ovl_13::025714 FUN_ovl_13__025714 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_13__025714(int *param_1,int *param_2)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (9 < local_4) {
      return 99;
    }
    iVar1 = local_4 * 0xe;
    if ((((*(int *)(iVar1 + 0x77c2) < *param_1) && (*param_1 < *(int *)(iVar1 + 0x77c4))) &&
        (*(int *)(iVar1 + 0x77c6) < *param_2)) && (*param_2 < *(int *)(iVar1 + 0x77c8))) break;
    local_4 = local_4 + 1;
  }
  *param_1 = *(int *)(iVar1 + 0x77ca);
  *param_2 = *(int *)(local_4 * 0xe + 0x77cc);
  iVar1 = *(int *)(local_4 * 0xe + 0x77ce);
  if (iVar1 < 9) {
    if (_DAT_2a22_bca2 + 2 < iVar1) {
      return 99;
    }
  }
  else if (_DAT_2a22_bca4 + 8 < *(int *)(local_4 * 0xe + 0x77ce)) {
    return 99;
  }
  return *(undefined2 *)(local_4 * 0xe + 0x77ce);
}



/* ovl_13::0257ec FUN_ovl_13__0257ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_13__0257ec(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined2 uVar3;
  int local_ba;
  char local_b8 [80];
  undefined1 local_68;
  int local_66;
  undefined4 local_64;
  char local_60 [80];
  int local_10;
  char *local_e;
  char local_c;
  undefined2 local_a;
  undefined2 local_8;
  char local_6;
  char *local_4;
  
  local_68 = 0;
  local_6 = '\0';
  local_c = '\0';
  DAT_3000_d105 = 0;
  DAT_3000_d104 = 0;
  iVar2 = *(int *)(param_1 * 2 + 0x34a);
  local_a = *(undefined2 *)(iVar2 + 4);
  local_8 = *(undefined2 *)(iVar2 + 8);
  *(undefined2 *)(iVar2 + 4) = 0x6f;
  *(undefined2 *)(*(int *)(param_1 * 2 + 0x34a) + 8) = 0x3c;
  local_66 = param_2;
  FUN_1090_00d6(4);
  if ((_DAT_2a22_e32c == 0xd) && (DAT_3000_d0ff != '\0')) {
    FUN_1090_00d6(1);
  }
  FUN_1eea_0574(*(undefined2 *)(param_1 * 2 + 0x34a),0x3f,0,0xf8,0x3d,0);
  *(undefined2 *)(*(int *)(param_1 * 2 + 0x34a) + 0xc) = 10;
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    *(undefined2 *)(*(int *)(param_1 * 2 + 0x34a) + 0xc) = 1;
  }
  local_64 = (char *)CONCAT22(_DAT_3000_d119,_DAT_3000_d117);
  if (DAT_2a22_bca6 != '\0') {
    DAT_3000_d104 = 1;
  }
  while (local_6 == '\0') {
    local_e = local_60;
    while ((pcVar1 = local_64, *local_64 != '\r' && (*local_64 != '\0'))) {
      local_64 = (char *)CONCAT22(local_64._2_2_,(char *)local_64 + 1);
      *local_e = *pcVar1;
      local_e = local_e + 1;
    }
    if (*local_64 == '\0') {
      local_6 = '\x01';
    }
    *local_e = '\0';
    uVar3 = 0x19c7;
    FUN_19c7_4a80(local_b8,local_60,_DAT_3000_d100,_DAT_3000_d100,_DAT_3000_d100);
    local_10 = 0x41;
    if (_DAT_2a22_e32c == 0xd) {
      local_ba = 0;
      local_4 = local_b8;
      while (*local_4 != '\0') {
        pcVar1 = local_4;
        local_4 = local_4 + 1;
        iVar2 = thunk_EXT_FUN_0000_0000
                          (uVar3,*(undefined2 *)(*(int *)(param_1 * 2 + 0x34a) + 0x10),(int)*pcVar1)
        ;
        local_ba = local_ba + iVar2;
        uVar3 = 0x1eea;
      }
      local_10 = local_10 + (0xf6 - local_ba) / 2;
    }
    if (DAT_2a22_bca6 <= local_c) {
      thunk_EXT_FUN_0000_0000(uVar3,*(undefined2 *)(param_1 * 2 + 0x34a),local_10,local_66,local_b8)
      ;
      iVar2 = thunk_EXT_FUN_0000_0000(0x1eea,4);
      local_66 = local_66 + iVar2;
      if (0x3c < local_66) {
        local_6 = '\x01';
        DAT_3000_d105 = 1;
      }
    }
    local_c = local_c + '\x01';
    local_64 = (char *)CONCAT22(local_64._2_2_,(char *)local_64 + 1);
  }
  *(undefined2 *)(*(int *)(param_1 * 2 + 0x34a) + 4) = local_a;
  *(undefined2 *)(*(int *)(param_1 * 2 + 0x34a) + 8) = local_8;
  return;
}



/* ovl_13::0259ec FUN_ovl_13__0259ec */

void __cdecl16far FUN_ovl_13__0259ec(int param_1)

{
  int iVar1;
  int iVar2;
  int local_6;
  
  iVar1 = thunk_EXT_FUN_0000_0000(0x2558,4);
  iVar2 = iVar1 / 3;
  FUN_1951_017a(0x1a);
  if (param_1 == 1) {
    DAT_2a22_bca6 = DAT_2a22_bca6 + -1;
    for (local_6 = iVar2 * -3; local_6 < 1; local_6 = local_6 + iVar2) {
      FUN_11e1_0208();
      FUN_ovl_13__0257ec(2,local_6);
      FUN_11e1_02ec(0x11e1);
      if (DAT_2a22_e326 == DAT_2a22_46f4) {
        FUN_ovl_13__0254f6();
      }
    }
  }
  else {
    for (local_6 = iVar2 * 3 - iVar1; -local_6 == iVar1 || -iVar1 < local_6;
        local_6 = local_6 - iVar2) {
      FUN_ovl_13__0257ec(2,local_6);
      FUN_11e1_0208();
      FUN_11e1_02ec(0x11e1);
      if (DAT_2a22_e326 == DAT_2a22_46f4) {
        FUN_ovl_13__0254f6();
      }
    }
    DAT_2a22_bca6 = DAT_2a22_bca6 + '\x01';
  }
  return;
}



/* ovl_13::025ab4 FUN_ovl_13__025ab4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ovl_13__025ab4(void)

{
  int iVar1;
  undefined2 local_14;
  undefined2 local_6;
  
  FUN_1090_00d6(1);
  if ((*_DAT_3000_d102 != '\0') && (_DAT_2a22_bca4 == 2)) {
    FUN_1090_00fe((undefined *)&DAT_2a22_f1ba,
                  *(int *)(_DAT_3000_d113 * 0x16 + -0x656e) + _DAT_2a22_e320,_DAT_2a22_e322);
    iVar1 = FUN_19c7_483e((undefined *)&DAT_2a22_f1ba,0x7878);
    if (iVar1 == 0) {
      _DAT_2a22_bca4 = 1;
    }
  }
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    local_14 = 0x16;
    local_6 = 0x15;
  }
  else if (DAT_2a22_e326 == DAT_2a22_46f1) {
    local_14 = 1;
    local_6 = 2;
  }
  else {
    local_14 = 7;
    local_6 = 8;
  }
  FUN_1eea_0574(_DAT_2a22_479e,0x3c,0xae,0xd0,0x1a,local_14);
  FUN_1eea_0574(_DAT_2a22_479e,0x110,0xb0,0x29,0x15,local_6);
  if (DAT_2a22_e326 != DAT_2a22_46f4) {
    FUN_1eea_0b5a(_DAT_2a22_479e,0x10f,0xaf,0x138,0xaf,0);
    FUN_1eea_0b5a(_DAT_2a22_479e,0x10f,0xaf,0x10f,0xc5,0);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479e,0x31,0x78,_DAT_2a22_e385);
}



/* ovl_13::025e14 FUN_ovl_13__025e14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_13__025e14(void)

{
  undefined2 uVar1;
  
  if (_DAT_2a22_bc9e == 1) {
    FUN_1eea_11e7();
    uVar1 = _DAT_2a22_e391;
  }
  else if (_DAT_2a22_bc9e == 2) {
    FUN_1eea_11e7();
    uVar1 = _DAT_2a22_e393;
  }
  else {
    if (_DAT_2a22_bc9e < 3) {
      return;
    }
    if (10 < _DAT_2a22_bc9e) {
      return;
    }
    FUN_1eea_11e7();
    uVar1 = _DAT_2a22_e395;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,*(undefined2 *)(*_DAT_2a22_48d4 * 2 + 0x34a),_DAT_3000_d10f,
                      _DAT_3000_d111,uVar1);
}



/* ovl_13::025e76 FUN_ovl_13__025e76 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_13__025e76(int param_1)

{
  int iVar1;
  
  iVar1 = *(char *)(DAT_3000_d106 * 0x28 + param_1 + _DAT_2a22_bc9e * 4 + 0x7474) * 4;
  _DAT_3000_d10f = *(int *)(iVar1 + 0x743a) + 3;
  _DAT_3000_d111 = *(int *)(iVar1 + 0x743c) + 2;
  _DAT_2a22_bc9e = FUN_ovl_13__025714((undefined *)&DAT_3000_d10f,(undefined *)&DAT_3000_d111);
  DAT_2a22_bc10 = 1;
  return;
}



/* ovl_13::025ed2 FUN_ovl_13__025ed2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_13__025ed2(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int local_6;
  int local_4;
  
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    local_4 = 0x787e;
    local_6 = 0x788a;
  }
  else if (DAT_2a22_e326 == DAT_2a22_46f1) {
    local_4 = 0x7886;
    local_6 = 0x7892;
  }
  else {
    local_4 = 0x7882;
    local_6 = 0x788e;
  }
  uVar2 = 0x199e;
  iVar1 = FUN_199e_000e();
  if (10 < iVar1) {
    if (((2 < _DAT_2a22_bc9e) || ((_DAT_2a22_bc9e == 1 && (DAT_3000_d104 != '\0')))) ||
       ((_DAT_2a22_bc9e == 2 && (DAT_3000_d105 != '\0')))) {
      iVar1 = _DAT_2a22_bc9e * 0xe;
      uVar2 = 0x1eea;
      thunk_EXT_FUN_0000_0000
                (0x199e,*(undefined2 *)(*_DAT_2a22_48d4 * 2 + 0x34a),*(int *)(iVar1 + 0x77b4) + 2,
                 *(int *)(iVar1 + 0x77b8) + 2,
                 (*(int *)(iVar1 + 0x77b6) - *(int *)(iVar1 + 0x77b4)) + -2,
                 (*(int *)(iVar1 + 0x77ba) - *(int *)(iVar1 + 0x77b8)) + -2,
                 *(undefined2 *)(local_4 + _DAT_2a22_bce6 * 2),
                 *(undefined2 *)((_DAT_2a22_bce6 ^ 1) * 2 + local_4));
    }
    uVar3 = uVar2;
    if ((DAT_3000_d104 != '\0') && (_DAT_2a22_bc9e != 1)) {
      uVar3 = 0x1eea;
      thunk_EXT_FUN_0000_0000
                (uVar2,*(undefined2 *)(*_DAT_2a22_48d4 * 2 + 0x34a),0x32,0x79,9,0x12,
                 *(undefined2 *)(local_6 + _DAT_2a22_bce6 * 2),
                 *(undefined2 *)((_DAT_2a22_bce6 ^ 1) * 2 + local_6));
    }
    if ((DAT_3000_d105 != '\0') && (_DAT_2a22_bc9e != 2)) {
      thunk_EXT_FUN_0000_0000
                (uVar3,*(undefined2 *)(*_DAT_2a22_48d4 * 2 + 0x34a),0x32,0x8d,9,0x12,
                 *(undefined2 *)(local_6 + _DAT_2a22_bce6 * 2),
                 *(undefined2 *)((_DAT_2a22_bce6 ^ 1) * 2 + local_6));
    }
    _DAT_2a22_bce6 = _DAT_2a22_bce6 ^ 1;
    FUN_199e_0012();
  }
  return;
}



/* ovl_13::02604a FUN_ovl_13__02604a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_ovl_13__02604a(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  int local_4;
  
  bVar1 = false;
  _DAT_2a22_bc9e = FUN_ovl_13__025714((undefined *)&DAT_3000_d10f,(undefined *)&DAT_3000_d111);
  FUN_11e1_0208();
  if (param_1 == 0) {
    FUN_ovl_13__025ab4(0x11e1);
  }
  local_4 = 2;
  do {
    FUN_ovl_13__0257ec(local_4,0);
    local_4 = local_4 + 1;
  } while (local_4 < 3);
  FUN_11e1_02ec(0x11e1);
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_ovl_13__0254f6();
  }
  do {
    iVar2 = FUN_1951_00ea();
  } while (iVar2 != 0);
  do {
  } while (_DAT_2a22_d31c != 0);
  FUN_1eea_11b0();
  DAT_2a22_bc10 = '\0';
  do {
    do {
      if (bVar1) {
        if (2 < _DAT_2a22_bc9e) {
          FUN_1951_017a(0x1a);
        }
        return _DAT_2a22_bc9e;
      }
      FUN_11e1_0208();
      if (_DAT_2a22_bc9e != 99) {
        FUN_ovl_13__025e14();
        FUN_ovl_13__025ed2();
      }
      uVar4 = 0x11e1;
      FUN_11e1_02ec(0x11e1);
      if (DAT_2a22_e326 == DAT_2a22_46f4) {
        uVar4 = 0x252a;
        FUN_ovl_13__0254f6();
      }
      _DAT_2a22_bca0 = _DAT_2a22_bc9e;
      _DAT_3000_d10b = _DAT_3000_d10f;
      _DAT_3000_d10d = _DAT_3000_d111;
      if (DAT_2a22_46ee != '\0') {
        _DAT_3000_d107 = _DAT_2a22_d318;
        _DAT_3000_d109 = _DAT_2a22_d31a;
        iVar2 = FUN_ovl_13__025714((undefined *)&DAT_3000_d107,(undefined *)&DAT_3000_d109);
        if (iVar2 != 99) {
          _DAT_3000_d10f = _DAT_3000_d107;
          _DAT_3000_d111 = _DAT_3000_d109;
          _DAT_2a22_bc9e = iVar2;
        }
        uVar4 = 0x1eea;
        uVar3 = FUN_1eea_11b0();
        if ((uVar3 & 1) != 0) {
          bVar1 = true;
        }
      }
      if (DAT_2a22_46ef != '\0') {
        _DAT_2a22_e335 = thunk_EXT_FUN_0000_0000(uVar4);
        if ((DAT_2a22_bc10 == '\0') || (iVar2 = FUN_197d_0214(), 8 < iVar2)) {
          if (DAT_2a22_e336 < -0x32) {
            uVar4 = 0;
LAB_ovl_13__026173:
            FUN_ovl_13__025e76(uVar4);
          }
          else {
            if ('2' < DAT_2a22_e336) {
              uVar4 = 1;
              goto LAB_ovl_13__026173;
            }
            if ('2' < DAT_2a22_e335) {
              uVar4 = 2;
              goto LAB_ovl_13__026173;
            }
            if (DAT_2a22_e335 < -0x32) {
              uVar4 = 3;
              goto LAB_ovl_13__026173;
            }
            DAT_2a22_bc10 = '\0';
          }
          FUN_197d_0218();
        }
        iVar2 = thunk_EXT_FUN_0000_0000(0x199e,0);
        if (iVar2 != 0) {
          do {
            iVar2 = thunk_EXT_FUN_0000_0000(0x1eea,0);
          } while (iVar2 != 0);
          bVar1 = true;
        }
      }
      _DAT_3000_d115 = FUN_1951_00ea();
    } while (_DAT_3000_d115 == 0);
    if (_DAT_3000_d115 == 0x149) {
      _DAT_3000_d107 = 0x31;
      _DAT_3000_d109 = 0x78;
      return 1;
    }
    if (_DAT_3000_d115 < 0x14a) {
      if (_DAT_3000_d115 == 0xd) {
        bVar1 = true;
      }
      else if (_DAT_3000_d115 == 0x148) {
        uVar4 = 0;
        goto LAB_ovl_13__02621c;
      }
    }
    else {
      if (_DAT_3000_d115 == 0x14b) {
        uVar4 = 3;
      }
      else if (_DAT_3000_d115 == 0x14d) {
        uVar4 = 2;
      }
      else {
        if (_DAT_3000_d115 != 0x150) {
          if (_DAT_3000_d115 == 0x151) {
            _DAT_3000_d107 = 0x31;
            _DAT_3000_d109 = 0x8c;
            return 2;
          }
          goto LAB_ovl_13__026224;
        }
        uVar4 = 1;
      }
LAB_ovl_13__02621c:
      FUN_ovl_13__025e76(uVar4);
    }
LAB_ovl_13__026224:
    do {
      iVar2 = FUN_1951_00ea();
    } while (iVar2 != 0);
  } while( true );
}



/* ovl_13::026284 FUN_ovl_13__026284 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_ovl_13__026284(void)

{
  char *pcVar1;
  char local_8;
  undefined4 local_6;
  
  local_8 = '\0';
  local_6 = (char *)CONCAT22(_DAT_3000_d119,_DAT_3000_d117);
  while (pcVar1 = local_6, *local_6 != '\0') {
    local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
    if (*pcVar1 == '\r') {
      local_8 = local_8 + '\x01';
    }
  }
  return local_8 + 1;
}



/* ovl_13::0262c0 FUN_ovl_13__0262c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_13__0262c0(int param_1)

{
  _DAT_3000_d10f = *(int *)(param_1 * 4 + 0x7442) + 3;
  _DAT_3000_d111 = *(int *)(param_1 * 4 + 0x7444) + 2;
  return;
}



/* ovl_13::0262e2 ovl_13_entry_2558_0d62 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far
ovl_13_entry_2558_0d62(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 local_6;
  char local_4;
  
  local_6 = 0;
  (*_DAT_2a22_b886)(0x2558,0x1d,param_3);
  uVar1 = DAT_2a22_5b2f;
  DAT_2a22_5b2f = 0;
  if (DAT_2a22_46ee != '\0') {
    FUN_1eea_11b7();
  }
  FUN_1eea_11b0();
  _DAT_2a22_fade = param_3;
  _DAT_3000_d100 = param_4;
  DAT_2a22_bca6 = 0;
  _DAT_3000_d113 = param_1;
  param_1 = param_1 * 0x16;
  _DAT_3000_d117 = *(int *)(param_1 + -0x656c) + _DAT_2a22_e320;
  _DAT_3000_d119 = _DAT_2a22_e322;
  _DAT_2a22_bca2 = *(int *)(param_1 + -0x656a);
  _DAT_2a22_bca4 = *(undefined2 *)(param_1 + -0x6568);
  if (_DAT_2a22_bca2 == 0) {
    _DAT_3000_d10f = *(int *)(param_2 * 4 + 0x7456);
    _DAT_3000_d111 = *(int *)(param_2 * 4 + 0x7458);
  }
  else {
    _DAT_3000_d10f = *(int *)(param_2 * 4 + 0x743e);
    _DAT_3000_d111 = *(int *)(param_2 * 4 + 0x7440);
  }
  _DAT_3000_d10f = _DAT_3000_d10f + 3;
  _DAT_3000_d111 = _DAT_3000_d111 + 2;
  FUN_ovl_13__026284();
  do {
    uVar2 = FUN_ovl_13__02604a(local_6);
    switch(uVar2) {
    case 1:
      if (DAT_3000_d104 != '\0') {
        uVar2 = 1;
LAB_ovl_13__0263c0:
        FUN_ovl_13__0259ec(uVar2);
      }
      break;
    case 2:
      if (DAT_3000_d105 != '\0') {
        uVar2 = 0xffff;
        goto LAB_ovl_13__0263c0;
      }
      break;
    case 3:
      local_4 = '\0';
LAB_ovl_13__026426:
      DAT_2a22_5b2f = uVar1;
      return (int)local_4;
    case 4:
      local_4 = '\x01';
      goto LAB_ovl_13__026426;
    case 5:
      local_4 = '\x02';
      goto LAB_ovl_13__026426;
    case 6:
      local_4 = '\x03';
      goto LAB_ovl_13__026426;
    case 7:
      local_4 = '\x04';
      goto LAB_ovl_13__026426;
    case 8:
      local_4 = '\x05';
      goto LAB_ovl_13__026426;
    case 9:
      local_4 = DAT_2a22_bca2;
      goto LAB_ovl_13__026426;
    case 10:
      local_4 = DAT_2a22_bca2 + '\x01';
      goto LAB_ovl_13__026426;
    }
    local_6 = 1;
  } while( true );
}


