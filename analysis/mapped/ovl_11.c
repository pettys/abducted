/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_11::0252a0 FUN_ovl_11__0252a0 */

void __cdecl16far FUN_ovl_11__0252a0(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  int local_a;
  
  thunk_EXT_FUN_0000_0000(0x252a);
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_20a6_0232(2,0x6156);
    local_a = 0;
    uVar1 = 0x20a6;
    do {
      iVar2 = local_a * 8;
      uVar3 = 0x1eea;
      uVar1 = thunk_EXT_FUN_0000_0000
                        (uVar1,2,*(int *)(iVar2 + 0x629e) + 1,*(int *)(iVar2 + 0x62a0) + 1,
                         (*(int *)(iVar2 + 0x62a2) - *(int *)(iVar2 + 0x629e)) + -1,
                         (*(int *)(iVar2 + 0x62a4) - *(int *)(iVar2 + 0x62a0)) + -1);
      *(undefined2 *)((undefined *)&DAT_3000_cb37 + local_a * 2) = uVar1;
      local_a = local_a + 1;
      uVar1 = uVar3;
    } while (local_a < 6);
  }
  else {
    FUN_20a6_0232(2,0x6149);
    uVar3 = 0x20a6;
    for (local_a = 0; local_a < 0x18; local_a = local_a + 1) {
      iVar2 = local_a * 8;
      uVar1 = thunk_EXT_FUN_0000_0000
                        (uVar3,2,*(int *)(iVar2 + 0x61de) + 1,*(int *)(iVar2 + 0x61e0) + 1,
                         (*(int *)(iVar2 + 0x61e2) - *(int *)(iVar2 + 0x61de)) + -1,
                         (*(int *)(iVar2 + 0x61e4) - *(int *)(iVar2 + 0x61e0)) + -1);
      *(undefined2 *)((undefined *)&DAT_3000_cb37 + local_a * 2) = uVar1;
      uVar3 = 0x1eea;
    }
  }
  thunk_EXT_FUN_0000_0000(uVar3);
  return;
}



/* ovl_11::02539e ovl_11_entry_252a_00fe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_11_entry_252a_00fe(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_4;
  
  local_4 = 0;
  for (iVar4 = 0; iVar4 < _DAT_2a22_e5c4; iVar4 = iVar4 + 1) {
    iVar3 = iVar4 * 0x32;
    iVar3 = FUN_1edc_0079(*(int *)((undefined *)&DAT_2a22_e5d0 + iVar3) - _DAT_2a22_e39b,
                          *(int *)((undefined *)&DAT_2a22_e5d2 + iVar3) - _DAT_2a22_e5a6,
                          *(int *)((undefined *)&DAT_2a22_e5d4 + iVar3) - _DAT_2a22_e5aa);
    bVar1 = false;
    iVar5 = 0;
    while ((iVar5 < local_4 && (!bVar1))) {
      if (iVar3 <= *(int *)((undefined *)&DAT_2a22_a79a + iVar5 * 2)) {
        for (local_c = local_4; iVar5 < local_c; local_c = local_c + -1) {
          iVar2 = local_c * 2;
          *(undefined2 *)((undefined *)&DAT_2a22_a736 + iVar2) =
               *(undefined2 *)((undefined *)&DAT_2a22_a734 + iVar2);
          *(undefined2 *)((undefined *)&DAT_2a22_a79a + iVar2) = *(undefined2 *)(iVar2 + 0x6348);
        }
        *(int *)((undefined *)&DAT_2a22_a736 + iVar5 * 2) = iVar4;
        *(int *)((undefined *)&DAT_2a22_a79a + iVar5 * 2) = iVar3;
        local_4 = local_4 + 1;
        bVar1 = true;
      }
      iVar5 = iVar5 + 1;
    }
    if (!bVar1) {
      *(int *)((undefined *)&DAT_2a22_a736 + local_4 * 2) = iVar4;
      *(int *)((undefined *)&DAT_2a22_a79a + local_4 * 2) = iVar3;
      local_4 = local_4 + 1;
    }
  }
  DAT_2a22_a5be = '\0';
  while ((DAT_2a22_a5be < _DAT_2a22_e5c4 &&
         (*(int *)((undefined *)&DAT_2a22_a736 + DAT_2a22_a5be * 2) != (int)DAT_2a22_a5bc))) {
    DAT_2a22_a5be = DAT_2a22_a5be + '\x01';
  }
  return;
}



/* ovl_11::0254b6 FUN_ovl_11__0254b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far
FUN_ovl_11__0254b6(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 *param_4,
                  undefined2 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_DX;
  int iVar4;
  int iVar5;
  int iVar6;
  
  _DAT_2a22_dc3a = param_1;
  _DAT_2a22_dc3e = param_2;
  _DAT_2a22_dc3c = param_3;
  uVar1 = FUN_1ed2_001e(param_2,_DAT_2a22_5826);
  iVar4 = in_DX;
  uVar2 = FUN_1ed2_001e(_DAT_2a22_dc3c,_DAT_2a22_5820);
  iVar5 = iVar4;
  uVar3 = FUN_1ed2_001e(_DAT_2a22_dc3a,_DAT_2a22_581a);
  _DAT_2a22_5850 = uVar3 + uVar2 + uVar1;
  iVar6 = iVar5 + iVar4 + (uint)CARRY2(uVar3,uVar2) + in_DX + (uint)CARRY2(uVar3 + uVar2,uVar1);
  _DAT_2a22_5852 = iVar6;
  uVar1 = FUN_1ed2_001e(_DAT_2a22_dc3e,_DAT_2a22_5828);
  iVar4 = iVar6;
  uVar2 = FUN_1ed2_001e(_DAT_2a22_dc3c,_DAT_2a22_5822);
  iVar5 = iVar4;
  uVar3 = FUN_1ed2_001e(_DAT_2a22_dc3a,_DAT_2a22_581c);
  _DAT_2a22_5858 = uVar3 + uVar2 + uVar1;
  iVar6 = iVar5 + iVar4 + (uint)CARRY2(uVar3,uVar2) + iVar6 + (uint)CARRY2(uVar3 + uVar2,uVar1);
  _DAT_2a22_585a = iVar6;
  uVar1 = FUN_1ed2_001e(_DAT_2a22_dc3e,_DAT_2a22_582a);
  iVar4 = iVar6;
  uVar2 = FUN_1ed2_001e(_DAT_2a22_dc3c,_DAT_2a22_5824);
  iVar5 = iVar4;
  uVar3 = FUN_1ed2_001e(_DAT_2a22_dc3a,_DAT_2a22_581e);
  _DAT_2a22_5860 = uVar3 + uVar2 + uVar1;
  _DAT_2a22_5862 =
       (iVar5 + iVar4 + (uint)CARRY2(uVar3,uVar2) + iVar6 + (uint)CARRY2(uVar3 + uVar2,uVar1)) -
       _DAT_2a22_a5da;
  _DAT_2a22_5852 = _DAT_2a22_5852 - _DAT_2a22_a5dc;
  _DAT_2a22_585a = _DAT_2a22_585a - _DAT_2a22_a5de;
  if ((_DAT_2a22_5862 < 2) && (_DAT_2a22_5862 < 1)) {
    *param_4 = 0xfc18;
    *param_5 = 0xfc18;
    return;
  }
  _DAT_3000_a390 = *(int *)(_DAT_2a22_a5f2 + 6) >> 1;
  _DAT_3000_a392 = *(int *)(_DAT_2a22_a5f2 + 8) >> 1;
  FUN_19b7_0002(0);
  *param_4 = _DAT_2a22_5868;
  *param_5 = _DAT_2a22_5870;
  return;
}



/* ovl_11::02562a FUN_ovl_11__02562a */

/* WARNING: Removing unreachable block (ram,0x00025770) */
/* WARNING: Removing unreachable block (ram,0x0002577a) */
/* WARNING: Removing unreachable block (ram,0x00025784) */

void __cdecl16far
FUN_ovl_11__02562a(byte param_1,byte param_2,byte param_3,byte param_4,byte param_5,byte param_6,
                  int param_7,uint param_8)

{
  int iVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  byte local_36;
  byte local_34;
  byte local_30;
  byte local_2e;
  byte local_2a;
  byte local_28;
  byte local_26;
  byte local_14;
  byte local_12;
  
  uVar5 = (uint)param_4 - (uint)param_1;
  cVar2 = (char)(uVar5 / param_8);
  cVar3 = (char)(((uint)param_5 - (uint)param_2) / param_8);
  cVar4 = (char)(((uint)param_6 - (uint)param_3) / param_8);
  local_2e = 0;
  local_36 = 0;
  local_30 = 0;
  local_26 = 0;
  local_34 = 0;
  local_28 = 0;
  if ((cVar2 == '\0') && (uVar5 != 0)) {
    local_30 = (byte)(param_8 / uVar5);
  }
  if ((cVar4 == '\0') && ((uint)param_5 - (uint)param_2 != 0)) {
    local_2e = (byte)(param_8 / ((uint)param_5 - (uint)param_2));
  }
  if ((cVar3 == '\0') && ((uint)param_6 - (uint)param_3 != 0)) {
    local_36 = (byte)(param_8 / ((uint)param_6 - (uint)param_3));
  }
  local_14 = param_1;
  local_2a = param_2;
  local_12 = param_3;
  for (uVar5 = 0; (int)uVar5 < (int)param_8; uVar5 = uVar5 + 1) {
    iVar1 = (param_7 + uVar5) * 3;
    *(byte *)(iVar1 + -0x1af1) = local_14 >> 2;
    *(byte *)(iVar1 + -0x1af0) = local_2a >> 2;
    *(byte *)(iVar1 + -0x1aef) = local_12 >> 2;
    if (cVar2 == '\0') {
      if ((local_30 != 0) && (uVar5 / local_30 != (uint)local_28)) {
        local_14 = local_14 + 1;
        local_28 = local_28 + 1;
      }
    }
    else {
      local_14 = local_14 + cVar2;
    }
    if (cVar3 == '\0') {
      if ((local_36 != 0) && (uVar5 / local_36 != (uint)local_34)) {
        local_2a = local_2a + 1;
        local_34 = local_34 + 1;
      }
    }
    else {
      local_2a = local_2a + cVar3;
    }
    if (cVar4 == '\0') {
      if ((local_2e != 0) && (uVar5 / local_2e != (uint)local_26)) {
        local_12 = local_12 + 1;
        local_26 = local_26 + 1;
      }
    }
    else {
      local_12 = local_12 + cVar4;
    }
  }
  FUN_1eea_0004(param_7,param_8,param_7 * 3 + -0x1af1,0x2e67);
  return;
}



