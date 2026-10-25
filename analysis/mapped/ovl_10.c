/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_10::0252a0 ovl_10_entry_252a_0000 */

void __cdecl16far ovl_10_entry_252a_0000(void)

{
  undefined2 uVar1;
  int iVar2;
  int local_a;
  
  thunk_EXT_FUN_0000_0000(0x252a);
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    uVar1 = 0x532c;
  }
  else {
    uVar1 = 0x531f;
  }
  FUN_20a6_0232(2,uVar1);
  local_a = 0;
  uVar1 = 0x20a6;
  do {
    iVar2 = local_a * 8;
    uVar1 = thunk_EXT_FUN_0000_0000
                      (uVar1,2,*(int *)(iVar2 + 0x58c4),*(int *)(iVar2 + 0x58c6) + 1,
                       (*(int *)(iVar2 + 0x58c8) - *(int *)(iVar2 + 0x58c4)) + -1,
                       (*(int *)(iVar2 + 0x58ca) - *(int *)(iVar2 + 0x58c6)) + -1);
    *(undefined2 *)(local_a * 2 + -0x1c16) = uVar1;
    local_a = local_a + 1;
    uVar1 = 0x1eea;
  } while (local_a < 0x57);
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    uVar1 = 0x5345;
  }
  else {
    uVar1 = 0x5339;
  }
  FUN_20a6_0232(2,uVar1);
  local_a = 0;
  uVar1 = 0x20a6;
  do {
    iVar2 = local_a * 8;
    uVar1 = thunk_EXT_FUN_0000_0000
                      (uVar1,2,*(int *)(iVar2 + 0x5b7c) + 1,*(int *)(iVar2 + 0x5b7e) + 1,
                       (*(int *)(iVar2 + 0x5b80) - *(int *)(iVar2 + 0x5b7c)) + -1,
                       (*(int *)(iVar2 + 0x5b82) - *(int *)(iVar2 + 0x5b7e)) + -1);
    *(undefined2 *)(local_a * 2 + -0x1b68) = uVar1;
    local_a = local_a + 1;
    uVar1 = 0x1eea;
  } while (local_a < 0x14);
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* ovl_10::0253a8 FUN_ovl_10__0253a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ovl_10__0253a8(undefined2 param_1,int param_2,int param_3,int param_4)

{
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x252a,*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),param_3 + 1,param_4 + 1,
                      *(undefined2 *)(param_2 * 2 + -0x1b68));
}



/* ovl_10::0253d2 FUN_ovl_10__0253d2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ovl_10__0253d2(undefined2 param_1,int param_2,int param_3,int param_4)

{
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x252a,*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),param_3 + 1,param_4 + 1,
                      *(undefined2 *)(param_2 * 2 + -0x1c16));
}



/* ovl_10::0253fc FUN_ovl_10__0253fc */

