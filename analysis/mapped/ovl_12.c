/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_12::0252a0 FUN_ovl_12__0252a0 */

void __cdecl16far FUN_ovl_12__0252a0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 * 2;
    *(undefined2 *)((undefined *)&DAT_3000_cf03 + iVar2) =
         *(undefined2 *)
          ((undefined *)&DAT_2a22_a2b4 +
          (char)((undefined *)&DAT_2a22_ad7d)[iVar2] * 2 +
          (char)((undefined *)&DAT_2a22_ad7c)[iVar2] * 0x16);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x12);
  return;
}



/* ovl_12::0252f8 FUN_ovl_12__0252f8 */

void __cdecl16far FUN_ovl_12__0252f8(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    for (iVar4 = 0; iVar4 < 0xb; iVar4 = iVar4 + 1) {
      iVar2 = iVar3 * 0x16 + iVar4 * 2;
      uVar1 = *(undefined2 *)((undefined *)&DAT_2a22_a2b4 + iVar2);
      *(undefined2 *)((undefined *)&DAT_3000_cfdf + iVar2) = uVar1;
      *(undefined2 *)((undefined *)&DAT_3000_cf9d + iVar2) = uVar1;
    }
  }
  return;
}



/* ovl_12::02533c FUN_ovl_12__02533c */

void __cdecl16far FUN_ovl_12__02533c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    for (iVar3 = 0; iVar3 < 0xb; iVar3 = iVar3 + 1) {
      iVar1 = iVar2 * 0x16 + iVar3 * 2;
      *(undefined2 *)((undefined *)&DAT_2a22_a2b4 + iVar1) =
           *(undefined2 *)((undefined *)&DAT_3000_cf9d + iVar1);
    }
  }
  return;
}



/* ovl_12::025378 FUN_ovl_12__025378 */

void __cdecl16far FUN_ovl_12__025378(void)

{
  undefined2 uVar1;
  int iVar2;
  int local_a;
  
  thunk_EXT_FUN_0000_0000(0x252a);
  FUN_20a6_0232(1,0x7075);
  local_a = 0;
  uVar1 = 0x20a6;
  do {
    iVar2 = local_a * 8;
    uVar1 = thunk_EXT_FUN_0000_0000
                      (uVar1,1,*(int *)(iVar2 + 0x6cae),*(int *)(iVar2 + 0x6cb0) + 1,
                       (*(int *)(iVar2 + 0x6cb2) - *(int *)(iVar2 + 0x6cae)) + -1,
                       (*(int *)(iVar2 + 0x6cb4) - *(int *)(iVar2 + 0x6cb0)) + -1);
    *(undefined2 *)((undefined *)&DAT_3000_d029 + local_a * 2) = uVar1;
    local_a = local_a + 1;
    uVar1 = 0x1eea;
  } while (local_a < 0x1f);
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* ovl_12::0253f8 FUN_ovl_12__0253f8 */

/* WARNING: Removing unreachable block (ram,0x000254af) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__0253f8(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int local_10;
  
  local_10 = 0;
  FUN_1eea_11e7();
  FUN_1eea_0574(_DAT_2a22_479a,0,10,0x35,0x6a,0);
  iVar2 = (DAT_3000_ce9c - param_1) + -6;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (DAT_3000_ce9c == '\0') {
    iVar2 = 0x5a;
  }
  else {
    iVar2 = -((iVar2 * 0x5a) / (int)DAT_3000_ce9c + -0x5a);
  }
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar1 = 2;
  }
  else {
    uVar1 = 4;
  }
  FUN_1eea_0574(_DAT_2a22_479a,0x37,0x12,5,iVar2,uVar1);
  FUN_1eea_0574(_DAT_2a22_479a,0x37,iVar2 + 0x12,5,0x5a - iVar2,0);
  iVar2 = 0;
  do {
    if ((*(char *)(DAT_3000_ce9b * 0x2e + iVar2 + 0x6967) != '\0') &&
       (*(int *)((undefined *)&DAT_3000_cf03 + iVar2 * 2) != 0)) {
      if (param_1 <= local_10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,_DAT_2a22_b376,_DAT_2a22_b378,
                            *(undefined2 *)
                             ((undefined *)&DAT_3000_d029 +
                             (char)((undefined *)&DAT_2a22_ad64)[iVar2] * 2));
      }
      local_10 = local_10 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x12);
  if (DAT_2a22_46ee != '\0') {
    FUN_1eea_11b7();
  }
  return;
}



/* ovl_12::025580 FUN_ovl_12__025580 */

/* WARNING: Removing unreachable block (ram,0x0002564f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__025580(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  char local_12;
  int local_10;
  
  local_10 = 0;
  FUN_1eea_11e7();
  FUN_1eea_0574(_DAT_2a22_479a,0x101,10,0x31,0x69,0);
  iVar2 = (DAT_3000_ce9e - param_1) + -6;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (DAT_3000_ce9e == '\0') {
    iVar2 = 0x5a;
  }
  else {
    iVar2 = -((iVar2 * 0x5a) / (int)DAT_3000_ce9e + -0x5a);
  }
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar1 = 2;
  }
  else {
    uVar1 = 4;
  }
  FUN_1eea_0574(_DAT_2a22_479a,0xfb,0x12,5,iVar2,uVar1);
  FUN_1eea_0574(_DAT_2a22_479a,0xfb,iVar2 + 0x12,5,0x5a - iVar2,0);
  if (DAT_2a22_b4c4 == '\0') {
    local_12 = '\x13';
  }
  else {
    local_12 = '\x12';
  }
  iVar2 = 0;
  do {
    if (local_12 <= iVar2) {
      if (DAT_2a22_46ee != '\0') {
        FUN_1eea_11b7();
      }
      return;
    }
    if (*(char *)(DAT_3000_ce9b * 0x2e + iVar2 + 0x6950) != '\0') {
      if (param_1 <= local_10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,_DAT_2a22_b3a6,_DAT_2a22_b3a8,
                            *(undefined2 *)
                             ((undefined *)&DAT_3000_d029 +
                             (char)((undefined *)&DAT_2a22_ad64)[iVar2] * 2));
      }
      local_10 = local_10 + 1;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



/* ovl_12::02570a FUN_ovl_12__02570a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ovl_12__02570a(undefined2 param_1,int param_2)

{
  undefined2 uVar1;
  int local_4;
  
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  local_4 = *(int *)((undefined *)&DAT_2a22_ad5e + param_2 * 2) -
            *(int *)((undefined *)&DAT_2a22_ad5a + param_2 * 2);
  if (6 < local_4) {
    local_4 = 6;
  }
  if (local_4 < -6) {
    local_4 = -6;
  }
  FUN_1eea_11e7();
  FUN_1eea_0574(_DAT_2a22_479a,1,0x74,0x133,8,0);
  FUN_1eea_0b5a(_DAT_2a22_479a,10,0x75,300,0x75,uVar1);
  FUN_1eea_0b5a(_DAT_2a22_479a,10,0x7b,300,0x7b,uVar1);
  FUN_1eea_0b5a(_DAT_2a22_479a,10,0x75,10,0x7b,uVar1);
  FUN_1eea_0b5a(_DAT_2a22_479a,300,0x75,300,0x7b,uVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,*(undefined2 *)(local_4 * 2 + 0x70a2),0x75,
                      _DAT_3000_d055);
}



/* ovl_12::0258fa FUN_ovl_12__0258fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__0258fa(int param_1)

{
  if ((param_1 != 0x45) && (DAT_2a22_b4b6 < '\f')) {
    FUN_1951_017a(0x1a);
    FUN_1eea_11e7();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,
                        *(undefined2 *)((undefined *)&DAT_2a22_b3d6 + DAT_2a22_b4b6 * 4),
                        *(undefined2 *)((undefined *)&DAT_2a22_b3d8 + DAT_2a22_b4b6 * 4),
                        *(undefined2 *)
                         ((undefined *)&DAT_3000_d029 +
                         (char)((undefined *)&DAT_2a22_ad64)[param_1] * 2));
  }
  FUN_1951_017a(0x1b);
  return;
}



/* ovl_12::0259f6 FUN_ovl_12__0259f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__0259f6(int param_1)

{
  if ((param_1 != 0x45) && (DAT_2a22_b4b8 < '\f')) {
    FUN_1951_017a(0x1a);
    FUN_1eea_11e7();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,
                        *(undefined2 *)((undefined *)&DAT_2a22_b406 + DAT_2a22_b4b8 * 4),
                        *(undefined2 *)((undefined *)&DAT_2a22_b408 + DAT_2a22_b4b8 * 4),
                        *(undefined2 *)
                         ((undefined *)&DAT_3000_d029 +
                         (char)((undefined *)&DAT_2a22_ad64)[param_1] * 2));
  }
  FUN_1951_017a(0x1b);
  return;
}



/* ovl_12::025b0e FUN_ovl_12__025b0e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__025b0e(int param_1)

{
  if (((param_1 != 0x45) && (*(char *)(DAT_3000_ce9b * 0x2e + param_1 + 0x6967) != '\0')) &&
     (DAT_2a22_b4b7 < '\b')) {
    FUN_1951_017a(0x1a);
    FUN_1eea_11e7();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,*(undefined2 *)(DAT_2a22_b4b7 * 4 + 0x7006),
                        *(undefined2 *)(DAT_2a22_b4b7 * 4 + 0x7008),
                        *(undefined2 *)
                         ((undefined *)&DAT_3000_d029 +
                         (char)((undefined *)&DAT_2a22_ad64)[param_1] * 2));
  }
  FUN_1951_017a(0x1b);
  return;
}



/* ovl_12::025bee FUN_ovl_12__025bee */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__025bee(int param_1)

{
  if ((param_1 != 0x45) && (DAT_2a22_b4b9 < '\b')) {
    FUN_1951_017a(0x1a);
    FUN_1eea_11e7();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,*(undefined2 *)(DAT_2a22_b4b9 * 4 + 0x7026),
                        *(undefined2 *)(DAT_2a22_b4b9 * 4 + 0x7028),
                        *(undefined2 *)
                         ((undefined *)&DAT_3000_d029 +
                         (char)((undefined *)&DAT_2a22_ad64)[param_1] * 2));
  }
  FUN_1951_017a(0x1b);
  return;
}



/* ovl_12::025ca2 FUN_ovl_12__025ca2 */