/* ovl_11::0257fa FUN_ovl_11__0257fa */

void __cdecl16far FUN_ovl_11__0257fa(undefined2 param_1)

{
  undefined2 uVar1;
  undefined1 local_16;
  undefined1 local_14;
  int local_12;
  undefined1 local_10;
  undefined1 local_e;
  undefined1 local_c;
  undefined1 local_a;
  undefined1 local_8;
  undefined1 local_6;
  undefined1 local_4;
  
  switch(param_1) {
  case 0:
    local_8 = 0x44;
    local_e = 0;
    local_6 = 0x44;
    local_16 = 0x9c;
    local_4 = 0;
    local_14 = 0x44;
    local_c = 0xfc;
    local_10 = 0xfc;
    local_a = 0xfc;
    local_12 = 0x20;
    DAT_3000_cb36 = 0;
    break;
  case 1:
    local_8 = 0;
    local_e = 0;
    local_6 = 0x50;
    local_16 = 0x58;
    local_4 = 0x58;
    local_14 = 0xa8;
    local_c = 0xff;
    local_10 = 0xff;
    local_a = 0xff;
    local_12 = 0x20;
    DAT_3000_cb36 = 1;
    break;
  case 2:
    local_8 = 0x20;
    local_e = 0x20;
    local_6 = 0x20;
    local_16 = 0x90;
    local_4 = 0x90;
    local_14 = 0x90;
    local_c = 0xff;
    local_10 = 0xff;
    local_a = 0xff;
    local_12 = 0x10;
    DAT_3000_cb36 = 2;
    break;
  case 3:
    local_8 = 0;
    local_e = 0x48;
    local_6 = 0;
    local_16 = 0x54;
    local_4 = 0xa4;
    local_14 = 0x54;
    local_c = 0xfa;
    local_10 = 0xff;
    local_a = 0xff;
    local_12 = 0x20;
    DAT_3000_cb36 = 3;
    break;
  case 4:
    local_8 = 0x50;
    local_e = 0;
    local_6 = 0;
    local_16 = 0xd0;
    local_4 = 0xa0;
    local_14 = 0x38;
    local_c = 0xfc;
    local_10 = 0xfc;
    local_a = 0x50;
    local_12 = 0x10;
    DAT_3000_cb36 = 4;
    break;
  case 5:
    local_8 = 0x50;
    local_e = 0x1f;
    local_6 = 0;
    local_16 = 0xa8;
    local_4 = 0x70;
    local_14 = 0x38;
    local_c = 0xfc;
    local_10 = 0xfc;
    local_a = 0xfc;
    local_12 = 0x10;
    DAT_3000_cb36 = 5;
    break;
  case 6:
    local_8 = 0x40;
    local_e = 0;
    local_6 = 0;
    local_16 = 0xa0;
    local_4 = 0x54;
    local_14 = 0x54;
    local_c = 0xfc;
    local_10 = 0xfc;
    local_a = 0xfc;
    local_12 = 0x10;
    DAT_3000_cb36 = 6;
  }
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    if (local_12 == 0x10) {
      FUN_ovl_11__02562a(local_8,local_e,local_6,local_16,local_4,local_14,0xe0,0x10);
      uVar1 = 0xf0;
    }
    else {
      uVar1 = 0xe0;
      local_16 = local_8;
      local_4 = local_e;
      local_14 = local_6;
    }
    FUN_ovl_11__02562a(local_16,local_4,local_14,local_c,local_10,local_a,uVar1,local_12);
  }
  return;
}