void __cdecl16far FUN_ovl_10__0253fc(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    ((undefined *)&DAT_2a22_9893)[iVar1 * 0x10] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  iVar1 = 0;
  do {
    ((undefined *)&DAT_2a22_9953)[iVar1 * 0x10] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xc);
  iVar1 = 0;
  do {
    ((undefined *)&DAT_2a22_9a23)[iVar1 * 0x10] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xd);
  iVar1 = 0;
  do {
    ((undefined *)&DAT_2a22_9af3)[iVar1 * 0x10] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  iVar1 = 0;
  do {
    ((undefined *)&DAT_2a22_9b63)[iVar1 * 0x10] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  return;
}



/* ovl_10::025468 ovl_10_entry_252a_01c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_10_entry_252a_01c8(void)

{
  int local_4;
  
  FUN_ovl_10__0253fc();
  local_4 = 0;
  do {
    *(undefined2 *)((undefined *)&DAT_3000_ca3d + local_4 * 2) = 0;
    local_4 = local_4 + 1;
  } while (local_4 < 8);
  DAT_2a22_e4af = 0;
  DAT_2a22_a2a8 = 6;
  DAT_2a22_a2a9 = 2;
  DAT_2a22_a2aa = 6;
  DAT_2a22_a2ab = 2;
  DAT_2a22_a2ac = 2;
  DAT_2a22_a2ad = 5;
  DAT_2a22_a2ae = 6;
  DAT_2a22_a2af = 6;
  DAT_2a22_a2b0 = 1;
  DAT_2a22_a2b1 = 1;
  DAT_2a22_a2b2 = 0;
  FUN_19c7_4ce0((undefined *)&DAT_2a22_97dc,0x5352,10);
  FUN_19c7_4ce0((undefined *)&DAT_2a22_97fa,0x535c,0xc);
  FUN_19c7_4ce0((undefined *)&DAT_2a22_981e,0x5368,0xd);
  FUN_19c7_4ce0((undefined *)&DAT_2a22_9846,0x5376,0xd);
  FUN_19c7_4ce0((undefined *)&DAT_2a22_986e,0x5384,7);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_97f0,0,10);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_9812,0,0xc);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_9838,0,0xd);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_9860,0,0xd);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_987c,0,7);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_a2b4,0,0x42);
  _DAT_2a22_a2c8 = 0xf;
  FUN_1090_064e();
  FUN_1090_06b4();
  FUN_1697_0048();
  return;
}



/* ovl_10::0255b6 ovl_10_entry_252a_0316 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_10_entry_252a_0316(void)

{
  int local_4;
  
  FUN_ovl_10__0253fc();
  FUN_19c7_4d7c((undefined *)&DAT_3000_ca3d,0,8);
  DAT_2a22_a2a8 = 9;
  DAT_2a22_a2a9 = 4;
  DAT_2a22_a2aa = 10;
  DAT_2a22_a2ab = 4;
  DAT_2a22_a2ac = 4;
  DAT_2a22_a2ad = 8;
  DAT_2a22_a2ae = 8;
  DAT_2a22_a2af = 6;
  DAT_2a22_a2b0 = 1;
  DAT_2a22_a2b1 = 1;
  DAT_2a22_a2b2 = 0xf;
  FUN_19c7_4d7c((undefined *)&DAT_2a22_97dc,1,10);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_97fa,1,0xc);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_981e,1,0xd);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_9846,1,0xd);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_986e,1,7);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_97f0,0,10);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_9812,0,0xc);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_9838,0,0xd);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_9860,0,0xd);
  FUN_19c7_4d7c((undefined *)&DAT_2a22_987c,0,7);
  local_4 = 0;
  do {
    ((undefined *)&DAT_2a22_97e2)[local_4] = 3;
    *(undefined1 *)(local_4 * 0x10 + 0x5753) = 2;
    local_4 = local_4 + 1;
  } while (local_4 < 4);
  DAT_2a22_982a = 3;
  DAT_2a22_9a13 = 2;
  DAT_2a22_9a23 = 1;
  DAT_2a22_9852 = 2;
  _DAT_2a22_fac8 = 500;
  FUN_19c7_4d7c((undefined *)&DAT_2a22_a2b4,0,0x42);
  _DAT_2a22_a2c8 = 0xf;
  FUN_1090_064e();
  FUN_1090_06b4();
  FUN_1697_0048();
  return;
}



/* ovl_10::025736 FUN_ovl_10__025736 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_10__025736(void)

{
  undefined2 uVar1;
  
  if (DAT_2a22_97fa == '\0') {
    if (_DAT_3000_ca3d == 0) {
      if (DAT_2a22_9812 == '\0') goto LAB_ovl_10__025798;
      uVar1 = 3;
    }
    else {
      uVar1 = 0x13;
    }
    FUN_ovl_10__0253a8(0x252a,uVar1,0x54,9);
  }
  else {
    if (DAT_2a22_9806 == '\0') {
      uVar1 = _DAT_2a22_a0b6;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0b2 + _DAT_2a22_a0b4 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x54,9);
  }
LAB_ovl_10__025798:
  if (DAT_2a22_97fb == '\0') {
    if (_DAT_3000_ca3f == 0) {
      if (DAT_2a22_9813 == '\0') goto LAB_ovl_10__0257fa;
      uVar1 = 3;
    }
    else {
      uVar1 = 0x13;
    }
    FUN_ovl_10__0253a8(0x252a,uVar1,0x34,0x52);
  }
  else {
    if (DAT_2a22_9807 == '\0') {
      uVar1 = _DAT_2a22_a0b6;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0b2 + _DAT_2a22_a0b4 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x34,0x52);
  }
LAB_ovl_10__0257fa:
  if (DAT_2a22_97fc == '\x01') {
    if (DAT_2a22_9808 == '\0') {
      uVar1 = _DAT_2a22_a0b6;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0b2 + _DAT_2a22_a0b4 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x14,9);
  }
  else {
    if (_DAT_3000_ca41 == 0) {
      if (DAT_2a22_9814 == '\0') goto LAB_ovl_10__02585c;
      uVar1 = 3;
    }
    else {
      uVar1 = 0x13;
    }
    FUN_ovl_10__0253a8(0x252a,uVar1,0x14,9);
  }
LAB_ovl_10__02585c:
  if (DAT_2a22_97fd == '\0') {
    if (DAT_2a22_9815 != '\0') {
      FUN_ovl_10__0253a8(0x252a,8,0x59,0x20);
    }
  }
  else {
    if (DAT_2a22_9809 == '\0') {
      uVar1 = _DAT_2a22_a1b4;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1b0 + _DAT_2a22_a1b2 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x59,0x20);
  }
  if (DAT_2a22_97fe == '\0') {
    if (DAT_2a22_9816 != '\0') {
      FUN_ovl_10__0253a8(0x252a,8,0x39,0x41);
    }
  }
  else {
    if (DAT_2a22_980a == '\0') {
      uVar1 = _DAT_2a22_a1b4;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1b0 + _DAT_2a22_a1b2 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x39,0x41);
  }
  if (DAT_2a22_97ff == '\0') {
    if (DAT_2a22_9817 != '\0') {
      FUN_ovl_10__0253a8(0x252a,8,0x19,0x20);
    }
  }
  else {
    if (DAT_2a22_980b == '\0') {
      uVar1 = _DAT_2a22_a1b4;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1b0 + _DAT_2a22_a1b2 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x19,0x20);
  }
  if (DAT_2a22_9800 == '\0') {
    if (DAT_2a22_9818 != '\0') {
      FUN_ovl_10__0253a8(0x252a,0x12,0x57,0x2d);
    }
  }
  else {
    if (DAT_2a22_980c == '\0') {
      uVar1 = _DAT_2a22_a210;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a20c + _DAT_2a22_a20e * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x57,0x2d);
  }
  if (DAT_2a22_9801 == '\0') {
    if (DAT_2a22_9819 != '\0') {
      FUN_ovl_10__0253a8(0x252a,0x12,0x37,0x35);
    }
  }
  else {
    if (DAT_2a22_980d == '\0') {
      uVar1 = _DAT_2a22_a210;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a20c + _DAT_2a22_a20e * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x37,0x35);
  }
  if (DAT_2a22_9802 == '\0') {
    if (DAT_2a22_981a != '\0') {
      FUN_ovl_10__0253a8(0x252a,0x12,0x17,0x2d);
    }
  }
  else {
    if (DAT_2a22_980e == '\0') {
      uVar1 = _DAT_2a22_a210;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a20c + _DAT_2a22_a20e * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x17,0x2d);
  }
  if (DAT_2a22_9803 == '\0') {
    if (DAT_2a22_981b != '\0') {
      FUN_ovl_10__0253a8(0x252a,0xc,0x48,0x30);
    }
  }
  else {
    FUN_ovl_10__0253d2(0x252a,0x39,0x48,0x30);
  }
  if (DAT_2a22_9804 == '\0') {
    if (DAT_2a22_981c != '\0') {
      FUN_ovl_10__0253a8(0x252a,0xb,0x28,0x30);
    }
  }
  else {
    FUN_ovl_10__0253d2(0x252a,0x38,0x28,0x30);
  }
  if (DAT_2a22_9805 == '\0') {
    if (DAT_2a22_981d == '\0') {
      return;
    }
    FUN_ovl_10__0253a8(0x252a,1,0x2f,0x29);
  }
  else {
    if (DAT_2a22_9805 == '\x01') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a25e + _DAT_2a22_a260 * 2);
    }
    else {
      if (DAT_2a22_9805 != '\x02') {
        return;
      }
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a276 + _DAT_2a22_a278 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x2f,0x29);
  }
  return;
}



/* ovl_10::025af6 FUN_ovl_10__025af6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_10__025af6(void)

{
  undefined2 uVar1;
  undefined2 local_4;
  
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    local_4 = 0x13;
  }
  else if ((DAT_2a22_e326 == DAT_2a22_46f3) || (DAT_2a22_e326 == DAT_2a22_46f2)) {
    local_4 = 8;
  }
  else if (DAT_2a22_e326 == DAT_2a22_46f1) {
    local_4 = 0;
  }
  if (DAT_2a22_981e == '\0') {
    if (DAT_2a22_9838 != '\0') {
      FUN_ovl_10__0253a8(0x252a,5,0xde,10);
    }
  }
  else {
    if (DAT_2a22_981e == '\x01') {
      if (DAT_2a22_982b == '\0') {
        uVar1 = _DAT_2a22_a0f8;
      }
      else {
        uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0f4 + _DAT_2a22_a0f6 * 2);
      }
    }
    else {
      if (DAT_2a22_981e != '\x02') goto LAB_ovl_10__025b62;
      if (DAT_2a22_982b == '\0') {
        uVar1 = _DAT_2a22_a108;
      }
      else {
        uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a104 + _DAT_2a22_a106 * 2);
      }
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0xde,10);
  }
LAB_ovl_10__025b62:
  if (DAT_2a22_981f == '\0') {
    if (DAT_2a22_9839 != '\0') {
      FUN_ovl_10__0253a8(0x252a,5,0xde,0x3a);
    }
  }
  else {
    if (DAT_2a22_981f == '\x01') {
      if (DAT_2a22_982c == '\0') {
        uVar1 = _DAT_2a22_a0f8;
      }
      else {
        uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0f4 + _DAT_2a22_a0f6 * 2);
      }
    }
    else {
      if (DAT_2a22_981f != '\x02') goto LAB_ovl_10__025bee;
      if (DAT_2a22_982c == '\0') {
        uVar1 = _DAT_2a22_a108;
      }
      else {
        uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a104 + _DAT_2a22_a106 * 2);
      }
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0xde,0x3a);
  }
LAB_ovl_10__025bee:
  FUN_1eea_0b5a(*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),0xde,0x4d,0xe8,0x4d,local_4);
  if (DAT_2a22_9820 == '\0') {
    if (DAT_2a22_983a != '\0') {
      FUN_ovl_10__0253a8(0x1eea,5,0xba,0x3a);
    }
  }
  else {
    if (DAT_2a22_9820 == '\x01') {
      if (DAT_2a22_982d == '\0') {
        uVar1 = _DAT_2a22_a0f8;
      }
      else {
        uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0f4 + _DAT_2a22_a0f6 * 2);
      }
    }
    else {
      if (DAT_2a22_9820 != '\x02') goto LAB_ovl_10__025ca0;
      if (DAT_2a22_982d == '\0') {
        uVar1 = _DAT_2a22_a108;
      }
      else {
        uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a104 + _DAT_2a22_a106 * 2);
      }
    }
    FUN_ovl_10__0253d2(0x1eea,uVar1,0xba,0x3a);
  }
LAB_ovl_10__025ca0:
  FUN_1eea_0b5a(*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),0xba,0x4d,0xc4,0x4d,local_4);
  if (DAT_2a22_9821 == '\0') {
    if (DAT_2a22_983b != '\0') {
      FUN_ovl_10__0253a8(0x1eea,5,0xba,10);
    }
  }
  else {
    if (DAT_2a22_9821 == '\x01') {
      if (DAT_2a22_982e == '\0') {
        uVar1 = _DAT_2a22_a0f8;
      }
      else {
        uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0f4 + _DAT_2a22_a0f6 * 2);
      }
    }
    else {
      if (DAT_2a22_9821 != '\x02') goto LAB_ovl_10__025d52;
      if (DAT_2a22_982e == '\0') {
        uVar1 = _DAT_2a22_a108;
      }
      else {
        uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a104 + _DAT_2a22_a106 * 2);
      }
    }
    FUN_ovl_10__0253d2(0x1eea,uVar1,0xba,10);
  }
LAB_ovl_10__025d52:
  if (DAT_2a22_9822 == '\0') {
    if (DAT_2a22_983c != '\0') {
      FUN_ovl_10__0253a8(0x1eea,0xc,0xdc,0x20);
    }
  }
  else {
    FUN_ovl_10__0253d2(0x1eea,0x39,0xdc,0x20);
  }
  if (DAT_2a22_9823 == '\0') {
    if (DAT_2a22_983d != '\0') {
      FUN_ovl_10__0253a8(0x1eea,0xb,0xdc,0x2d);
    }
  }
  else {
    FUN_ovl_10__0253d2(0x1eea,0x38,0xdc,0x2d);
  }
  if (DAT_2a22_9824 == '\0') {
    if (DAT_2a22_983e != '\0') {
      FUN_ovl_10__0253a8(0x1eea,0xc,0xb8,0x2d);
    }
  }
  else {
    FUN_ovl_10__0253d2(0x1eea,0x39,0xb8,0x2d);
  }
  if (DAT_2a22_9825 == '\0') {
    if (DAT_2a22_983f != '\0') {
      FUN_ovl_10__0253a8(0x1eea,0xb,0xb8,0x20);
    }
  }
  else {
    FUN_ovl_10__0253d2(0x1eea,0x38,0xb8,0x20);
  }
  if (DAT_2a22_9826 == '\0') {
    if (_DAT_3000_ca43 == 0) {
      if (DAT_2a22_9840 == '\0') goto LAB_ovl_10__025edc;
      uVar1 = 3;
    }
    else {
      uVar1 = 0x13;
    }
    FUN_ovl_10__0253a8(0x1eea,uVar1,0xf0,9);
  }
  else {
    if (DAT_2a22_9833 == '\0') {
      uVar1 = _DAT_2a22_a0b6;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0b2 + _DAT_2a22_a0b4 * 2);
    }
    FUN_ovl_10__0253d2(0x1eea,uVar1,0xf0,9);
  }
LAB_ovl_10__025edc:
  if (DAT_2a22_9827 == '\0') {
    if (_DAT_3000_ca45 == 0) {
      if (DAT_2a22_9841 == '\0') goto LAB_ovl_10__025f3e;
      uVar1 = 3;
    }
    else {
      uVar1 = 0x13;
    }
    FUN_ovl_10__0253a8(0x1eea,uVar1,0xf0,0x39);
  }
  else {
    if (DAT_2a22_9834 == '\0') {
      uVar1 = _DAT_2a22_a0b6;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0b2 + _DAT_2a22_a0b4 * 2);
    }
    FUN_ovl_10__0253d2(0x1eea,uVar1,0xf0,0x39);
  }
LAB_ovl_10__025f3e:
  if (DAT_2a22_9828 == '\0') {
    if (_DAT_3000_ca47 == 0) {
      if (DAT_2a22_9842 == '\0') goto LAB_ovl_10__025fa0;
      uVar1 = 3;
    }
    else {
      uVar1 = 0x13;
    }
    FUN_ovl_10__0253a8(0x1eea,uVar1,0x9c,0x39);
  }
  else {
    if (DAT_2a22_9835 == '\0') {
      uVar1 = _DAT_2a22_a0b6;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0b2 + _DAT_2a22_a0b4 * 2);
    }
    FUN_ovl_10__0253d2(0x1eea,uVar1,0x9c,0x39);
  }
LAB_ovl_10__025fa0:
  if (DAT_2a22_9829 == '\0') {
    if (_DAT_3000_ca49 == 0) {
      if (DAT_2a22_9843 == '\0') goto LAB_ovl_10__026002;
      uVar1 = 3;
    }
    else {
      uVar1 = 0x13;
    }
    FUN_ovl_10__0253a8(0x1eea,uVar1,0x9c,9);
  }
  else {
    if (DAT_2a22_9836 == '\0') {
      uVar1 = _DAT_2a22_a0b6;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0b2 + _DAT_2a22_a0b4 * 2);
    }
    FUN_ovl_10__0253d2(0x1eea,uVar1,0x9c,9);
  }
LAB_ovl_10__026002:
  if (DAT_2a22_982a == '\0') {
    if (DAT_2a22_9844 == '\0') {
      return;
    }
    FUN_ovl_10__0253a8(0x1eea,2,0xc6,0x25);
  }
  else {
    if (DAT_2a22_982a == '\x01') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0be + _DAT_2a22_a0c0 * 2);
    }
    else if (DAT_2a22_982a == '\x02') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0d0 + _DAT_2a22_a0d2 * 2);
    }
    else {
      if (DAT_2a22_982a != '\x03') {
        return;
      }
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a0e2 + _DAT_2a22_a0e4 * 2);
    }
    FUN_ovl_10__0253d2(0x1eea,uVar1,0xc6,0x25);
  }
  return;
}



/* ovl_10::026080 FUN_ovl_10__026080 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_10__026080(void)

{
  undefined2 uVar1;
  
  if (DAT_2a22_9846 == '\0') {
    if (DAT_2a22_9860 != '\0') {
      FUN_ovl_10__0253a8(0x252a,6,0x46,0x71);
    }
  }
  else {
    if (DAT_2a22_9853 == '\0') {
      uVar1 = _DAT_2a22_a17c;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a178 + _DAT_2a22_a17a * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x46,0x71);
  }
  if (DAT_2a22_9847 == '\0') {
    if (DAT_2a22_9861 != '\0') {
      FUN_ovl_10__0253a8(0x252a,6,0x5a,0x8d);
    }
  }
  else {
    if (DAT_2a22_9854 == '\0') {
      uVar1 = _DAT_2a22_a17c;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a178 + _DAT_2a22_a17a * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x5a,0x8d);
  }
  if (DAT_2a22_9848 == '\0') {
    if (DAT_2a22_9862 != '\0') {
      FUN_ovl_10__0253a8(0x252a,6,0x46,0xa9);
    }
  }
  else {
    if (DAT_2a22_9855 == '\0') {
      uVar1 = _DAT_2a22_a17c;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a178 + _DAT_2a22_a17a * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x46,0xa9);
  }
  if (DAT_2a22_9849 == '\0') {
    if (DAT_2a22_9863 != '\0') {
      FUN_ovl_10__0253a8(0x252a,6,0x26,0xa9);
    }
  }
  else {
    if (DAT_2a22_9856 == '\0') {
      uVar1 = _DAT_2a22_a17c;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a178 + _DAT_2a22_a17a * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x26,0xa9);
  }
  if (DAT_2a22_984a == '\0') {
    if (DAT_2a22_9864 != '\0') {
      FUN_ovl_10__0253a8(0x252a,6,0x12,0x8d);
    }
  }
  else {
    if (DAT_2a22_9857 == '\0') {
      uVar1 = _DAT_2a22_a17c;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a178 + _DAT_2a22_a17a * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x12,0x8d);
  }
  if (DAT_2a22_984b == '\0') {
    if (DAT_2a22_9865 != '\0') {
      FUN_ovl_10__0253a8(0x252a,6,0x26,0x71);
    }
  }
  else {
    if (DAT_2a22_9858 == '\0') {
      uVar1 = _DAT_2a22_a17c;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a178 + _DAT_2a22_a17a * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x26,0x71);
  }
  if (DAT_2a22_984c == '\0') {
    if (DAT_2a22_9866 != '\0') {
      FUN_ovl_10__0253a8(0x252a,8,0x39,0x6c);
    }
  }
  else {
    if (DAT_2a22_9859 == '\0') {
      uVar1 = _DAT_2a22_a1b4;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1b0 + _DAT_2a22_a1b2 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x39,0x6c);
  }
  if (DAT_2a22_984d == '\0') {
    if (DAT_2a22_9867 != '\0') {
      FUN_ovl_10__0253a8(0x252a,8,0x59,0x7c);
    }
  }
  else {
    if (DAT_2a22_985a == '\0') {
      uVar1 = _DAT_2a22_a1b4;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1b0 + _DAT_2a22_a1b2 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x59,0x7c);
  }
  if (DAT_2a22_984e == '\0') {
    if (DAT_2a22_9868 != '\0') {
      FUN_ovl_10__0253a8(0x252a,8,0x59,0xa4);
    }
  }
  else {
    if (DAT_2a22_985b == '\0') {
      uVar1 = _DAT_2a22_a1b4;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1b0 + _DAT_2a22_a1b2 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x59,0xa4);
  }
  if (DAT_2a22_984f == '\0') {
    if (DAT_2a22_9869 != '\0') {
      FUN_ovl_10__0253a8(0x252a,8,0x3a,0xb5);
    }
  }
  else {
    if (DAT_2a22_985c == '\0') {
      uVar1 = _DAT_2a22_a1b4;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1b0 + _DAT_2a22_a1b2 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x3a,0xb5);
  }
  if (DAT_2a22_9850 == '\0') {
    if (DAT_2a22_986a != '\0') {
      FUN_ovl_10__0253a8(0x252a,8,0x19,0xa5);
    }
  }
  else {
    if (DAT_2a22_985d == '\0') {
      uVar1 = _DAT_2a22_a1b4;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1b0 + _DAT_2a22_a1b2 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x19,0xa5);
  }
  if (DAT_2a22_9851 == '\0') {
    if (DAT_2a22_986b != '\0') {
      FUN_ovl_10__0253a8(0x252a,8,0x19,0x7c);
    }
  }
  else {
    if (DAT_2a22_985e == '\0') {
      uVar1 = _DAT_2a22_a1b4;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1b0 + _DAT_2a22_a1b2 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x19,0x7c);
  }
  if (DAT_2a22_9852 == '\0') {
    if (DAT_2a22_986c == '\0') {
      return;
    }
    FUN_ovl_10__0253a8(0x252a,0,0x29,0x80);
  }
  else {
    if (DAT_2a22_9852 == '\x01') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a114 + _DAT_2a22_a116 * 2);
    }
    else {
      if (DAT_2a22_9852 != '\x02') {
        return;
      }
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a146 + _DAT_2a22_a148 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x29,0x80);
  }
  return;
}



/* ovl_10::026484 FUN_ovl_10__026484 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_10__026484(void)

{
  undefined2 uVar1;
  
  if (DAT_2a22_986e == '\0') {
    if (DAT_2a22_987c != '\0') {
      FUN_ovl_10__0253a8(0x252a,0xc,0x74,0x67);
    }
  }
  else {
    FUN_ovl_10__0253d2(0x252a,0x39,0x74,0x67);
  }
  if (DAT_2a22_986f == '\0') {
    if (DAT_2a22_987d != '\0') {
      FUN_ovl_10__0253a8(0x252a,0xb,0x84,0x67);
    }
  }
  else {
    FUN_ovl_10__0253d2(0x252a,0x38,0x84,0x67);
  }
  if (DAT_2a22_9870 == '\0') {
    if (DAT_2a22_987e != '\0') {
      FUN_ovl_10__0253a8(0x252a,1,0x73,0x78);
    }
  }
  else {
    if (DAT_2a22_9870 == '\x01') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a25e + _DAT_2a22_a260 * 2);
    }
    else {
      if (DAT_2a22_9870 != '\x02') goto LAB_ovl_10__02651a;
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a276 + _DAT_2a22_a278 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x73,0x78);
  }
LAB_ovl_10__02651a:
  if (DAT_2a22_9871 == '\0') {
    if (DAT_2a22_987f != '\0') {
      FUN_ovl_10__0253a8(0x252a,0x12,0x7b,0x84);
    }
  }
  else {
    FUN_ovl_10__0253d2(0x252a,*(undefined2 *)((undefined *)&DAT_2a22_a20c + _DAT_2a22_a20e * 2),0x7b
                       ,0x84);
  }
  if (DAT_2a22_9872 == '\0') {
    if (DAT_2a22_9880 != '\0') {
      FUN_ovl_10__0253a8(0x252a,6,0x7a,0x90);
    }
  }
  else {
    FUN_ovl_10__0253d2(0x252a,*(undefined2 *)((undefined *)&DAT_2a22_a178 + _DAT_2a22_a17a * 2),0x7a
                       ,0x90);
  }
  if (DAT_2a22_9873 == '\0') {
    if (DAT_2a22_9881 != '\0') {
      FUN_ovl_10__0253a8(0x252a,8,0x7d,0xa3);
    }
  }
  else {
    FUN_ovl_10__0253d2(0x252a,*(undefined2 *)((undefined *)&DAT_2a22_a1b0 + _DAT_2a22_a1b2 * 2),0x7d
                       ,0xa3);
  }
  if (DAT_2a22_9874 == '\0') {
    if (_DAT_3000_ca4b == 0) {
      if (DAT_2a22_9882 == '\0') {
        return;
      }
      uVar1 = 3;
    }
    else {
      uVar1 = 0x13;
    }
    FUN_ovl_10__0253a8(0x252a,uVar1,0x78,0xb0);
  }
  else {
    FUN_ovl_10__0253d2(0x252a,*(undefined2 *)((undefined *)&DAT_2a22_a0b2 + _DAT_2a22_a0b4 * 2),0x78
                       ,0xb0);
  }
  return;
}



/* ovl_10::026644 FUN_ovl_10__026644 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_10__026644(void)

{
  undefined2 uVar1;
  
  if (DAT_2a22_97dc == '\0') {
    if (DAT_2a22_97f0 != '\0') {
      FUN_ovl_10__0253a8(0x252a,1,0xc3,0x61);
    }
  }
  else {
    if (DAT_2a22_97dc == '\x01') {
      if (DAT_2a22_97e6 == '\0') {
        uVar1 = _DAT_2a22_a262;
      }
      else {
        uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a25e + _DAT_2a22_a260 * 2);
      }
    }
    else {
      if (DAT_2a22_97dc != '\x02') goto LAB_ovl_10__026672;
      if (DAT_2a22_97e6 == '\0') {
        uVar1 = _DAT_2a22_a27a;
      }
      else {
        uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a276 + _DAT_2a22_a278 * 2);
      }
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0xc3,0x61);
  }
LAB_ovl_10__026672:
  if (DAT_2a22_97dd == '\0') {
    if (DAT_2a22_97f1 != '\0') {
      FUN_ovl_10__0253a8(0x252a,1,0xc3,0x99);
    }
  }
  else {
    if (DAT_2a22_97dd == '\x01') {
      if (DAT_2a22_97e7 == '\0') {
        uVar1 = _DAT_2a22_a262;
      }
      else {
        uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a25e + _DAT_2a22_a260 * 2);
      }
    }
    else {
      if (DAT_2a22_97dd != '\x02') goto LAB_ovl_10__0266fe;
      if (DAT_2a22_97e7 == '\0') {
        uVar1 = _DAT_2a22_a27a;
      }
      else {
        uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a276 + _DAT_2a22_a278 * 2);
      }
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0xc3,0x99);
  }
LAB_ovl_10__0266fe:
  if (DAT_2a22_97de == '\0') {
    if (DAT_2a22_97f2 != '\0') {
      FUN_ovl_10__0253a8(0x252a,6,0xf6,0x79);
    }
  }
  else {
    if (DAT_2a22_97e8 == '\0') {
      uVar1 = _DAT_2a22_a17c;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a178 + _DAT_2a22_a17a * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0xf6,0x79);
  }
  if (DAT_2a22_97df == '\0') {
    if (DAT_2a22_97f3 != '\0') {
      FUN_ovl_10__0253a8(0x252a,6,0x9e,0x79);
    }
  }
  else {
    if (DAT_2a22_97e9 == '\0') {
      uVar1 = _DAT_2a22_a17c;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a178 + _DAT_2a22_a17a * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0x9e,0x79);
  }
  if (DAT_2a22_97e0 == '\0') {
    if (DAT_2a22_97f4 != '\0') {
      FUN_ovl_10__0253a8(0x252a,4,0xea,0x7a);
    }
  }
  else {
    if (DAT_2a22_97ea == '\0') {
      uVar1 = _DAT_2a22_a1be;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1ba + _DAT_2a22_a1bc * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0xea,0x7a);
  }
  if (DAT_2a22_97e1 == '\0') {
    if (DAT_2a22_97f5 != '\0') {
      FUN_ovl_10__0253a8(0x252a,4,0xb2,0x7a);
    }
  }
  else {
    if (DAT_2a22_97eb == '\0') {
      uVar1 = _DAT_2a22_a1be;
    }
    else {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1ba + _DAT_2a22_a1bc * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0xb2,0x7a);
  }
  if (DAT_2a22_97e5 == '\0') {
    if (DAT_2a22_97f9 != '\0') {
      FUN_ovl_10__0253a8(0x252a,7,0xca,0x6d);
    }
  }
  else {
    if (DAT_2a22_97e5 == '\x01') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a186 + _DAT_2a22_a188 * 2);
    }
    else if (DAT_2a22_97e5 == '\x02') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a192 + _DAT_2a22_a194 * 2);
    }
    else {
      if (DAT_2a22_97e5 != '\x03') goto LAB_ovl_10__0268c6;
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1a4 + _DAT_2a22_a1a6 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0xca,0x6d);
  }
LAB_ovl_10__0268c6:
  if (DAT_2a22_97e2 == '\0') {
    if (DAT_2a22_97f6 != '\0') {
      FUN_ovl_10__0253a8(0x252a,7,0xd6,0x79);
    }
  }
  else {
    if (DAT_2a22_97e2 == '\x01') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a186 + _DAT_2a22_a188 * 2);
    }
    else if (DAT_2a22_97e2 == '\x02') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a192 + _DAT_2a22_a194 * 2);
    }
    else {
      if (DAT_2a22_97e2 != '\x03') goto LAB_ovl_10__026942;
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1a4 + _DAT_2a22_a1a6 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0xd6,0x79);
  }
LAB_ovl_10__026942:
  if (DAT_2a22_97e3 == '\0') {
    if (DAT_2a22_97f7 != '\0') {
      FUN_ovl_10__0253a8(0x252a,7,0xca,0x85);
    }
  }
  else {
    if (DAT_2a22_97e3 == '\x01') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a186 + _DAT_2a22_a188 * 2);
    }
    else if (DAT_2a22_97e3 == '\x02') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a192 + _DAT_2a22_a194 * 2);
    }
    else {
      if (DAT_2a22_97e3 != '\x03') goto LAB_ovl_10__0269bc;
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1a4 + _DAT_2a22_a1a6 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0xca,0x85);
  }
LAB_ovl_10__0269bc:
  if (DAT_2a22_97e4 == '\0') {
    if (DAT_2a22_97f8 == '\0') {
      return;
    }
    FUN_ovl_10__0253a8(0x252a,7,0xbe,0x79);
  }
  else {
    if (DAT_2a22_97e4 == '\x01') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a186 + _DAT_2a22_a188 * 2);
    }
    else if (DAT_2a22_97e4 == '\x02') {
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a192 + _DAT_2a22_a194 * 2);
    }
    else {
      if (DAT_2a22_97e4 != '\x03') {
        return;
      }
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a1a4 + _DAT_2a22_a1a6 * 2);
    }
    FUN_ovl_10__0253d2(0x252a,uVar1,0xbe,0x79);
  }
  return;
}



/* ovl_10::026a74 FUN_ovl_10__026a74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_10__026a74(void)

{
  int iVar1;
  undefined2 uVar2;
  bool bVar3;
  
  FUN_ovl_10__0253d2(0x252a,0x1a,0x70,7);
  FUN_ovl_10__0253d2(0x252a,0x1a,0x70,0x17);
  FUN_ovl_10__0253d2(0x252a,0x1a,0x70,0x28);
  FUN_ovl_10__0253d2(0x252a,0x1a,0x70,0x39);
  iVar1 = _DAT_2a22_a324 + 1;
  if (_DAT_2a22_a324 == 0) {
    uVar2 = 0x39;
  }
  else if (_DAT_2a22_a324 == 1) {
    uVar2 = 0x28;
  }
  else if (_DAT_2a22_a324 == 2) {
    uVar2 = 0x17;
  }
  else {
    bVar3 = _DAT_2a22_a324 != 3;
    _DAT_2a22_a324 = iVar1;
    if (bVar3) goto LAB_ovl_10__026b02;
    uVar2 = 7;
  }
  _DAT_2a22_a324 = iVar1;
  FUN_ovl_10__0253d2(0x252a,0x1b,0x70,uVar2);
LAB_ovl_10__026b02:
  if (8 < _DAT_2a22_a324) {
    _DAT_2a22_a324 = 0;
  }
  return;
}



/* ovl_10::026b10 FUN_ovl_10__026b10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_10__026b10(void)

{
  int iVar1;
  
  iVar1 = _DAT_2a22_a0b4 + -2;
  _DAT_2a22_a0b4 = _DAT_2a22_a0b4 + 1;
  if (iVar1 == _DAT_2a22_a0b2) {
    _DAT_2a22_a0b4 = 3;
  }
  iVar1 = _DAT_2a22_a0c0 + -2;
  _DAT_2a22_a0c0 = _DAT_2a22_a0c0 + 1;
  if (iVar1 == _DAT_2a22_a0be) {
    _DAT_2a22_a0c0 = 3;
  }
  iVar1 = _DAT_2a22_a0d2 + -2;
  _DAT_2a22_a0d2 = _DAT_2a22_a0d2 + 1;
  if (iVar1 == _DAT_2a22_a0d0) {
    _DAT_2a22_a0d2 = 3;
  }
  iVar1 = _DAT_2a22_a0e4 + -2;
  _DAT_2a22_a0e4 = _DAT_2a22_a0e4 + 1;
  if (iVar1 == _DAT_2a22_a0e2) {
    _DAT_2a22_a0e4 = 3;
  }
  iVar1 = _DAT_2a22_a0f6 + -2;
  _DAT_2a22_a0f6 = _DAT_2a22_a0f6 + 1;
  if (iVar1 == _DAT_2a22_a0f4) {
    _DAT_2a22_a0f6 = 3;
  }
  iVar1 = _DAT_2a22_a106 + -2;
  _DAT_2a22_a106 = _DAT_2a22_a106 + 1;
  if (iVar1 == _DAT_2a22_a104) {
    _DAT_2a22_a106 = 3;
  }
  iVar1 = _DAT_2a22_a116 + -2;
  _DAT_2a22_a116 = _DAT_2a22_a116 + 1;
  if (iVar1 == _DAT_2a22_a114) {
    _DAT_2a22_a116 = 3;
  }
  iVar1 = _DAT_2a22_a148 + -2;
  _DAT_2a22_a148 = _DAT_2a22_a148 + 1;
  if (iVar1 == _DAT_2a22_a146) {
    _DAT_2a22_a148 = 3;
  }
  iVar1 = _DAT_2a22_a17a + -2;
  _DAT_2a22_a17a = _DAT_2a22_a17a + 1;
  if (iVar1 == _DAT_2a22_a178) {
    _DAT_2a22_a17a = 3;
  }
  iVar1 = _DAT_2a22_a188 + -2;
  _DAT_2a22_a188 = _DAT_2a22_a188 + 1;
  if (iVar1 == _DAT_2a22_a186) {
    _DAT_2a22_a188 = 3;
  }
  iVar1 = _DAT_2a22_a194 + -2;
  _DAT_2a22_a194 = _DAT_2a22_a194 + 1;
  if (iVar1 == _DAT_2a22_a192) {
    _DAT_2a22_a194 = 3;
  }
  iVar1 = _DAT_2a22_a1a6 + -2;
  _DAT_2a22_a1a6 = _DAT_2a22_a1a6 + 1;
  if (iVar1 == _DAT_2a22_a1a4) {
    _DAT_2a22_a1a6 = 3;
  }
  iVar1 = _DAT_2a22_a1b2 + -2;
  _DAT_2a22_a1b2 = _DAT_2a22_a1b2 + 1;
  if (iVar1 == _DAT_2a22_a1b0) {
    _DAT_2a22_a1b2 = 3;
  }
  iVar1 = _DAT_2a22_a1bc + -2;
  _DAT_2a22_a1bc = _DAT_2a22_a1bc + 1;
  if (iVar1 == _DAT_2a22_a1ba) {
    _DAT_2a22_a1bc = 3;
  }
  iVar1 = _DAT_2a22_a20e + -2;
  _DAT_2a22_a20e = _DAT_2a22_a20e + 1;
  if (iVar1 == _DAT_2a22_a20c) {
    _DAT_2a22_a20e = 3;
  }
  iVar1 = _DAT_2a22_a260 + -2;
  _DAT_2a22_a260 = _DAT_2a22_a260 + 1;
  if (iVar1 == _DAT_2a22_a25e) {
    _DAT_2a22_a260 = 3;
  }
  iVar1 = _DAT_2a22_a278 + -2;
  _DAT_2a22_a278 = _DAT_2a22_a278 + 1;
  if (iVar1 == _DAT_2a22_a276) {
    _DAT_2a22_a278 = 3;
  }
  iVar1 = _DAT_2a22_a290 + -2;
  _DAT_2a22_a290 = _DAT_2a22_a290 + 1;
  if (iVar1 == _DAT_2a22_a28e) {
    _DAT_2a22_a290 = 3;
  }
  return;
}



/* ovl_10::026c9e FUN_ovl_10__026c9e */

void __cdecl16far FUN_ovl_10__026c9e(void)

{
  int iVar1;
  int local_6;
  
  local_6 = 0;
  do {
    if (*(int *)((undefined *)&DAT_2a22_a2b4 + local_6 * 2 + *(char *)(local_6 + 0x5ec8) * 0x16) !=
        0) {
      iVar1 = (char)((undefined *)&DAT_2a22_a2f6)[local_6 + *(char *)(local_6 + 0x5ec8) * 0xb] *
              0x10;
      FUN_ovl_10__0253d2(0x252a,(int)*(char *)(iVar1 + 0x57ac),*(undefined2 *)(iVar1 + 0x57a4),
                         *(undefined2 *)(iVar1 + 0x57a6));
    }
    local_6 = local_6 + 1;
  } while (local_6 < 0xb);
  return;
}



/* ovl_10::026d06 FUN_ovl_10__026d06 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_ovl_10__026d06(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (param_3 <= local_4) {
      return 0;
    }
    piVar1 = (int *)(local_4 * 0x10 + param_4);
    if ((((*piVar1 <= param_1) && (piVar1[1] <= param_2)) && (param_1 <= piVar1[2])) &&
       (param_2 <= piVar1[3])) break;
    local_4 = local_4 + 1;
  }
  _DAT_3000_ca58 = piVar1;
  return local_4 + 1;
}



/* ovl_10::026d5e FUN_ovl_10__026d5e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_10__026d5e(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  char local_34;
  char local_32;
  char local_30;
  char local_2e;
  int local_2c;
  undefined1 local_2a [40];
  
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    local_2e = '\x02';
    local_30 = '\x01';
  }
  else if (((DAT_2a22_e326 == DAT_2a22_46f3) || (DAT_2a22_e326 == DAT_2a22_46f4)) ||
          (DAT_2a22_e326 == DAT_2a22_46f2)) {
    local_2e = '\n';
    local_30 = '\x02';
  }
  *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_30;
  *(undefined2 *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xe) = 0;
  uVar1 = FUN_ovl_10__026d06(param_1,param_2,0xb,0x57a4);
  switch(uVar1) {
  case 1:
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    if (_DAT_2a22_a2b4 == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    uVar3 = 0x5ed6;
    uVar1 = 0x5ede;
    iVar2 = _DAT_2a22_a2b4;
    break;
  case 2:
    if (DAT_2a22_a319 == '\0') {
      *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    }
    if (_DAT_2a22_a2b6 == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    FUN_19c7_4a80(local_2a,0x5ef8,_DAT_2a22_a2b6,0x5eea,local_34);
    thunk_EXT_FUN_0000_0000(0x19c7,*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),0x9f,0xad,local_2a);
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_30;
    if (DAT_2a22_a319 == '\x01') {
      *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    }
    if (_DAT_2a22_a2cc == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    FUN_19c7_4a80(local_2a,0x5f18,_DAT_2a22_a2cc,0x5f04,local_34);
    thunk_EXT_FUN_0000_0000(0x19c7,*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),0x9f,0xb3,local_2a);
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_30;
    if (DAT_2a22_a319 == '\x02') {
      *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    }
    if (_DAT_2a22_a2e2 == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    uVar3 = 0x5f24;
    uVar1 = 0x5f30;
    iVar2 = _DAT_2a22_a2e2;
    goto LAB_ovl_10__026f6c;
  case 3:
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    if (_DAT_2a22_a2b8 == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    uVar3 = 0x5f3c;
    uVar1 = 0x5f48;
    iVar2 = _DAT_2a22_a2b8;
    break;
  case 4:
    if (DAT_2a22_a31b == '\0') {
      *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    }
    if (_DAT_2a22_a2ba == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    FUN_19c7_4a80(local_2a,0x5f63,_DAT_2a22_a2ba,0x5f54,local_34);
    thunk_EXT_FUN_0000_0000(0x19c7,*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),0x9f,0xad,local_2a);
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_30;
    if (_DAT_2a22_a2d0 == 1) {
      local_34 = ' ';
    }
    else {
      local_34 = 's';
    }
    if (DAT_2a22_a31b == '\x01') {
      *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    }
    local_2c = (int)local_34;
    uVar3 = 0x5f6f;
    uVar1 = 0x5f83;
    iVar2 = _DAT_2a22_a2d0;
    goto LAB_ovl_10__02706a;
  case 5:
    if (DAT_2a22_a31c == '\0') {
      *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    }
    if (_DAT_2a22_a2bc == 1) {
      local_2c = 0x5f8f;
    }
    else {
      local_2c = 0x5f91;
    }
    FUN_19c7_4a80(local_2a,0x5fa5,_DAT_2a22_a2bc,0x5f95,local_2c);
    thunk_EXT_FUN_0000_0000(0x19c7,*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),0x9f,0xad,local_2a);
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_30;
    if (DAT_2a22_a31c == '\x01') {
      *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    }
    if (_DAT_2a22_a2d2 == 1) {
      local_2c = 0x5fb1;
    }
    else {
      local_2c = 0x5fb3;
    }
    uVar3 = 0x5fb7;
    uVar1 = 0x5fc8;
    iVar2 = _DAT_2a22_a2d2;
    goto LAB_ovl_10__02706a;
  case 6:
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    if (*(int *)((undefined *)&DAT_2a22_a2be + DAT_2a22_a31d * 0x16) == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    uVar3 = 0x5fd4;
    iVar2 = *(int *)((undefined *)&DAT_2a22_a2be + DAT_2a22_a31d * 0x16);
    uVar1 = 0x5fdd;
    break;
  case 7:
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    if (*(int *)((undefined *)&DAT_2a22_a2c0 + DAT_2a22_a31e * 0x16) == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    uVar3 = 0x5fe9;
    iVar2 = *(int *)((undefined *)&DAT_2a22_a2c0 + DAT_2a22_a31e * 0x16);
    uVar1 = 0x5ff1;
    break;
  case 8:
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    if (*(int *)((undefined *)&DAT_2a22_a2c2 + DAT_2a22_a31f * 0x16) == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    uVar3 = 0x5ffd;
    iVar2 = *(int *)((undefined *)&DAT_2a22_a2c2 + DAT_2a22_a31f * 0x16);
    uVar1 = 0x6007;
    break;
  case 9:
    if (DAT_2a22_a320 == '\0') {
      *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    }
    if (_DAT_2a22_a2c4 == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    FUN_19c7_4a80(local_2a,0x6021,_DAT_2a22_a2c4,0x6013,local_34);
    thunk_EXT_FUN_0000_0000(0x19c7,*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),0x9f,0xad,local_2a);
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_30;
    if (DAT_2a22_a320 == '\x01') {
      *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    }
    if (_DAT_2a22_a2da == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    FUN_19c7_4a80(local_2a,0x603e,_DAT_2a22_a2da,0x602d,local_34);
    thunk_EXT_FUN_0000_0000(0x19c7,*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),0x9f,0xb3,local_2a);
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_30;
    if (DAT_2a22_a320 == '\x02') {
      *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    }
    if (_DAT_2a22_a2f0 == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    uVar3 = 0x604a;
    uVar1 = 0x605a;
    iVar2 = _DAT_2a22_a2f0;
LAB_ovl_10__026f6c:
    FUN_19c7_4a80(local_2a,uVar1,iVar2,uVar3,local_34);
    uVar1 = 0xb9;
    goto LAB_ovl_10__026e2c;
  case 10:
    if (DAT_2a22_a321 == '\0') {
      *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    }
    if (_DAT_2a22_a2c6 == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    FUN_19c7_4a80(local_2a,0x6079,_DAT_2a22_a2c6,0x6066,local_34);
    thunk_EXT_FUN_0000_0000(0x19c7,*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),0x9f,0xad,local_2a);
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_30;
    if (DAT_2a22_a321 == '\x01') {
      *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    }
    if (_DAT_2a22_a2dc == 1) {
      local_34 = ' ';
    }
    else {
      local_34 = 's';
    }
    local_2c = (int)local_34;
    uVar3 = 0x6085;
    uVar1 = 0x6098;
    iVar2 = _DAT_2a22_a2dc;
LAB_ovl_10__02706a:
    FUN_19c7_4a80(local_2a,uVar1,iVar2,uVar3,local_2c);
    uVar1 = 0xb3;
    goto LAB_ovl_10__026e2c;
  case 0xb:
    *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_2e;
    if (_DAT_2a22_a2c8 == 1) {
      local_34 = 0x20;
    }
    else {
      local_34 = 0x73;
    }
    uVar3 = 0x60a4;
    uVar1 = 0x60b1;
    iVar2 = _DAT_2a22_a2c8;
    break;
  default:
    goto switchD_ovl_10__026de1_default;
  }
  FUN_19c7_4a80(local_2a,uVar1,iVar2,uVar3,local_34);
  uVar1 = 0xad;
LAB_ovl_10__026e2c:
  thunk_EXT_FUN_0000_0000(0x19c7,*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),0x9f,uVar1,local_2a);
switchD_ovl_10__026de1_default:
  local_32 = '\0';
  while( true ) {
    if ('\x06' < local_32) {
      return;
    }
    iVar2 = local_32 * 10;
    if (((*(int *)(iVar2 + 0x5c1c) <= param_1) && (*(int *)(iVar2 + 0x5c1e) <= param_2)) &&
       ((param_1 <= *(int *)(iVar2 + 0x5c20) && (param_2 <= *(int *)(iVar2 + 0x5c22))))) break;
    local_32 = local_32 + '\x01';
  }
  *(int *)(*(int *)(_DAT_2a22_97a0 * 2 + 0x34a) + 0xc) = (int)local_30;
  FUN_1951_0274(*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),0x9c,0xb3,
                *(undefined2 *)(local_32 * 10 + 0x5c24),0x6e);
  return;
}



/* ovl_10::0274ba FUN_ovl_10__0274ba */

void __cdecl16far FUN_ovl_10__0274ba(void)

{
  int local_8;
  int local_6;
  int local_4;
  
  local_6 = 0;
  do {
    if (9 < local_6) {
      return;
    }
    local_4 = (int)*(char *)(local_6 + 0x5ec8);
    if (*(int *)((undefined *)&DAT_2a22_a2b4 + local_6 * 2 + local_4 * 0x16) == 0) {
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        local_4 = local_4 + 1;
        if (local_4 == 3) {
          local_4 = 0;
        }
        if (*(int *)((undefined *)&DAT_2a22_a2b4 + local_6 * 2 + local_4 * 0x16) != 0) {
          *(undefined1 *)(local_6 + 0x5ec8) = (undefined1)local_4;
          break;
        }
      }
    }
    local_6 = local_6 + 1;
  } while( true );
}



/* ovl_10::027530 FUN_ovl_10__027530 */

void __cdecl16far FUN_ovl_10__027530(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int local_8;
  int local_6;
  
  iVar1 = FUN_ovl_10__026d06(param_1,param_2,10,0x57a4);
  local_6 = (int)*(char *)(iVar1 + 0x5ec7);
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return;
    }
    local_6 = local_6 + 1;
    if (local_6 == 3) {
      local_6 = 0;
    }
    if (*(int *)((undefined *)&DAT_2a22_a2b4 + (iVar1 + -1) * 2 + local_6 * 0x16) != 0) break;
    local_8 = local_8 + 1;
  }
  *(undefined1 *)(iVar1 + 0x5ec7) = (undefined1)local_6;
  return;
}