/* WARNING: Removing unreachable block (ram,0x00025fb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__025ca2(char param_1,char param_2,char param_3)

{
  int iVar1;
  undefined2 uVar2;
  
  FUN_1eea_11e7();
  if (param_2 != '\0') {
    thunk_EXT_FUN_0000_0000(0x1eea,0,0);
    thunk_EXT_FUN_0000_0000(0x1eea,1,0);
    FUN_20a6_0232(0,0x7163);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x20a6,0);
  }
  if (param_3 != '\0') {
    FUN_1eea_0574(_DAT_2a22_479a,1,1,0x133,0x86,0);
  }
  FUN_1eea_0574(_DAT_2a22_479a,0x40,10,0xb6,0x69,0);
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_1eea_0574(_DAT_2a22_479a,1,0x8c,0x13a,0x3a,0x16);
  }
  if ((DAT_2a22_e326 == DAT_2a22_46f3) || (DAT_2a22_e326 == DAT_2a22_46f2)) {
    FUN_1eea_0574(_DAT_2a22_479a,1,0x8c,0x13a,0x3a,7);
  }
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    FUN_1eea_0574(_DAT_2a22_479a,1,0x8c,0x13a,0x3a,1);
  }
  FUN_1090_00d6(2);
  if (DAT_3000_cf01 == '\0') {
    iVar1 = 5;
  }
  else {
    iVar1 = 6;
  }
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1090,_DAT_2a22_479a,_DAT_2a22_b20e + -1,_DAT_2a22_b210 + -1,_DAT_3000_d05b
                       );
  }
  if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1090,_DAT_2a22_479a,0x35,0xb,_DAT_3000_d05f);
  }
  FUN_1090_00d6(1);
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  *(undefined2 *)(_DAT_2a22_479a + 0xc) = uVar2;
  thunk_EXT_FUN_0000_0000(0x1090,_DAT_2a22_479a,2,2,0x716f);
  thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_479a,0xfa,2,*(undefined2 *)(DAT_3000_ce9b * 2 + 0x6c8c));
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  FUN_1eea_0b5a(_DAT_2a22_479a,2,9,0x3c,9,uVar2);
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  FUN_1eea_0b5a(_DAT_2a22_479a,0xfa,9,0x130,9,uVar2);
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  FUN_1eea_0b5a(_DAT_2a22_479a,0x9c,0xb,0x9c,0x72,uVar2);
  if (DAT_2a22_46ee != '\0') {
    if (param_1 != '\0') {
      FUN_1eea_118a(0x1e,0x89);
    }
    FUN_1eea_11b7();
  }
  return;
}



/* ovl_12::025fe0 FUN_ovl_12__025fe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__025fe0(int param_1)

{
  int iVar1;
  
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    iVar1 = FUN_199e_000e();
    if (10 < iVar1) {
      FUN_1eea_11e7();
      param_1 = param_1 * 10;
      thunk_EXT_FUN_0000_0000
                (0x1eea,_DAT_2a22_479a,*(undefined2 *)((undefined *)&DAT_2a22_b20e + param_1),
                 *(undefined2 *)((undefined *)&DAT_2a22_b210 + param_1),
                 *(int *)((undefined *)&DAT_2a22_b212 + param_1) -
                 *(int *)((undefined *)&DAT_2a22_b20e + param_1),
                 *(int *)((undefined *)&DAT_2a22_b214 + param_1) -
                 *(int *)((undefined *)&DAT_2a22_b210 + param_1),
                 *(undefined2 *)(_DAT_2a22_b60c * 2 + 0x71b0),
                 *(undefined2 *)((_DAT_2a22_b60c ^ 1) * 2 + 0x71b0));
      if (DAT_2a22_46ee != '\0') {
        FUN_1eea_11b7();
      }
      _DAT_2a22_b60c = _DAT_2a22_b60c ^ 1;
      FUN_199e_0012();
    }
  }
  return;
}



/* ovl_12::02606e FUN_ovl_12__02606e */