/* ovl_11::025a02 FUN_ovl_11__025a02 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ovl_11__025a02(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x252a,_DAT_2a22_4a62,param_2,param_3,
                      *(undefined2 *)((undefined *)&DAT_3000_cb37 + param_4 * 2));
}



/* ovl_11::025a22 FUN_ovl_11__025a22 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__025a22(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 local_8;
  int local_4;
  
  local_4 = 0;
  if (((*(char *)(param_1 + 0x2d) == '\0') ||
      (((*(char *)(param_1 + 10) < '\x02' ||
        ((*(char *)(*(char *)(param_1 + 10) * 0x1d + -0x60e3) == '\0' &&
         (*(char *)(param_1 + 0x2e) == '\0')))) &&
       (('\x01' < *(char *)(param_1 + 10) || (*(char *)(param_1 + 0x2e) == '\0')))))) &&
     (_DAT_2a22_a5ce == 0)) {
    iVar2 = 0x63ae;
  }
  else {
    iVar2 = param_1 + 0xe;
  }
  uVar5 = 0x1505;
  FUN_1505_18a0(iVar2,0);
  iVar2 = 0;
  do {
    if (*(char *)(*(char *)(param_1 + 0xc) * 0x24 + iVar2 + -0x5081) != -1) {
      local_4 = iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  iVar2 = local_4 * 8 + 10;
  _DAT_3000_cb32 = 0xe0;
  FUN_ovl_11__0257fa((int)*(char *)(param_1 + 0x2c));
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_ovl_11__028204();
    FUN_ovl_11__028234();
    FUN_ovl_11__028234();
    FUN_ovl_11__027e12(((_DAT_2a22_4a56 >> 1) - iVar2) + -10,(_DAT_2a22_4a58 >> 1) + -5,10);
    FUN_ovl_11__028204();
    FUN_ovl_11__028234();
    uVar5 = 0x27e1;
    FUN_ovl_11__028234();
    _DAT_3000_cb32 = 0x20;
  }
  else {
    FUN_ovl_11__025a02(0x1505,((_DAT_2a22_4a56 >> 1) - iVar2) + -0x16,(_DAT_2a22_4a58 >> 1) + -0x11,
                       (int)DAT_3000_cb36);
  }
  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    iVar4 = *(char *)(param_1 + 0xc) * 0x24 + iVar3;
    if (*(char *)(iVar4 + -0x5081) != -1) {
      cVar1 = *(char *)(iVar4 + -0x5097);
      if (cVar1 == '\0') {
        _DAT_3000_cb32 = 0xa0;
        local_8 = 8;
        DAT_3000_cb36 = '\b';
      }
      else if (cVar1 == '\x01') {
        _DAT_3000_cb32 = 0xc0;
        local_8 = 7;
        DAT_3000_cb36 = '\n';
      }
      else if (cVar1 == '\x02') {
        _DAT_3000_cb32 = 0x50;
        local_8 = 7;
        DAT_3000_cb36 = '\v';
      }
      else if (cVar1 == '\x03') {
        _DAT_3000_cb32 = 0x60;
        local_8 = 8;
        DAT_3000_cb36 = '\a';
      }
      else {
        _DAT_3000_cb32 = 0x20;
        local_8 = 8;
        DAT_3000_cb36 = '\t';
      }
      if (DAT_2a22_e326 == DAT_2a22_46f4) {
        uVar5 = 0x27e1;
        FUN_ovl_11__027e12(((_DAT_2a22_4a56 >> 1) - iVar2) + iVar3 * 0x11 + 0x15,
                           (_DAT_2a22_4a58 >> 1) + -5,local_8);
      }
      else {
        FUN_ovl_11__025a02(uVar5,((_DAT_2a22_4a56 >> 1) - iVar2) + iVar3 * 0x11 + 0xb,
                           (_DAT_2a22_4a58 >> 1) + -0xe,DAT_3000_cb36);
      }
    }
  }
  return;
}



/* ovl_11::025c2c FUN_ovl_11__025c2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_ovl_11__025c2c(void)

{
  uint uVar1;
  
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    DAT_3000_cb36 = 2;
    return (uint)DAT_2a22_46f4;
  }
  uVar1 = (int)*(char *)(_DAT_2a22_e5c0 + 0x2c);
  switch(*(char *)(_DAT_2a22_e5c0 + 0x2c)) {
  case '\0':
    DAT_3000_cb36 = 0x12;
    uVar1 = _DAT_2a22_e5c0;
    break;
  case '\x01':
    DAT_3000_cb36 = 0x13;
    uVar1 = _DAT_2a22_e5c0;
    break;
  case '\x02':
    DAT_3000_cb36 = 0x14;
    uVar1 = _DAT_2a22_e5c0;
    break;
  case '\x03':
    DAT_3000_cb36 = 0x15;
    return _DAT_2a22_e5c0;
  case '\x04':
    DAT_3000_cb36 = 0x16;
    return _DAT_2a22_e5c0;
  case '\x05':
    DAT_3000_cb36 = 0x17;
    return _DAT_2a22_e5c0;
  case '\x06':
    DAT_3000_cb36 = 0xc;
    return _DAT_2a22_e5c0;
  }
  return uVar1;
}



/* ovl_11::025c92 FUN_ovl_11__025c92 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__025c92(void)

{
  int iVar1;
  char local_4;
  
  _DAT_2a22_4a54 = 0;
  _DAT_2a22_4a58 = 100;
  DAT_3000_ce8d = 1;
  FUN_ovl_11__028204();
  FUN_ovl_11__028234();
  if (DAT_2a22_a5bf == '\0') {
    FUN_ovl_11__025c2c();
  }
  else {
    iVar1 = *(char *)(_DAT_2a22_e5c0 + 0xc) * 0x24 + (int)DAT_2a22_a5bf;
    if (*(char *)(iVar1 + -0x5082) == -1) {
      _DAT_2a22_4a54 = 0x7b;
      _DAT_2a22_4a58 = 0x4c;
      _DAT_3000_cb32 = 0x20;
      DAT_3000_ce8d = 0;
      return;
    }
    local_4 = *(char *)(iVar1 + -0x5098);
    if ((local_4 < '\0') || ('\x03' < local_4)) {
      local_4 = '\x04';
    }
    DAT_3000_cb36 = *(char *)((uint)(DAT_2a22_e326 == DAT_2a22_46f4) + local_4 * 2 + 0x63c8);
    _DAT_3000_cb32 = *(undefined2 *)(local_4 * 2 + 0x63be);
  }
  FUN_ovl_11__025a02(0x27e1,(_DAT_2a22_4a56 >> 1) + -0x1e,(_DAT_2a22_4a58 >> 1) + -0x14,
                     (int)DAT_3000_cb36);
  DAT_3000_ce8d = 0;
  _DAT_2a22_4a54 = 0x7b;
  _DAT_2a22_4a58 = 0x4c;
  return;
}



/* ovl_11::025d4e FUN_ovl_11__025d4e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_11__025d4e(void)

{
  if ((((*(int *)(_DAT_2a22_e32f + 6) == _DAT_2a22_e39b) ||
       (*(int *)(_DAT_2a22_e32f + 2) == _DAT_2a22_e5a6)) ||
      (*(int *)(_DAT_2a22_e5c0 + 6) == _DAT_2a22_e39b)) ||
     (*(int *)(_DAT_2a22_e5c0 + 2) == _DAT_2a22_e5a6)) {
    return 1;
  }
  return 0;
}



/* ovl_11::025d7e FUN_ovl_11__025d7e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__025d7e(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 local_1a;
  int local_6;
  
  FUN_19b7_00af();
  _DAT_2a22_e5a8 = (undefined2 *)&DAT_2a22_e5d0;
  for (iVar2 = 0; iVar2 < _DAT_2a22_e5c4; iVar2 = iVar2 + 1) {
    FUN_ovl_11__0254b6(*_DAT_2a22_e5a8,_DAT_2a22_e5a8[1],_DAT_2a22_e5a8[2],_DAT_2a22_e5a8 + 3,
                       _DAT_2a22_e5a8 + 4);
    if (DAT_2a22_e326 == DAT_2a22_46f1) {
      if (*(char *)((int)_DAT_2a22_e5a8 + 0xd) == '\x0f') {
        local_6 = 3;
      }
      else {
        local_6 = 2;
      }
    }
    else {
      local_6 = (int)*(char *)((int)_DAT_2a22_e5a8 + 0xd);
    }
    FUN_1eea_0b9f(_DAT_2a22_a5f2,_DAT_2a22_e5a8[3],_DAT_2a22_e5a8[4],local_6);
    _DAT_2a22_e5a8 = _DAT_2a22_e5a8 + 0x19;
  }
  _DAT_2a22_e5a8 = (undefined2 *)&DAT_2a22_e5d0;
  _DAT_2a22_e32f = (undefined *)&DAT_2a22_e5d0 + DAT_2a22_a5bd * 0x32;
  _DAT_2a22_e5c0 = (undefined *)&DAT_2a22_e5d0 + DAT_2a22_a5bc * 0x32;
  FUN_ovl_11__0254b6(_DAT_2a22_e39b,_DAT_2a22_e5a6,_DAT_2a22_e5aa,(undefined *)&DAT_3000_ce8e,
                     (undefined *)&DAT_3000_cb30);
  if (((_DAT_2a22_e32f != _DAT_2a22_e5c0) || (*(int *)(_DAT_2a22_e32f + 6) != _DAT_3000_ce8e)) ||
     (*(int *)(_DAT_2a22_e32f + 8) != _DAT_3000_cb30)) {
    if (DAT_2a22_e326 == DAT_2a22_46f4) {
      local_1a = 0x90;
    }
    else if (((DAT_2a22_e326 == DAT_2a22_46f3) || (DAT_2a22_e326 == DAT_2a22_46f2)) ||
            (DAT_2a22_e326 == DAT_2a22_46f1)) {
      local_1a = 1;
    }
    FUN_1eea_0b5a(_DAT_2a22_a5f2,_DAT_3000_ce8e,_DAT_3000_cb30,*(undefined2 *)(_DAT_2a22_e5c0 + 6),
                  *(undefined2 *)(_DAT_2a22_e5c0 + 8),local_1a);
    if (DAT_2a22_e326 == DAT_2a22_46f1) {
      uVar1 = 3;
    }
    else {
      uVar1 = 7;
    }
    FUN_1eea_0b5a(_DAT_2a22_a5f2,*(undefined2 *)(_DAT_2a22_e32f + 6),
                  *(undefined2 *)(_DAT_2a22_e32f + 8),_DAT_3000_ce8e,_DAT_3000_cb30,uVar1);
  }
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  FUN_1eea_0b5a(_DAT_2a22_a5f2,_DAT_3000_ce8e + -2,_DAT_3000_cb30 + 2,_DAT_3000_ce8e + 2,
                _DAT_3000_cb30 + 2,uVar1);
  FUN_1eea_0b5a(_DAT_2a22_a5f2,_DAT_3000_ce8e + 2,_DAT_3000_cb30 + 2,_DAT_3000_ce8e + 2,
                _DAT_3000_cb30 + -2,uVar1);
  FUN_1eea_0b5a(_DAT_2a22_a5f2,_DAT_3000_ce8e + 2,_DAT_3000_cb30 + -2,_DAT_3000_ce8e + -2,
                _DAT_3000_cb30 + -2,uVar1);
  FUN_1eea_0b5a(_DAT_2a22_a5f2,_DAT_3000_ce8e + -2,_DAT_3000_cb30 + -2,_DAT_3000_ce8e + -2,
                _DAT_3000_cb30 + 2,uVar1);
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar1 = 3;
  }
  else {
    uVar1 = 7;
  }
  FUN_1eea_0b5a(_DAT_2a22_a5f2,*(int *)(_DAT_2a22_e32f + 6) + -2,*(int *)(_DAT_2a22_e32f + 8) + 2,
                *(int *)(_DAT_2a22_e32f + 6) + 2,*(int *)(_DAT_2a22_e32f + 8) + 2,uVar1);
  FUN_1eea_0b5a(_DAT_2a22_a5f2,*(int *)(_DAT_2a22_e32f + 6) + 2,*(int *)(_DAT_2a22_e32f + 8) + 2,
                *(int *)(_DAT_2a22_e32f + 6) + 2,*(int *)(_DAT_2a22_e32f + 8) + -2,uVar1);
  FUN_1eea_0b5a(_DAT_2a22_a5f2,*(int *)(_DAT_2a22_e32f + 6) + 2,*(int *)(_DAT_2a22_e32f + 8) + -2,
                *(int *)(_DAT_2a22_e32f + 6) + -2,*(int *)(_DAT_2a22_e32f + 8) + -2,uVar1);
  FUN_1eea_0b5a(_DAT_2a22_a5f2,*(int *)(_DAT_2a22_e32f + 6) + -2,*(int *)(_DAT_2a22_e32f + 8) + -2,
                *(int *)(_DAT_2a22_e32f + 6) + -2,*(int *)(_DAT_2a22_e32f + 8) + 2,uVar1);
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar1 = 2;
  }
  else {
    uVar1 = 4;
  }
  FUN_1eea_0b5a(_DAT_2a22_a5f2,*(int *)(_DAT_2a22_e5c0 + 6) + -2,*(int *)(_DAT_2a22_e5c0 + 8) + 2,
                *(int *)(_DAT_2a22_e5c0 + 6) + 2,*(int *)(_DAT_2a22_e5c0 + 8) + 2,uVar1);
  FUN_1eea_0b5a(_DAT_2a22_a5f2,*(int *)(_DAT_2a22_e5c0 + 6) + 2,*(int *)(_DAT_2a22_e5c0 + 8) + 2,
                *(int *)(_DAT_2a22_e5c0 + 6) + 2,*(int *)(_DAT_2a22_e5c0 + 8) + -2,uVar1);
  FUN_1eea_0b5a(_DAT_2a22_a5f2,*(int *)(_DAT_2a22_e5c0 + 6) + 2,*(int *)(_DAT_2a22_e5c0 + 8) + -2,
                *(int *)(_DAT_2a22_e5c0 + 6) + -2,*(int *)(_DAT_2a22_e5c0 + 8) + -2,uVar1);
  FUN_1eea_0b5a(_DAT_2a22_a5f2,*(int *)(_DAT_2a22_e5c0 + 6) + -2,*(int *)(_DAT_2a22_e5c0 + 8) + -2,
                *(int *)(_DAT_2a22_e5c0 + 6) + -2,*(int *)(_DAT_2a22_e5c0 + 8) + 2,uVar1);
  FUN_19b7_00d3();
  return;
}



/* ovl_11::026176 FUN_ovl_11__026176 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__026176(void)

{
  int iVar1;
  undefined2 uVar2;
  int local_12 [2];
  int local_e [6];
  
  uVar2 = 0x252a;
  if (DAT_2a22_46ef != '\0') {
    uVar2 = thunk_EXT_FUN_0000_0000(0x252a);
    DAT_2a22_e335 = (char)uVar2;
    DAT_2a22_e336 = (char)((uint)uVar2 >> 8);
    if ((((DAT_2a22_e335 < -0x32) || ('2' < DAT_2a22_e335)) || (DAT_2a22_e336 < -0x32)) ||
       ('2' < DAT_2a22_e336)) {
      _DAT_2a22_a5d2 = _DAT_2a22_a5d2 + DAT_2a22_e335 * 0x10;
      _DAT_2a22_a5d4 = _DAT_2a22_a5d4 + DAT_2a22_e336 * 0x10;
    }
    _DAT_2a22_e335 = uVar2;
    iVar1 = thunk_EXT_FUN_0000_0000(0x1eea,1);
    if (iVar1 != 0) {
      DAT_2a22_a5be = DAT_2a22_a5be + '\x01';
      if (DAT_2a22_a5be == _DAT_2a22_e5c4) {
        DAT_2a22_a5be = '\0';
      }
      DAT_2a22_a5bc = ((undefined *)&DAT_2a22_a736)[DAT_2a22_a5be * 2];
    }
    uVar2 = 0x1eea;
    iVar1 = thunk_EXT_FUN_0000_0000(0x1eea,0);
    if (iVar1 != 0) {
      DAT_2a22_a5be = DAT_2a22_a5be + -1;
      if (DAT_2a22_a5be < '\0') {
        DAT_2a22_a5be = DAT_2a22_e5c4 + -1;
      }
      DAT_2a22_a5bc = ((undefined *)&DAT_2a22_a736)[DAT_2a22_a5be * 2];
    }
  }
  if (DAT_2a22_46ee != '\0') {
    uVar2 = 0x1090;
    FUN_1090_00a6(local_e,local_12);
    _DAT_2a22_a5d2 = _DAT_2a22_a5d2 + local_e[0] * 0xf;
    _DAT_2a22_a5d4 = _DAT_2a22_a5d4 + local_12[0] * 0xf;
    if ((DAT_2a22_d31c & 2) != 0) {
      DAT_2a22_a5be = DAT_2a22_a5be + '\x01';
      if (DAT_2a22_a5be == _DAT_2a22_e5c4) {
        DAT_2a22_a5be = '\0';
      }
      DAT_2a22_a5bc = ((undefined *)&DAT_2a22_a736)[DAT_2a22_a5be * 2];
    }
    if ((DAT_2a22_d31c & 1) != 0) {
      DAT_2a22_a5be = DAT_2a22_a5be + -1;
      if (DAT_2a22_a5be < '\0') {
        DAT_2a22_a5be = DAT_2a22_e5c4 + -1;
      }
      DAT_2a22_a5bc = ((undefined *)&DAT_2a22_a736)[DAT_2a22_a5be * 2];
    }
  }
  do {
    do {
      do {
        do {
          iVar1 = thunk_EXT_FUN_0000_0000(uVar2,0);
          uVar2 = 0x1eea;
        } while (iVar1 != 0);
        uVar2 = 0x1eea;
        iVar1 = thunk_EXT_FUN_0000_0000(0x1eea,1);
      } while (iVar1 != 0);
      uVar2 = 0x2017;
      iVar1 = FUN_1eea_12e8();
    } while (iVar1 != 0);
    uVar2 = 0x2017;
    iVar1 = FUN_1eea_12da();
  } while (iVar1 != 0);
  FUN_1eea_11b0();
  return;
}



/* ovl_11::0262e6 FUN_ovl_11__0262e6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_11__0262e6(void)

{
  int iVar1;
  undefined2 uVar2;
  int local_6;
  int local_4;
  
  local_6 = 0;
  if (DAT_2a22_a62a != '\0') {
    if (DAT_2a22_46ee != '\0') {
      iVar1 = FUN_1eea_12da();
      if (iVar1 != 0) {
        local_6 = 0x4d;
      }
      iVar1 = FUN_1eea_12e8();
      if (iVar1 != 0) {
        local_6 = 0x1b;
      }
      FUN_1eea_11b0();
    }
    if (DAT_2a22_46ef != '\0') {
      iVar1 = FUN_1090_14d2(0);
      if (iVar1 != 0) {
        local_6 = 0x4d;
      }
      iVar1 = FUN_1090_14d2(1);
      if (iVar1 != 0) {
        local_6 = 0x1b;
      }
    }
  }
  if ((local_6 == 0) && (local_6 = FUN_1951_00ea(), local_6 == 0)) {
    return 1;
  }
  if (local_6 == 0x53) {
    uVar2 = 0;
  }
  else {
    if (local_6 < 0x54) {
      if (local_6 == 0x1b) {
        if (DAT_2a22_a62a == '\0') {
          return 0;
        }
        DAT_2a22_a5bb = DAT_2a22_a5bb ^ 1;
        DAT_2a22_a62a = '\0';
        DAT_2a22_a5bf = 0;
        DAT_2a22_a5ba = 0xff;
        DAT_2a22_a62b = 1;
        FUN_1eea_0574(_DAT_2a22_a5f2,0,0,0x100,0x6a,0);
        DAT_3000_ce8c = 1;
        goto LAB_ovl_11__0263dc;
      }
      if (local_6 == 0x2c) {
        if (DAT_2a22_a5bb != 0) {
          if (_DAT_3000_cb7d != 0) goto LAB_ovl_11__0263dc;
          uVar2 = 0;
LAB_ovl_11__026416:
          _DAT_3000_cb7d = 1;
          FUN_ovl_11__0275c2(uVar2);
          goto LAB_ovl_11__0263dc;
        }
        DAT_2a22_a5be = DAT_2a22_a5be + -1;
        if (DAT_2a22_a5be < '\0') {
          DAT_2a22_a5be = DAT_2a22_e5c4 + -1;
        }
      }
      else if (local_6 == 0x2e) {
        if (DAT_2a22_a5bb != 0) {
          if (_DAT_3000_cb7d != 0) goto LAB_ovl_11__0263dc;
          uVar2 = 1;
          goto LAB_ovl_11__026416;
        }
        DAT_2a22_a5be = DAT_2a22_a5be + '\x01';
        if (DAT_2a22_a5be == _DAT_2a22_e5c4) {
          DAT_2a22_a5be = '\0';
        }
      }
      else {
        if (local_6 != 0x48) {
          if (local_6 == 0x49) {
            if ((DAT_2a22_a62a == '\0') &&
               (DAT_2a22_a62c = 1, *(char *)(_DAT_2a22_e5c0 + 0x2d) != '\0')) {
              DAT_2a22_a5bb = DAT_2a22_a5bb ^ 1;
              DAT_2a22_a62a = '\x01';
              if (DAT_2a22_a5bb == 0) {
                FUN_ovl_11__027044(0);
                DAT_2a22_a5bf = 0;
                DAT_2a22_a5ba = 0xff;
              }
            }
          }
          else if ((local_6 == 0x4d) && (DAT_2a22_a62a != '\0')) {
            FUN_ovl_11__027044(0);
            FUN_ovl_11__026e4e();
          }
          goto LAB_ovl_11__0263dc;
        }
        if (DAT_2a22_a5bb != 0) goto LAB_ovl_11__0263dc;
        for (local_4 = 0; local_4 < _DAT_2a22_e5c4; local_4 = local_4 + 1) {
          if (*(int *)((undefined *)&DAT_2a22_a736 + local_4 * 2) == 0) {
            DAT_2a22_a5be = (char)local_4;
          }
        }
      }
      DAT_2a22_a5bc = ((undefined *)&DAT_2a22_a736)[DAT_2a22_a5be * 2];
      goto LAB_ovl_11__0263dc;
    }
    if (local_6 != 0x11f) {
      if (local_6 < 0x120) {
        if (local_6 == 0x58) {
          _DAT_2a22_a5da = _DAT_2a22_a5da + -0x32;
        }
        else if (local_6 == 0x5a) {
          _DAT_2a22_a5da = _DAT_2a22_a5da + 0x32;
        }
      }
      else if (local_6 == 0x148) {
        _DAT_2a22_a5d4 = _DAT_2a22_a5d4 + -2000;
      }
      else {
        if (local_6 == 0x14b) {
          if ((DAT_2a22_a5bb == 0) || (_DAT_3000_cb7d != 0)) {
            _DAT_2a22_a5d2 = _DAT_2a22_a5d2 + -2000;
            goto LAB_ovl_11__0263dc;
          }
          uVar2 = 0;
        }
        else {
          if (local_6 != 0x14d) {
            if (local_6 == 0x150) {
              _DAT_2a22_a5d4 = _DAT_2a22_a5d4 + 2000;
            }
            goto LAB_ovl_11__0263dc;
          }
          if ((DAT_2a22_a5bb == 0) || (_DAT_3000_cb7d != 0)) {
            _DAT_2a22_a5d2 = _DAT_2a22_a5d2 + 2000;
            goto LAB_ovl_11__0263dc;
          }
          uVar2 = 1;
        }
        FUN_ovl_11__0275c2(uVar2);
        _DAT_3000_cb7d = 1;
      }
      goto LAB_ovl_11__0263dc;
    }
    uVar2 = 1;
  }
  iVar1 = dispatch_ovl_14_252a_0fb8(uVar2);
  if (iVar1 != 0) {
    return 0;
  }
LAB_ovl_11__0263dc:
  do {
    iVar1 = FUN_1951_00ea();
  } while (iVar1 != 0);
  return 1;
}



/* ovl_11::0265c6 ovl_11_entry_252a_1326 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_11_entry_252a_1326(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined *puVar10;
  int local_12;
  char local_10;
  int local_c;
  int local_a;
  int local_8;
  
  FUN_1505_02b8();
  _DAT_3000_ab25 = 2;
  FUN_1090_1428(0x1505);
  *_DAT_2a22_a5f2 = *_DAT_2a22_bd5e;
  FUN_17ba_04ea(0x63fa,0,0x100);
  uVar1 = DAT_2a22_5b2f;
  DAT_2a22_5b2f = 0;
  _DAT_2a22_4a62 = _DAT_2a22_a5f2;
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 8;
  }
  FUN_1eea_0574(_DAT_2a22_bd5e,0x20,1,0x100,0x6a,uVar2);
  DAT_3000_ce8d = 1;
  FUN_ovl_11__02722e(_DAT_2a22_4a62);
  uVar2 = _DAT_2a22_4a62[6];
  FUN_ovl_11__02724a(_DAT_2a22_4a62);
  uVar8 = _DAT_2a22_4a62[6];
  if (_DAT_2a22_47ac == 0) {
    _DAT_2a22_4a62[6] = uVar2;
    FUN_1505_0c52(0x1d,0x1d,0x7f,0x3c);
    _DAT_2a22_4a62[6] = uVar8;
    FUN_1505_0c52(0x1d,0x1d,0x7e,0x3b);
    FUN_ovl_11__027198(_DAT_2a22_bd5e,0x9c,0x32,0x640d);
    FUN_ovl_11__027198(_DAT_2a22_bd5e,0x94,0x38,0x6410);
    puVar10 = (undefined *)0x6417;
    uVar9 = 0x3e;
    uVar3 = 0x94;
  }
  else {
    if (DAT_2a22_e326 != DAT_2a22_46f4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_4a62,0x61,0x1e,_DAT_3000_ab4d);
    }
    _DAT_3000_cb32 = 0x60;
    FUN_ovl_11__02562a(0,0x48,0,0xfa,0xff,0xff,0x60,0x20);
    FUN_ovl_11__028234();
    FUN_ovl_11__027e12(0x7f,0x3c,0x1d);
    DAT_2a22_f1ba = 0;
    uVar3 = FUN_19c7_48e8(_DAT_2a22_47ac,0xa176,10);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar3);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x6403);
    if (1 < _DAT_2a22_47ac) {
      FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x640b);
    }
    puVar10 = (undefined *)&DAT_2a22_f1ba;
    uVar9 = 0x5d;
    uVar3 = 0x90;
  }
  FUN_ovl_11__027198(_DAT_2a22_bd5e,uVar3,uVar9,puVar10);
  _DAT_2a22_4a62[6] = 2;
  _DAT_2a22_4a62[7] = 2;
  FUN_ovl_11__026c9c(0,0x9f,0x51,0x641e);
  FUN_ovl_11__026c9c(1,0x32,0x51,0x642b);
  FUN_ovl_11__026c9c(2,0x9f,0x20,0x6434);
  FUN_ovl_11__026c9c(3,0x32,0x20,0x643f);
  local_8 = 0;
  local_a = 0;
  for (local_c = 0; local_c < 0x11; local_c = local_c + 1) {
    if (*(char *)(_DAT_2a22_e5c2 + local_c * 3 + 0x7c8a) != '\0') {
      if (((undefined *)&DAT_2a22_e3a5)[local_c * 0x1d] != '\0') {
        if (local_8 == 0) {
          FUN_ovl_11__027198(_DAT_2a22_bd5e,0x2a,9,0x6448);
          FUN_1eea_0b5a(_DAT_2a22_bd5e,0x2b,0x10,0x47,0x10,uVar2);
          FUN_1eea_0b5a(_DAT_2a22_bd5e,0x2a,0xf,0x46,0xf,uVar8);
        }
        FUN_ovl_11__0271f6(_DAT_2a22_bd5e,0x21,local_8 * 6 + 0x11,
                           *(undefined2 *)(local_c * 2 + 0x2ea),0x30);
        local_8 = local_8 + 1;
      }
      iVar4 = FUN_1000_08be(local_c + 2);
      if (iVar4 == 0) {
        if (local_a == 0) {
          FUN_ovl_11__027198(_DAT_2a22_bd5e,0xf7,9,0x6451);
          FUN_1eea_0b5a(_DAT_2a22_bd5e,0xf8,0x10,0x11a,0x10,uVar2);
          FUN_1eea_0b5a(_DAT_2a22_bd5e,0xf7,0xf,0x119,0xf,uVar8);
        }
        FUN_ovl_11__0271f6(_DAT_2a22_bd5e,0xf3,local_a * 6 + 0x11,
                           *(undefined2 *)(local_c * 2 + 0x2ea),0x2c);
        local_a = local_a + 1;
      }
    }
  }
  local_10 = -0x69;
  local_12 = 0;
  do {
    local_10 = local_10 + ((undefined *)&DAT_3000_d750)[local_12];
    local_12 = local_12 + 1;
  } while (local_12 < 0x40);
  if (((local_10 != '\0') || (iVar4 = FUN_19c7_486a(0xf0e2), iVar4 < 3)) ||
     (iVar4 = FUN_19c7_483e(0xf0e2,0xf101), iVar4 != 0)) {
    do {
      dispatch_ovl_05_22dc_0000();
    } while( true );
  }
  FUN_ovl_11__027198(_DAT_2a22_bd5e,0x102,0x41,0x645c);
  FUN_1eea_0b5a(_DAT_2a22_bd5e,0x103,0x48,0x111,0x48,uVar2);
  FUN_1eea_0b5a(_DAT_2a22_bd5e,0x102,0x47,0x110,0x47,uVar8);
  DAT_2a22_f1ba = 0;
  uVar9 = 10;
  uVar3 = 0xa176;
  iVar4 = FUN_19c7_4f62(_DAT_2a22_fac5 + _DAT_2a22_ded0,
                        ((int)_DAT_2a22_fac5 >> 0xf) + _DAT_2a22_ded2 +
                        (uint)CARRY2(_DAT_2a22_fac5,_DAT_2a22_ded0),0xc,0);
  uVar3 = FUN_19c7_48e8(iVar4,uVar3,uVar9);
  FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar3);
  iVar5 = FUN_19c7_486a((undefined *)&DAT_2a22_f1ba);
  ((undefined *)&DAT_2a22_f1ba)[iVar5] = *(undefined1 *)(iVar5 + -0x5297);
  *(undefined1 *)(iVar5 + -0x5297) = 0x2e;
  *(undefined1 *)(iVar5 + -0x5295) = 0;
  FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x6461);
  if (iVar4 < 1000) {
    uVar3 = 0xf5;
  }
  else {
    uVar3 = 0xf0;
  }
  FUN_ovl_11__027198(_DAT_2a22_bd5e,uVar3,0x49,(undefined *)&DAT_2a22_f1ba);
  FUN_ovl_11__027198(_DAT_2a22_bd5e,0x2e,0x41,0x6469);
  FUN_1eea_0b5a(_DAT_2a22_bd5e,0x2f,0x48,0x41,0x48,uVar2);
  FUN_1eea_0b5a(_DAT_2a22_bd5e,0x2e,0x47,0x40,0x47,uVar8);
  DAT_2a22_f1ba = 0;
  uVar2 = FUN_19c7_48e8(_DAT_2a22_fac1,0xa176,10);
  FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar2);
  FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x646f);
  if (_DAT_2a22_fac1 != 1) {
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x647b);
  }
  FUN_ovl_11__027198(_DAT_2a22_bd5e,0x22,0x49,(undefined *)&DAT_2a22_f1ba);
  if (DAT_2a22_e493 != '\0') {
    FUN_ovl_11__027198(_DAT_2a22_bd5e,0x22,0x4f,0x647d);
  }
  FUN_ovl_11__027198(_DAT_2a22_bd5e,0x7d,8,0x648b);
  iVar4 = *(int *)(_DAT_2a22_e5c2 * 2 + 0x6178);
  iVar6 = iVar4 >> 0xf;
  uVar8 = 0;
  uVar2 = 100;
  iVar5 = FUN_1090_01ae(100,0,iVar4,iVar6);
  uVar7 = FUN_19c7_4ffe(iVar5,iVar5 >> 0xf,uVar2,uVar8);
  local_c = FUN_19c7_4f62(uVar7,iVar4,iVar6);
  if (local_c < 0) {
    local_c = 0;
  }
  DAT_2a22_f1ba = 0;
  uVar2 = FUN_19c7_48e8(local_c,0xa176,10);
  FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar2);
  FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x649e);
  FUN_ovl_11__027198(_DAT_2a22_bd5e,0x99,0xe,(undefined *)&DAT_2a22_f1ba);
  FUN_1090_1428(0x19c7);
  do {
    iVar4 = FUN_1090_147c();
  } while (iVar4 == 0);
  local_c = 0;
  while ((local_c < 4 && (*(uint *)(_DAT_2a22_e5c2 * 2 + 0x6172) <= *(uint *)(local_c * 2 + 0x354)))
        ) {
    local_c = local_c + 1;
  }
  if ((local_c == 4) && (_DAT_2a22_47ac != 0)) {
    FUN_ovl_11__026d84();
  }
  DAT_2a22_a5ba = 0xff;
  DAT_3000_ce8d = 0;
  _DAT_2a22_4a62 = (undefined2 *)0x600;
  FUN_1090_1428(0x1090);
  DAT_2a22_5b2f = uVar1;
  FUN_ovl_11__027dac();
  return;
}



/* ovl_11::026c9c FUN_ovl_11__026c9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__026c9c(int param_1,int param_2,int param_3,undefined2 param_4)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(uint *)(param_1 * 2 + 0x354);
  if (uVar1 != 0) {
    iVar2 = (uVar1 - 10 & -(uint)(uVar1 < 10)) + 9;
    if (-1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1eea_00a4(0x252a,_DAT_2a22_a5f2,param_2 + iVar2 * 2,param_3 + iVar2 * -2,
                          *(undefined2 *)(param_1 * 2 + -0x3b2b));
    }
    FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,param_4);
    uVar3 = FUN_19c7_48e8(*(undefined2 *)(param_1 * 2 + 0x354),0xa176,10);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar3);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x64a0);
    uVar3 = FUN_19c7_48e8(*(undefined2 *)(_DAT_2a22_e5c2 * 2 + 0x6172),0xa176,10);
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar3);
    FUN_ovl_11__027198(_DAT_2a22_bd5e,param_2 + 0x20,param_3 + 0x14,(undefined *)&DAT_2a22_f1ba);
  }
  return;
}



/* ovl_11::026d84 FUN_ovl_11__026d84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__026d84(void)

{
  undefined2 uVar1;
  int iVar2;
  
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 8;
  }
  FUN_1eea_0574(_DAT_2a22_bd5e,0x20,1,0x100,0x6a,uVar1);
  FUN_ovl_11__0271f6(_DAT_2a22_bd5e,0x20,0x1a,0x64a2,0x100);
  FUN_ovl_11__0271f6(_DAT_2a22_bd5e,0x20,0x26,0x64b3,0x100);
  FUN_ovl_11__0271f6(_DAT_2a22_bd5e,0x20,0x2e,0x64ed,0x100);
  FUN_ovl_11__0271f6(_DAT_2a22_bd5e,0x20,0x36,0x6528,0x100);
  FUN_ovl_11__0271f6(_DAT_2a22_bd5e,0x20,0x3e,0x6561,0x100);
  FUN_1090_1428(0x1eea);
  do {
    iVar2 = FUN_1090_147c();
  } while (iVar2 == 0);
  _DAT_2a22_a5d0 = 1;
  return;
}



/* ovl_11::026e4e FUN_ovl_11__026e4e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__026e4e(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  int local_6;
  char local_4;
  
  DAT_2a22_a5bf = DAT_2a22_a5bf + -1;
  iVar3 = FUN_ovl_11__025d4e();
  if (iVar3 == 0) {
    uVar4 = 0x659d;
  }
  else if (_DAT_2a22_e32f == _DAT_2a22_e5c0) {
    if (_DAT_2a22_fac1 < 1) {
      uVar4 = 0x65c3;
    }
    else if (*(char *)(_DAT_2a22_e32f + 0x2e) == '\0') {
      uVar4 = 0x65db;
    }
    else if ((DAT_2a22_a5bf == -1) ||
            (*(char *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e32f + 0xc) * 0xb + -0x54bc) == -1))
    {
      uVar4 = 0x65f3;
    }
    else {
      if (*(char *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e32f + 0xc) * 0xb + -0x54bc) < '\x10')
      {
        local_4 = -0x69;
        local_6 = 0;
        do {
          local_4 = local_4 + ((undefined *)&DAT_3000_d750)[local_6];
          local_6 = local_6 + 1;
        } while (local_6 < 0x40);
        if (((local_4 != '\0') || (iVar3 = FUN_19c7_486a(0xf0e2), iVar3 < 3)) ||
           (iVar3 = FUN_19c7_483e(0xf0e2,0xf101), iVar3 != 0)) {
          do {
            dispatch_ovl_05_22dc_0000();
          } while( true );
        }
        cVar2 = *(char *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e32f + 0xc) * 0xb + -0x54bc);
        if (cVar2 == '\0') {
          _DAT_2a22_47a4 = _DAT_2a22_47a4 + 1;
        }
        else if (cVar2 == '\x01') {
          _DAT_2a22_47a6 = _DAT_2a22_47a6 + 1;
        }
        else if (cVar2 == '\x02') {
          _DAT_2a22_47a8 = _DAT_2a22_47a8 + 1;
        }
        else if (cVar2 == '\x03') {
          _DAT_2a22_47aa = _DAT_2a22_47aa + 1;
        }
        else if (cVar2 == '\x04') {
          _DAT_2a22_47ac = _DAT_2a22_47ac + 1;
        }
        pcVar1 = (char *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e32f + 0xc) * 0xb + -0x54bc);
        *pcVar1 = *pcVar1 + '\x10';
        _DAT_2a22_fac1 = _DAT_2a22_fac1 + -1;
        DAT_2a22_a5ba = 0xff;
        FUN_1951_017a(0x15);
        goto LAB_ovl_11__026fdc;
      }
      uVar4 = 0x660a;
    }
  }
  else {
    uVar4 = 0x65b2;
  }
  FUN_1505_18a0(uVar4,4);
LAB_ovl_11__026fdc:
  DAT_2a22_a5bf = DAT_2a22_a5bf + '\x01';
  return;
}



/* ovl_11::027024 FUN_ovl_11__027024 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__027024(void)

{
  _DAT_2a22_4a52 = _DAT_3000_ce82;
  _DAT_2a22_4a54 = _DAT_3000_ce84;
  _DAT_2a22_4a56 = _DAT_3000_ce86;
  _DAT_2a22_4a58 = _DAT_3000_ce88;
  _DAT_2a22_4a5c = _DAT_3000_ce8a;
  return;
}



/* ovl_11::027044 FUN_ovl_11__027044 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__027044(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  char local_6;
  char local_4;
  
  local_4 = '\0';
  iVar3 = 0;
  do {
    if (*(char *)(*(char *)(_DAT_2a22_e5c0 + 0xc) * 0x24 + iVar3 + -0x5081) != -1) {
      local_4 = (char)iVar3;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  if (DAT_2a22_a5bf == '\0') {
    local_6 = '\n';
    local_8 = local_4 * 8 + 0x1e;
  }
  else {
    local_6 = '\b';
    local_8 = local_4 * 8 + 0xe;
  }
  if (param_1 == 0) {
    iVar3 = local_6 * 2 + 1;
    thunk_EXT_FUN_0000_0000
              (0x252a,_DAT_2a22_479e,0x14,0x14,iVar3,iVar3,_DAT_2a22_4a62,
               ((_DAT_2a22_4a56 >> 1) - local_8) + DAT_2a22_a5bf * 0x11,
               ((_DAT_2a22_4a58 >> 1) - (int)local_6) + -5);
    FUN_1951_0006(1);
    return;
  }
  iVar3 = local_6 * 2 + 1;
  thunk_EXT_FUN_0000_0000
            (0x252a,_DAT_2a22_4a62,((_DAT_2a22_4a56 >> 1) - local_8) + DAT_2a22_a5bf * 0x11,
             ((_DAT_2a22_4a58 >> 1) - (int)local_6) + -5,iVar3,iVar3,_DAT_2a22_479e,0x14,0x14);
  iVar3 = local_6 * 2 + 1;
  iVar2 = ((_DAT_2a22_4a56 >> 1) - local_8) + DAT_2a22_a5bf * 0x11;
  iVar1 = (_DAT_2a22_4a58 >> 1) - (int)local_6;
  thunk_EXT_FUN_0000_0000
            (0x1eea,_DAT_2a22_479e,iVar2 + 0x25,iVar1 + 0x76,iVar3,iVar3,_DAT_2a22_4a62,iVar2,
             iVar1 + -5);
  return;
}



/* ovl_11::027198 FUN_ovl_11__027198 */