/* ovl_10::02759c FUN_ovl_10__02759c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_10__02759c(void)

{
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (7 < local_4) {
      if (*(int *)((undefined *)&DAT_2a22_a2b4 +
                  *(char *)(_DAT_3000_ca58 + 0xe) * 2 +
                  *(char *)(*(char *)(_DAT_3000_ca58 + 0xe) + 0x5ec8) * 0x16) == 0) {
        FUN_1951_017a(0x1b);
      }
      else {
        FUN_1951_017a(0x1a);
        *(int *)((undefined *)&DAT_2a22_a2b4 +
                *(char *)(_DAT_3000_ca58 + 0xe) * 2 +
                *(char *)(*(char *)(_DAT_3000_ca58 + 0xe) + 0x5ec8) * 0x16) =
             *(int *)((undefined *)&DAT_2a22_a2b4 +
                     *(char *)(_DAT_3000_ca58 + 0xe) * 2 +
                     *(char *)(*(char *)(_DAT_3000_ca58 + 0xe) + 0x5ec8) * 0x16) + -1;
        ((undefined *)&DAT_2a22_a2a8)[*(char *)(_DAT_3000_ca58 + 0xe)] =
             ((undefined *)&DAT_2a22_a2a8)[*(char *)(_DAT_3000_ca58 + 0xe)] + '\x01';
        *(char *)*(undefined2 *)(_DAT_3000_ca58 + 10) =
             *(char *)(*(char *)(_DAT_3000_ca58 + 0xe) + 0x5ec8) + '\x01';
        *(undefined1 *)(_DAT_3000_ca58 + 0xf) =
             *(undefined1 *)(*(char *)(_DAT_3000_ca58 + 0xe) + 0x5ec8);
      }
      if (*(char *)*(undefined2 *)(_DAT_3000_ca58 + 0xc) == '\x01') {
        *(undefined1 *)*(undefined2 *)(_DAT_3000_ca58 + 0xc) = 0;
      }
      return;
    }
    if ((*(int *)(local_4 * 2 + 0x5e48) == _DAT_3000_ca58) &&
       (*(int *)((undefined *)&DAT_3000_ca3d + local_4 * 2) != 0)) break;
    local_4 = local_4 + 1;
  }
  return;
}



/* ovl_10::02767a FUN_ovl_10__02767a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_10__02767a(void)

{
  ((undefined *)&DAT_2a22_a2a8)[*(char *)(_DAT_3000_ca58 + 0xe)] =
       ((undefined *)&DAT_2a22_a2a8)[*(char *)(_DAT_3000_ca58 + 0xe)] + -1;
  *(int *)((undefined *)&DAT_2a22_a2b4 +
          *(char *)(_DAT_3000_ca58 + 0xf) * 0x16 + *(char *)(_DAT_3000_ca58 + 0xe) * 2) =
       *(int *)((undefined *)&DAT_2a22_a2b4 +
               *(char *)(_DAT_3000_ca58 + 0xf) * 0x16 + *(char *)(_DAT_3000_ca58 + 0xe) * 2) + 1;
  *(undefined1 *)*(undefined2 *)(_DAT_3000_ca58 + 10) = 0;
  *(undefined1 *)*(undefined2 *)(_DAT_3000_ca58 + 0xc) = 0;
  return;
}



/* ovl_10::0276ba FUN_ovl_10__0276ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16far FUN_ovl_10__0276ba(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_ovl_10__026d06(param_1,param_2,0xc,0x5434);
  if (iVar1 == 0) {
    iVar1 = FUN_ovl_10__026d06(param_1,param_2,0xd,0x54f4);
    if (iVar1 == 0) {
      iVar1 = FUN_ovl_10__026d06(param_1,param_2,0xd,0x55c4);
      if (iVar1 == 0) {
        iVar1 = FUN_ovl_10__026d06(param_1,param_2,7,0x5694);
        if (iVar1 == 0) {
          iVar1 = FUN_ovl_10__026d06(param_1,param_2,10,0x5704);
          if (iVar1 == 0) {
            iVar1 = FUN_ovl_10__026d06(param_1,param_2,10,0x57a4);
            if (iVar1 == 0) {
              return 0x45;
            }
            return 2;
          }
        }
      }
    }
  }
  if (*(char *)*(undefined2 *)(_DAT_3000_ca58 + 10) == '\0') {
    return 0;
  }
  return 1;
}



/* ovl_10::027774 FUN_ovl_10__027774 */