int __cdecl16far FUN_ovl_12__02606e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char local_6;
  char local_4;
  
  local_4 = '\0';
  local_6 = '\0';
  iVar2 = 0;
  do {
    if (0x12 < iVar2) {
      return 0x45;
    }
    if (*(char *)(param_2 * 0x17 + DAT_3000_ce9b * 0x2e + iVar2 + 0x6950) != '\0') {
      if (param_2 == 0) {
        if (DAT_3000_cea1 <= local_6) {
          if ((int)DAT_3000_ce9e <= param_1 + DAT_3000_cea1) {
            return 0x45;
          }
          iVar1 = (int)local_4;
          local_4 = local_4 + '\x01';
          if (iVar1 == param_1) {
            return iVar2;
          }
        }
LAB_ovl_12__0260b4:
        local_6 = local_6 + '\x01';
      }
      else if (param_2 == 1) {
        if ((DAT_3000_cea0 <= local_6) && (*(int *)((undefined *)&DAT_3000_cf03 + iVar2 * 2) != 0))
        {
          if ((int)DAT_3000_ce9c <= param_1 + DAT_3000_cea0) {
            return 0x45;
          }
          iVar1 = (int)local_4;
          local_4 = local_4 + '\x01';
          if (iVar1 == param_1) {
            return iVar2;
          }
        }
        if (*(int *)((undefined *)&DAT_3000_cf03 + iVar2 * 2) != 0) goto LAB_ovl_12__0260b4;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



/* ovl_12::02611a FUN_ovl_12__02611a */

int __cdecl16far FUN_ovl_12__02611a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char local_4;
  
  local_4 = '\0';
  if (param_2 == 0) {
    for (iVar2 = 0x13; iVar2 < 0x17; iVar2 = iVar2 + 1) {
      if ((*(char *)(DAT_3000_ce9b * 0x2e + iVar2 + 0x6950) != '\0') &&
         (iVar1 = (int)local_4, local_4 = local_4 + '\x01', param_1 <= iVar1)) {
        return iVar2;
      }
    }
  }
  else if (param_2 == 1) {
    for (iVar2 = 0x13; iVar2 < 0x17; iVar2 = iVar2 + 1) {
      if ((*(int *)(iVar2 * 2 + -0x1709) != 0) &&
         (iVar1 = (int)local_4, local_4 = local_4 + '\x01', param_1 <= iVar1)) {
        return iVar2;
      }
    }
  }
  return 0x45;
}



/* ovl_12::02618e FUN_ovl_12__02618e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__02618e(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_DI;
  int local_6;
  
  if (param_1 == 0) {
    iVar2 = *(int *)((undefined *)&DAT_2a22_b436 + param_2 * 4);
    iVar1 = *(int *)((undefined *)&DAT_2a22_b438 + param_2 * 4);
  }
  else {
    if (param_1 != 1) goto LAB_ovl_12__0261c1;
    iVar2 = *(int *)((undefined *)&DAT_2a22_b446 + param_2 * 4);
    iVar1 = *(int *)((undefined *)&DAT_2a22_b448 + param_2 * 4);
  }
  unaff_DI = iVar2 + 2;
  local_6 = iVar1 + 2;
LAB_ovl_12__0261c1:
  iVar2 = 0;
  while( true ) {
    if (3 < iVar2) {
      return;
    }
    iVar1 = iVar2 * 4;
    if ((((*(int *)((undefined *)&DAT_2a22_b436 + iVar1) < unaff_DI) &&
         (unaff_DI < *(int *)((undefined *)&DAT_2a22_b436 + iVar1) + 0x14)) &&
        (*(int *)((undefined *)&DAT_2a22_b438 + iVar1) < local_6)) &&
       (local_6 < *(int *)((undefined *)&DAT_2a22_b438 + iVar1) + 0x11)) break;
    iVar1 = iVar2 * 4;
    if (((*(int *)((undefined *)&DAT_2a22_b446 + iVar1) < unaff_DI) &&
        (unaff_DI < *(int *)((undefined *)&DAT_2a22_b446 + iVar1) + 0x14)) &&
       ((*(int *)((undefined *)&DAT_2a22_b448 + iVar1) < local_6 &&
        (local_6 < *(int *)((undefined *)&DAT_2a22_b448 + iVar1) + 0x11)))) {
      if ((((DAT_2a22_b60f == iVar2) && (DAT_3000_cea3 == '\0')) && (DAT_3000_ce94 == '\0')) &&
         (DAT_3000_d06c == '\0')) {
        return;
      }
      FUN_1eea_0574(_DAT_2a22_479a,0x73,0x7f,0xbe,5,0);
      iVar1 = FUN_ovl_12__02611a(iVar2,0,0x13a);
      FUN_1951_0274(_DAT_2a22_479a,0,0x7f,*(undefined2 *)(iVar1 * 2 + 0x6c5e));
      DAT_2a22_b60e = 0xff;
      DAT_2a22_b60f = (char)iVar2;
      DAT_3000_ce94 = 0;
      DAT_3000_cea4 = 0;
      DAT_3000_d06c = 0;
      return;
    }
    iVar2 = iVar2 + 1;
  }
  if (((DAT_2a22_b60e == iVar2) && (DAT_3000_cea3 == '\0')) &&
     ((DAT_3000_ce94 == '\0' && (DAT_3000_d06c == '\0')))) {
    return;
  }
  FUN_1eea_0574(_DAT_2a22_479a,0x73,0x7f,0xbe,5,0);
  iVar1 = FUN_ovl_12__02611a(iVar2,1,0x13a);
  FUN_1951_0274(_DAT_2a22_479a,0,0x7f,*(undefined2 *)(iVar1 * 2 + 0x6c5e));
  DAT_2a22_b60e = (char)iVar2;
  DAT_2a22_b60f = 0xff;
  DAT_3000_ce94 = 0;
  DAT_3000_cea3 = 0;
  DAT_3000_d06c = 0;
  return;
}



/* ovl_12::026360 FUN_ovl_12__026360 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__026360(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_DI;
  int local_6;
  
  if (param_1 == 0) {
    iVar2 = *(int *)((undefined *)&DAT_2a22_b376 + param_2 * 8);
    iVar1 = *(int *)((undefined *)&DAT_2a22_b378 + param_2 * 8);
  }
  else {
    if (param_1 != 1) goto LAB_ovl_12__026393;
    iVar2 = *(int *)((undefined *)&DAT_2a22_b3a6 + param_2 * 8);
    iVar1 = *(int *)((undefined *)&DAT_2a22_b3a8 + param_2 * 8);
  }
  unaff_DI = iVar2 + 2;
  local_6 = iVar1 + 2;
LAB_ovl_12__026393:
  iVar2 = 0;
  while( true ) {
    if (5 < iVar2) {
      return;
    }
    iVar1 = iVar2 * 8;
    if ((((*(int *)((undefined *)&DAT_2a22_b376 + iVar1) < unaff_DI) &&
         (unaff_DI < *(int *)((undefined *)&DAT_2a22_b37a + iVar1))) &&
        (*(int *)((undefined *)&DAT_2a22_b378 + iVar1) < local_6)) &&
       (local_6 < *(int *)((undefined *)&DAT_2a22_b37c + iVar1))) break;
    iVar1 = iVar2 * 8;
    if (((*(int *)((undefined *)&DAT_2a22_b3a6 + iVar1) < unaff_DI) &&
        (unaff_DI < *(int *)((undefined *)&DAT_2a22_b3aa + iVar1))) &&
       ((*(int *)((undefined *)&DAT_2a22_b3a8 + iVar1) < local_6 &&
        (local_6 < *(int *)((undefined *)&DAT_2a22_b3ac + iVar1))))) {
      if ((((DAT_3000_cea4 == '\0') && (DAT_3000_ce94 == '\0')) && (DAT_2a22_b611 == iVar2)) &&
         (DAT_3000_d06c == '\0')) {
        return;
      }
      if (DAT_3000_cea1 + iVar2 < (int)DAT_3000_ce9e) {
        FUN_1eea_0574(_DAT_2a22_479a,0x73,0x7f,0xbe,5,0);
        iVar1 = FUN_ovl_12__02606e(iVar2,0,0x13a);
        FUN_1951_0274(_DAT_2a22_479a,0,0x7f,*(undefined2 *)(iVar1 * 2 + 0x6c5e));
        DAT_2a22_b610 = 0xff;
        DAT_2a22_b611 = (char)iVar2;
        DAT_3000_ce94 = 0;
        DAT_3000_cea4 = 0;
        DAT_3000_d06c = 0;
        return;
      }
      return;
    }
    iVar2 = iVar2 + 1;
  }
  if (((DAT_3000_cea2 == '\0') && (DAT_3000_ce94 == '\0')) &&
     ((DAT_2a22_b610 == iVar2 && (DAT_3000_d06c == '\0')))) {
    return;
  }
  if (DAT_3000_cea0 + iVar2 < (int)DAT_3000_ce9c) {
    FUN_1eea_0574(_DAT_2a22_479a,0x73,0x7f,0xbe,5,0);
    iVar1 = FUN_ovl_12__02606e(iVar2,1,0x13a);
    FUN_1951_0274(_DAT_2a22_479a,0,0x7f,*(undefined2 *)(iVar1 * 2 + 0x6c5e));
    DAT_2a22_b610 = (char)iVar2;
    DAT_2a22_b611 = 0xff;
    DAT_3000_ce94 = 0;
    DAT_3000_cea2 = 0;
    DAT_3000_d06c = 0;
    return;
  }
  return;
}



/* ovl_12::026542 FUN_ovl_12__026542 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__026542(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_3000_ce9a * 4 + (param_2 + -2) * 0x18 + param_1 + 0x71c2);
  if (cVar1 + -1 != (int)DAT_3000_ce9a) {
    DAT_3000_ce99 = cVar1 + -1;
    FUN_1eea_11e7();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,
                        *(int *)((undefined *)&DAT_2a22_b20e + DAT_3000_ce9a * 10) + -1,
                        *(int *)((undefined *)&DAT_2a22_b210 + DAT_3000_ce9a * 10) + -1,
                        _DAT_3000_d05b);
  }
  DAT_2a22_bc10 = 1;
  return;
}



/* ovl_12::0265f4 FUN_ovl_12__0265f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_ovl_12__0265f4(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (0x15 < iVar2) {
      return 0x45;
    }
    iVar1 = iVar2 * 10;
    if ((((*(int *)((undefined *)&DAT_2a22_b20e + iVar1) < _DAT_2a22_d318) &&
         (_DAT_2a22_d318 < *(int *)((undefined *)&DAT_2a22_b212 + iVar1))) &&
        (*(int *)((undefined *)&DAT_2a22_b210 + iVar1) < _DAT_2a22_d31a)) &&
       (_DAT_2a22_d31a < *(int *)((undefined *)&DAT_2a22_b214 + iVar1))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* ovl_12::02664e FUN_ovl_12__02664e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_ovl_12__02664e(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (0xd < iVar2) {
      return 0x45;
    }
    iVar1 = iVar2 * 10;
    if ((((*(int *)((undefined *)&DAT_2a22_b2ea + iVar1) < _DAT_2a22_d318) &&
         (_DAT_2a22_d318 < *(int *)((undefined *)&DAT_2a22_b2ee + iVar1))) &&
        (*(int *)((undefined *)&DAT_2a22_b2ec + iVar1) < _DAT_2a22_d31a)) &&
       (_DAT_2a22_d31a < *(int *)((undefined *)&DAT_2a22_b2f0 + iVar1))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* ovl_12::0266a8 FUN_ovl_12__0266a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__0266a8(char param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  if (DAT_2a22_e326 != DAT_2a22_46f4) {
    return;
  }
  iVar2 = FUN_199e_000e();
  if (iVar2 < 0xb) {
    return;
  }
  if (param_1 == '\0') {
    FUN_1eea_11e7();
    iVar2 = param_2 * 8;
    uVar6 = *(undefined2 *)((_DAT_2a22_b68a ^ 1) * 2 + 0x71b0);
    uVar5 = *(undefined2 *)(_DAT_2a22_b68a * 2 + 0x71b0);
    iVar3 = *(int *)((undefined *)&DAT_2a22_b37c + iVar2) -
            *(int *)((undefined *)&DAT_2a22_b378 + iVar2);
    iVar4 = *(int *)((undefined *)&DAT_2a22_b37a + iVar2) -
            *(int *)((undefined *)&DAT_2a22_b376 + iVar2);
    iVar1 = *(int *)((undefined *)&DAT_2a22_b378 + iVar2);
    iVar2 = *(int *)((undefined *)&DAT_2a22_b376 + iVar2);
  }
  else {
    if (param_1 != '\x01') goto LAB_ovl_12__02678c;
    FUN_1eea_11e7();
    iVar2 = param_2 * 8;
    uVar6 = *(undefined2 *)((_DAT_2a22_b68a ^ 1) * 2 + 0x71b0);
    uVar5 = *(undefined2 *)(_DAT_2a22_b68a * 2 + 0x71b0);
    iVar3 = *(int *)((undefined *)&DAT_2a22_b3ac + iVar2) -
            *(int *)((undefined *)&DAT_2a22_b3a8 + iVar2);
    iVar4 = *(int *)((undefined *)&DAT_2a22_b3aa + iVar2) -
            *(int *)((undefined *)&DAT_2a22_b3a6 + iVar2);
    iVar1 = *(int *)((undefined *)&DAT_2a22_b3a8 + iVar2);
    iVar2 = *(int *)((undefined *)&DAT_2a22_b3a6 + iVar2);
  }
  thunk_EXT_FUN_0000_0000
            (0x1eea,_DAT_2a22_479a,iVar2 + -1,iVar1 + -1,iVar4 + 1,iVar3 + 1,uVar5,uVar6);
  if (DAT_2a22_46ee != '\0') {
    FUN_1eea_11b7();
  }
LAB_ovl_12__02678c:
  _DAT_2a22_b68a = _DAT_2a22_b68a ^ 1;
  FUN_199e_0012();
  return;
}



/* ovl_12::02679c FUN_ovl_12__02679c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__02679c(char param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if (DAT_2a22_e326 != DAT_2a22_46f4) {
    return;
  }
  iVar2 = FUN_199e_000e();
  if (iVar2 < 0xb) {
    return;
  }
  if (param_1 == '\0') {
    FUN_1eea_11e7();
    uVar4 = *(undefined2 *)((_DAT_2a22_b68c ^ 1) * 2 + 0x71b0);
    uVar3 = *(undefined2 *)(_DAT_2a22_b68c * 2 + 0x71b0);
    iVar1 = *(int *)((undefined *)&DAT_2a22_b438 + param_2 * 4);
    iVar2 = *(int *)((undefined *)&DAT_2a22_b436 + param_2 * 4);
  }
  else {
    if (param_1 != '\x01') goto LAB_ovl_12__026868;
    FUN_1eea_11e7();
    uVar4 = *(undefined2 *)((_DAT_2a22_b68c ^ 1) * 2 + 0x71b0);
    uVar3 = *(undefined2 *)(_DAT_2a22_b68c * 2 + 0x71b0);
    iVar1 = *(int *)((undefined *)&DAT_2a22_b448 + param_2 * 4);
    iVar2 = *(int *)((undefined *)&DAT_2a22_b446 + param_2 * 4);
  }
  thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_479a,iVar2 + -1,iVar1 + -1,0x15,0x12,uVar3,uVar4);
  if (DAT_2a22_46ee != '\0') {
    FUN_1eea_11b7();
  }
LAB_ovl_12__026868:
  _DAT_2a22_b68c = _DAT_2a22_b68c ^ 1;
  FUN_199e_0012();
  return;
}



/* ovl_12::026878 FUN_ovl_12__026878 */

void __cdecl16far FUN_ovl_12__026878(char param_1,char param_2,int *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == '\0') {
    if (param_4 == '\0') {
      if (param_2 == '\0') {
        if ((*param_3 == 0) && ('\0' < DAT_3000_cea0)) {
          DAT_3000_cea0 = DAT_3000_cea0 + -1;
          FUN_ovl_12__0253f8((int)DAT_3000_cea0);
        }
      }
      else if ((*param_3 == 0) && ('\0' < DAT_3000_cea1)) {
        DAT_3000_cea1 = DAT_3000_cea1 + -1;
        FUN_ovl_12__025580((int)DAT_3000_cea1);
      }
      if (0 < *param_3) {
        *param_3 = *param_3 + -1;
        return;
      }
    }
    else {
      *param_3 = *param_3 + -1;
      if (*param_3 < 0) {
        *param_3 = 0;
        return;
      }
    }
  }
  else {
    if (param_1 != '\x01') {
      return;
    }
    if (param_4 == '\0') {
      if (param_2 == '\0') {
        iVar2 = *param_3;
        if (4 < iVar2) {
          if ((int)DAT_3000_ce9c - (int)DAT_3000_cea0 < 7) {
            return;
          }
          DAT_3000_cea0 = DAT_3000_cea0 + '\x01';
          FUN_ovl_12__0253f8((int)DAT_3000_cea0);
          return;
        }
        cVar1 = DAT_3000_ce9c;
      }
      else {
        iVar2 = *param_3;
        if (4 < iVar2) {
          if ((int)DAT_3000_ce9e - (int)DAT_3000_cea1 < 7) {
            return;
          }
          DAT_3000_cea1 = DAT_3000_cea1 + '\x01';
          FUN_ovl_12__025580((int)DAT_3000_cea1);
          return;
        }
        cVar1 = DAT_3000_ce9e;
      }
      if (iVar2 + 1 < (int)cVar1) {
LAB_ovl_12__02691a:
        *param_3 = *param_3 + 1;
        return;
      }
    }
    else {
      if (param_2 == '\0') {
        cVar1 = DAT_3000_ce9d;
      }
      else {
        cVar1 = DAT_3000_ce9f;
      }
      if (*param_3 + 1 < (int)cVar1) goto LAB_ovl_12__02691a;
    }
  }
  return;
}



/* ovl_12::02699a FUN_ovl_12__02699a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__02699a(int param_1,int param_2)

{
  FUN_1eea_11e7();
  FUN_1eea_0b5a(_DAT_2a22_479a,param_1 + -1,param_2 + -1,param_1 + -1,param_2 + 0x10,0);
  FUN_1eea_0b5a(_DAT_2a22_479a,param_1 + -1,param_2 + 0x10,param_1 + 0x13,param_2 + 0x10,0);
  FUN_1eea_0b5a(_DAT_2a22_479a,param_1 + 0x13,param_2 + 0x10,param_1 + 0x13,param_2 + -1,0);
  FUN_1eea_0b5a(_DAT_2a22_479a,param_1 + 0x13,param_2 + -1,param_1 + -1,param_2 + -1,0);
  if (DAT_2a22_46ee != '\0') {
    FUN_1eea_11b7();
  }
  return;
}



/* ovl_12::026a3a FUN_ovl_12__026a3a */

void __cdecl16far FUN_ovl_12__026a3a(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if (param_1 == 0) {
    if (DAT_2a22_b4c2 == '\0') {
      uVar3 = *(undefined2 *)((undefined *)&DAT_2a22_b378 + DAT_2a22_b4be * 8);
      uVar2 = *(undefined2 *)((undefined *)&DAT_2a22_b376 + DAT_2a22_b4be * 8);
    }
    else {
      iVar1 = (char)((undefined *)&DAT_2a22_b4be)[DAT_2a22_b4c2] * 8;
      uVar3 = *(undefined2 *)((undefined *)&DAT_2a22_b3a8 + iVar1);
      uVar2 = *(undefined2 *)((undefined *)&DAT_2a22_b3a6 + iVar1);
    }
  }
  else if (DAT_2a22_b4c3 == '\0') {
    uVar3 = *(undefined2 *)((undefined *)&DAT_2a22_b438 + DAT_2a22_b4c0 * 4);
    uVar2 = *(undefined2 *)((undefined *)&DAT_2a22_b436 + DAT_2a22_b4c0 * 4);
  }
  else {
    iVar1 = (char)((undefined *)&DAT_2a22_b4c0)[DAT_2a22_b4c3] * 4;
    uVar3 = *(undefined2 *)((undefined *)&DAT_2a22_b448 + iVar1);
    uVar2 = *(undefined2 *)((undefined *)&DAT_2a22_b446 + iVar1);
  }
  FUN_ovl_12__02699a(uVar2,uVar3);
  return;
}



/* ovl_12::026ac8 FUN_ovl_12__026ac8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__026ac8(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_2a22_b4bc != '\0') {
    return;
  }
  FUN_ovl_12__026a3a(0);
  if (DAT_2a22_b4ba == '\0') {
    FUN_1eea_11e7();
    iVar2 = *(int *)((undefined *)&DAT_3000_d021 + DAT_2a22_b4ba * 2) * 8;
    iVar1 = *(int *)((undefined *)&DAT_2a22_b378 + iVar2);
    iVar2 = *(int *)((undefined *)&DAT_2a22_b376 + iVar2);
  }
  else {
    FUN_1eea_11e7();
    iVar2 = *(int *)((undefined *)&DAT_3000_d021 + DAT_2a22_b4ba * 2) * 8;
    iVar1 = *(int *)((undefined *)&DAT_2a22_b3a8 + iVar2);
    iVar2 = *(int *)((undefined *)&DAT_2a22_b3a6 + iVar2);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,iVar2 + -1,iVar1 + -1,_DAT_3000_d063);
}



/* ovl_12::026b4a FUN_ovl_12__026b4a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__026b4a(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_2a22_b4bc != '\0') {
    return;
  }
  FUN_ovl_12__026a3a(1);
  if (DAT_2a22_b4bb == '\0') {
    FUN_1eea_11e7();
    iVar2 = *(int *)((undefined *)&DAT_3000_d025 + DAT_2a22_b4bb * 2) * 4;
    iVar1 = *(int *)((undefined *)&DAT_2a22_b438 + iVar2);
    iVar2 = *(int *)((undefined *)&DAT_2a22_b436 + iVar2);
  }
  else {
    FUN_1eea_11e7();
    iVar2 = *(int *)((undefined *)&DAT_3000_d025 + DAT_2a22_b4bb * 2) * 4;
    iVar1 = *(int *)((undefined *)&DAT_2a22_b448 + iVar2);
    iVar2 = *(int *)((undefined *)&DAT_2a22_b446 + iVar2);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,iVar2 + -1,iVar1 + -1,_DAT_3000_d063);
}



/* ovl_12::026bce FUN_ovl_12__026bce */

undefined2 __cdecl16far FUN_ovl_12__026bce(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != -1) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        iVar1 = (int)DAT_3000_ce9c - (int)DAT_3000_cea0;
      }
      else {
        iVar1 = (int)DAT_3000_ce9e - (int)DAT_3000_cea1;
      }
    }
    else if (param_2 == 0) {
      iVar1 = (int)DAT_3000_ce9d;
    }
    else {
      iVar1 = (int)DAT_3000_ce9f;
    }
    if (param_1 < iVar1) {
      return 1;
    }
  }
  return 0;
}