void __cdecl16far FUN_ovl_11__027198(int param_1,int param_2,int param_3,undefined2 param_4)

{
  *(undefined2 *)(param_1 + 10) = 0;
  FUN_ovl_11__02722e(param_1);
  thunk_EXT_FUN_0000_0000(0x252a,param_1,param_2 + 1,param_3 + 1,param_4);
  FUN_ovl_11__02724a(param_1);
  thunk_EXT_FUN_0000_0000(0x1eea,param_1,param_2,param_3,param_4);
  *(undefined2 *)(param_1 + 0xc) = 2;
  *(undefined2 *)(param_1 + 0xe) = 2;
  return;
}



/* ovl_11::0271f6 FUN_ovl_11__0271f6 */

void __cdecl16far
FUN_ovl_11__0271f6(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_1951_0230(param_1,param_4);
  FUN_ovl_11__027198(param_1,(param_5 - (iVar1 + 1)) / 2 + param_2,param_3,param_4);
  return;
}



/* ovl_11::02722e FUN_ovl_11__02722e */

void __cdecl16far FUN_ovl_11__02722e(int param_1)

{
  undefined2 uVar1;
  
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    uVar1 = 0x82;
  }
  else {
    uVar1 = 0;
  }
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  return;
}



/* ovl_11::02724a FUN_ovl_11__02724a */