undefined2 __cdecl16far FUN_ovl_10__027774(int param_1)

{
  undefined2 in_AX;
  
  if ((-0x10 < param_1) && (param_1 < 0x10)) {
    return 0;
  }
  if ((param_1 < -0xf) && (-0x28 < param_1)) {
    return 0xffff;
  }
  if ((0xf < param_1) && (param_1 < 0x28)) {
    return 1;
  }
  if ((param_1 < -0x27) && (-0x46 < param_1)) {
    return 0xfffc;
  }
  if ((0x27 < param_1) && (param_1 < 0x46)) {
    return 4;
  }
  if ((param_1 < -0x45) && (-100 < param_1)) {
    in_AX = 0xfff8;
  }
  else if ((param_1 < 0x46) || (99 < param_1)) {
    if (param_1 < -99) {
      in_AX = 0xffe0;
    }
    else if (99 < param_1) {
      in_AX = 0x20;
    }
  }
  else {
    in_AX = 8;
  }
  return in_AX;
}



/* ovl_10::02780c FUN_ovl_10__02780c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_10__02780c(void)

{
  if (_DAT_2a22_d318 < 0) {
    _DAT_2a22_d318 = 0;
  }
  if (_DAT_2a22_d31a < 0) {
    _DAT_2a22_d31a = 0;
  }
  if (0x13f < _DAT_2a22_d318) {
    _DAT_2a22_d318 = 0x13f;
  }
  if (199 < _DAT_2a22_d31a) {
    _DAT_2a22_d31a = 199;
  }
  return;
}



/* ovl_10::027844 FUN_ovl_10__027844 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ovl_10__027844(void)

{
  thunk_EXT_FUN_0000_0000
            (0x252a,_DAT_2a22_479e,0,0,0x140,200,*(undefined2 *)(_DAT_2a22_97a0 * 2 + 0x34a),0,0);
  FUN_ovl_10__025736();
  FUN_ovl_10__025af6();
  FUN_ovl_10__026080();
  FUN_ovl_10__026484();
  FUN_ovl_10__026644();
  FUN_ovl_10__026a74();
  FUN_ovl_10__026b10();
  FUN_ovl_10__0274ba();
  FUN_ovl_10__026c9e();
  FUN_ovl_10__026d5e(_DAT_2a22_d318,_DAT_2a22_d31a);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_97a0);
}



/* ovl_10::0278ca ovl_10_entry_252a_262a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_10_entry_252a_262a(char param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int local_c;
  int local_8;
  
  bVar1 = false;
  DAT_3000_ca57 = '\0';
  local_c = 0;
  local_8 = 0;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  FUN_1eea_11e7();
  thunk_EXT_FUN_0000_0000(0x1eea,0,0);
  thunk_EXT_FUN_0000_0000(0x1eea,1,0);
  uVar6 = DAT_2a22_5b2f;
  DAT_2a22_5b2f = DAT_2a22_e326 == DAT_2a22_46f4;
  if (DAT_2a22_e326 != DAT_2a22_46f4) {
    thunk_EXT_FUN_0000_0000(0x1eea,0xd,0xd);
  }
  FUN_1090_00d6(1);
  if (param_1 != '\0') {
    FUN_1951_017a(0x16);
  }
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    uVar7 = 0x60bd;
  }
  else {
    uVar7 = 0x60c8;
  }
  FUN_20a6_0232(0,uVar7);
  thunk_EXT_FUN_0000_0000(0x20a6,_DAT_2a22_479a,0,0,0x140,200,_DAT_2a22_479c,0,0);
  thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_479c,0,0,0x140,200,_DAT_2a22_479e,0,0);
  FUN_1eea_118a(300,100);
  FUN_1eea_11b7();
  while( true ) {
    uVar7 = 0x2017;
    iVar9 = FUN_1eea_12e8();
    if (iVar9 != 0) break;
    if (DAT_2a22_46ef != '\0') {
      uVar7 = 0x1eea;
      iVar9 = thunk_EXT_FUN_0000_0000(0x2017,1);
      if (iVar9 != 0) break;
    }
    if (DAT_3000_ca57 != '\0') break;
    if (DAT_2a22_46ef != '\0') {
      _DAT_2a22_e335 = thunk_EXT_FUN_0000_0000(uVar7);
      iVar9 = FUN_ovl_10__027774((int)DAT_2a22_e335);
      _DAT_2a22_d318 = _DAT_2a22_d318 + iVar9;
      iVar9 = FUN_ovl_10__027774((int)DAT_2a22_e336);
      _DAT_2a22_d31a = _DAT_2a22_d31a + iVar9;
      FUN_ovl_10__02780c();
    }
    if (DAT_2a22_5b2e == '\0') {
      iVar9 = FUN_1951_00ea();
      if (iVar9 != 0) {
        DAT_2a22_5b2e = '\x06';
        do {
          iVar8 = FUN_1951_00ea();
        } while (iVar8 != 0);
      }
      if (iVar9 == 0xd) {
        bVar1 = true;
LAB_ovl_10__027a83:
        bVar5 = false;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
        local_8 = 0;
        local_c = 0;
      }
      else if (iVar9 == 0x1b) {
        DAT_3000_ca57 = '\x01';
      }
      else {
        if (iVar9 == 0x148) {
          if (bVar2) {
            local_8 = -7;
          }
          else {
            local_8 = -2;
            local_c = 0;
          }
          bVar2 = true;
          bVar3 = false;
LAB_ovl_10__027b3b:
          bVar4 = false;
        }
        else {
          if (iVar9 == 0x14b) {
            if (bVar5) {
              local_c = -7;
            }
            else {
              local_c = -2;
              local_8 = 0;
            }
            bVar5 = true;
            bVar3 = false;
            bVar2 = false;
            bVar4 = false;
            goto LAB_ovl_10__027a97;
          }
          if (iVar9 != 0x14d) {
            if (iVar9 != 0x150) goto LAB_ovl_10__027a83;
            if (bVar3) {
              local_8 = 7;
            }
            else {
              local_8 = 2;
              local_c = 0;
            }
            bVar3 = true;
            bVar2 = false;
            goto LAB_ovl_10__027b3b;
          }
          if (bVar4) {
            local_c = 7;
          }
          else {
            local_c = 2;
            local_8 = 0;
          }
          bVar4 = true;
          bVar3 = false;
          bVar2 = false;
        }
        bVar5 = false;
      }
LAB_ovl_10__027a97:
      _DAT_2a22_d318 = _DAT_2a22_d318 + local_c;
      _DAT_2a22_d31a = _DAT_2a22_d31a + local_8;
    }
    FUN_ovl_10__02780c();
    FUN_1eea_11e7();
    FUN_1eea_118a(_DAT_2a22_d318,_DAT_2a22_d31a);
    FUN_1eea_11b7();
    uVar7 = 0x2017;
    iVar9 = FUN_1eea_12da();
    if (iVar9 != 0) {
LAB_ovl_10__027aeb:
      bVar1 = false;
      iVar9 = FUN_ovl_10__0276ba(_DAT_2a22_d318,_DAT_2a22_d31a);
      if (iVar9 == 0) {
        FUN_ovl_10__02759c();
      }
      else {
        if (iVar9 != 1) {
          if (iVar9 == 2) {
            FUN_ovl_10__027530(_DAT_2a22_d318,_DAT_2a22_d31a);
          }
          goto LAB_ovl_10__027bce;
        }
        FUN_ovl_10__02767a();
        FUN_1951_017a(0x1a);
      }
      FUN_1090_064e();
      FUN_1090_06b4();
LAB_ovl_10__027bce:
      do {
        uVar7 = 0x2017;
        iVar9 = FUN_1eea_12e8();
        if (iVar9 == 0) {
          uVar7 = 0x2017;
          iVar9 = FUN_1eea_12da();
          if (iVar9 == 0) {
            if (DAT_2a22_46ef == '\0') goto LAB_ovl_10__027c20;
            uVar7 = 0x1eea;
            iVar9 = thunk_EXT_FUN_0000_0000(0x2017,0);
            if (iVar9 == 0) goto LAB_ovl_10__027c20;
          }
        }
        FUN_ovl_10__027844(uVar7);
      } while( true );
    }
    if (DAT_2a22_46ef != '\0') {
      uVar7 = 0x1eea;
      iVar9 = thunk_EXT_FUN_0000_0000(0x2017,0);
      if (iVar9 != 0) goto LAB_ovl_10__027aeb;
    }
    if (bVar1) goto LAB_ovl_10__027aeb;
LAB_ovl_10__027c20:
    FUN_ovl_10__027844(uVar7);
  }
  uVar7 = 0x1eea;
  DAT_2a22_5b2f = uVar6;
  FUN_1eea_11e7();
  if (param_1 != '\0') {
    uVar7 = 0x1951;
    FUN_1951_017a(0);
  }
  thunk_EXT_FUN_0000_0000(uVar7,0,0);
  thunk_EXT_FUN_0000_0000(0x1eea,1,0);
  thunk_EXT_FUN_0000_0000(0x1eea,2,0);
  FUN_1eea_11b0();
  return;
}



/* ovl_10::027c80 ovl_10_entry_252a_29e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_10_entry_252a_29e0(void)

{
  FUN_19c7_4e20(_DAT_0000_046c);
  return;
}