/* ovl_12::026c30 FUN_ovl_12__026c30 */

void __cdecl16far FUN_ovl_12__026c30(int param_1)

{
  FUN_1eea_11b0();
  if (param_1 == 6) {
    if (DAT_3000_cea0 < '\x01') {
      return;
    }
    DAT_3000_cea0 = DAT_3000_cea0 + -1;
  }
  else {
    if (param_1 != 7) {
      if (param_1 == 8) {
        if (DAT_3000_cea1 < '\x01') {
          return;
        }
        DAT_3000_cea1 = DAT_3000_cea1 + -1;
      }
      else {
        if (param_1 != 9) {
          return;
        }
        if ((int)DAT_3000_ce9e - (int)DAT_3000_cea1 < 7) {
          return;
        }
        DAT_3000_cea1 = DAT_3000_cea1 + '\x01';
      }
      FUN_ovl_12__025580((int)DAT_3000_cea1);
      return;
    }
    if ((int)DAT_3000_ce9c - (int)DAT_3000_cea0 < 7) {
      return;
    }
    DAT_3000_cea0 = DAT_3000_cea0 + '\x01';
  }
  FUN_ovl_12__0253f8((int)DAT_3000_cea0);
  return;
}



/* ovl_12::026cb2 FUN_ovl_12__026cb2 */

undefined2 __cdecl16far FUN_ovl_12__026cb2(void)

{
  int iVar1;
  
  iVar1 = FUN_19c7_4d28(0x354,0x723e,8);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}



/* ovl_12::026cd2 FUN_ovl_12__026cd2 */

undefined2 __cdecl16far FUN_ovl_12__026cd2(void)

{
  int iVar1;
  
  iVar1 = FUN_19c7_4d28((undefined *)&DAT_2a22_a2b4,0x7246,0x42);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}



/* ovl_12::026cf2 FUN_ovl_12__026cf2 */

void __cdecl16far FUN_ovl_12__026cf2(char param_1)

{
  int iVar1;
  
  if (param_1 == '\0') {
    if (DAT_2a22_b4ba != '\0') {
      return;
    }
    iVar1 = FUN_ovl_12__026cd2();
  }
  else {
    if (param_1 != '\x01') {
      return;
    }
    if (DAT_2a22_b4bb != '\0') {
      return;
    }
    iVar1 = FUN_ovl_12__026cb2();
  }
  if (iVar1 != 0) {
    ((undefined *)&DAT_2a22_b4ba)[param_1] = 1;
    *(undefined2 *)((undefined *)&DAT_3000_d023 + param_1 * 4) = 0;
  }
  return;
}



/* ovl_12::026d4a FUN_ovl_12__026d4a */

void __cdecl16far FUN_ovl_12__026d4a(void)

{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = 0x252a;
code_r0x00026d4a:
  do {
    iVar1 = thunk_EXT_FUN_0000_0000(uVar2,0);
    if (iVar1 != 0) {
      uVar2 = 0x1eea;
      if (DAT_2a22_46ef != '\0') goto code_r0x00026d4a;
    }
    uVar2 = 0x2017;
    iVar1 = FUN_1eea_12da();
    if (iVar1 == 0) {
      FUN_1eea_11b0();
      return;
    }
  } while( true );
}



/* ovl_12::026d70 FUN_ovl_12__026d70 */

undefined2 __cdecl16far FUN_ovl_12__026d70(void)

{
  int iVar1;
  
  if (DAT_2a22_46ee != '\0') {
    if (DAT_2a22_ad62 == '\0') {
      iVar1 = FUN_ovl_12__0265f4();
      if (((((iVar1 < 10) || (0xf < iVar1)) ||
           (*(int *)((undefined *)&DAT_3000_d021 + DAT_2a22_b4ba * 2) != iVar1 + -10)) ||
          (DAT_2a22_b4ba != '\0')) &&
         (((iVar1 < 0x10 || (0x15 < iVar1)) ||
          ((*(int *)((undefined *)&DAT_3000_d021 + DAT_2a22_b4ba * 2) != iVar1 + -0x10 ||
           (DAT_2a22_b4ba != '\x01')))))) {
        if (iVar1 < 6) {
          return 0;
        }
        if (9 < iVar1) {
          return 0;
        }
      }
    }
    else {
      iVar1 = FUN_ovl_12__02664e();
      if ((((iVar1 < 6) || (9 < iVar1)) ||
          ((*(int *)((undefined *)&DAT_3000_d025 + DAT_2a22_b4bb * 2) != iVar1 + -6 ||
           (DAT_2a22_b4bb != '\0')))) &&
         ((((iVar1 < 10 || (0xd < iVar1)) ||
           (*(int *)((undefined *)&DAT_3000_d025 + DAT_2a22_b4bb * 2) != iVar1 + -10)) ||
          (DAT_2a22_b4bb != '\x01')))) {
        return 0;
      }
    }
  }
  return 1;
}



/* ovl_12::026e54 FUN_ovl_12__026e54 */