void __cdecl16far FUN_ovl_11__02724a(int param_1)

{
  undefined2 uVar1;
  
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    uVar1 = 0x9c;
  }
  else {
    uVar1 = 0xf;
  }
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  return;
}



/* ovl_11::027268 FUN_ovl_11__027268 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__027268(int param_1)

{
  undefined2 uVar1;
  
  FUN_ovl_11__027198(_DAT_2a22_a606,100,0x41,0x6624);
  if (param_1 == 0) {
    FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,0x6630);
  }
  else {
    if ((*(byte *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e5c0 + 0xc) * 0xb + -0x54bd) & 0xf) == 4
       ) {
      uVar1 = 0x663b;
    }
    else if ((*(byte *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e5c0 + 0xc) * 0xb + -0x54bd) & 0xf)
             == 0) {
      uVar1 = 0x664c;
    }
    else if ((*(byte *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e5c0 + 0xc) * 0xb + -0x54bd) & 0xf)
             == 2) {
      uVar1 = 0x6659;
    }
    else if ((*(byte *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e5c0 + 0xc) * 0xb + -0x54bd) & 0xf)
             == 3) {
      uVar1 = 0x6662;
    }
    else if ((*(byte *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e5c0 + 0xc) * 0xb + -0x54bd) & 0xf)
             == 1) {
      uVar1 = 0x6669;
    }
    else {
      uVar1 = 0x666f;
    }
    FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,uVar1);
    if ('\x0f' < *(char *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e5c0 + 0xc) * 0xb + -0x54bd)) {
      FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x6674);
    }
  }
  FUN_ovl_11__027198(_DAT_2a22_a606,0xb4,0x41,(undefined *)&DAT_2a22_f1ba);
  return;
}



/* ovl_11::0273c6 FUN_ovl_11__0273c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__0273c6(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  
  cVar1 = *(char *)(_DAT_2a22_e5c0 + 0x2e);
  if (DAT_2a22_a5bf == '\0') {
    FUN_ovl_11__027198(_DAT_2a22_a606,0x78,0x32,0x6680);
    if (*(char *)(_DAT_2a22_e5c0 + 10) == '\x01') {
      iVar3 = _DAT_2a22_e5c0 + 0xe;
    }
    else {
      iVar3 = *(int *)(*(char *)(_DAT_2a22_e5c0 + 0x2c) * 2 + 0x61cc);
    }
    FUN_ovl_11__027198(_DAT_2a22_a606,200,0x32,iVar3);
    if (((*(char *)(_DAT_2a22_e5c0 + 0x31) == -1) || (*(char *)(_DAT_2a22_e5c0 + 0x2d) == '\0')) &&
       (*(char *)(*(char *)(_DAT_2a22_e5c0 + 0xc) * 0x24 + -0x5075) == -1)) {
      uVar4 = 0x66a7;
    }
    else {
      uVar4 = 0x6694;
    }
    FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,uVar4);
    FUN_ovl_11__027198(_DAT_2a22_a606,0x78,0x3c,(undefined *)&DAT_2a22_f1ba);
    return;
  }
  if ((*(char *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e5c0 + 0xc) * 0x24 + -0x5082) != -1) &&
     ('\0' < DAT_2a22_a5bf)) {
    FUN_ovl_11__027198(_DAT_2a22_a606,100,0x1e,0x66b8);
    FUN_ovl_11__027198(_DAT_2a22_a606,0xb4,0x1e,
                       *(undefined2 *)
                        (*(char *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e5c0 + 0xc) * 0x24 +
                                  -0x5082) * 2 + 0x62de));
    FUN_ovl_11__027198(_DAT_2a22_a606,100,0x28,0x66c9);
    cVar2 = *(char *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e5c0 + 0xc) * 0x24 + -0x5098);
    if (cVar2 == -1) {
      uVar4 = 0x66d7;
    }
    else {
      uVar4 = *(undefined2 *)(cVar2 * 2 + 0x62ce);
    }
    FUN_ovl_11__027198(_DAT_2a22_a606,0xb4,0x28,uVar4);
    FUN_ovl_11__027198(_DAT_2a22_a606,100,0x32,0x66dc);
    cVar2 = *(char *)((int)DAT_2a22_a5bf + *(char *)(_DAT_2a22_e5c0 + 0xc) * 0x24 + -0x508d);
    if (cVar2 == -1) {
      uVar4 = 0x66e9;
    }
    else {
      uVar4 = *(undefined2 *)(cVar2 * 2 + 0x62d6);
    }
    FUN_ovl_11__027198(_DAT_2a22_a606,0xb4,0x32,uVar4);
    FUN_ovl_11__027268(cVar1 != '\0');
  }
  return;
}



/* ovl_11::0275c2 FUN_ovl_11__0275c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__0275c2(char param_1)

{
  int iVar1;
  
  if (param_1 == '\0') {
    FUN_ovl_11__027044(0);
    if (DAT_2a22_a5bf == '\x01') {
      DAT_3000_ce8c = 1;
      DAT_2a22_a5bf = 0;
      return;
    }
    for (iVar1 = (int)DAT_2a22_a5bf; 0 < iVar1; iVar1 = iVar1 + -1) {
      if (*(char *)(*(char *)(_DAT_2a22_e5c0 + 0xc) * 0x24 + iVar1 + -0x5083) != -1) {
        DAT_2a22_a5bf = (char)iVar1 + -1;
        DAT_3000_ce8c = 1;
        return;
      }
    }
  }
  else {
    if (param_1 != '\x01') {
      return;
    }
    FUN_ovl_11__027044(0);
    for (iVar1 = (int)DAT_2a22_a5bf; iVar1 < 10; iVar1 = iVar1 + 1) {
      if (*(char *)(*(char *)(_DAT_2a22_e5c0 + 0xc) * 0x24 + iVar1 + -0x5081) != -1) {
        DAT_2a22_a5bf = (char)iVar1 + '\x01';
        DAT_3000_ce8c = 1;
        return;
      }
    }
  }
  return;
}



/* ovl_11::027662 FUN_ovl_11__027662 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__027662(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 local_a [2];
  int local_8 [3];
  
  uVar2 = 0x252a;
  if (DAT_2a22_46ee != '\0') {
    uVar2 = 0x1090;
    FUN_1090_00a6(local_8,local_a);
    if (local_8[0] < -0x28) {
      uVar1 = 0;
    }
    else {
      if (local_8[0] < 0x29) goto LAB_ovl_11__0276a1;
      uVar1 = 1;
    }
    FUN_ovl_11__0275c2(uVar1);
    _DAT_3000_cb7d = 1;
  }
LAB_ovl_11__0276a1:
  if (DAT_2a22_46ef != '\0') {
    _DAT_2a22_e335 = thunk_EXT_FUN_0000_0000(uVar2);
    if (DAT_2a22_e335 < -0x50) {
      uVar2 = 0;
    }
    else {
      if (DAT_2a22_e335 < 'Q') {
        return;
      }
      uVar2 = 1;
    }
    FUN_ovl_11__0275c2(uVar2);
    _DAT_3000_cb7d = 1;
  }
  return;
}



/* ovl_11::0276d8 ovl_11_entry_252a_2438 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ovl_11_entry_252a_2438(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  int local_14;
  char local_12;
  
  uVar2 = 0x252a;
  if ((DAT_2a22_e326 == DAT_2a22_46f3) || (DAT_2a22_e326 == DAT_2a22_46f2)) {
    uVar2 = 0x1eea;
    thunk_EXT_FUN_0000_0000
              (0x252a,*(undefined2 *)(_DAT_2a22_a5f4 * 2 + 0x34a),0x120,0x11,0x1e,0x19,
               _DAT_2a22_479e,0x120,0x11);
  }
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    thunk_EXT_FUN_0000_0000(uVar2,0x7858,0x7868);
  }
  local_12 = -0x69;
  local_14 = 0;
  do {
    local_12 = local_12 + ((undefined *)&DAT_3000_d750)[local_14];
    local_14 = local_14 + 1;
  } while (local_14 < 0x40);
  if (local_12 == '\0') {
    iVar1 = FUN_19c7_486a(0xf0e2);
    if (2 < iVar1) {
      iVar1 = FUN_19c7_483e(0xf0e2,0xf101);
      if (iVar1 == 0) {
        DAT_2a22_a62c = (undefined1)param_2;
        DAT_2a22_a62a = (undefined1)param_2;
        FUN_199e_0012();
        if (param_2 == 0) {
          FUN_1505_18a0(0x66f0,4);
        }
        FUN_ovl_11__0252a0();
        do {
          iVar1 = FUN_199e_000e();
        } while (iVar1 < 0x3c);
        thunk_EXT_FUN_0000_0000(0x199e,2,0);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479e,0,0,_DAT_3000_ab35);
      }
    }
  }
  do {
    dispatch_ovl_05_22dc_0000();
  } while( true );
}



/* ovl_11::027dac FUN_ovl_11__027dac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__027dac(void)

{
  undefined2 uVar1;
  
  if (1 < _DAT_2a22_e32c) {
    FUN_19c7_480c((undefined *)&DAT_2a22_f1ba,*(undefined2 *)(_DAT_2a22_e32c * 2 + 0x7946));
    if (_DAT_2a22_e32c == 2) {
      if (_DAT_2a22_e331 < 2) {
        uVar1 = 0x673a;
      }
      else {
        uVar1 = 0x673c;
      }
      FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,uVar1);
    }
    FUN_19c7_47cc((undefined *)&DAT_2a22_f1ba,0x673e);
    FUN_17ba_04ea((undefined *)&DAT_2a22_f1ba,0xc0,0x40);
  }
  return;
}



/* ovl_11::027e12 FUN_ovl_11__027e12 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__027e12(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  _DAT_2a22_57f0 = param_1;
  _DAT_2a22_57f2 = param_2;
  _DAT_3000_abc3 = param_3;
  FUN_ovl_11__027e42(param_3,param_3,param_1,param_2,0);
  return;
}



/* ovl_11::027e42 FUN_ovl_11__027e42 */