/* WARNING: Removing unreachable block (ram,0x00027223) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x000356da : 0x00026f06 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl16far FUN_ovl_12__026e54(char param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  char local_e;
  
  DAT_2a22_bc10 = '\0';
  DAT_2a22_b4bc = 0;
  do {
    uVar6 = 0x1951;
    iVar3 = FUN_1951_00ea();
  } while (iVar3 != 0);
  if (DAT_3000_d06c == '\0') {
    ((char *)&DAT_2a22_b4ba)[param_1] = '\0';
    *(undefined2 *)((undefined *)&DAT_3000_d021 + param_1 * 4) = 0;
  }
  FUN_ovl_12__026cf2((int)param_1);
  do {
    if (param_1 == '\0') {
      FUN_ovl_12__0266a8((int)DAT_2a22_b4ba,
                         *(undefined2 *)((undefined *)&DAT_3000_d021 + DAT_2a22_b4ba * 2));
      FUN_ovl_12__026360((int)DAT_2a22_b4ba,
                         *(undefined2 *)((undefined *)&DAT_3000_d021 + DAT_2a22_b4ba * 2));
    }
    else {
      FUN_ovl_12__02679c((int)((char *)&DAT_2a22_b4ba)[param_1],
                         *(undefined2 *)
                          ((undefined *)&DAT_3000_d021 + param_1 * 4 + DAT_2a22_b4bb * 2));
      FUN_ovl_12__02618e((int)((char *)&DAT_2a22_b4ba)[param_1],
                         *(undefined2 *)
                          ((undefined *)&DAT_3000_d021 + param_1 * 4 + DAT_2a22_b4bb * 2));
    }
    if (DAT_2a22_46ef != '\0') {
      _DAT_2a22_e335 = thunk_EXT_FUN_0000_0000(uVar6);
    }
    bVar2 = false;
    bVar1 = false;
    if (DAT_2a22_46ee != '\0') {
      if (DAT_2a22_ad62 == '\0') {
        local_e = FUN_ovl_12__0265f4();
        if (('\t' < local_e) && (local_e < '\x10')) {
          DAT_3000_d06b = '\0';
        }
        if (('\x0f' < local_e) && (local_e < '\x16')) {
          DAT_3000_d06b = '\x01';
        }
        if (((('\t' < local_e) && (local_e < '\x10')) &&
            (iVar3 = FUN_ovl_12__026bce(local_e + -10,0,0), iVar3 != 0)) &&
           (((char *)&DAT_2a22_b4ba)[param_1] != '\0')) {
          bVar2 = true;
        }
        if (('\x0f' < local_e) && (local_e < '\x16')) {
          uVar6 = 0;
          iVar3 = local_e + -0x10;
          goto LAB_ovl_12__02704d;
        }
      }
      else {
        local_e = FUN_ovl_12__02664e();
        if (('\x05' < local_e) && (local_e < '\n')) {
          DAT_3000_d06b = '\0';
        }
        if (('\t' < local_e) && (local_e < '\x0e')) {
          DAT_3000_d06b = '\x01';
        }
        if (((('\x05' < local_e) && (local_e < '\n')) &&
            (iVar3 = FUN_ovl_12__026bce(local_e + -6,0,1), iVar3 != 0)) &&
           (((char *)&DAT_2a22_b4ba)[param_1] != '\0')) {
          bVar2 = true;
        }
        if (('\t' < local_e) && (local_e < '\x0e')) {
          uVar6 = 1;
          iVar3 = local_e + -10;
LAB_ovl_12__02704d:
          iVar3 = FUN_ovl_12__026bce(iVar3,1,uVar6);
          if ((iVar3 != 0) && (((char *)&DAT_2a22_b4ba)[param_1] == '\0')) {
            bVar1 = true;
          }
        }
      }
    }
    iVar3 = FUN_1951_00ea();
    iVar4 = FUN_1090_14d2(1);
    if ((iVar4 != 0) || (iVar3 == 0x20)) goto LAB_ovl_12__027466;
    iVar4 = FUN_1090_14d2(0);
    if ((((iVar4 != 0) || (iVar3 == 0xd)) ||
        ((uVar5 = FUN_1eea_11b0(), (uVar5 & 1) != 0 && (iVar4 = FUN_ovl_12__026d70(), iVar4 != 0))))
       && (DAT_2a22_ad63 == '\0')) {
      if (((local_e < '\x06') || ('\t' < local_e)) || (param_1 != '\0')) {
        if (((char *)&DAT_2a22_b4ba)[param_1] == '\0') {
          if (param_1 == '\0') {
            uVar6 = FUN_ovl_12__02606e(_DAT_3000_d021,1);
            FUN_ovl_12__0258fa(uVar6);
          }
          else {
            uVar6 = FUN_ovl_12__02611a(*(undefined2 *)((undefined *)&DAT_3000_d021 + param_1 * 4),1)
            ;
            FUN_ovl_12__025b0e(uVar6);
          }
        }
        else if (((char *)&DAT_2a22_b4ba)[param_1] == '\x01') {
          if (param_1 == '\0') {
            uVar6 = FUN_ovl_12__02606e(_DAT_3000_d023,0);
            FUN_ovl_12__0259f6(uVar6);
          }
          else {
            uVar6 = FUN_ovl_12__02611a(*(undefined2 *)((undefined *)&DAT_3000_d023 + param_1 * 4),0)
            ;
            FUN_ovl_12__025bee(uVar6);
          }
        }
      }
      else {
        FUN_ovl_12__026c30((int)local_e);
      }
      iVar4 = (int)param_1;
      if ((((char *)&DAT_2a22_b4ba)[iVar4] == '\0') &&
         (((undefined *)&DAT_3000_ce9c)[iVar4] == '\0')) {
        ((char *)&DAT_2a22_b4ba)[iVar4] = '\x01';
        DAT_2a22_b4bc = 0;
        DAT_2a22_bc10 = '\x01';
      }
      iVar4 = (int)param_1;
      if ((*(int *)((undefined *)&DAT_3000_d021 + iVar4 * 4) <
           (int)(char)((undefined *)&DAT_3000_ce9c)[iVar4] - (int)DAT_3000_cea0) ||
         (((char *)&DAT_2a22_b4ba)[iVar4] != '\0')) {
        DAT_2a22_b4bc = 0;
        if (param_1 == '\0') {
          FUN_ovl_12__026ac8();
        }
        else {
          FUN_ovl_12__026b4a();
        }
      }
      else {
        FUN_ovl_12__026878(0,(int)((char *)&DAT_2a22_b4ba)[iVar4],
                           (undefined *)&DAT_3000_d021 +
                           ((char *)&DAT_2a22_b4ba)[iVar4] * 2 + iVar4 * 4,iVar4);
        DAT_2a22_b4bc = 0;
        DAT_2a22_bc10 = '\x01';
      }
      FUN_ovl_12__026d4a();
    }
    if ((DAT_2a22_bc10 == '\0') || (iVar4 = FUN_197d_0214(), 8 < iVar4)) {
      iVar4 = (int)param_1;
      ((undefined *)&DAT_2a22_b4be)[iVar4 * 2] = ((undefined *)&DAT_3000_d021)[iVar4 * 4];
      ((undefined *)&DAT_2a22_b4bf)[iVar4 * 2] = ((undefined *)&DAT_3000_d023)[iVar4 * 4];
      ((undefined *)&DAT_2a22_b4c2)[iVar4] = ((char *)&DAT_2a22_b4ba)[iVar4];
      if (((('2' < DAT_2a22_e335) || (bVar1)) && (((char *)&DAT_2a22_b4ba)[param_1] == '\0')) ||
         (((((DAT_2a22_e335 < -0x32 || (bVar2)) && (((char *)&DAT_2a22_b4ba)[param_1] != '\0')) ||
           ((iVar3 == 0x14d && (((char *)&DAT_2a22_b4ba)[param_1] == '\0')))) ||
          ((iVar3 == 0x14b && (((char *)&DAT_2a22_b4ba)[param_1] != '\0')))))) {
        iVar3 = (int)param_1;
        if ((((undefined *)&DAT_3000_ce9c)[iVar3] != '\0') &&
           (((undefined *)&DAT_3000_ce9e)[iVar3] != '\0')) {
          ((char *)&DAT_2a22_b4ba)[iVar3] = ((char *)&DAT_2a22_b4ba)[iVar3] ^ 1;
          if ((bVar2) || (bVar1)) {
            if (param_1 == '\0') {
              uVar6 = *(undefined2 *)(local_e * 10 + 0x6dc6);
            }
            else {
              uVar6 = *(undefined2 *)(local_e * 10 + 0x6ea2);
            }
            *(undefined2 *)
             ((undefined *)&DAT_3000_d021 + param_1 * 4 + ((char *)&DAT_2a22_b4ba)[param_1] * 2) =
                 uVar6;
          }
          goto LAB_ovl_12__027331;
        }
      }
      else {
        if ((DAT_2a22_e336 < -0x32) || (iVar3 == 0x148)) {
          iVar3 = (int)((char *)&DAT_2a22_b4ba)[param_1];
          iVar4 = iVar3 * 2 + param_1 * 4;
          uVar6 = 0;
        }
        else {
          if ((DAT_2a22_e336 < '3') && (iVar3 != 0x150)) {
            if ((local_e == 'E') || ((param_2 <= local_e || (DAT_2a22_46ee == '\0')))) {
              if ((local_e == 'E') || ((local_e < param_2 || (DAT_2a22_46ee == '\0')))) {
                DAT_2a22_bc10 = '\0';
              }
              else {
                if (DAT_2a22_ad62 == '\0') {
                  uVar6 = *(undefined2 *)(local_e * 10 + 0x6dc6);
                }
                else {
                  uVar6 = *(undefined2 *)(local_e * 10 + 0x6ea2);
                }
                iVar3 = FUN_ovl_12__026bce(uVar6,(int)DAT_3000_d06b,(int)param_1);
                if (iVar3 != 0) {
                  *(undefined2 *)
                   ((undefined *)&DAT_3000_d021 +
                   param_1 * 4 + ((char *)&DAT_2a22_b4ba)[param_1] * 2) = uVar6;
                  goto LAB_ovl_12__027331;
                }
              }
              goto LAB_ovl_12__027449;
            }
            DAT_3000_ce9a = local_e;
            DAT_3000_ce99 = local_e;
LAB_ovl_12__027466:
            FUN_ovl_12__026a3a((int)param_1);
            DAT_2a22_bc10 = '\0';
            DAT_3000_ce92 = 0;
            return;
          }
          iVar3 = (int)((char *)&DAT_2a22_b4ba)[param_1];
          iVar4 = iVar3 * 2 + param_1 * 4;
          uVar6 = 1;
        }
        FUN_ovl_12__026878(uVar6,iVar3,(undefined *)&DAT_3000_d021 + iVar4,(int)param_1);
LAB_ovl_12__027331:
        DAT_2a22_b4bc = 0;
        DAT_2a22_bc10 = '\x01';
      }
LAB_ovl_12__027449:
      FUN_197d_0218();
    }
    uVar6 = 0x199e;
    if (param_1 == '\0') {
      FUN_ovl_12__026ac8();
    }
    else {
      FUN_ovl_12__026b4a();
    }
    DAT_3000_d06c = '\0';
  } while( true );
}



/* ovl_12::027482 FUN_ovl_12__027482 */

undefined2 __cdecl16far FUN_ovl_12__027482(void)

{
  int iVar1;
  
  if (DAT_2a22_46ee != '\0') {
    if (DAT_2a22_ad62 == '\0') {
      iVar1 = FUN_ovl_12__0265f4();
    }
    else {
      iVar1 = FUN_ovl_12__02664e();
    }
    if (iVar1 != 0x45) {
      return 1;
    }
  }
  return 0;
}