void __cdecl16far
FUN_ovl_11__027e42(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int local_26;
  int local_14;
  int local_12;
  
  local_12 = 0;
  local_14 = param_2;
  iVar10 = param_1 >> 0xf;
  lVar14 = FUN_19c7_4ffe(param_1,iVar10,param_1,iVar10);
  iVar7 = (int)((ulong)lVar14 >> 0x10);
  uVar13 = (uint)lVar14;
  iVar11 = param_2 >> 0xf;
  lVar15 = FUN_19c7_4ffe(param_2,iVar11,param_2,iVar11);
  iVar8 = (int)((ulong)lVar15 >> 0x10);
  uVar5 = (uint)lVar15;
  cVar9 = '\x02';
  lVar19 = lVar14;
  do {
    iVar6 = (int)lVar19 * 2;
    uVar12 = (int)((ulong)lVar19 >> 0x10) << 1 | (uint)((int)lVar19 < 0);
    lVar19 = CONCAT22(uVar12,iVar6);
    cVar9 = cVar9 + -1;
  } while (cVar9 != '\0');
  lVar4 = CONCAT22(((iVar7 << 1 | (uint)((int)uVar13 < 0)) + iVar7 + (uint)CARRY2(uVar13 * 2,uVar13)
                   ) * 2 | (uint)((int)(uVar13 * 3) < 0),uVar13 * 6);
  cVar9 = '\x02';
  lVar1 = lVar15;
  do {
    iVar7 = (int)lVar1 * 2;
    uVar13 = (int)((ulong)lVar1 >> 0x10) << 1 | (uint)((int)lVar1 < 0);
    lVar1 = CONCAT22(uVar13,iVar7);
    cVar9 = cVar9 + -1;
  } while (cVar9 != '\0');
  lVar2 = CONCAT22(((iVar8 << 1 | (uint)((int)uVar5 < 0)) + iVar8 + (uint)CARRY2(uVar5 * 2,uVar5)) *
                   2 | (uint)((int)(uVar5 * 3) < 0),uVar5 * 6);
  iVar8 = FUN_1edc_0099(lVar14 + lVar15);
  iVar8 = FUN_19c7_4f62(lVar14,iVar8,iVar8 >> 0xf);
  uVar16 = FUN_19c7_4ffe(param_2,iVar11,lVar14);
  lVar3 = lVar15 + CONCAT22(-((int)((ulong)uVar16 >> 0x10) + (uint)((int)uVar16 != 0)),-(int)uVar16)
  ;
  iVar11 = (int)lVar3;
  lVar3 = lVar14 + CONCAT22((int)((ulong)lVar3 >> 0x10) * 2 | (uint)(iVar11 < 0),iVar11 * 2);
  while (local_12 <= iVar8) {
    if (lVar3 < 0) {
      lVar17 = FUN_19c7_4ffe(local_12,local_12 >> 0xf,iVar7,uVar13);
      lVar3 = lVar17 + lVar2 + lVar3;
      local_12 = local_12 + 1;
    }
    else {
      FUN_ovl_11__0280d2(local_12,local_14,param_3,param_4,param_5);
      lVar17 = FUN_19c7_4ffe(local_14,local_14 >> 0xf,iVar6,uVar12);
      lVar18 = FUN_19c7_4ffe(local_12,local_12 >> 0xf,iVar7,uVar13);
      lVar3 = (lVar18 - lVar17) + lVar2 + lVar19 + lVar3;
      local_12 = local_12 + 1;
      local_14 = local_14 + -1;
    }
  }
  local_26 = 0;
  local_12 = param_1;
  local_14 = 0;
  iVar11 = FUN_1edc_0099(lVar15 + lVar14);
  iVar11 = FUN_19c7_4f62(lVar15,iVar11,iVar11 >> 0xf);
  uVar16 = FUN_19c7_4ffe(param_1,iVar10,lVar15);
  lVar14 = lVar14 + CONCAT22(-((int)((ulong)uVar16 >> 0x10) + (uint)((int)uVar16 != 0)),-(int)uVar16
                            );
  iVar10 = (int)lVar14;
  lVar15 = lVar15 + CONCAT22((int)((ulong)lVar14 >> 0x10) * 2 | (uint)(iVar10 < 0),iVar10 * 2);
  while (local_14 <= iVar11) {
    local_26 = local_26 + 1;
    if (lVar15 < 0) {
      lVar19 = FUN_19c7_4ffe(local_14,local_14 >> 0xf,iVar6,uVar12);
      lVar15 = lVar19 + lVar4 + lVar15;
      local_14 = local_14 + 1;
    }
    else {
      FUN_ovl_11__02811a(local_26,local_12,local_14,param_3,param_4,param_5);
      lVar19 = FUN_19c7_4ffe(local_12,local_12 >> 0xf,iVar7,uVar13);
      lVar14 = FUN_19c7_4ffe(local_14,local_14 >> 0xf,iVar6,uVar12);
      lVar15 = (lVar14 - lVar19) + lVar4 + lVar1 + lVar15;
      local_14 = local_14 + 1;
      local_12 = local_12 + -1;
      local_26 = 0;
    }
  }
  return;
}