/* ovl_12::0274aa FUN_ovl_12__0274aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl16far FUN_ovl_12__0274aa(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char local_8;
  char local_6;
  
  bVar1 = false;
  DAT_2a22_bc10 = '\0';
  DAT_3000_ce93 = '\x01';
  FUN_1eea_11b0();
  do {
    uVar4 = 0x1eea;
    iVar2 = thunk_EXT_FUN_0000_0000(0x1eea,0);
    if (iVar2 == 0) break;
  } while (DAT_2a22_46ef != '\0');
  do {
    do {
      if (DAT_2a22_46ef != '\0') {
        _DAT_2a22_e335 = thunk_EXT_FUN_0000_0000(uVar4);
      }
      uVar4 = 0x1951;
      iVar2 = FUN_1951_00ea();
      if ((DAT_3000_ce92 == '\0') || (DAT_2a22_ad63 != '\0')) {
        if (DAT_3000_ce93 != '\0') {
          FUN_1eea_11e7();
          FUN_1eea_0574(_DAT_2a22_479a,0x73,0x7f,0xbe,5,0);
                    /* WARNING: Subroutine does not return */
          thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,
                              *(int *)((undefined *)&DAT_2a22_b20e + DAT_3000_ce9a * 10) + -1,
                              *(int *)((undefined *)&DAT_2a22_b210 + DAT_3000_ce9a * 10) + -1,
                              _DAT_3000_d05d);
        }
        FUN_ovl_12__025fe0((int)DAT_3000_ce9a);
        if ((DAT_2a22_bc10 == '\0') || (iVar3 = FUN_197d_0214(), 0xd < iVar3)) {
          if ((DAT_2a22_e336 < -0x32) || (iVar2 == 0x148)) {
            uVar4 = 0;
LAB_ovl_12__027624:
            FUN_ovl_12__026542(uVar4,param_1);
          }
          else {
            if (('2' < DAT_2a22_e336) || (iVar2 == 0x150)) {
              uVar4 = 1;
              goto LAB_ovl_12__027624;
            }
            if (('2' < DAT_2a22_e335) || (iVar2 == 0x14d)) {
              uVar4 = 2;
              goto LAB_ovl_12__027624;
            }
            if ((DAT_2a22_e335 < -0x32) || (iVar2 == 0x14b)) {
              uVar4 = 3;
              goto LAB_ovl_12__027624;
            }
            DAT_2a22_bc10 = '\0';
          }
          FUN_197d_0218();
        }
        uVar5 = 0x199e;
        if (DAT_2a22_ad63 == '\0') {
          uVar5 = 0x1090;
          iVar3 = FUN_1090_14d2(1);
          if ((iVar3 != 0) || (iVar2 == 0x20)) {
            DAT_3000_ce92 = 1;
            DAT_3000_d06c = 0;
            DAT_3000_ce94 = 1;
            FUN_1eea_11e7();
                    /* WARNING: Subroutine does not return */
            thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,
                                *(int *)((undefined *)&DAT_2a22_b20e + DAT_3000_ce9a * 10) + -1,
                                *(int *)((undefined *)&DAT_2a22_b210 + DAT_3000_ce9a * 10) + -1,
                                _DAT_3000_d05b);
          }
        }
        uVar4 = uVar5;
        if (DAT_2a22_46ef != '\0') {
          uVar4 = 0x1eea;
          iVar3 = thunk_EXT_FUN_0000_0000(uVar5,0);
          if (iVar3 != 0) goto LAB_ovl_12__027702;
        }
        if (iVar2 == 0xd) goto LAB_ovl_12__027702;
      }
      else {
        if (DAT_2a22_ad62 == '\0') {
          uVar5 = 0;
LAB_ovl_12__027519:
          FUN_ovl_12__026e54(uVar5,param_1);
        }
        else if (DAT_2a22_ad62 == '\x01') {
          uVar5 = 1;
          goto LAB_ovl_12__027519;
        }
        DAT_3000_ce93 = '\x01';
        DAT_3000_ce94 = 0;
        DAT_3000_ce9a = '\0';
        DAT_3000_ce99 = '\0';
      }
    } while (DAT_2a22_46ee == '\0');
    if (DAT_2a22_ad62 == '\0') {
      local_8 = FUN_ovl_12__0265f4();
      if (DAT_2a22_ad63 == '\0') {
        if (('\t' < local_8) && (local_8 < '\x10')) {
          local_6 = '\0';
        }
        if (('\x0f' < local_8) && (local_8 < '\x16')) {
          local_6 = '\x01';
        }
        if (('\x05' < local_8) && (local_8 < '\n')) {
          bVar1 = true;
        }
      }
    }
    else {
      local_8 = FUN_ovl_12__02664e();
      if (DAT_2a22_ad63 == '\0') {
        if (('\x05' < local_8) && (local_8 < '\n')) {
          local_6 = '\0';
        }
        if (('\t' < local_8) && (local_8 < '\x0e')) {
          local_6 = '\x01';
        }
      }
    }
    if ((local_8 != 'E') && ((DAT_2a22_ad63 == '\0' || (local_8 < param_1)))) {
      DAT_3000_ce99 = local_8;
    }
    if ((DAT_3000_ce9a != DAT_3000_ce99) && (DAT_3000_ce99 < param_1)) {
      FUN_1eea_11e7();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,
                          *(int *)((undefined *)&DAT_2a22_b20e + DAT_3000_ce9a * 10) + -1,
                          *(int *)((undefined *)&DAT_2a22_b210 + DAT_3000_ce9a * 10) + -1,
                          _DAT_3000_d05b);
    }
    if ((DAT_3000_ce9a != DAT_3000_ce99) && (param_1 < DAT_3000_ce99)) {
      if (DAT_2a22_ad62 == '\0') {
        iVar2 = FUN_ovl_12__026bce(*(undefined2 *)(DAT_3000_ce99 * 10 + 0x6dc6),(int)local_6,0);
        if ((iVar2 != 0) || (bVar1)) {
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = FUN_ovl_12__026bce(*(undefined2 *)(DAT_3000_ce99 * 10 + 0x6ea2),(int)local_6,1);
      }
      if (iVar2 != 0) {
        DAT_3000_ce92 = 1;
        DAT_3000_d06c = 1;
        FUN_1eea_11e7();
                    /* WARNING: Subroutine does not return */
        thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,
                            *(int *)((undefined *)&DAT_2a22_b20e + DAT_3000_ce9a * 10) + -1,
                            *(int *)((undefined *)&DAT_2a22_b210 + DAT_3000_ce9a * 10) + -1,
                            _DAT_3000_d05b);
      }
    }
    uVar4 = 0x2017;
    iVar2 = FUN_1eea_12da();
  } while (((iVar2 == 0) || (iVar2 = FUN_ovl_12__027482(), iVar2 == 0)) || (DAT_3000_ce92 != '\0'));
  while (iVar2 = FUN_1eea_12da(), iVar2 != 0) {
    FUN_ovl_12__025fe0((int)DAT_3000_ce9a);
  }
LAB_ovl_12__027702:
  return (int)DAT_3000_ce99;
}



/* ovl_12::0278e8 FUN_ovl_12__0278e8 */

void __cdecl16far FUN_ovl_12__0278e8(void)

{
  int iVar1;
  int iVar2;
  
  DAT_3000_ce9e = '\0';
  DAT_3000_ce9c = '\0';
  if (DAT_2a22_b4c4 == '\x01') {
    iVar2 = 0x12;
  }
  else {
    iVar2 = 0x13;
  }
  for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
    if (*(char *)(DAT_3000_ce9b * 0x2e + iVar1 + 0x6950) != '\0') {
      DAT_3000_ce9e = DAT_3000_ce9e + '\x01';
    }
    if ((*(char *)(DAT_3000_ce9b * 0x2e + iVar1 + 0x6967) != '\0') && (iVar1 != 0x12)) {
      if (*(int *)((undefined *)&DAT_2a22_a2b4 +
                  (char)((undefined *)&DAT_2a22_ad7d)[iVar1 * 2] * 2 +
                  (char)((undefined *)&DAT_2a22_ad7c)[iVar1 * 2] * 0x16) != 0) {
        DAT_3000_ce9c = DAT_3000_ce9c + '\x01';
      }
    }
  }
  if ((DAT_2a22_b4c4 == '\x02') && (DAT_2a22_b6dc == '\0')) {
    DAT_3000_ce9e = DAT_3000_ce9e + -1;
    DAT_2a22_b6dc = '\x01';
  }
  return;
}



/* ovl_12::02797c FUN_ovl_12__02797c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__02797c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((_DAT_2a22_ad5a < _DAT_2a22_ad5e) || (_DAT_2a22_ad5e == 0)) || (_DAT_2a22_ad5a == 0)) {
    FUN_1951_017a(0x1b);
  }
  else {
    FUN_1951_017a(0x1a);
    FUN_1eea_0574(_DAT_2a22_479a,0x3e,9,0xba,0x6b,0);
    if (DAT_2a22_e326 == DAT_2a22_46f1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    FUN_1eea_0b5a(_DAT_2a22_479a,0x9c,0xb,0x9c,0x72,uVar1);
    if (DAT_2a22_b4c4 == '\x02') {
      DAT_2a22_b4c4 = '\x01';
    }
    if (_DAT_3000_cf55 != 0) {
      _DAT_2a22_fac8 = 500;
    }
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      for (iVar4 = 0; iVar4 < 0xb; iVar4 = iVar4 + 1) {
        iVar2 = iVar3 * 0x16 + iVar4 * 2;
        *(undefined2 *)((undefined *)&DAT_3000_cfdf + iVar2) =
             *(undefined2 *)((undefined *)&DAT_3000_cf9d + iVar2);
      }
    }
    iVar3 = 0;
    do {
      iVar4 = iVar3 * 2;
      *(int *)((undefined *)&DAT_2a22_a2b4 +
              (char)((undefined *)&DAT_2a22_ad7d)[iVar4] * 2 +
              (char)((undefined *)&DAT_2a22_ad7c)[iVar4] * 0x16) =
           *(int *)((undefined *)&DAT_2a22_a2b4 +
                   (char)((undefined *)&DAT_2a22_ad7d)[iVar4] * 2 +
                   (char)((undefined *)&DAT_2a22_ad7c)[iVar4] * 0x16) +
           *(int *)((undefined *)&DAT_3000_cf31 + iVar4);
      if (((*(int *)((undefined *)&DAT_3000_cf31 + iVar4) != 0) && (iVar3 != 0x12)) &&
         (param_1 == 0xd)) {
        _DAT_2a22_c6d2 = 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x12);
    iVar3 = 0;
    do {
      *(undefined2 *)((undefined *)&DAT_3000_cf5f + iVar3 * 2) = 0;
      *(undefined2 *)((undefined *)&DAT_3000_cf31 + iVar3 * 2) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x14);
    FUN_ovl_12__0252f8();
    FUN_ovl_12__0252a0();
    FUN_ovl_12__0278e8();
    DAT_3000_cea1 = 0;
    FUN_ovl_12__025580(0);
    DAT_3000_cea0 = 0;
    FUN_ovl_12__0253f8(0);
    DAT_2a22_b4b6 = 0;
    DAT_2a22_b4b8 = 0;
    _DAT_2a22_ad5a = 0;
    _DAT_2a22_ad5e = 0;
    FUN_ovl_12__02570a(0x1eea,0);
  }
  return;
}



/* ovl_12::027afe FUN_ovl_12__027afe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__027afe(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  if (((_DAT_2a22_ad5c < _DAT_2a22_ad60) || (_DAT_2a22_ad60 == 0)) || (_DAT_2a22_ad5c == 0)) {
    FUN_1951_017a(0x1b);
  }
  else {
    FUN_1951_017a(0x1a);
    FUN_1eea_0574(_DAT_2a22_479a,0x3e,9,0xba,0x6b,0);
    if (DAT_2a22_e326 == DAT_2a22_46f1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    FUN_1eea_0b5a(_DAT_2a22_479a,0x9c,0xb,0x9c,0x72,uVar1);
    iVar2 = 0x13;
    do {
      *(undefined2 *)((undefined *)&DAT_3000_cf5f + iVar2 * 2) = 0;
      *(undefined2 *)((undefined *)&DAT_3000_cf31 + iVar2 * 2) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x17);
    iVar2 = 0;
    do {
      iVar3 = iVar2 * 2;
      *(int *)(iVar3 + 0x354) =
           *(int *)((undefined *)&DAT_3000_cf8d + iVar3) +
           *(int *)((undefined *)&DAT_3000_cf95 + iVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    FUN_19c7_4ce0((undefined *)&DAT_3000_cf8d,0x354,8);
    FUN_19c7_4d7c((undefined *)&DAT_3000_cf95,0,8);
    FUN_ovl_12__028b70();
    FUN_ovl_12__028c4c();
    DAT_2a22_b4b7 = 0;
    DAT_2a22_b4b9 = 0;
    _DAT_2a22_ad5c = 0;
    _DAT_2a22_ad60 = 0;
    FUN_ovl_12__02570a(0x19c7,1);
  }
  return;
}



/* ovl_12::027c08 FUN_ovl_12__027c08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__027c08(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((_DAT_2a22_ad5e == 0) && (_DAT_2a22_ad5a == 0)) {
    if (param_2 == 0) {
      FUN_1951_017a(0x1b);
    }
  }
  else {
    FUN_1951_017a(0x1a);
    FUN_1eea_11e7();
    FUN_1eea_0574(_DAT_2a22_479a,0x3e,9,0xba,0x6b,0);
    if (DAT_2a22_e326 == DAT_2a22_46f1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    FUN_1eea_0b5a(_DAT_2a22_479a,0x9c,0xb,0x9c,0x72,uVar1);
    if (DAT_2a22_46ee != '\0') {
      FUN_1eea_11b7();
    }
    if (DAT_2a22_b4c4 == '\x02') {
      *(undefined1 *)(DAT_3000_ce9b * 0x2e + 0x6962) = 1;
      DAT_2a22_b4c4 = '\0';
    }
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      for (iVar4 = 0; iVar4 < 0xb; iVar4 = iVar4 + 1) {
        iVar2 = iVar3 * 0x16 + iVar4 * 2;
        *(undefined2 *)((undefined *)&DAT_3000_cf9d + iVar2) =
             *(undefined2 *)((undefined *)&DAT_3000_cfdf + iVar2);
      }
    }
    iVar3 = 0;
    do {
      *(undefined2 *)((undefined *)&DAT_3000_cf5f + iVar3 * 2) = 0;
      *(undefined2 *)((undefined *)&DAT_3000_cf31 + iVar3 * 2) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x14);
    FUN_ovl_12__02533c();
    FUN_ovl_12__0278e8();
    FUN_ovl_12__0252a0();
    DAT_3000_cea1 = 0;
    DAT_3000_cea0 = 0;
    if (param_1 != 0) {
      FUN_ovl_12__025580(0);
      FUN_ovl_12__0253f8(0);
    }
    DAT_2a22_b4b8 = 0;
    DAT_2a22_b4b6 = 0;
    _DAT_2a22_ad5a = 0;
    _DAT_2a22_ad5e = 0;
    FUN_ovl_12__02570a(0x1eea,0);
  }
  return;
}



/* ovl_12::027d50 FUN_ovl_12__027d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__027d50(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((_DAT_2a22_ad60 == 0) && (_DAT_2a22_ad5c == 0)) {
    if (param_2 == 0) {
      FUN_1951_017a(0x1b);
    }
  }
  else {
    FUN_1951_017a(0x1a);
    FUN_1eea_11e7();
    FUN_1eea_0574(_DAT_2a22_479a,0x3e,9,0xba,0x6b,0);
    if (DAT_2a22_e326 == DAT_2a22_46f1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
    FUN_1eea_0b5a(_DAT_2a22_479a,0x9c,0xb,0x9c,0x72,uVar1);
    if (DAT_2a22_46ee != '\0') {
      FUN_1eea_11b7();
    }
    FUN_19c7_4ce0((undefined *)&DAT_3000_cf8d,0x354,8);
    FUN_19c7_4d7c((undefined *)&DAT_3000_cf95,0,8);
    iVar2 = 0x13;
    do {
      *(undefined2 *)((undefined *)&DAT_3000_cf5f + iVar2 * 2) = 0;
      *(undefined2 *)((undefined *)&DAT_3000_cf31 + iVar2 * 2) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x17);
    if (param_1 != 0) {
      FUN_ovl_12__028b70();
      FUN_ovl_12__028c4c();
    }
    DAT_2a22_b4b9 = 0;
    DAT_2a22_b4b7 = 0;
    _DAT_2a22_ad5c = 0;
    _DAT_2a22_ad60 = 0;
    FUN_ovl_12__02570a(0x19c7,1);
  }
  return;
}



/* ovl_12::027e52 FUN_ovl_12__027e52 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__027e52(void)

{
  undefined2 uVar1;
  
  FUN_1eea_11e7();
  if ('\0' < DAT_2a22_b4b6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,_DAT_2a22_b3d6,_DAT_2a22_b3d8,
                        *(undefined2 *)((undefined *)&DAT_3000_d029 + DAT_3000_cea5 * 2));
  }
  if ('\0' < DAT_2a22_b4b8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,_DAT_2a22_b406,_DAT_2a22_b408,
                        *(undefined2 *)((undefined *)&DAT_3000_d029 + DAT_3000_ced3 * 2));
  }
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  FUN_1eea_0b5a(_DAT_2a22_479a,0x9c,0xb,0x9c,0x72,uVar1);
  if (DAT_2a22_46ee != '\0') {
    FUN_1eea_11b7();
  }
  return;
}



/* ovl_12::027fbe FUN_ovl_12__027fbe */

void __cdecl16far FUN_ovl_12__027fbe(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_19c7_4d28((undefined *)&DAT_3000_cf9d,(undefined *)&DAT_2a22_a2b4,0x42);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      iVar3 = (char)((undefined *)&DAT_2a22_ad7d)[iVar1 * 2] * 2 +
              (char)((undefined *)&DAT_2a22_ad7c)[iVar1 * 2] * 0x16;
      if (*(uint *)((undefined *)&DAT_3000_cf9d + iVar3) <
          *(uint *)((undefined *)&DAT_2a22_a2b4 + iVar3)) {
        *(int *)((undefined *)&DAT_3000_cfdf + iVar3) =
             *(int *)((undefined *)&DAT_3000_cfdf + iVar3) +
             (*(int *)((undefined *)&DAT_2a22_a2b4 + iVar3) -
             *(int *)((undefined *)&DAT_3000_cf9d + iVar3));
      }
      iVar3 = (char)((undefined *)&DAT_2a22_ad7d)[iVar1 * 2] * 2 +
              (char)((undefined *)&DAT_2a22_ad7c)[iVar1 * 2] * 0x16;
      if (*(uint *)((undefined *)&DAT_2a22_a2b4 + iVar3) <
          *(uint *)((undefined *)&DAT_3000_cf9d + iVar3)) {
        *(uint *)((undefined *)&DAT_3000_cfdf + iVar3) =
             *(int *)((undefined *)&DAT_3000_cfdf + iVar3) -
             (*(uint *)((undefined *)&DAT_3000_cf9d + iVar3) -
             *(int *)((undefined *)&DAT_2a22_a2b4 + iVar3));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x12);
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      for (iVar3 = 0; iVar3 < 0xb; iVar3 = iVar3 + 1) {
        iVar2 = iVar1 * 0x16 + iVar3 * 2;
        *(undefined2 *)((undefined *)&DAT_3000_cf9d + iVar2) =
             *(undefined2 *)((undefined *)&DAT_2a22_a2b4 + iVar2);
      }
    }
    FUN_ovl_12__0252a0();
    FUN_ovl_12__0278e8();
  }
  return;
}



/* ovl_12::02808c FUN_ovl_12__02808c */

void __cdecl16far FUN_ovl_12__02808c(void)

{
  undefined1 uVar1;
  
  uVar1 = DAT_2a22_5b2f;
  DAT_2a22_5b2f = DAT_2a22_e326 == DAT_2a22_46f4;
  dispatch_ovl_10_252a_262a(0);
  if (DAT_2a22_46ee != '\0') {
    FUN_1eea_11b7();
  }
  DAT_2a22_5b2f = uVar1;
  FUN_ovl_12__027fbe();
  FUN_ovl_12__025ca2(0,1,1);
  FUN_ovl_12__027e52();
  return;
}



/* ovl_12::0280e4 FUN_ovl_12__0280e4 */

undefined2 __cdecl16far FUN_ovl_12__0280e4(char param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    if (3 < iVar1) {
      return 0;
    }
    iVar2 = param_1 * 0x2e + iVar1;
    if ((*(char *)(iVar2 + 0x6963) != '\0') || (*(char *)(iVar2 + 0x697a) != '\0')) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}



/* ovl_12::02811e FUN_ovl_12__02811e */

undefined2 __cdecl16far FUN_ovl_12__02811e(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x13;
  while( true ) {
    if (0x16 < iVar1) {
      return 0;
    }
    iVar2 = param_1 * 0x2e + iVar1;
    if ((*(char *)(iVar2 + 0x6967) != '\0') || (*(char *)(iVar2 + 0x6950) != '\0')) break;
    iVar1 = iVar1 + 1;
  }
  return 1;
}