/* ovl_11::0280d2 FUN_ovl_11__0280d2 */

void __cdecl16far
FUN_ovl_11__0280d2(int param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  FUN_ovl_11__02817e(param_3 + param_1,param_4 + param_2,param_3 - param_1,param_4 + param_2,param_5
                    );
  FUN_ovl_11__02817e(param_3 + param_1,param_4 - param_2,param_3 - param_1,param_4 - param_2,param_5
                    );
  return;
}



/* ovl_11::02811a FUN_ovl_11__02811a */

void __cdecl16far
FUN_ovl_11__02811a(int param_1,int param_2,int param_3,int param_4,int param_5,undefined2 param_6)

{
  param_3 = param_3 - (param_1 + -1);
  while (0 < param_1) {
    FUN_ovl_11__02817e(param_4 + param_2,param_5 + param_3,param_4 - param_2,param_5 + param_3,
                       param_6);
    if (param_3 != 0) {
      FUN_ovl_11__02817e(param_4 + param_2,param_5 - param_3,param_4 - param_2,param_5 - param_3,
                         param_6);
    }
    param_3 = param_3 + 1;
    param_1 = param_1 + -1;
  }
  return;
}



/* ovl_11::02817e FUN_ovl_11__02817e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__02817e(undefined2 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  
  _DAT_2a22_dc50 = *(int *)((undefined *)&DAT_2a22_7e16 + param_2 * 2) + _DAT_2a22_57f0;
  for (_DAT_2a22_dc4c = 0; _DAT_2a22_dc4c <= _DAT_2a22_57f0 - param_3;
      _DAT_2a22_dc4c = _DAT_2a22_dc4c + 1) {
    uVar1 = FUN_ovl_11__028262(-_DAT_2a22_dc4c,param_2 - _DAT_2a22_57f2);
    FUN_1eea_0b9f(_DAT_2a22_4a62,_DAT_2a22_57f0 - _DAT_2a22_dc4c,param_2,uVar1);
    uVar1 = FUN_ovl_11__028262(_DAT_2a22_dc4c,param_2 - _DAT_2a22_57f2);
    FUN_1eea_0b9f(_DAT_2a22_4a62,_DAT_2a22_57f0 + _DAT_2a22_dc4c,param_2,uVar1);
  }
  return;
}



/* ovl_11::028204 FUN_ovl_11__028204 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__028204(void)

{
  _DAT_2a22_ab9c = 0x4000;
  _DAT_2a22_ab9e = FUN_1ed2_006e(0x4000);
  _DAT_2a22_aba0 = _DAT_2a22_ab9e >> 0xf;
  _DAT_2a22_aba2 = FUN_1ed2_007e(_DAT_2a22_ab9c);
  _DAT_2a22_aba4 = _DAT_2a22_aba2 >> 0xf;
  return;
}



/* ovl_11::028234 FUN_ovl_11__028234 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_11__028234(void)

{
  _DAT_2a22_ab9c = CONCAT11(DAT_2a22_ab9d + '\x0f',DAT_2a22_ab9c);
  _DAT_2a22_ab9e = FUN_1ed2_006e(_DAT_2a22_ab9c);
  _DAT_2a22_aba0 = _DAT_2a22_ab9e >> 0xf;
  _DAT_2a22_aba2 = FUN_1ed2_007e(_DAT_2a22_ab9c);
  _DAT_2a22_aba4 = _DAT_2a22_aba2 >> 0xf;
  return;
}



/* ovl_11::028262 FUN_ovl_11__028262 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_ovl_11__028262(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  
  _DAT_2a22_dc52 = (_DAT_3000_abc3 * _DAT_3000_abc3 - param_1 * param_1) - param_2 * param_2;
  _DAT_2a22_dc54 = _DAT_2a22_dc52 >> 0xf;
  if (_DAT_2a22_dc54 < 0) {
    _DAT_2a22_dc54 = 0;
    _DAT_2a22_dc52 = 0;
  }
  iVar2 = _DAT_3000_abc3 * _DAT_3000_abc3;
  iVar4 = iVar2 >> 0xf;
  uVar6 = FUN_19c7_4ffe(_DAT_2a22_aba2,_DAT_2a22_aba4,_DAT_2a22_dc52,_DAT_2a22_dc54);
  _DAT_2a22_dc52 = FUN_19c7_4f62(uVar6,iVar2,iVar4);
  iVar4 = _DAT_3000_abc3 >> 0xf;
  iVar2 = _DAT_3000_abc3;
  uVar6 = FUN_19c7_4ffe(param_1,param_1 >> 0xf,_DAT_2a22_ab9e,_DAT_2a22_aba0);
  lVar7 = FUN_19c7_4f62(uVar6,iVar2,iVar4);
  _DAT_2a22_dc52 = _DAT_2a22_dc52 + lVar7;
  cVar3 = '\x05';
  lVar7 = _DAT_2a22_dc52;
  do {
    _DAT_2a22_dc56 = (int)lVar7 << 1;
    uVar5 = (int)((ulong)lVar7 >> 0x10) << 1 | (uint)((int)lVar7 < 0);
    lVar7 = CONCAT22(uVar5,_DAT_2a22_dc56);
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  cVar3 = '\x0f';
  do {
    uVar1 = uVar5 & 1;
    uVar5 = (int)uVar5 >> 1;
    _DAT_2a22_dc56 = (int)(CONCAT12(uVar1 != 0,_DAT_2a22_dc56) >> 1);
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  lVar7 = _DAT_2a22_dc52;
  if (DAT_3000_ce8d != '\0') {
    iVar2 = FUN_19c7_4e32();
    _DAT_2a22_dc56 = _DAT_2a22_dc56 + iVar2 % 2 + -1;
    lVar7 = _DAT_2a22_dc52;
  }
  _DAT_2a22_dc54 = (int)((ulong)lVar7 >> 0x10);
  _DAT_2a22_dc52 = (int)lVar7;
  if (_DAT_2a22_dc56 < 0) {
    _DAT_2a22_dc56 = 0;
  }
  if (0x1f < _DAT_2a22_dc56) {
    _DAT_2a22_dc56 = 0x1f;
  }
  if ((_DAT_3000_cb32 == 0x50) && (0xf < _DAT_2a22_dc56)) {
    _DAT_3000_cb32 = 0x80;
  }
  else if ((_DAT_3000_cb32 == 0x80) && (_DAT_2a22_dc56 < 0x10)) {
    _DAT_3000_cb32 = 0x50;
  }
  return _DAT_3000_cb32 + _DAT_2a22_dc56;
}