/* ovl_12::028544 FUN_ovl_12__028544 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__028544(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 local_c [6];
  int local_6;
  
  local_c[0] = 0xff;
  iVar1 = FUN_ovl_12__0288ee(1,local_c,param_1);
  if (iVar1 == -1) {
    return;
  }
  local_6 = (int)DAT_3000_ce9a;
  uVar2 = 0x252a;
  do {
    iVar1 = thunk_EXT_FUN_0000_0000(uVar2,0);
    if (iVar1 == 0) break;
    uVar2 = 0x1eea;
  } while (DAT_2a22_46ef != '\0');
  DAT_2a22_ad63 = 1;
  FUN_1eea_11e7();
  thunk_EXT_FUN_0000_0000(0x1eea,_DAT_2a22_479a,0x41,0xb,0xb5,0x68,_DAT_2a22_479c,0x41,0xb);
  FUN_1eea_0574(_DAT_2a22_479a,0x41,0xb,0xb5,0x68,0);
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  FUN_1eea_0b5a(_DAT_2a22_479a,0x41,0xb,0xf5,0xb,uVar2);
  FUN_1eea_0b5a(_DAT_2a22_479a,0xf5,0xb,0xf5,0x72,uVar2);
  FUN_1eea_0b5a(_DAT_2a22_479a,0xf5,0x72,0x41,0x72,uVar2);
  FUN_1eea_0b5a(_DAT_2a22_479a,0x41,0x72,0x41,0xb,uVar2);
  FUN_1eea_0b5a(_DAT_2a22_479a,0x9c,0x18,0x9c,0x6d,uVar2);
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_1eea_0574(_DAT_2a22_479a,1,0x8c,0x13a,0x3a,0x16);
  }
  if ((DAT_2a22_e326 == DAT_2a22_46f3) || (DAT_2a22_e326 == DAT_2a22_46f2)) {
    FUN_1eea_0574(_DAT_2a22_479a,1,0x8c,0x13a,0x3a,7);
  }
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    FUN_1eea_0574(_DAT_2a22_479a,1,0x8c,0x13a,0x3a,1);
  }
  FUN_1090_00d6(2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1090,_DAT_2a22_479a,_DAT_2a22_b20e + -1,_DAT_2a22_b210 + -1,_DAT_3000_d05b);
}



/* ovl_12::0288ee FUN_ovl_12__0288ee */

int __cdecl16far FUN_ovl_12__0288ee(char param_1,char *param_2,int param_3)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  do {
    if (0x10 < local_4) {
      return -1;
    }
    *param_2 = *param_2 + param_1;
    if ('\x10' < *param_2) {
      *param_2 = '\0';
    }
    if (*param_2 < '\0') {
      *param_2 = '\x10';
    }
    if (*(char *)(*param_2 * 0x1d + -0x60a7) != '\0') {
      if (param_3 == 0) {
LAB_ovl_12__02894f:
        return (int)*param_2;
      }
      iVar1 = FUN_ovl_12__02811e((int)*param_2);
      if (iVar1 != 0) goto LAB_ovl_12__02894f;
    }
    local_4 = local_4 + 1;
  } while( true );
}



/* ovl_12::028962 ovl_12_entry_252a_36c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far ovl_12_entry_252a_36c2(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  FUN_11e1_0108();
  DAT_3000_ce92 = 1;
  DAT_2a22_b4c4 = _DAT_2a22_fac8 == 500;
  *(undefined1 *)(param_1 * 0x1d + -0x60a7) = 1;
  DAT_2a22_b4ba = 0;
  DAT_2a22_b4bf = 0;
  DAT_2a22_b4be = 0;
  _DAT_3000_d023 = 0;
  _DAT_3000_d021 = 0;
  FUN_1eea_11e7();
  thunk_EXT_FUN_0000_0000(0x1eea,0,0);
  thunk_EXT_FUN_0000_0000(0x1eea,1,0);
  FUN_ovl_12__025378();
  DAT_3000_cf01 = FUN_ovl_12__0280e4(param_1);
  DAT_3000_ce9a = 0;
  DAT_3000_ce99 = 0;
  DAT_3000_ce9b = (char)param_1;
  DAT_3000_cea1 = 0;
  DAT_3000_cea0 = 0;
  DAT_3000_cea4 = 0;
  DAT_3000_cea2 = 0;
  iVar2 = 0;
  do {
    *(undefined2 *)((undefined *)&DAT_3000_cf5f + iVar2 * 2) = 0;
    *(undefined2 *)((undefined *)&DAT_3000_cf31 + iVar2 * 2) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  FUN_ovl_12__0252f8();
  FUN_ovl_12__0252a0();
  FUN_ovl_12__0278e8();
  FUN_ovl_12__025ca2(1,1,1);
  if (DAT_2a22_46ee != '\0') {
    FUN_1eea_11b7();
  }
  if (DAT_3000_cf01 == '\0') {
    uVar1 = 5;
  }
  else {
    uVar1 = 6;
  }
LAB_ovl_12__028a6f:
  do {
    while( true ) {
      while( true ) {
        while (iVar2 = FUN_ovl_12__0274aa(uVar1), iVar2 == 0) {
          FUN_ovl_12__02797c(param_1);
        }
        if (iVar2 != 1) break;
        FUN_ovl_12__027c08(1,0);
      }
      if (iVar2 != 2) break;
      FUN_1951_017a(0x1a);
      if (DAT_3000_cf01 == '\0') {
LAB_ovl_12__028aca:
        FUN_ovl_12__02808c();
      }
      else {
        FUN_ovl_12__028fa4(0);
        FUN_ovl_12__025ca2(0,0,1);
        FUN_ovl_12__027e52();
      }
    }
    if (iVar2 == 3) {
      FUN_1951_017a(0x1a);
      if (DAT_3000_cf01 == '\0') goto LAB_ovl_12__028ae3;
      goto LAB_ovl_12__028aca;
    }
    if (iVar2 == 4) {
      FUN_1951_017a(0x1a);
      if (DAT_3000_cf01 == '\0') goto LAB_ovl_12__028b0e;
LAB_ovl_12__028ae3:
      FUN_ovl_12__028544(0);
      goto LAB_ovl_12__028a6f;
    }
    if (iVar2 == 5) {
      FUN_1951_017a(0x1a);
LAB_ovl_12__028b0e:
      *(undefined2 *)(_DAT_2a22_479a + 0xc) = 0;
      FUN_ovl_12__027c08(0,1);
      *(undefined1 *)(DAT_3000_ce9b * 0x2e + 0x6962) = 1;
      FUN_19c7_4f54(0x1951,_DAT_3000_d029);
      FUN_1eea_11e7();
      thunk_EXT_FUN_0000_0000(0x1eea,0,0);
      thunk_EXT_FUN_0000_0000(0x1eea,1,0);
      FUN_11e1_002a((undefined *)&DAT_2a22_e337);
      return;
    }
  } while( true );
}



/* ovl_12::028b70 FUN_ovl_12__028b70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__028b70(void)

{
  int iVar1;
  
  FUN_1eea_11e7();
  FUN_1eea_0574(_DAT_2a22_479a,0,10,0x35,0x6a,0);
  iVar1 = 0x13;
  do {
    if (*(int *)(iVar1 * 2 + -0x1709) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,_DAT_2a22_b436,_DAT_2a22_b438,
                          *(undefined2 *)((undefined *)&DAT_3000_d027 + iVar1 * 2));
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x17);
  DAT_3000_ce9d = 0;
  if (DAT_2a22_46ee != '\0') {
    FUN_1eea_11b7();
  }
  return;
}



/* ovl_12::028c4c FUN_ovl_12__028c4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__028c4c(void)

{
  int iVar1;
  
  FUN_1eea_11e7();
  FUN_1eea_0574(_DAT_2a22_479a,0x101,10,0x31,0x69,0);
  iVar1 = 0x13;
  do {
    if ('\0' < *(char *)(DAT_3000_ce9b * 0x2e + iVar1 + 0x6950)) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1eea_00a4(0x1eea,_DAT_2a22_479a,_DAT_2a22_b446,_DAT_2a22_b448,
                          *(undefined2 *)((undefined *)&DAT_3000_d027 + iVar1 * 2));
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x17);
  DAT_3000_ce9f = 0;
  if (DAT_2a22_46ee != '\0') {
    FUN_1eea_11b7();
  }
  return;
}



/* ovl_12::028d1c FUN_ovl_12__028d1c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ovl_12__028d1c(undefined2 param_1,char param_2,char param_3)

{
  FUN_1eea_11e7();
  if (param_3 != '\0') {
    FUN_1eea_0574(_DAT_2a22_479a,1,1,0x130,0x82,0);
  }
  if (DAT_2a22_e326 == DAT_2a22_46f4) {
    FUN_1eea_0574(_DAT_2a22_479a,1,0x8c,0x13a,0x3a,0x16);
  }
  if ((DAT_2a22_e326 == DAT_2a22_46f3) || (DAT_2a22_e326 == DAT_2a22_46f2)) {
    FUN_1eea_0574(_DAT_2a22_479a,1,0x8c,0x13a,0x3a,7);
  }
  if (DAT_2a22_e326 == DAT_2a22_46f1) {
    FUN_1eea_0574(_DAT_2a22_479a,1,0x8c,0x13a,0x3a,1);
  }
  if (param_2 != '\0') {
    FUN_1eea_118a(0x1e,0x89);
  }
  FUN_1090_00d6(2);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1090,_DAT_2a22_479a,_DAT_2a22_b20e + -1,_DAT_2a22_b210 + -1,_DAT_3000_d05b);
}



/* ovl_12::028fa4 FUN_ovl_12__028fa4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_ovl_12__028fa4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar2 = DAT_3000_ce9a;
  uVar1 = DAT_3000_ce99;
  DAT_3000_ce92 = 1;
  DAT_3000_cea3 = 0;
  DAT_2a22_b4bb = 0;
  DAT_2a22_b4c1 = 0;
  DAT_2a22_b4c0 = 0;
  _DAT_3000_d027 = 0;
  _DAT_3000_d025 = 0;
  DAT_2a22_ad62 = 1;
  DAT_3000_ce9a = 0;
  DAT_3000_ce99 = 0;
  FUN_19c7_4ce0((undefined *)&DAT_3000_cf8d,0x354,8);
  FUN_19c7_4d7c((undefined *)&DAT_3000_cf95,0,8);
  FUN_ovl_12__028d1c(0x19c7,1,1);
  do {
    while( true ) {
      while( true ) {
        while (iVar3 = FUN_ovl_12__0274aa(4), iVar3 == 0) {
          FUN_ovl_12__027afe();
        }
        if (iVar3 != 1) break;
        FUN_ovl_12__027d50(1,0);
      }
      if (iVar3 != 2) break;
      FUN_1951_017a(0x1a);
      FUN_ovl_12__028544(1);
    }
  } while (iVar3 != 3);
  FUN_1951_017a(0x1a);
  FUN_ovl_12__027d50(0,1);
  DAT_2a22_ad62 = 0;
  DAT_3000_ce99 = uVar1;
  DAT_3000_ce9a = uVar2;
  FUN_1090_14d2(0);
  return;
}


