/* Decompiled pseudocode; not original source or guaranteed compilable C. */

/* 1000:0000 FUN_1000_0000 */

void FUN_1000_0000(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  int local_8;
  
  uVar3 = FUN_2035_0000(0x25f,0);
  FUN_1eea_052b(uVar3);
  FUN_2120_1692(0x1eea,param_2,param_3);
  FUN_19b0_0002();
  *(undefined1 *)*(undefined2 *)0x312 = *(undefined1 *)0x9ed5;
  uVar3 = FUN_2035_0000(*(undefined2 *)0x312,0);
  FUN_1eea_052b(uVar3);
  iVar4 = thunk_EXT_FUN_0000_0000(0x1eea);
  if (iVar4 != 0) {
    FUN_19c7_4f54(0x1eea,uVar3);
    *(undefined1 *)*(undefined2 *)0x312 = 0x4e;
    uVar3 = FUN_2035_0000(*(undefined2 *)0x312,0);
    FUN_1eea_052b(uVar3);
  }
  *(undefined1 *)*(undefined2 *)0x310 = *(undefined1 *)0x9ed4;
  uVar3 = FUN_2035_0000(*(undefined2 *)0x310,0x268);
  FUN_1eea_052b(uVar3);
  thunk_EXT_FUN_0000_0000(0x1eea,0);
  local_8 = 0;
  do {
    uVar3 = 0x1eea;
    iVar4 = thunk_EXT_FUN_0000_0000(0x1eea,local_8);
    *(int *)(local_8 * 2 + 0x39bc) = iVar4;
    if (iVar4 == 0) {
      uVar3 = 0x1951;
      FUN_1951_00b2(0x272);
    }
    thunk_EXT_FUN_0000_0000(uVar3,local_8,iVar4);
    local_8 = local_8 + 1;
  } while (local_8 < 3);
  uVar3 = 0x1eea;
  uVar5 = thunk_EXT_FUN_0000_0000(0x1eea);
  uVar1 = *(uint *)(*(char *)0x9ed6 * 2 + 0x35a);
  if (uVar5 < uVar1) {
    *(undefined1 *)0xad6a = 0;
    uVar3 = FUN_19c7_48e8(0x1eea,(uVar1 - uVar5) + 0x3f >> 6,0xa176,10);
    FUN_19c7_47cc(0xad6a,uVar3);
    FUN_19c7_47cc(0xad6a,0x27c);
    uVar3 = 0x1951;
    FUN_1951_00b2(0xad6a);
  }
  FUN_19c7_0072(uVar3,(int)*(char *)*(undefined2 *)0x310);
  *(undefined2 *)0x39c4 = *(undefined2 *)(*(int *)0x7910 * 2 + 0x39bc);
  FUN_197d_0004();
  FUN_2120_16ce(0x197d);
  FUN_1000_026c();
  if (*(char *)0x29e != '\0') {
    iVar4 = FUN_1eea_111a();
    if (iVar4 != 0) {
      uVar2 = 1;
      goto LAB_1000_019e;
    }
  }
  uVar2 = 0;
LAB_1000_019e:
  *(undefined1 *)0x29e = uVar2;
  FUN_1eea_1173(0,0,*(undefined2 *)0x9ef9);
  *(undefined2 *)0x9edc = 1;
  *(undefined2 *)0xb675 = 0;
  *(undefined2 *)0x9a82 = 0;
  *(undefined2 *)0x9a80 = 0;
  *(undefined2 *)0xb67a = 0;
  FUN_1000_07de();
  FUN_1000_088c();
  if (*(char *)0x9ed6 == *(char *)0x2a3) {
    thunk_EXT_FUN_0000_0000(0x1eea,5,0);
  }
  thunk_EXT_FUN_0000_0000(0x1eea,0x366,0);
  FUN_2120_16ec(0x1eea);
  FUN_1000_047c();
  do {
    iVar4 = FUN_1951_00ea();
  } while (iVar4 != 0);
  FUN_1000_07a6();
  uVar3 = 0x2120;
  FUN_2120_171e(0x1951);
  *(undefined2 *)0x9edc = 0x10;
  *(undefined2 *)0x9ee1 = 3;
  *(undefined2 *)0x9ee3 = 2;
  *(undefined1 *)0x616d = 0;
  *(undefined1 *)0x616c = 0;
  *(undefined2 *)0x9edf = 0xa180;
  *(undefined2 *)0xa170 = 0xa180;
  do {
    iVar4 = FUN_2120_173c(uVar3);
    if (iVar4 == 1) {
      FUN_2120_176e(0x2120);
LAB_1000_0265:
      FUN_2120_1778(0x2120);
    }
    else if (iVar4 == 3) {
      FUN_1000_0598();
    }
    else {
      if ((6 < iVar4) && (iVar4 < 9)) goto LAB_1000_0265;
      FUN_1000_0332();
    }
    uVar3 = 0x1eea;
    FUN_1eea_11e7();
  } while( true );
}



/* 1000:026c FUN_1000_026c */

void __cdecl16far FUN_1000_026c(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 local_6;
  int local_4;
  
  thunk_EXT_FUN_0000_0000(0x1000);
  FUN_20a6_0232(2,0x376);
  if (*(char *)0x9ed6 == *(char *)0x2a4) {
    local_6 = 0;
  }
  else if (*(char *)0x9ed6 == *(char *)0x2a1) {
    local_6 = 0x20;
  }
  else {
    local_6 = 0x10;
  }
  uVar1 = thunk_EXT_FUN_0000_0000(0x20a6,2,local_6,0x28,0x10,0x10);
  *(undefined2 *)0x9ef9 = uVar1;
  local_4 = 0;
  do {
    iVar2 = local_4 * 2;
    uVar1 = thunk_EXT_FUN_0000_0000
                      (0x1eea,2,local_6,local_4 * 0x14,*(undefined2 *)(iVar2 + 0x382),
                       *(undefined2 *)(iVar2 + 0x394));
    *(undefined2 *)(iVar2 + -0x60cb) = uVar1;
    local_4 = local_4 + 1;
  } while (local_4 < 9);
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* 1000:030e FUN_1000_030e */

void __cdecl16far FUN_1000_030e(void)

{
  undefined2 unaff_DS;
  
  thunk_EXT_FUN_0000_0000(0x1000);
  if (*(char *)0x29e != '\0') {
    FUN_1eea_1163();
  }
  if (*(char *)0x16d4 != '\0') {
    FUN_197d_0042();
  }
  FUN_19b0_003b();
  return;
}



/* 1000:0332 FUN_1000_0332 */

void __cdecl16far FUN_1000_0332(void)

{
  FUN_1000_030e();
  FUN_1951_0064(3);
  FUN_19c7_29de(0x1951,0x45);
  return;
}



/* 1000:0350 FUN_1000_0350 */

void __cdecl16far FUN_1000_0350(char *param_1,char *param_2)

{
  char cVar1;
  undefined2 unaff_DS;
  
  while (cVar1 = *param_2, *param_1 = cVar1, cVar1 != '\0') {
    param_1 = param_1 + 1;
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
  }
  return;
}



/* 1000:047c FUN_1000_047c */

void __cdecl16far FUN_1000_047c(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 local_6;
  undefined1 local_4 [2];
  
  if (*(int *)0xa172 != 0) {
    uVar2 = 0x2035;
    iVar1 = FUN_2035_00c6(*(undefined2 *)(*(int *)0xa172 * 2 + 0x43e),0,&local_6);
    if (iVar1 != 0) {
      uVar2 = 0x1951;
      FUN_1951_00b2(0x414);
    }
    puVar6 = local_4;
    FUN_19c7_4f30(uVar2,local_6,0xa174);
    puVar5 = local_4;
    FUN_19c7_4f30(0x19c7,local_6,0xa180);
    puVar4 = local_4;
    FUN_19c7_4f30(0x19c7,local_6,0xaf69);
    puVar3 = local_4;
    FUN_19c7_4f30(0x19c7,local_6,0xab44);
    FUN_19c7_4ec2(0x19c7,local_6,puVar3,puVar4,puVar5,puVar6);
    FUN_1951_02ac();
    *(int *)0x9f4b = *(int *)0xa180 + 10;
    *(int *)0xa156 = *(int *)0xa182 + 10;
    *(undefined2 *)0xa15a = *(undefined2 *)0xa184;
  }
  return;
}



/* 1000:0556 FUN_1000_0556 */

void __cdecl16far FUN_1000_0556(void)

{
  char *pcVar1;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  do {
    pcVar1 = (char *)(local_4 * 0x1d + -0x60b2);
    if (*pcVar1 < '\x01') {
      *pcVar1 = '\x01';
    }
    pcVar1 = (char *)(local_4 * 0x1d + -0x60b2);
    if ('\x18' < *pcVar1) {
      *pcVar1 = '\x18';
    }
    local_4 = local_4 + 1;
  } while (local_4 < 0x11);
  return;
}



/* 1000:0598 FUN_1000_0598 */

void __cdecl16far FUN_1000_0598(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  thunk_EXT_FUN_0000_0000(0x1000,0,0);
  thunk_EXT_FUN_0000_0000(0x1eea,1,0);
  FUN_1000_0556();
  if (*(int *)0xa172 == 1) {
    iVar1 = *(int *)0x9edc;
    if (iVar1 == 2) {
      FUN_2120_167e(0x1eea,(int)*(char *)(*(int *)0x9edf + 0xb));
    }
    else if (iVar1 == 3) {
      FUN_2120_1688(0x1eea,(int)*(char *)(*(int *)0x9edf + 0xb));
    }
    else if (iVar1 == 4) {
      FUN_2120_16ba(0x1eea,(int)*(char *)(*(int *)0x9edf + 0xb));
    }
    else if (iVar1 == 5) {
      FUN_2120_16b0(0x1eea,(int)*(char *)(*(int *)0x9edf + 0xb));
    }
    else if (iVar1 == 6) {
      FUN_2120_169c(0x1eea,(int)*(char *)(*(int *)0x9edf + 0xb));
    }
    else if (iVar1 == 7) {
      FUN_2120_16a6(0x1eea,(int)*(char *)(*(int *)0x9edf + 0xb));
    }
  }
  else if (*(int *)0xa172 == 2) {
    switch(*(undefined2 *)0x9edc) {
    case 2:
      FUN_2120_1700(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
      break;
    case 3:
      FUN_2120_170a(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
      break;
    case 8:
      FUN_2120_16c4(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
      break;
    case 9:
      FUN_2120_16d8(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
      break;
    case 10:
      FUN_2120_16e2(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
      break;
    case 0xb:
      FUN_2120_16f6(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
      break;
    case 0xc:
      FUN_2120_1714(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
      break;
    case 0xd:
      FUN_2120_1728(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
      break;
    case 0xe:
      FUN_2120_1732(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
      break;
    case 0xf:
      FUN_2120_1746(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
      break;
    case 0x10:
      FUN_2120_1750(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
      break;
    case 0x11:
      FUN_2120_175a(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
      break;
    case 0x12:
      FUN_2120_1764(0x1000,(int)*(char *)(*(int *)0x9edf + 0xb));
    }
  }
  FUN_1000_0556();
  *(undefined1 *)(*(int *)0x9edc * 0x1d + -0x60e3) = 1;
  FUN_1eea_11e7();
  thunk_EXT_FUN_0000_0000(0x1eea,0,0);
  thunk_EXT_FUN_0000_0000(0x1eea,1,0);
  return;
}



/* 1000:07a6 FUN_1000_07a6 */

void __cdecl16far FUN_1000_07a6(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  *(undefined2 *)0xb678 = 500;
  *(undefined2 *)0xb671 = 3;
  *(undefined2 *)0xb67a = 10;
  uVar3 = *(uint *)0xb675;
  puVar1 = (uint *)0x9a80;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)0x9a82 = *(int *)0x9a82 + ((int)uVar3 >> 0xf) + (uint)CARRY2(uVar2,uVar3);
  iVar4 = (int)uVar3 / 0x32;
  if (0xf < iVar4) {
    iVar4 = 0xf;
  }
  *(int *)0x5e78 = *(int *)0x5e78 + iVar4;
  *(undefined2 *)0xb675 = 0;
  return;
}



/* 1000:07de FUN_1000_07de */

void __cdecl16far FUN_1000_07de(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  do {
    FUN_19c7_4d7c(local_4 * 0x1d + -0x60b3,0,0x1d);
    local_4 = local_4 + 1;
  } while (local_4 < 0x11);
  *(undefined1 *)0x9f4e = 0xf;
  *(undefined1 *)0x9f6b = 0x12;
  *(undefined1 *)0x9f88 = 0;
  *(undefined1 *)0x9fa5 = 0xc;
  *(undefined1 *)0x9fc2 = 0;
  *(undefined1 *)0x9fdf = 0;
  *(undefined1 *)0x9ffc = 4;
  *(undefined1 *)0xa019 = 0;
  *(undefined1 *)0xa036 = 0;
  *(undefined1 *)0xa053 = 0;
  *(undefined1 *)0xa070 = 0x10;
  *(undefined1 *)0xa08d = 0xc;
  *(undefined1 *)0xa0aa = 9;
  *(undefined1 *)0xa0c7 = 2;
  *(undefined1 *)0xa0e4 = 0;
  *(undefined1 *)0xa101 = 0;
  *(undefined1 *)0xa11e = 0x18;
  *(undefined1 *)0x9ed7 = 0;
  *(undefined1 *)0x9ed8 = 0;
  *(undefined1 *)0x9ed9 = 0;
  *(undefined1 *)0x9eda = 0;
  *(undefined1 *)0x9edb = 0;
  *(undefined1 *)0x9ede = 0;
  FUN_1000_088c();
  FUN_2120_1782(0x19c7);
  return;
}



/* 1000:088c FUN_1000_088c */

void __cdecl16far FUN_1000_088c(void)

{
  int local_4;
  
  local_4 = 0;
  do {
    FUN_19c7_4d7c(local_4 * 0x17 + -0x521e,0,0x17);
    local_4 = local_4 + 1;
  } while (local_4 < 0x11);
  return;
}



/* 1000:08be FUN_1000_08be */

int __cdecl16far FUN_1000_08be(int param_1)

{
  undefined2 unaff_DS;
  int local_6;
  int local_4;
  
  local_4 = 0;
  for (local_6 = 0; local_6 < *(int *)0xa174; local_6 = local_6 + 1) {
    if ((*(char *)(local_6 * 0x32 + -0x5e76) == param_1) &&
       (*(char *)(local_6 * 0x32 + -0x5e51) == '\0')) {
      local_4 = local_4 + 1;
    }
  }
  return local_4;
}



/* 1090:00a6 FUN_1090_00a6 */

void __cdecl16far FUN_1090_00a6(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  undefined2 local_10 [2];
  undefined2 local_c;
  undefined2 local_a;
  
  local_10[0] = 0xb;
  FUN_19c7_4a00(0x33,local_10,local_10);
  *param_1 = local_c;
  *param_2 = local_a;
  return;
}



/* 1090:00d6 FUN_1090_00d6 */

void __cdecl16far FUN_1090_00d6(undefined2 param_1)

{
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  do {
    *(undefined2 *)(*(int *)(local_4 * 2 + 0x34a) + 0x10) = param_1;
    local_4 = local_4 + 1;
  } while (local_4 < 3);
  return;
}



/* 1090:00fe FUN_1090_00fe */

void __cdecl16far FUN_1090_00fe(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  
  do {
    pcVar2 = param_2;
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
    cVar1 = *pcVar2;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}



/* 1090:011a FUN_1090_011a */

void __cdecl16far FUN_1090_011a(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  
  do {
    pcVar2 = param_1;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}



/* 1090:0136 FUN_1090_0136 */

void __cdecl16far
FUN_1090_0136(int param_1,int param_2,int param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7)

{
  undefined2 unaff_DS;
  undefined1 local_34 [50];
  
  FUN_1090_00fe(local_34,param_4,param_5);
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x16;
  *(undefined2 *)(param_1 + 0xc) = param_7;
  thunk_EXT_FUN_0000_0000(0x1090,param_1,param_2 + 1,param_3 + 1,local_34);
  *(undefined2 *)(param_1 + 0xc) = param_6;
  thunk_EXT_FUN_0000_0000(0x1eea,param_1,param_2,param_3,local_34);
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}



/* 1090:01ae FUN_1090_01ae */

int __cdecl16far FUN_1090_01ae(void)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_8 = 0;
  local_a = *(int *)0x35c;
  if (*(int *)0xa172 == 1) {
    for (local_6 = 0; local_6 < 4; local_6 = local_6 + 1) {
      local_4 = 5;
      local_c = *(int *)(local_6 * 2 + 0x354);
      while (iVar2 = local_c + -1, local_c != 0) {
        local_8 = local_8 + local_4;
        local_c = iVar2;
        if (1 < local_4) {
          local_4 = local_4 + -1;
        }
      }
    }
    iVar2 = FUN_1000_08be(4);
    if (iVar2 == 0) {
      local_8 = local_8 + 0x14;
    }
    iVar2 = FUN_1000_08be(7);
    if (iVar2 == 0) {
      local_8 = local_8 + 0x14;
    }
    iVar2 = FUN_1000_08be(3);
    if (iVar2 == 0) {
      local_8 = local_8 + 5;
    }
    iVar2 = FUN_1000_08be(6);
    if (iVar2 == 0) {
      local_8 = local_8 + 10;
    }
    iVar2 = FUN_1000_08be(2);
    if (iVar2 == 0) {
      local_8 = local_8 + 10;
    }
    iVar2 = FUN_1000_08be(5);
    if (iVar2 == 0) {
      local_8 = local_8 + 5;
    }
    if (*(char *)0x9f55 != '\0') {
      local_8 = local_8 + 0x19;
    }
    if (*(char *)0x9fac != '\0') {
      local_8 = local_8 + 0x19;
    }
    if (*(char *)0x9f72 != '\0') {
      local_8 = local_8 + 0x19;
    }
  }
  else {
    if (*(int *)0xa172 != 2) {
      return 0;
    }
    if (local_a != 0) {
      local_a = local_a + -1;
      local_8 = 0x32;
    }
    if (local_a != 0) {
      local_8 = local_8 + 0x14;
      local_a = local_a + -1;
    }
    while (local_a != 0) {
      local_8 = local_8 + 10;
      local_a = local_a + -1;
    }
    for (local_6 = 0; local_6 < 4; local_6 = local_6 + 1) {
      local_4 = 10;
      local_c = *(int *)(local_6 * 2 + 0x354);
      while (iVar2 = local_c + -1, local_c != 0) {
        local_8 = local_8 + local_4;
        local_c = iVar2;
        if (1 < local_4) {
          local_4 = local_4 + -1;
        }
      }
    }
    iVar2 = FUN_1000_08be(9);
    if (iVar2 == 0) {
      local_8 = local_8 + 0x14;
    }
    iVar2 = FUN_1000_08be(0xb);
    if (iVar2 == 0) {
      local_8 = local_8 + 0x14;
    }
    iVar2 = FUN_1000_08be(0x12);
    if (iVar2 == 0) {
      local_8 = local_8 + 0x14;
    }
    iVar2 = FUN_1000_08be(10);
    if (iVar2 == 0) {
      local_8 = local_8 + 10;
    }
    iVar2 = FUN_1000_08be(2);
    if (iVar2 == 0) {
      local_8 = local_8 + 10;
    }
    iVar2 = FUN_1000_08be(0xc);
    if (iVar2 == 0) {
      local_8 = local_8 + 10;
    }
    iVar2 = FUN_1000_08be(0xd);
    if (iVar2 == 0) {
      local_8 = local_8 + 10;
    }
    iVar2 = FUN_1000_08be(0xf);
    if (iVar2 == 0) {
      local_8 = local_8 + 10;
    }
    iVar2 = FUN_1000_08be(0x11);
    if (iVar2 == 0) {
      local_8 = local_8 + 10;
    }
    iVar2 = FUN_1000_08be(8);
    if (iVar2 == 0) {
      local_8 = local_8 + 5;
    }
    iVar2 = FUN_1000_08be(3);
    if (iVar2 == 0) {
      local_8 = local_8 + 5;
    }
    iVar2 = FUN_1000_08be(0xe);
    if (iVar2 == 0) {
      local_8 = local_8 + 5;
    }
    if (*(char *)0xa003 != '\0') {
      local_8 = local_8 + 0x14;
    }
    if (*(char *)0x9f72 != '\0') {
      local_8 = local_8 + 0x14;
    }
    if (*(char *)0xa0b1 != '\0') {
      local_8 = local_8 + 0x14;
    }
    if (*(char *)0xa0ce != '\0') {
      local_8 = local_8 + 0x14;
    }
    if (*(char *)0x9f55 != '\0') {
      local_8 = local_8 + 0x28;
    }
    if (*(char *)0xa094 != '\0') {
      local_8 = local_8 + 0x28;
    }
    if (*(char *)0xa077 != '\0') {
      local_8 = local_8 + 0x3c;
    }
    if (*(char *)0xa108 != '\0') {
      local_8 = local_8 + 0x3c;
    }
  }
  uVar1 = *(uint *)0xb675;
  iVar2 = FUN_19c7_4f62(uVar1 + *(uint *)0x9a80,
                        ((int)uVar1 >> 0xf) + *(int *)0x9a82 + (uint)CARRY2(uVar1,*(uint *)0x9a80),
                        0xfa,0);
  return local_8 - iVar2;
}



/* 1090:047e FUN_1090_047e */

void __cdecl16far FUN_1090_047e(void)

{
  undefined2 unaff_DS;
  uint local_4;
  
  local_4 = 0;
  do {
    if (*(char *)(local_4 * 2 + 0x5392) == '\0') {
      *(undefined1 *)(local_4 + 0x5398) = 0;
      *(undefined1 *)(local_4 + 0x539a) = 0;
    }
    if (*(char *)(local_4 + 0x5390) == '\0') {
      *(undefined1 *)(local_4 + 0x5398) = 0;
    }
    local_4 = local_4 + 1;
  } while ((int)local_4 < 2);
  local_4 = 0;
  do {
    if (*(char *)(local_4 * 2 + 0x5393) == '\0') {
      *(undefined1 *)((local_4 ^ 1) + 0x5396) = 0;
    }
    local_4 = local_4 + 1;
  } while ((int)local_4 < 2);
  return;
}



/* 1090:04e6 FUN_1090_04e6 */

void __cdecl16far FUN_1090_04e6(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  if (*(char *)0x53da == '\0') {
    local_4 = 0;
    do {
      *(undefined1 *)(local_4 + 0x53db) = 0;
      local_4 = local_4 + 1;
    } while (local_4 < 0xd);
  }
  local_4 = 0;
  do {
    if (*(char *)(local_4 + 0x53d2) == '\0') {
      *(undefined1 *)(local_4 + 0x53db) = 0;
      *(undefined1 *)(local_4 + 0x53e3) = 0;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 4);
  local_4 = 0;
  do {
    if (*(char *)(local_4 + 0x53ce) == '\0') {
      *(undefined1 *)(local_4 + 0x53e3) = 0;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 4);
  return;
}



/* 1090:0550 FUN_1090_0550 */

void __cdecl16far FUN_1090_0550(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  if (*(char *)0x5402 == '\0') {
    for (local_4 = 0; local_4 < 6; local_4 = local_4 + 1) {
      *(undefined1 *)(local_4 + 0x5403) = 0;
      *(undefined1 *)(local_4 + 0x5409) = 0;
    }
  }
  else {
    local_4 = 0;
    do {
      if ((*(char *)(local_4 + 0x53f6) == '\0') || (*(char *)(local_4 + 0x53fc) == '\0')) {
        *(undefined1 *)(local_4 + 0x5403) = 0;
        *(undefined1 *)(local_4 + 0x5409) = 0;
      }
      local_4 = local_4 + 1;
    } while (local_4 < 6);
  }
  return;
}



/* 1090:05b0 FUN_1090_05b0 */

void __cdecl16far FUN_1090_05b0(void)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_4;
  
  if ((*(char *)0x53b5 == '\0') || (*(char *)0x53b1 == '\0')) {
    local_4 = 0;
    do {
      *(undefined1 *)(local_4 + 0x53b6) = 0;
      *(undefined1 *)(local_4 + 0x53b9) = 0;
      *(undefined1 *)(local_4 + 0x53bc) = 0;
      local_4 = local_4 + 1;
    } while (local_4 < 3);
  }
  local_4 = 0;
  do {
    if (*(char *)(local_4 + 0x53b3) == '\0') {
      iVar1 = local_4 * 2;
      *(undefined1 *)(iVar1 + 0x53b9) = 0;
      *(undefined1 *)(iVar1 + 0x53bc) = 0;
      *(undefined1 *)(iVar1 + 0x53b6) = 0;
    }
    iVar1 = local_4 * 2;
    if (*(char *)(iVar1 + 0x53b0) == '\0') {
      *(undefined1 *)(iVar1 + 0x53b9) = 0;
      *(undefined1 *)(iVar1 + 0x53b6) = 0;
    }
    if (*(char *)(local_4 * 2 + 0x53ad) == '\0') {
      *(undefined1 *)(local_4 * 2 + 0x53b6) = 0;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 2);
  if (*(char *)0x53ae == '\0') {
    *(undefined1 *)0x53b7 = 0;
  }
  return;
}



/* 1090:064e FUN_1090_064e */

void __cdecl16far FUN_1090_064e(void)

{
  FUN_19c7_4ce0(0x5396,0x538c,10);
  FUN_19c7_4ce0(0x53b6,0x53aa,0xc);
  FUN_19c7_4ce0(0x53db,0x53ce,0xd);
  FUN_19c7_4ce0(0x5403,0x53f6,0xd);
  FUN_19c7_4ce0(0x5425,0x541e,7);
  return;
}



/* 1090:06b4 FUN_1090_06b4 */

void __cdecl16far FUN_1090_06b4(void)

{
  FUN_1090_04e6();
  FUN_1090_047e();
  FUN_1090_0550();
  FUN_1090_05b0();
  return;
}



/* 1090:06c6 FUN_1090_06c6 */

/* WARNING: Instruction at (ram,0x00019a59) overlaps instruction at (ram,0x00019a56)
    */
/* WARNING: Control flow encountered bad instruction data */

int * __cdecl16far FUN_1090_06c6(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  char cVar10;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined2 uVar8;
  int iVar9;
  uint in_CX;
  uint in_DX;
  undefined1 *puVar11;
  int *in_BX;
  undefined1 uVar12;
  int *unaff_SI;
  uint *puVar13;
  uint *unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar14;
  byte in_AF;
  int *piVar15;
  int aiStack_e [3];
  int *piStack_8;
  uint uStack_6;
  uint in_stack_0000fffc;
  
  if ((int *)0x10 < param_1) {
    return param_1;
  }
  uVar7 = (int)param_1 * 2;
  cVar10 = (char)((uint)in_BX >> 8);
  switch(param_1) {
  case (int *)0x0:
    puVar13 = unaff_DI;
    while (puVar13[1] != in_CX) {
      puVar13 = puVar13 + 2;
      if (puVar13 == (uint *)0x8f3a) {
        return in_BX;
      }
    }
    uVar7 = in_DX + *puVar13;
    if (CARRY2(in_DX,*puVar13)) {
      return in_BX;
    }
    if ((puVar13 != unaff_DI) || (*(uint *)0x8ee4 < uVar7)) {
      bVar14 = puVar13 < unaff_DI;
      if (puVar13 == unaff_DI) {
        bVar14 = ((uint)(CONCAT12(0xfff0 < uVar7,uVar7 + 0xf) >> 1) >> 3) + in_CX < *(uint *)0x8f5b;
      }
      pcVar4 = (code *)swi(0x21);
      piVar15 = (int *)(*pcVar4)();
      uVar7 = (uint)((ulong)piVar15 >> 0x10);
      if (bVar14) {
        return (int *)piVar15;
      }
      if (puVar13 == unaff_DI) {
        *(uint *)0x8ee4 = uVar7;
      }
    }
    LOCK();
    piVar6 = (int *)*puVar13;
    *puVar13 = uVar7;
    UNLOCK();
    return piVar6;
  default:
    uStack_6 = 0x1000;
    piStack_8 = (int *)0x910a;
    uVar8 = FUN_1ed2_0008();
    *(undefined2 *)0x13e4 = uVar8;
    *(undefined2 *)0x13ea = *(undefined2 *)0x13c2;
    uStack_6 = 0x1ed2;
    piStack_8 = (int *)0x9120;
    FUN_1ed2_0008();
    uStack_6 = 0x1ed2;
    piStack_8 = (int *)0x912d;
    iVar5 = FUN_1ed2_0008();
    uStack_6 = 0x1ed2;
    piStack_8 = (int *)0x913f;
    iVar9 = FUN_1ed2_0008();
    *(int *)0x13e0 = iVar9 + iVar5;
    uStack_6 = 0x1ed2;
    piStack_8 = (int *)0x9154;
    FUN_1ed2_0008();
    uStack_6 = 0x1ed2;
    piStack_8 = (int *)0x9161;
    iVar5 = FUN_1ed2_0008();
    uStack_6 = 0x1ed2;
    piStack_8 = (int *)0x9173;
    iVar9 = FUN_1ed2_0008();
    *(int *)0x13e6 = iVar9 - iVar5;
    uStack_6 = 0x1ed2;
    piStack_8 = (int *)0x9188;
    piVar6 = (int *)FUN_1ed2_0008();
    *(undefined2 *)0x13ec = piVar6;
    return piVar6;
  case (int *)0x2:
  case (int *)0xb:
    if (*(int *)(*(int *)0x94c6 + 10) == -1) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = (undefined2)
              (((ulong)*(uint *)(*(int *)0x94c6 + 10) * (ulong)(*(int *)0xb8ea + 0x13) & 0xffff) /
              (ulong)*(uint *)0xb8ea);
    }
    *(undefined2 *)0x94c0 = uVar8;
    uStack_6 = 0x1000;
    piStack_8 = (int *)0x1eb7;
    iVar5 = thunk_EXT_FUN_0000_0000();
    if (iVar5 == 0) {
      uVar7 = (*(int *)(*(int *)0x484 + 6) + 1) * (*(int *)(*(int *)0x484 + 8) + 1);
      iVar5 = (int)uVar7 >> 0xf;
      if ((iVar5 < 0) || ((iVar5 < 1 && (uVar7 < 48000)))) {
        uVar8 = 0;
        goto LAB_11e1_00d0;
      }
    }
    uVar8 = 1;
LAB_11e1_00d0:
    *(undefined2 *)0xb8f0 = uVar8;
    *(undefined2 *)0xb8f0 = 1;
    uStack_6 = *(undefined2 *)(*(int *)0x94c6 + 6);
    piStack_8 = (int *)0x1eea;
    aiStack_e[2] = 0x1ef7;
    FUN_11e1_00f6();
    uStack_6 = 0x1efe;
    FUN_11e1_04a6();
    uStack_6 = 0x1f02;
    piVar6 = (int *)FUN_11e1_01de();
    return piVar6;
  case (int *)0x3:
  case (int *)0xc:
    bVar3 = 9 < ((byte)in_BX & 0xf) | in_AF;
    puVar11 = (undefined1 *)*(uint *)0x375c;
    if ((int)puVar11 < 0) {
      puVar11 = (undefined1 *)
                (~(uint)puVar11 +
                (uint)(0xfffe < ~(CONCAT11(cVar10 + bVar3,(byte)in_BX + bVar3 * '\x06') & 0xff0f)));
    }
    if (aiStack_e + 6 < puVar11) {
      return (int *)0xffff;
    }
    return (int *)0x0;
  case (int *)0x4:
  case (int *)0xd:
    uStack_6 = *(undefined2 *)0x7922;
    piStack_8 = (int *)0x1000;
    aiStack_e[2] = 0x479f;
    FUN_1859_0008();
    iVar5 = FUN_14b9_02b2();
    if (iVar5 == 0) {
      uVar8 = *(undefined2 *)(*(int *)0x7922 + 6);
LAB_132b_151b:
      *(undefined2 *)0x957c = uVar8;
      *(undefined2 *)0x9580 = uVar8;
      iVar5 = FUN_14b9_02b2();
      *(int *)0x957e = iVar5;
      *(int *)0x9582 = iVar5 + 6;
    }
    else {
      if (iVar5 == 1) {
        uVar8 = *(undefined2 *)(*(int *)0x7922 + 8);
      }
      else {
        if (iVar5 == 2) {
          uVar8 = 0;
          goto LAB_132b_151b;
        }
        if (iVar5 != 3) goto LAB_132b_1539;
        uVar8 = 0;
      }
      *(undefined2 *)0x957e = uVar8;
      *(undefined2 *)0x9582 = uVar8;
      iVar5 = FUN_14b9_02b2();
      *(int *)0x957c = iVar5;
      *(int *)0x9580 = iVar5 + 6;
    }
LAB_132b_1539:
    uStack_6 = 0x483d;
    piVar6 = (int *)FUN_1eea_0bde();
    return piVar6;
  case (int *)0x5:
  case (int *)0xe:
    pcVar4 = (code *)swi(0x21);
    piVar6 = (int *)(*pcVar4)();
    return piVar6;
  case (int *)0x6:
  case (int *)0xf:
    if ((POPCOUNT(uVar7 & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_CX - 1 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    out(0x3c8,(char)(in_CX - 1));
    out(0x3c9,*(undefined1 *)(uVar7 + 0x16f4));
    out(0x3c9,(char)*(undefined2 *)(uVar7 + 0x16f5));
    out(0x3c9,(char)((uint)*(undefined2 *)(uVar7 + 0x16f5) >> 8));
    uVar7 = *(uint *)0x16e6;
    *(int *)0x16e6 = *(int *)0x16e6 + 1;
    iVar5 = (uVar7 & 3) * 3;
    uVar8 = *(undefined2 *)(iVar5 + 0x16e9);
    out(0x3c8,0x10);
    out(0x3c9,*(undefined1 *)(iVar5 + 0x16e8));
    out(0x3c9,(char)uVar8);
    uVar12 = (undefined1)((uint)uVar8 >> 8);
    out(0x3c9,uVar12);
    if (*(int *)0x16c7 == 4) {
      pcVar1 = (char *)0x16e4;
      cVar2 = *pcVar1;
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0' || SBORROW1(cVar2,'\x01') != *pcVar1 < '\0') {
        *(undefined1 *)0x16e4 = 7;
        return (int *)CONCAT11(cVar10,uVar12);
      }
    }
    *(int *)0x16d6 = *(int *)0x16d6 + 1;
    *(int *)0x16d8 = *(int *)0x16d8 + 1;
    if (*(char *)0x16de != '\0') {
      *(char *)0x16de = *(char *)0x16de + -1;
    }
    if (*(int *)0x16dc != 0) {
      *(int *)0x16dc = *(int *)0x16dc + -1;
    }
    if (*(int *)0x16da != 0) {
      *(int *)0x16da = *(int *)0x16da + -1;
    }
    *(int *)0x16e0 = *(int *)0x16e0 + 1;
    *(int *)0x16e2 = *(int *)0x16e2 + 1;
    uStack_6 = 0x9aeb;
    iVar5 = func_0x0001f255();
    if (iVar5 == 0) {
      return (int *)0x0;
    }
    if (iVar5 < 0) {
      *(undefined2 *)0x16c4 = 1;
      piVar6 = (int *)*(undefined2 *)0x16c9;
      *(undefined2 *)0x16be = piVar6;
      *(undefined1 *)0x16c6 = 1;
      return piVar6;
    }
    uVar7 = *(uint *)0x16c7;
    *(uint *)0x16c4 = uVar7;
    piVar6 = (int *)(*(uint *)0x16c9 / uVar7);
    *(uint *)0x16be = (uint)piVar6;
    *(undefined1 *)0x16c6 = 1;
    return piVar6;
  case (int *)0x7:
    for (; (int)uStack_6 < 4; uStack_6 = uStack_6 + 1) {
      if (aiStack_e[in_stack_0000fffc] < aiStack_e[uStack_6]) {
        in_stack_0000fffc = uStack_6;
      }
    }
    if (in_stack_0000fffc != 0) goto code_r0x0001175d;
    break;
  case (int *)0x8:
                    /* WARNING: Subroutine does not return */
    uStack_6 = 0x2125;
    thunk_FUN_1eea_00a4();
  case (int *)0x9:
    uStack_6 = 0x109;
    bVar14 = true;
    do {
      while( true ) {
        param_2 = param_2 + 1;
        if ((*param_2 == '\0') || (!bVar14)) {
          piStack_8 = param_1;
          aiStack_e[2] = 0x1000;
          aiStack_e[1] = 0xd253;
          iVar5 = FUN_19c7_418c();
          if (iVar5 < 0) {
            unaff_SI = (int *)0x0;
          }
          else {
            *(undefined1 *)(unaff_SI + 3) = (undefined1)uStack_6;
            *(int *)0x8fb2 = *(int *)0x8fb2 + 1;
            iVar9 = ((int)(unaff_SI + 0x3826) >> 3) * 6;
            *(undefined1 *)(iVar9 + -0x6fac) = 0;
            unaff_SI[1] = 0;
            *(undefined2 *)(iVar9 + -0x6fa8) = 0;
            *unaff_SI = 0;
            unaff_SI[2] = 0;
            piStack_8._0_1_ = (undefined1)iVar5;
            *(undefined1 *)((int)unaff_SI + 7) = piStack_8._0_1_;
          }
          return unaff_SI;
        }
        cVar10 = *param_2;
        if (cVar10 != '+') break;
        if ((uStack_6 & 2) == 0) {
          uStack_6 = uStack_6 & 0xfffe | 2;
        }
        else {
LAB_19c7_35c5:
          bVar14 = false;
        }
      }
      if (cVar10 == 'b') {
        if ((uStack_6 & 0xc000) != 0) goto LAB_19c7_35c5;
        uStack_6 = uStack_6 | 0x8000;
      }
      else {
        if ((cVar10 != 't') || ((uStack_6 & 0xc000) != 0)) goto LAB_19c7_35c5;
        uStack_6 = uStack_6 | 0x4000;
      }
    } while( true );
  case (int *)0x10:
    *(char *)((int)unaff_SI + 9) = *(char *)((int)unaff_SI + 9) + (char)(in_DX >> 8);
code_r0x0001175d:
    if (in_stack_0000fffc != 2) goto LAB_1090_0f15;
  }
  iVar5 = (int)in_stack_0000fffc / 2;
  if ((*(char *)(iVar5 + 0x538e) != '\0') && (*param_1 != 0)) {
    *(undefined1 *)(iVar5 + 0x5398) = 0;
    *(undefined1 *)(iVar5 + 0x53a2) = *(undefined1 *)0x448;
    *(undefined1 *)(iVar5 + 0x538e) = 0;
    in_stack_0000fffc = 0;
    uStack_6 = 0x1000;
    piStack_8 = (int *)0x1797;
    FUN_1090_06c6();
    *param_1 = *param_1 + -1;
  }
  iVar5 = (int)in_stack_0000fffc / 2;
  if ((*(char *)(iVar5 + 0x5390) != '\0') && (*param_1 != 0)) {
    *(undefined1 *)(iVar5 + 0x539a) = 0;
    *(undefined1 *)(iVar5 + 0x53a4) = *(undefined1 *)0x448;
    *(undefined1 *)(iVar5 + 0x5390) = 0;
    in_stack_0000fffc = 0xb;
    uStack_6 = 0x1000;
    piStack_8 = (int *)0x17d1;
    FUN_1090_06c6();
    *param_1 = *param_1 + -1;
  }
  if ((*(char *)(in_stack_0000fffc + 0x5392) != '\0') && (*param_1 != 0)) {
    *(undefined1 *)(in_stack_0000fffc + 0x539c) = 0;
    *(undefined1 *)(in_stack_0000fffc + 0x53a6) = *(undefined1 *)0x448;
    *(undefined1 *)(in_stack_0000fffc + 0x5392) = 0;
    in_stack_0000fffc = 1;
    uStack_6 = 0x1000;
    piStack_8 = (int *)0x180d;
    FUN_1090_06c6();
    *param_1 = *param_1 + -1;
  }
LAB_1090_0f15:
  if ((in_stack_0000fffc == 1) || (in_stack_0000fffc == 3)) {
    iVar5 = (int)in_stack_0000fffc / 2;
    if ((*(char *)(iVar5 + 0x538c) != '\0') && (*param_1 != 0)) {
      *(undefined1 *)(iVar5 + 0x5396) = 0;
      *(undefined1 *)(iVar5 + 0x53a0) = *(undefined1 *)0x448;
      *(undefined1 *)(iVar5 + 0x538c) = 0;
      in_stack_0000fffc = 7;
      uStack_6 = 0x1000;
      piStack_8 = (int *)0x1853;
      FUN_1090_06c6();
      *param_1 = *param_1 + -1;
    }
    if ((*(char *)(in_stack_0000fffc + 0x5392) != '\0') && (*param_1 != 0)) {
      *(undefined1 *)(in_stack_0000fffc + 0x539c) = 0;
      *(undefined1 *)(in_stack_0000fffc + 0x53a6) = *(undefined1 *)0x448;
      *(undefined1 *)(in_stack_0000fffc + 0x5392) = 0;
      uStack_6 = 0x1000;
      piStack_8 = (int *)0x188f;
      FUN_1090_06c6();
      *param_1 = *param_1 + -1;
    }
  }
  uStack_6 = 0x189b;
  FUN_1090_064e();
  uStack_6 = 0x189f;
  piVar6 = (int *)FUN_1090_06b4();
  return piVar6;
}



/* 1090:073a FUN_1090_073a */

undefined2 __cdecl16far FUN_1090_073a(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  do {
    if (2 < iVar1) {
      return 0;
    }
    for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
      if (*(int *)(iVar1 * 0x16 + iVar2 * 2 + 0x5e64) != 0) {
        return 1;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



/* 1090:077c FUN_1090_077c */

int __cdecl16far FUN_1090_077c(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  char local_4;
  
  while ((*(int *)0x5e78 != 0 && (*param_1 != 0))) {
    *param_1 = *param_1 + -1;
    *(int *)0x5e78 = *(int *)0x5e78 + -1;
  }
  if (0 < *param_1) {
    for (local_4 = '\0';
        ((0 < *param_1 && (iVar4 = FUN_1090_073a(), iVar4 != 0)) && (local_4 < '<'));
        local_4 = local_4 + '\x01') {
      bVar2 = false;
      cVar3 = FUN_14b9_02b2(9);
      iVar4 = 0;
      do {
        if (bVar2) break;
        piVar5 = (int *)(cVar3 * 2 + iVar4 * 0x16 + 0x5e64);
        if (*piVar5 != 0) {
          piVar1 = piVar5;
          *piVar1 = *piVar1 + -1;
          *param_1 = *param_1 + -1;
          bVar2 = true;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
    }
    if (((';' < local_4) && (0 < *param_1)) && (iVar4 = FUN_1090_073a(), iVar4 != 0)) {
      for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        for (iVar7 = 0; iVar7 < 10; iVar7 = iVar7 + 1) {
          piVar5 = (int *)(iVar4 * 0x16 + iVar7 * 2 + 0x5e64);
          if (*piVar5 != 0) {
            piVar1 = piVar5;
            *piVar1 = *piVar1 + -1;
            *param_1 = *param_1 + -1;
            if ((*param_1 == 0) || (iVar6 = FUN_1090_073a(), iVar6 == 0)) goto LAB_1090_086e;
          }
        }
      }
    }
  }
LAB_1090_086e:
  return *param_1;
}



/* 1090:087a FUN_1090_087a */

void __cdecl16far FUN_1090_087a(int *param_1)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_10 [5];
  int local_6;
  int local_4;
  
  local_4 = 0;
  if (*(char *)0x53da != '\0') {
    local_6 = 0;
    do {
      local_10[local_6] = 0;
      local_6 = local_6 + 1;
    } while (local_6 < 4);
    local_6 = 0;
    do {
      if (*(char *)(local_6 + 0x53d6) != '\0') {
        local_10[local_6] = local_10[local_6] + 1;
      }
      if (*(char *)(local_6 + 0x53ce) != '\0') {
        local_10[local_6] = local_10[local_6] + 1;
      }
      if (*(char *)(local_6 + 0x53d2) != '\0') {
        local_10[local_6] = local_10[local_6] + 1;
      }
      local_6 = local_6 + 1;
    } while (local_6 < 4);
    if ((((local_10[0] == 0) && (local_10[1] == 0)) && (local_10[2] == 0)) && (local_10[3] == 0)) {
      *(undefined1 *)0x53da = 0;
      *(undefined1 *)0x53f4 = *(undefined1 *)0x448;
      *(undefined1 *)0x53e7 = 0;
      FUN_1090_06c6(0xc);
    }
    else {
      local_6 = 0;
      do {
        if (local_10[local_4] < local_10[local_6]) {
          local_4 = local_6;
        }
        local_6 = local_6 + 1;
      } while (local_6 < 4);
      if ((*(char *)(local_4 + 0x53d6) != '\0') && (*param_1 != 0)) {
        *(undefined1 *)(local_4 + 0x53d6) = 0;
        *(undefined1 *)(local_4 + 0x53e3) = 0;
        *(undefined1 *)(local_4 + 0x53f0) = *(undefined1 *)0x448;
        FUN_1090_06c6(9);
        *param_1 = *param_1 + -1;
      }
      if ((*(char *)(local_4 + 0x53ce) != '\0') && (*param_1 != 0)) {
        *(undefined1 *)(local_4 + 0x53ce) = 0;
        *(undefined1 *)(local_4 + 0x53e8) = *(undefined1 *)0x448;
        *(undefined1 *)(local_4 + 0x53db) = 0;
        FUN_1090_06c6(5);
        *param_1 = *param_1 + -1;
      }
      if ((*(char *)(local_4 + 0x53d2) != '\0') && (*param_1 != 0)) {
        *(undefined1 *)(local_4 + 0x53d2) = 0;
        *(undefined1 *)(local_4 + 0x53df) = 0;
        *(undefined1 *)(local_4 + 0x53ec) = *(undefined1 *)0x448;
        FUN_1090_06c6(10);
        *param_1 = *param_1 + -1;
      }
    }
    FUN_1090_064e();
    FUN_1090_06b4();
  }
  return;
}



/* 1090:0a08 FUN_1090_0a08 */

void __cdecl16far FUN_1090_0a08(int *param_1)

{
  undefined2 unaff_DS;
  
  if ((*(char *)0x5424 != '\0') && (*param_1 != 0)) {
    *(undefined1 *)0x542b = 0;
    *(undefined1 *)0x5432 = *(undefined1 *)0x448;
    *(undefined1 *)0x5424 = 0;
    FUN_1090_06c6(9);
    *param_1 = *param_1 + -1;
  }
  if ((*(char *)0x5423 != '\0') && (*param_1 != 0)) {
    *(undefined1 *)0x542a = 0;
    *(undefined1 *)0x5431 = *(undefined1 *)0x448;
    *(undefined1 *)0x5423 = 0;
    FUN_1090_06c6(4);
    *param_1 = *param_1 + -1;
  }
  if ((*(char *)0x5422 != '\0') && (*param_1 != 0)) {
    *(undefined1 *)0x5429 = 0;
    *(undefined1 *)0x5430 = *(undefined1 *)0x448;
    *(undefined1 *)0x5422 = 0;
    FUN_1090_06c6(0);
    *param_1 = *param_1 + -1;
  }
  if ((*(char *)0x5421 != '\0') && (*param_1 != 0)) {
    *(undefined1 *)0x5428 = 0;
    *(undefined1 *)0x542f = *(undefined1 *)0x448;
    *(undefined1 *)0x5421 = 0;
    FUN_1090_06c6(0xb);
    *param_1 = *param_1 + -1;
  }
  if ((*(char *)0x5420 != '\0') && (*param_1 != 0)) {
    *(undefined1 *)0x5427 = 0;
    *(undefined1 *)0x542e = *(undefined1 *)0x448;
    *(undefined1 *)0x5420 = 0;
    FUN_1090_06c6(7);
    *param_1 = *param_1 + -1;
  }
  if ((*(char *)0x541e != '\0') && (*param_1 != 0)) {
    *(undefined1 *)0x5425 = 0;
    *(undefined1 *)0x542c = *(undefined1 *)0x448;
    *(undefined1 *)0x541e = 0;
    FUN_1090_06c6(10);
    *param_1 = *param_1 + -1;
  }
  if ((*(char *)0x541f != '\0') && (*param_1 != 0)) {
    *(undefined1 *)0x5426 = 0;
    *(undefined1 *)0x542d = *(undefined1 *)0x448;
    *(undefined1 *)0x541f = 0;
    FUN_1090_06c6(10);
    *param_1 = *param_1 + -1;
  }
  FUN_1090_064e();
  FUN_1090_06b4();
  return;
}



/* 1090:0b5e FUN_1090_0b5e */
/* Decompilation failed: Low-level Error: Bad instruction count exceeded:
    ...
    No pcode could be generated at address: r0x0001803c */

/* 1090:0d8a FUN_1090_0d8a */

void __cdecl16far FUN_1090_0d8a(int *param_1)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int aiStack_e [4];
  int local_6;
  int local_4;
  
  local_4 = 0;
  local_6 = 0;
  do {
    aiStack_e[local_6] = 0;
    local_6 = local_6 + 1;
  } while (local_6 < 4);
  local_6 = 0;
  do {
    if (*(char *)(local_6 + 0x538e) != '\0') {
      aiStack_e[local_6 * 2] = aiStack_e[local_6 * 2] + 2;
    }
    if (*(char *)(local_6 + 0x5390) != '\0') {
      aiStack_e[local_6 * 2] = aiStack_e[local_6 * 2] + 1;
    }
    if (*(char *)(local_6 * 2 + 0x5392) != '\0') {
      aiStack_e[local_6 * 2] = aiStack_e[local_6 * 2] + 1;
    }
    local_6 = local_6 + 1;
  } while (local_6 < 2);
  local_6 = 0;
  do {
    if (*(char *)(local_6 + 0x538c) != '\0') {
      aiStack_e[local_6 * 2 + 1] = aiStack_e[local_6 * 2 + 1] + 2;
    }
    if (*(char *)(local_6 * 2 + 0x5393) != '\0') {
      aiStack_e[local_6 * 2 + 1] = aiStack_e[local_6 * 2 + 1] + 1;
    }
    local_6 = local_6 + 1;
  } while (local_6 < 2);
  local_6 = 0;
  do {
    if (aiStack_e[local_4] < aiStack_e[local_6]) {
      local_4 = local_6;
    }
    local_6 = local_6 + 1;
  } while (local_6 < 4);
  if ((local_4 == 0) || (local_4 == 2)) {
    iVar1 = local_4 / 2;
    if ((*(char *)(iVar1 + 0x538e) != '\0') && (*param_1 != 0)) {
      *(undefined1 *)(iVar1 + 0x5398) = 0;
      *(undefined1 *)(iVar1 + 0x53a2) = *(undefined1 *)0x448;
      *(undefined1 *)(iVar1 + 0x538e) = 0;
      FUN_1090_06c6(0);
      *param_1 = *param_1 + -1;
    }
    iVar1 = local_4 / 2;
    if ((*(char *)(iVar1 + 0x5390) != '\0') && (*param_1 != 0)) {
      *(undefined1 *)(iVar1 + 0x539a) = 0;
      *(undefined1 *)(iVar1 + 0x53a4) = *(undefined1 *)0x448;
      *(undefined1 *)(iVar1 + 0x5390) = 0;
      FUN_1090_06c6(0xb);
      *param_1 = *param_1 + -1;
    }
    if ((*(char *)(local_4 + 0x5392) != '\0') && (*param_1 != 0)) {
      *(undefined1 *)(local_4 + 0x539c) = 0;
      *(undefined1 *)(local_4 + 0x53a6) = *(undefined1 *)0x448;
      *(undefined1 *)(local_4 + 0x5392) = 0;
      FUN_1090_06c6(1);
      *param_1 = *param_1 + -1;
    }
  }
  if ((local_4 == 1) || (local_4 == 3)) {
    iVar1 = local_4 / 2;
    if ((*(char *)(iVar1 + 0x538c) != '\0') && (*param_1 != 0)) {
      *(undefined1 *)(iVar1 + 0x5396) = 0;
      *(undefined1 *)(iVar1 + 0x53a0) = *(undefined1 *)0x448;
      *(undefined1 *)(iVar1 + 0x538c) = 0;
      FUN_1090_06c6(7);
      *param_1 = *param_1 + -1;
    }
    if ((*(char *)(local_4 + 0x5392) != '\0') && (*param_1 != 0)) {
      *(undefined1 *)(local_4 + 0x539c) = 0;
      *(undefined1 *)(local_4 + 0x53a6) = *(undefined1 *)0x448;
      *(undefined1 *)(local_4 + 0x5392) = 0;
      FUN_1090_06c6(1);
      *param_1 = *param_1 + -1;
    }
  }
  FUN_1090_064e();
  FUN_1090_06b4();
  return;
}



/* 1090:0fa6 FUN_1090_0fa6 */

void __cdecl16far FUN_1090_0fa6(int *param_1)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_c [5];
  
  local_c[4] = 0;
  if ((((*(char *)0x53b3 == '\0') && (*(char *)0x53b4 == '\0')) && (*(char *)0x53b1 == '\0')) &&
     (*(char *)0x53b5 != '\0')) {
    *(undefined1 *)0x53c1 = 0;
    *(undefined1 *)0x53cd = *(undefined1 *)0x448;
    *(undefined1 *)0x53b5 = 0;
    FUN_1090_06c6(7);
    return;
  }
  local_c[3] = 0;
  do {
    local_c[local_c[3]] = 0;
    local_c[3] = local_c[3] + 1;
  } while (local_c[3] < 3);
  local_c[3] = 0;
  do {
    if (*(char *)0x53b3 != '\0') {
      local_c[0] = local_c[0] + 1;
    }
    if (*(char *)0x53b4 != '\0') {
      local_c[2] = local_c[2] + 1;
    }
    local_c[3] = local_c[3] + 1;
  } while (local_c[3] < 2);
  local_c[3] = 0;
  do {
    if (*(char *)(local_c[3] + 0x53aa) != '\0') {
      local_c[local_c[3]] = local_c[local_c[3]] + 1;
    }
    if (*(char *)(local_c[3] + 0x53ad) != '\0') {
      local_c[local_c[3]] = local_c[local_c[3]] + 1;
    }
    if (*(char *)(local_c[3] + 0x53b0) != '\0') {
      local_c[local_c[3]] = local_c[local_c[3]] + 1;
    }
    local_c[3] = local_c[3] + 1;
  } while (local_c[3] < 3);
  local_c[3] = 0;
  do {
    if (local_c[local_c[4]] < local_c[local_c[3]]) {
      local_c[4] = local_c[3];
    }
    local_c[3] = local_c[3] + 1;
  } while (local_c[3] < 3);
  if ((*(char *)(local_c[4] + 0x53aa) != '\0') && (*param_1 != 0)) {
    *(undefined1 *)(local_c[4] + 0x53b6) = 0;
    *(undefined1 *)(local_c[4] + 0x53c2) = *(undefined1 *)0x448;
    *(undefined1 *)(local_c[4] + 0x53aa) = 0;
    FUN_1090_06c6(9);
    *param_1 = *param_1 + -1;
  }
  if ((*(char *)(local_c[4] + 0x53ad) != '\0') && (*param_1 != 0)) {
    *(undefined1 *)(local_c[4] + 0x53b9) = 0;
    *(undefined1 *)(local_c[4] + 0x53c5) = *(undefined1 *)0x448;
    *(undefined1 *)(local_c[4] + 0x53ad) = 0;
    FUN_1090_06c6(4);
    *param_1 = *param_1 + -1;
  }
  if ((*(char *)(local_c[4] + 0x53b0) != '\0') && (*param_1 != 0)) {
    *(undefined1 *)(local_c[4] + 0x53bc) = 0;
    *(undefined1 *)(local_c[4] + 0x53c8) = *(undefined1 *)0x448;
    *(undefined1 *)(local_c[4] + 0x53b0) = 0;
    FUN_1090_06c6(0xb);
    *param_1 = *param_1 + -1;
  }
  if (((local_c[4] == 0) && (*(char *)0x53b3 != '\0')) && (*param_1 != 0)) {
    *(undefined1 *)0x53bf = 0;
    *(undefined1 *)0x53cb = *(undefined1 *)0x448;
    *(undefined1 *)0x53b3 = 0;
    FUN_1090_06c6(10);
    *param_1 = *param_1 + -1;
  }
  if (((local_c[4] == 2) && (*(char *)0x53b4 != '\0')) && (*param_1 != 0)) {
    *(undefined1 *)0x53c0 = 0;
    *(undefined1 *)0x53cc = *(undefined1 *)0x448;
    *(undefined1 *)0x53b4 = 0;
    FUN_1090_06c6(10);
    *param_1 = *param_1 + -1;
  }
  FUN_1090_064e();
  FUN_1090_06b4();
  return;
}



/* 1090:11ba FUN_1090_11ba */

int __cdecl16far FUN_1090_11ba(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x448 = 1;
  uVar1 = FUN_19c7_4e32();
  iVar2 = (int)*(char *)((uVar1 & 0xf) + 0x44a);
  *(int *)0xb68c = iVar2;
  if (iVar2 == 0) {
    FUN_1090_0d8a(&param_1);
  }
  else if (iVar2 == 1) {
    FUN_1090_0fa6(&param_1);
  }
  else if (iVar2 == 2) {
    FUN_1090_087a(&param_1);
  }
  else if (iVar2 == 3) {
    FUN_1090_0b5e(&param_1);
  }
  else if (iVar2 == 4) {
    FUN_1090_0a08(&param_1);
  }
  iVar2 = param_1;
  if ((param_1 != 0) && (FUN_1090_077c(&param_1), param_1 != iVar2)) {
    *(undefined2 *)0xb68c = 5;
  }
  return param_1;
}



/* 1090:12ec FUN_1090_12ec */
/* Decompilation failed: Low-level Error: Bad instruction count exceeded:
    ...
    No pcode could be generated at address: r0x0001c750 */

/* 1090:14d2 FUN_1090_14d2 */

undefined2 __cdecl16far FUN_1090_14d2(char param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0x1090;
  iVar2 = 0;
  if (*(char *)0x29f != '\0') {
    while (iVar1 = thunk_EXT_FUN_0000_0000(uVar3,(int)param_1), iVar1 != 0) {
      uVar3 = 0x1eea;
      iVar1 = thunk_EXT_FUN_0000_0000(0x1eea,(int)param_1);
      if (iVar1 < 0x28) {
        iVar2 = iVar2 + 1;
      }
    }
    if (0x1d < iVar2) {
      return 1;
    }
  }
  return 0;
}



/* 11e1:002a FUN_11e1_002a */

void __cdecl16far FUN_11e1_002a(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  *(int *)0x94c6 = param_1;
  *(undefined2 *)0xb8ea = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)(*(int *)0x484 + 2) = *(undefined2 *)(*(int *)0x94c6 + 0xc);
  *(undefined2 *)(*(int *)0x484 + 4) = *(undefined2 *)(*(int *)0x94c6 + 0xe);
  puVar1 = (undefined2 *)*(int *)0x94c6;
  uVar3 = puVar1[4];
  *(undefined2 *)0x4ca = puVar1[3];
  *(undefined2 *)0x4cc = uVar3;
  iVar2 = FUN_2120_178c(0x11e1,*puVar1);
  if (iVar2 == 0) {
    FUN_11e1_04da();
  }
  if (*(int *)(*(int *)0x94c6 + 10) == -1) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = (undefined2)
            (((ulong)*(uint *)(*(int *)0x94c6 + 10) * (ulong)(*(int *)0xb8ea + 0x13) & 0xffff) /
            (ulong)*(uint *)0xb8ea);
  }
  *(undefined2 *)0x94c0 = uVar3;
  iVar2 = thunk_EXT_FUN_0000_0000(0x2120,0);
  if (iVar2 == 0) {
    uVar4 = (*(int *)(*(int *)0x484 + 6) + 1) * (*(int *)(*(int *)0x484 + 8) + 1);
    iVar2 = (int)uVar4 >> 0xf;
    if ((iVar2 < 0) || ((iVar2 < 1 && (uVar4 < 48000)))) {
      uVar3 = 0;
      goto LAB_11e1_00d0;
    }
  }
  uVar3 = 1;
LAB_11e1_00d0:
  *(undefined2 *)0xb8f0 = uVar3;
  *(undefined2 *)0xb8f0 = 1;
  FUN_11e1_00f6(*(undefined2 *)(*(int *)0x94c6 + 6),*(undefined2 *)(*(int *)0x94c6 + 8));
  FUN_11e1_04a6();
  FUN_11e1_01de();
  return;
}



/* 11e1:00f6 FUN_11e1_00f6 */

void __cdecl16far FUN_11e1_00f6(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x4ca = param_1;
  *(undefined2 *)0x4cc = param_2;
  return;
}



/* 11e1:0108 FUN_11e1_0108 */

void __cdecl16far FUN_11e1_0108(void)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_4;
  
  *(undefined2 *)0x4cc = 0;
  *(undefined2 *)0x4ca = 0;
  iVar1 = thunk_EXT_FUN_0000_0000(0x11e1,0);
  if ((iVar1 != 0) && (*(int *)*(undefined2 *)0x484 == 0)) {
    thunk_EXT_FUN_0000_0000(0x1eea,*(undefined2 *)0x4c0,0,0,0x140,200,*(undefined2 *)0x4be,0,0);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,*(undefined2 *)*(undefined2 *)0x484);
  }
  FUN_19c7_4f54(0x1eea,*(undefined2 *)0xb8e8);
  local_4 = 0;
  while( true ) {
    if (0xf9 < local_4) {
      return;
    }
    iVar1 = *(int *)(local_4 * 2 + -0x490c);
    if (iVar1 != 0) break;
    local_4 = local_4 + 1;
  }
  FUN_19c7_4f54(0x19c7,iVar1);
  return;
}



/* 11e1:019c FUN_11e1_019c */

undefined2 __cdecl16far FUN_11e1_019c(void)

{
  int *piVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  iVar2 = (*(code *)*(undefined2 *)(*(int *)0x94c6 + 2))(0x11e1);
  if (iVar2 != 0) {
    return 0xffff;
  }
  FUN_11e1_044c();
  local_4 = FUN_11e1_0396(1);
  FUN_11e1_044c();
  piVar1 = (int *)0x94c0;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    local_4 = 1;
  }
  return local_4;
}



/* 11e1:01de FUN_11e1_01de */

void __cdecl16far FUN_11e1_01de(void)

{
  undefined2 unaff_DS;
  
  FUN_11e1_0618();
  FUN_11e1_0a32();
  FUN_1eea_10b1();
  *(undefined2 *)0x94c2 = 2;
  *(undefined2 *)0xb8ee = 0;
  *(undefined2 *)0x94c4 = 0;
  *(undefined2 *)0xb8ec = 0;
  *(undefined2 *)*(undefined2 *)0x484 = 1;
  return;
}



/* 11e1:025a FUN_11e1_025a */

undefined2 __cdecl16far FUN_11e1_025a(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_11e1_044c();
  FUN_11e1_0ca2();
  thunk_EXT_FUN_0000_0000(0x11e1,2,0);
  iVar1 = FUN_11e1_064e();
  if (iVar1 != 0) {
    return 1;
  }
  FUN_11e1_0b44();
  FUN_2120_1796(0x1eea,*(undefined2 *)0x4a22,1);
  if (0x19 < param_1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x2120,*(undefined2 *)0x486,0xb,0x51,*(undefined2 *)0xbc2c);
  }
  FUN_11e1_0b66();
  *(int *)0xb8ec = *(int *)0xb8ec + 1;
  thunk_EXT_FUN_0000_0000
            (0x2120,*(undefined2 *)0x4c2,0,0,0x140,200,
             *(undefined2 *)(*(int *)*(undefined2 *)0x484 * 2 + 0x34a),0,0);
  FUN_11e1_0be4();
  return 0;
}



/* 11e1:0396 FUN_11e1_0396 */

undefined2 __cdecl16far FUN_11e1_0396(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  while (param_1 != 0) {
    FUN_11e1_0ca2();
    iVar1 = FUN_11e1_064e();
    if (iVar1 != 0) {
      return 1;
    }
    FUN_11e1_0b44();
    FUN_11e1_0b66();
    *(int *)0xb8ec = *(int *)0xb8ec + 1;
    param_1 = param_1 + -1;
  }
  FUN_11e1_050c();
  FUN_11e1_0be4();
  FUN_11e1_05b0();
  iVar1 = thunk_EXT_FUN_0000_0000(0x11e1,0);
  if (iVar1 == 0) {
    FUN_11e1_05e6(1);
  }
  if (*(int *)0xb8f0 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,*(undefined2 *)*(undefined2 *)0x484);
  }
  iVar1 = *(int *)0x484;
  thunk_EXT_FUN_0000_0000
            (0x1eea,iVar1,0,0,*(int *)(iVar1 + 6) + 1,*(int *)(iVar1 + 8) + 1,*(undefined2 *)0x4be,
             *(undefined2 *)(iVar1 + 2),*(undefined2 *)(iVar1 + 4));
  iVar1 = thunk_EXT_FUN_0000_0000(0x1eea,0);
  if (iVar1 != 0) {
    FUN_11e1_05e6(1);
    *(byte *)*(undefined2 *)0x484 = *(byte *)*(undefined2 *)0x484 ^ 1;
  }
  return 0;
}



/* 11e1:044c FUN_11e1_044c */

void __cdecl16far FUN_11e1_044c(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  uint local_6;
  int local_4;
  
  if (*(int *)0x4ce == 0) {
    while( true ) {
      iVar4 = FUN_19c7_4e94(0,&local_6);
      if (iVar4 != 0) break;
      if ((*(int *)0x94d2 <= local_4) &&
         ((*(int *)0x94d2 < local_4 || (*(uint *)0x94d0 <= local_6)))) break;
    }
  }
  else {
    FUN_19c7_4e94(0,0x94d0);
    uVar3 = *(uint *)0xb8ea;
    puVar1 = (uint *)0x94d0;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)0x94d2 = *(int *)0x94d2 + ((int)uVar3 >> 0xf) + (uint)CARRY2(uVar2,uVar3);
  }
  *(byte *)0x4ce = *(byte *)0x4ce ^ 1;
  return;
}



/* 11e1:04a6 FUN_11e1_04a6 */

void __cdecl16far FUN_11e1_04a6(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int local_4;
  
  if (*(int *)0xb8f2 != 0) {
    uVar1 = 0x11e1;
    for (local_4 = 0; local_4 < *(int *)0xb8f4; local_4 = local_4 + 1) {
      thunk_EXT_FUN_0000_0000(uVar1,*(undefined2 *)(local_4 * 2 + 0x4c4));
      uVar1 = 0x1eea;
    }
  }
  return;
}



/* 11e1:04da FUN_11e1_04da */

void __cdecl16far FUN_11e1_04da(void)

{
  undefined2 unaff_DS;
  
  FUN_11e1_0f84(3);
  FUN_19c7_323c(0x513,*(undefined2 *)0xb8f8,*(undefined2 *)(*(int *)0xb8f6 * 2 + 0x51c));
  FUN_19c7_29de(0x19c7,99);
  return;
}



/* 11e1:050c FUN_11e1_050c */

void __cdecl16far FUN_11e1_050c(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  uVar1 = 0x11e1;
  iVar4 = *(int *)0x94c2;
  if (iVar4 == 0) {
LAB_11e1_0559:
    FUN_1eea_1052(*(undefined2 *)*(undefined2 *)0x486,*(undefined2 *)*(undefined2 *)0x484);
    return;
  }
  if (iVar4 == 1) {
    *(int *)0x94c2 = *(int *)0x94c2 + -1;
    iVar4 = thunk_EXT_FUN_0000_0000(0x11e1,0);
    if (iVar4 == 0) goto LAB_11e1_0559;
    uVar1 = 0x1eea;
    thunk_EXT_FUN_0000_0000(0x1eea,*(undefined2 *)0x4c0,0,0,0x140,200,*(undefined2 *)0x4be,0,0);
    uVar5 = *(undefined2 *)0x484;
    iVar4 = *(int *)(*(int *)0x484 + 8) + 1;
    iVar3 = *(int *)(*(int *)0x484 + 6) + 1;
    uVar2 = *(undefined2 *)0x486;
  }
  else {
    if (iVar4 != 2) {
      return;
    }
    *(int *)0x94c2 = *(int *)0x94c2 + -1;
    uVar5 = *(undefined2 *)0x4c0;
    iVar4 = 200;
    iVar3 = 0x140;
    uVar2 = *(undefined2 *)0x4c2;
  }
  thunk_EXT_FUN_0000_0000(uVar1,uVar2,0,0,iVar3,iVar4,uVar5,0,0);
  return;
}



/* 11e1:05b0 FUN_11e1_05b0 */

void __cdecl16far FUN_11e1_05b0(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x94ce != 0) {
    while (*(int *)0x94ce != 0) {
      *(int *)0x94ce = *(int *)0x94ce + -1;
      if (*(int *)0x4ca != 0 || *(int *)0x4cc != 0) {
        (*(code *)*(undefined2 *)0x4ca)(0x11e1,*(undefined2 *)(*(int *)0x94ce * 2 + 200));
      }
    }
  }
  return;
}



/* 11e1:05e6 FUN_11e1_05e6 */

void __cdecl16far FUN_11e1_05e6(int param_1)

{
  int iVar1;
  uint uVar2;
  
  while (iVar1 = param_1 + -1, param_1 != 0) {
    do {
      uVar2 = FUN_19c7_4bfc(0x3da);
    } while ((uVar2 & 8) != 0);
    do {
      uVar2 = FUN_19c7_4bfc(0x3da);
      param_1 = iVar1;
    } while ((uVar2 & 8) == 0);
  }
  return;
}



/* 11e1:0618 FUN_11e1_0618 */

void __cdecl16far FUN_11e1_0618(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  *(undefined2 *)0x94ca = *(undefined2 *)0xb8e8;
  *(undefined2 *)0x94c8 = 0;
  *(undefined2 *)0x94ce = 0;
  *(undefined2 *)0x94cc = 0;
  local_4 = 0;
  do {
    *(undefined2 *)(local_4 * 2 + -0x4972) = 0;
    local_4 = local_4 + 1;
  } while (local_4 < 0x14);
  return;
}



/* 11e1:064e FUN_11e1_064e */

/* WARNING: Instruction at (ram,0x00019a59) overlaps instruction at (ram,0x00019a56)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl16far FUN_11e1_064e(void)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  ulong uVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int in_CX;
  uint uVar13;
  int iVar14;
  char in_DL;
  int iVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  uint uVar20;
  byte bVar21;
  undefined2 *puVar22;
  int unaff_BP;
  int unaff_SI;
  undefined1 *unaff_DI;
  int *piVar23;
  int iVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar27;
  undefined1 uVar28;
  bool bVar29;
  undefined4 uVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  undefined2 in_stack_00000000;
  
  do {
    while( true ) {
      if (*(int *)0xb8ee != 0) {
        return (char *)0x1;
      }
      if (*(int *)0x94c4 == 0) break;
      if (*(int *)0x94c4 == 1) {
        iVar15 = *(int *)0x94d4;
        *(int *)0x94d4 = *(int *)0x94d4 + -1;
        if (iVar15 != 0) {
          return (char *)0x0;
        }
        *(undefined2 *)0x94c4 = 0;
      }
    }
    pcVar5 = (char *)*(undefined4 *)0x94c8;
    uVar25 = (undefined2)((ulong)pcVar5 >> 0x10);
    pcVar18 = (char *)pcVar5;
    uVar9 = (uint)*pcVar5;
  } while (0x17 < uVar9);
  bVar27 = CARRY2(uVar9,uVar9);
  piVar23 = (int *)(uVar9 * 2);
  uVar28 = piVar23 == (int *)0x0;
  cVar7 = (char)pcVar5;
  switch(*pcVar5) {
  case '\0':
    *(char *)0x8ed7 = cVar7;
    return pcVar18;
  case '\x01':
    *(undefined2 *)0x13e2 = pcVar18 + unaff_SI;
    iVar15 = FUN_1ed2_0008(*(undefined2 *)0x13be);
    *(int *)0x13e8 = -iVar15;
    iVar15 = FUN_1ed2_0008(*(undefined2 *)0x13c6);
    *(int *)0x13de = -iVar15;
    uVar25 = FUN_1ed2_0008(*(undefined2 *)0x13c8);
    *(undefined2 *)0x13e4 = uVar25;
    uVar25 = *(undefined2 *)0x13c2;
    *(undefined2 *)0x13ea = uVar25;
    FUN_1ed2_0008(uVar25);
    iVar15 = FUN_1ed2_0008(*(undefined2 *)0x13c0);
    iVar16 = FUN_1ed2_0008(*(undefined2 *)0x13be);
    *(int *)0x13e0 = iVar16 + iVar15;
    FUN_1ed2_0008(*(undefined2 *)0x13c2);
    iVar15 = FUN_1ed2_0008(*(undefined2 *)0x13c0);
    iVar16 = FUN_1ed2_0008(*(undefined2 *)0x13c6);
    *(int *)0x13e6 = iVar16 - iVar15;
    pcVar18 = (char *)FUN_1ed2_0008(*(undefined2 *)0x13c0);
    *(undefined2 *)0x13ec = pcVar18;
    return pcVar18;
  case '\x02':
    pcVar18 = (char *)FUN_1897_039e();
    return pcVar18;
  case '\x03':
    pcVar5 = (char *)((int)piVar23 + unaff_SI + 0x50);
    *pcVar5 = *pcVar5 + in_DL;
    uVar25 = thunk_EXT_FUN_0000_0000(0x1000,pcVar18);
    *(undefined2 *)0xc4d5 = uVar25;
    uVar25 = thunk_EXT_FUN_0000_0000(0x1eea,1,0x15);
    *(undefined2 *)0xc4d9 = uVar25;
    uVar25 = thunk_EXT_FUN_0000_0000(0x1eea,1,1);
    *(undefined2 *)0xc4d7 = uVar25;
    uVar25 = thunk_EXT_FUN_0000_0000(0x1eea,1,0x15);
    *(undefined2 *)0xc4db = uVar25;
    if (*(char *)0x9ed6 != *(char *)0x2a4) {
      uVar25 = thunk_EXT_FUN_0000_0000(0x1eea,1,0x29);
      *(undefined2 *)0xc4dd = uVar25;
    }
    FUN_20a6_0232();
    uVar25 = thunk_EXT_FUN_0000_0000(0x20a6,1,0x23);
    *(undefined2 *)0xc4cd = uVar25;
    uVar25 = thunk_EXT_FUN_0000_0000(0x1eea,1,0x32);
    *(undefined2 *)0xc4cf = uVar25;
    FUN_1eea_0574(*(undefined2 *)0x790e,0x20,1);
    if (*(char *)0x9ed6 == *(char *)0x2a4) {
      uVar25 = thunk_EXT_FUN_0000_0000(0x1eea,1,0x3c);
      *(undefined2 *)0xc4c9 = uVar25;
      uVar25 = thunk_EXT_FUN_0000_0000(0x1eea,1,0xa1);
      *(undefined2 *)0xc4cb = uVar25;
    }
    else {
      thunk_EXT_FUN_0000_0000(0x1eea,*(undefined2 *)0x790e,0,0,0x140,200);
    }
    uVar25 = thunk_EXT_FUN_0000_0000(0x1eea,1,0);
    *(undefined2 *)0xc4c5 = uVar25;
    uVar25 = thunk_EXT_FUN_0000_0000(0x1eea,1,0xa0);
    *(undefined2 *)0xc4df = uVar25;
    pcVar18 = (char *)thunk_EXT_FUN_0000_0000();
    return pcVar18;
  case '\x04':
    while( true ) {
      pcVar5 = (char *)((int)piVar23 + unaff_SI + 1);
      *pcVar5 = *pcVar5 + '\x01';
      unaff_DI[unaff_BP + -0x1a2] = unaff_DI[unaff_BP + -0x1a2] + (char)in_CX;
      if (*(char *)((int)piVar23 + 0x53b3) == '\0') {
        iVar15 = (int)piVar23 * 2;
        *(undefined1 *)(iVar15 + 0x53b9) = 0;
        *(undefined1 *)(iVar15 + 0x53bc) = 0;
        *(undefined1 *)(iVar15 + 0x53b6) = 0;
      }
      iVar15 = *(int *)(unaff_BP + -2) * 2;
      if (*(char *)(iVar15 + 0x53b0) == '\0') {
        *(undefined1 *)(iVar15 + 0x53b9) = 0;
        *(undefined1 *)(iVar15 + 0x53b6) = 0;
      }
      unaff_SI = *(int *)(unaff_BP + -2) * 2;
      if (*(char *)(unaff_SI + 0x53ad) == '\0') {
        *(undefined1 *)(unaff_SI + 0x53b6) = 0;
      }
      *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
      if (1 < *(int *)(unaff_BP + -2)) break;
      piVar23 = (int *)*(undefined2 *)(unaff_BP + -2);
    }
    if (*(char *)0x53ae == '\0') {
      *(undefined1 *)0x53b7 = 0;
    }
    return pcVar18;
  case '\x05':
    pcVar18 = (char *)FUN_19c7_4e0a(pcVar18);
    if (17000 < (int)pcVar18) {
      *(undefined2 *)0xc45b = 0xbd2a;
      FUN_132b_0ea4();
      *(undefined2 *)(*(int *)0xc459 + 0x1e) = *(undefined2 *)0xc448;
      pcVar18 = (char *)*(int *)0xc44a;
      *(int *)(*(int *)0xc459 + 0x20) = (int)pcVar18;
    }
    return pcVar18;
  case '\x06':
    while (!(bool)uVar28) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 10;
      iVar15 = *(int *)(unaff_BP + -8);
      *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + -1;
      uVar28 = iVar15 == 0;
    }
    *(undefined2 *)(unaff_BP + -4) = 0;
    while (*(int *)(unaff_BP + -4) < 4) {
      *(undefined2 *)(unaff_BP + -2) = 10;
      *(undefined2 *)(unaff_BP + -10) = *(undefined2 *)(*(int *)(unaff_BP + -4) * 2 + 0x354);
      while (iVar15 = *(int *)(unaff_BP + -10),
            *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + -1, iVar15 != 0) {
        iVar15 = *(int *)(unaff_BP + -2);
        *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + iVar15;
        if (1 < iVar15) {
          *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + -1;
        }
      }
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    }
    iVar15 = FUN_1000_08be(9);
    if (iVar15 == 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 0x14;
    }
    iVar15 = FUN_1000_08be(0xb);
    if (iVar15 == 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 0x14;
    }
    iVar15 = FUN_1000_08be(0x12);
    if (iVar15 == 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 0x14;
    }
    iVar15 = FUN_1000_08be(10);
    if (iVar15 == 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 10;
    }
    iVar15 = FUN_1000_08be(2);
    if (iVar15 == 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 10;
    }
    iVar15 = FUN_1000_08be(0xc);
    if (iVar15 == 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 10;
    }
    iVar15 = FUN_1000_08be(0xd);
    if (iVar15 == 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 10;
    }
    iVar15 = FUN_1000_08be(0xf);
    if (iVar15 == 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 10;
    }
    iVar15 = FUN_1000_08be(0x11);
    if (iVar15 == 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 10;
    }
    iVar15 = FUN_1000_08be(8);
    if (iVar15 == 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 5;
    }
    iVar15 = FUN_1000_08be(3);
    if (iVar15 == 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 5;
    }
    iVar15 = FUN_1000_08be(0xe);
    if (iVar15 == 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 5;
    }
    if (*(char *)0xa003 != '\0') {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 0x14;
    }
    if (*(char *)0x9f72 != '\0') {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 0x14;
    }
    if (*(char *)0xa0b1 != '\0') {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 0x14;
    }
    if (*(char *)0xa0ce != '\0') {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 0x14;
    }
    if (*(char *)0x9f55 != '\0') {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 0x28;
    }
    if (*(char *)0xa094 != '\0') {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 0x28;
    }
    if (*(char *)0xa077 != '\0') {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 0x3c;
    }
    if (*(char *)0xa108 != '\0') {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 0x3c;
    }
    uVar9 = *(uint *)0xb675;
    iVar15 = FUN_19c7_4f62(uVar9 + *(uint *)0x9a80,
                           ((int)uVar9 >> 0xf) + *(int *)0x9a82 +
                           (uint)CARRY2(uVar9,*(uint *)0x9a80),0xfa,0);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) - iVar15;
    return (char *)*(undefined2 *)(unaff_BP + -6);
  case '\a':
    pcVar18 = (char *)FUN_19c7_0050(0x1000,pcVar18);
    return pcVar18;
  default:
    *(char *)((int)piVar23 + unaff_SI) = *(char *)((int)piVar23 + unaff_SI) + cVar7;
    *(char *)((int)piVar23 + unaff_SI) = *(char *)((int)piVar23 + unaff_SI) + cVar7;
    *(char *)((int)piVar23 + unaff_SI) = *(char *)((int)piVar23 + unaff_SI) + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\t':
    uVar28 = *(undefined1 *)0x8b13;
    unaff_DI[unaff_BP] = unaff_DI[unaff_BP] + (char)((uint)in_CX >> 8) + bVar27;
    *(undefined1 *)0x8b13 = uVar28;
    *unaff_DI = *(undefined1 *)(unaff_SI + 2);
    *(undefined2 *)0xa311 = CONCAT11(0xa3,uVar28);
    *(undefined2 *)0xa30f = *(undefined2 *)(unaff_BP + 0xc);
    *(int *)0xa30d = -*(int *)(unaff_BP + 10);
    *(int *)0xa30b = -*(int *)(unaff_BP + 8);
    *(undefined2 *)0xa309 = 0x1000;
    puVar22 = (undefined2 *)0xa307;
    *(undefined2 *)0xa307 = 0x8d81;
    FUN_19c7_001a();
    puVar22[3] = 0x19c7;
    puVar22[2] = 0x8d88;
    FUN_1897_0820();
    puVar22[3] = 0xc475;
    puVar22[2] = 0x13dc;
    puVar22[1] = -*(int *)0x13a2;
    *puVar22 = *(undefined2 *)0x13a4;
    puVar22[-1] = *(undefined2 *)0x13a0;
    puVar22[-2] = (uint)*(byte *)(unaff_BP + 6);
    puVar22[-3] = 0x19c7;
    puVar22[-4] = 0x8da9;
    pcVar18 = (char *)FUN_19c7_003e();
    return pcVar18;
  case '\v':
    return pcVar18;
  case '\f':
    *(undefined1 *)*(undefined2 *)0x312 = *(undefined1 *)0x9ed5;
    uVar25 = FUN_2035_0000(*(undefined2 *)0x312,0);
    *(undefined2 *)(unaff_BP + -8) = uVar25;
    FUN_1eea_052b(uVar25);
    iVar15 = thunk_EXT_FUN_0000_0000(0x1eea);
    if (iVar15 != 0) {
      FUN_19c7_4f54(0x1eea,*(undefined2 *)(unaff_BP + -8));
      *(undefined1 *)*(undefined2 *)0x312 = 0x4e;
      uVar25 = FUN_2035_0000(*(undefined2 *)0x312,0);
      FUN_1eea_052b(uVar25);
    }
    *(undefined1 *)*(undefined2 *)0x310 = *(undefined1 *)0x9ed4;
    uVar25 = FUN_2035_0000(*(undefined2 *)0x310,0x268);
    FUN_1eea_052b(uVar25);
    thunk_EXT_FUN_0000_0000(0x1eea,0);
    *(undefined2 *)(unaff_BP + -6) = 0;
    do {
      uVar26 = 0x1eea;
      uVar25 = thunk_EXT_FUN_0000_0000(0x1eea,*(undefined2 *)(unaff_BP + -6));
      *(undefined2 *)(unaff_BP + -8) = uVar25;
      *(undefined2 *)(*(int *)(unaff_BP + -6) * 2 + 0x39bc) = uVar25;
      if (*(int *)(unaff_BP + -8) == 0) {
        uVar26 = 0x1951;
        FUN_1951_00b2(0x272);
      }
      thunk_EXT_FUN_0000_0000(uVar26,*(undefined2 *)(unaff_BP + -6),*(undefined2 *)(unaff_BP + -8));
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    } while (*(int *)(unaff_BP + -6) < 3);
    uVar25 = 0x1eea;
    uVar13 = thunk_EXT_FUN_0000_0000(0x1eea);
    uVar9 = *(uint *)(*(char *)0x9ed6 * 2 + 0x35a);
    if (uVar13 < uVar9) {
      *(undefined1 *)0xad6a = 0;
      uVar25 = FUN_19c7_48e8(0x1eea,(uVar9 - uVar13) + 0x3f >> 6,0xa176,10);
      FUN_19c7_47cc(0xad6a,uVar25);
      FUN_19c7_47cc(0xad6a,0x27c);
      uVar25 = 0x1951;
      FUN_1951_00b2(0xad6a);
    }
    FUN_19c7_0072(uVar25,(int)*(char *)*(undefined2 *)0x310);
    *(undefined2 *)0x39c4 = *(undefined2 *)(*(int *)0x7910 * 2 + 0x39bc);
    FUN_197d_0004();
    FUN_2120_16ce(0x197d);
    FUN_1000_026c();
    if ((*(char *)0x29e == '\0') || (iVar15 = FUN_1eea_111a(), iVar15 == 0)) {
      uVar28 = 0;
    }
    else {
      uVar28 = 1;
    }
    *(undefined1 *)0x29e = uVar28;
    FUN_1eea_1173(0,0,*(undefined2 *)0x9ef9);
    *(undefined2 *)0x9edc = 1;
    *(undefined2 *)0xb675 = 0;
    *(undefined2 *)0x9a82 = 0;
    *(undefined2 *)0x9a80 = 0;
    *(undefined2 *)0xb67a = 0;
    FUN_1000_07de();
    FUN_1000_088c();
    if (*(char *)0x9ed6 == *(char *)0x2a3) {
      thunk_EXT_FUN_0000_0000(0x1eea,5,0);
    }
    thunk_EXT_FUN_0000_0000(0x1eea,0x366,0);
    FUN_2120_16ec(0x1eea);
    FUN_1000_047c();
    do {
      iVar15 = FUN_1951_00ea();
    } while (iVar15 != 0);
    FUN_1000_07a6();
    uVar25 = 0x2120;
    FUN_2120_171e(0x1951);
    *(undefined2 *)0x9edc = 0x10;
    *(undefined2 *)0x9ee1 = 3;
    *(undefined2 *)0x9ee3 = 2;
    *(undefined1 *)0x616d = 0;
    *(undefined1 *)0x616c = 0;
    *(undefined2 *)0x9edf = 0xa180;
    *(undefined2 *)0xa170 = 0xa180;
    do {
      iVar15 = FUN_2120_173c(uVar25);
      if (iVar15 == 1) {
        FUN_2120_176e(0x2120);
LAB_1000_0265:
        FUN_2120_1778(0x2120);
      }
      else if (iVar15 == 3) {
        FUN_1000_0598();
      }
      else {
        if ((6 < iVar15) && (iVar15 < 9)) goto LAB_1000_0265;
        FUN_1000_0332();
      }
      uVar25 = 0x1eea;
      FUN_1eea_11e7();
    } while( true );
  case '\r':
    if ((POPCOUNT((uint)piVar23 & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (in_CX + -1 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    out(0x3c8,(char)(in_CX + -1));
    out(0x3c9,(char)piVar23[0xb7a]);
    out(0x3c9,(char)*(undefined2 *)(char *)((int)piVar23 + 0x16f5));
    out(0x3c9,(char)((uint)*(undefined2 *)(char *)((int)piVar23 + 0x16f5) >> 8));
    uVar9 = *(uint *)0x16e6;
    *(int *)0x16e6 = *(int *)0x16e6 + 1;
    iVar15 = (uVar9 & 3) * 3;
    uVar25 = *(undefined2 *)(iVar15 + 0x16e9);
    out(0x3c8,0x10);
    out(0x3c9,*(undefined1 *)(iVar15 + 0x16e8));
    out(0x3c9,(char)uVar25);
    uVar28 = (undefined1)((uint)uVar25 >> 8);
    out(0x3c9,uVar28);
    if (*(int *)0x16c7 == 4) {
      pcVar2 = (char *)0x16e4;
      cVar7 = *pcVar2;
      *pcVar2 = *pcVar2 + -1;
      if (*pcVar2 == '\0' || SBORROW1(cVar7,'\x01') != *pcVar2 < '\0') {
        *(undefined1 *)0x16e4 = 7;
        return (char *)CONCAT11((char)((ulong)pcVar5 >> 8),uVar28);
      }
    }
    *(int *)0x16d6 = *(int *)0x16d6 + 1;
    *(int *)0x16d8 = *(int *)0x16d8 + 1;
    if (*(char *)0x16de != '\0') {
      *(char *)0x16de = *(char *)0x16de + -1;
    }
    if (*(int *)0x16dc != 0) {
      *(int *)0x16dc = *(int *)0x16dc + -1;
    }
    if (*(int *)0x16da != 0) {
      *(int *)0x16da = *(int *)0x16da + -1;
    }
    *(int *)0x16e0 = *(int *)0x16e0 + 1;
    *(int *)0x16e2 = *(int *)0x16e2 + 1;
    iVar15 = func_0x0001f255(0x1000);
    if (iVar15 == 0) {
      return (char *)0x0;
    }
    if (iVar15 < 0) {
      *(undefined2 *)0x16c4 = 1;
      pcVar18 = (char *)*(undefined2 *)0x16c9;
      *(undefined2 *)0x16be = pcVar18;
      *(undefined1 *)0x16c6 = 1;
      return pcVar18;
    }
    uVar9 = *(uint *)0x16c7;
    *(uint *)0x16c4 = uVar9;
    pcVar18 = (char *)(*(uint *)0x16c9 / uVar9);
    *(uint *)0x16be = (uint)pcVar18;
    *(undefined1 *)0x16c6 = 1;
    return pcVar18;
  case '\x0e':
    if ((int)pcVar18 < *(int *)(unaff_BP + -6)) {
      uVar25 = *(undefined2 *)(unaff_BP + -6);
      *(undefined2 *)(unaff_BP + -6) = pcVar18;
      *(undefined2 *)(unaff_BP + -8) = uVar25;
    }
    iVar15 = *(int *)(unaff_BP + 8);
    *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)(iVar15 + 0xc);
    iVar15 = *(int *)(iVar15 + 6);
    *(int *)(unaff_BP + -4) = iVar15;
    if (iVar15 < *(int *)(unaff_BP + -2)) {
      uVar25 = *(undefined2 *)(unaff_BP + -2);
      *(int *)(unaff_BP + -2) = iVar15;
      *(undefined2 *)(unaff_BP + -4) = uVar25;
    }
    if ((*(int *)(*(int *)(unaff_BP + 6) + 0x2a) + *(int *)(unaff_BP + -8) <
         *(int *)(unaff_BP + -2) - *(int *)(*(int *)(unaff_BP + 8) + 0x2a)) ||
       (*(int *)(*(int *)(unaff_BP + 8) + 0x2a) + *(int *)(unaff_BP + -4) <
        *(int *)(unaff_BP + -6) - *(int *)(*(int *)(unaff_BP + 6) + 0x2a))) {
      return (char *)0x0;
    }
    return (char *)0x1;
  case '\x0f':
    *piVar23 = *piVar23 + -1;
    if ((*(char *)(*(int *)(unaff_BP + -2) + 0x53ad) != '\0') &&
       (*(int *)*(undefined2 *)(unaff_BP + 6) != 0)) {
      *(undefined1 *)(*(int *)(unaff_BP + -2) + 0x53b9) = 0;
      *(undefined1 *)(*(int *)(unaff_BP + -2) + 0x53c5) = *(undefined1 *)0x448;
      *(undefined1 *)(*(int *)(unaff_BP + -2) + 0x53ad) = 0;
      FUN_1090_06c6(4,uVar25);
      *(int *)*(undefined2 *)(unaff_BP + 6) = *(int *)*(undefined2 *)(unaff_BP + 6) + -1;
    }
    if ((*(char *)(*(int *)(unaff_BP + -2) + 0x53b0) != '\0') &&
       (*(int *)*(undefined2 *)(unaff_BP + 6) != 0)) {
      *(undefined1 *)(*(int *)(unaff_BP + -2) + 0x53bc) = 0;
      *(undefined1 *)(*(int *)(unaff_BP + -2) + 0x53c8) = *(undefined1 *)0x448;
      *(undefined1 *)(*(int *)(unaff_BP + -2) + 0x53b0) = 0;
      FUN_1090_06c6(0xb,uVar25);
      *(int *)*(undefined2 *)(unaff_BP + 6) = *(int *)*(undefined2 *)(unaff_BP + 6) + -1;
    }
    if (((*(int *)(unaff_BP + -2) == 0) && (*(char *)0x53b3 != '\0')) &&
       (*(int *)*(undefined2 *)(unaff_BP + 6) != 0)) {
      *(undefined1 *)0x53bf = 0;
      *(undefined1 *)0x53cb = *(undefined1 *)0x448;
      *(undefined1 *)0x53b3 = 0;
      FUN_1090_06c6(10,uVar25);
      *(int *)*(undefined2 *)(unaff_BP + 6) = *(int *)*(undefined2 *)(unaff_BP + 6) + -1;
    }
    if (((*(int *)(unaff_BP + -2) == 2) && (*(char *)0x53b4 != '\0')) &&
       (*(int *)*(undefined2 *)(unaff_BP + 6) != 0)) {
      *(undefined1 *)0x53c0 = 0;
      *(undefined1 *)0x53cc = *(undefined1 *)0x448;
      *(undefined1 *)0x53b4 = 0;
      FUN_1090_06c6(10,uVar25);
      *(int *)*(undefined2 *)(unaff_BP + 6) = *(int *)*(undefined2 *)(unaff_BP + 6) + -1;
    }
    FUN_1090_064e();
    pcVar18 = (char *)FUN_1090_06b4();
    return pcVar18;
  case '\x10':
  case '\x14':
    do {
      FUN_1505_0ecc(*(undefined2 *)(unaff_BP + -0x10),*(undefined2 *)(unaff_BP + -0x12),
                    *(undefined2 *)(unaff_BP + 10));
      if (*(int *)(unaff_BP + -0x1c) < 0) {
        uVar30 = FUN_19c7_4ffe(*(int *)(unaff_BP + -0x12),*(int *)(unaff_BP + -0x12) >> 0xf,
                               *(undefined2 *)(unaff_BP + -6),*(undefined2 *)(unaff_BP + -4));
        uVar13 = *(uint *)(unaff_BP + -0xe);
        uVar10 = (uint)uVar30 + *(uint *)(unaff_BP + -0xe);
        iVar15 = *(int *)(unaff_BP + -0xc);
        puVar1 = (uint *)(unaff_BP + -0x1e);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 + uVar10;
        *(int *)(unaff_BP + -0x1c) =
             *(int *)(unaff_BP + -0x1c) +
             (int)((ulong)uVar30 >> 0x10) + iVar15 + (uint)CARRY2((uint)uVar30,uVar13) +
             (uint)CARRY2(uVar9,uVar10);
        *(int *)(unaff_BP + -0x12) = *(int *)(unaff_BP + -0x12) + 1;
      }
      else {
        lVar31 = FUN_19c7_4ffe(*(int *)(unaff_BP + -0x10),*(int *)(unaff_BP + -0x10) >> 0xf,
                               *(undefined2 *)(unaff_BP + -10),*(undefined2 *)(unaff_BP + -8));
        lVar32 = FUN_19c7_4ffe(*(int *)(unaff_BP + -0x12),*(int *)(unaff_BP + -0x12) >> 0xf,
                               *(undefined2 *)(unaff_BP + -6),*(undefined2 *)(unaff_BP + -4));
        uVar12 = (uint)(lVar32 - lVar31);
        uVar13 = *(uint *)(unaff_BP + -0xe);
        uVar20 = uVar12 + *(uint *)(unaff_BP + -0xe);
        iVar15 = *(int *)(unaff_BP + -0xc);
        uVar10 = *(uint *)(unaff_BP + -10);
        uVar11 = uVar20 + *(uint *)(unaff_BP + -10);
        iVar16 = *(int *)(unaff_BP + -8);
        puVar1 = (uint *)(unaff_BP + -0x1e);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 + uVar11;
        *(int *)(unaff_BP + -0x1c) =
             *(int *)(unaff_BP + -0x1c) +
             (int)((ulong)(lVar32 - lVar31) >> 0x10) + iVar15 + (uint)CARRY2(uVar12,uVar13) + iVar16
             + (uint)CARRY2(uVar20,uVar10) + (uint)CARRY2(uVar9,uVar11);
        *(int *)(unaff_BP + -0x12) = *(int *)(unaff_BP + -0x12) + 1;
        *(int *)(unaff_BP + -0x10) = *(int *)(unaff_BP + -0x10) + -1;
      }
    } while (*(int *)(unaff_BP + -0x12) <= *(int *)(unaff_BP + -2));
    return (char *)*(int *)(unaff_BP + -2);
  case '\x11':
    pcVar5 = unaff_DI + unaff_BP + 0x1ffe;
    bVar29 = SCARRY1(*pcVar5,cVar7) != SCARRY1(*pcVar5 + cVar7,bVar27);
    *pcVar5 = *pcVar5 + cVar7 + bVar27;
    cVar7 = *pcVar5;
    cVar3 = *pcVar5;
    break;
  case '\x12':
    pcVar18 = (char *)FUN_1eea_07b6();
    return pcVar18;
  case '\x13':
  case '\x17':
    thunk_EXT_FUN_0000_0000(0x1000,0,0);
    pcVar18 = (char *)thunk_EXT_FUN_0000_0000(0x1eea,1,0);
    return pcVar18;
  case '\x15':
    piVar4 = piVar23;
    bVar29 = SCARRY1((char)*piVar4,'\x01');
    *(char *)piVar4 = (char)*piVar4 + '\x01';
    cVar7 = (char)*piVar4;
    cVar3 = (char)*piVar4;
    break;
  case '\x16':
    *(undefined2 *)0x2 = 0x1eea;
    uVar9 = *(uint *)0x852c;
    uVar13 = *(uint *)0x852e;
    uVar10 = *(uint *)0x8532;
    uVar8 = FUN_1eea_0942();
    *(undefined1 *)0x886e = uVar8;
    uVar33 = FUN_1eea_0942();
    uVar6 = uVar33 >> 0x10;
    uVar12 = uVar9;
    if ((bool)uVar28) {
      iVar15 = unaff_SI;
      if (*(char *)0x886e == '\0') goto LAB_1eea_06a8;
      LOCK();
      bVar21 = *(byte *)0x886e;
      *(byte *)0x886e = (byte)uVar33;
      uVar33 = CONCAT22(uVar10,(uint)bVar21);
      UNLOCK();
      *(uint *)0x852c = uVar13;
      *(uint *)0x8530 = uVar10;
      uVar12 = uVar13;
      uVar13 = uVar9;
      uVar10 = (uint)uVar6;
    }
    uVar9 = (uint)(uVar33 >> 0x10);
    if ((*(byte *)0x886e & (byte)uVar33) != 0) {
      if (((byte)uVar33 & *(byte *)0x886e & 6) != 0) {
        iRam00000002 = unaff_SI;
        _LAB_0000_0000 = in_stack_00000000;
        return (char *)0x0;
      }
      uVar20 = uVar12;
      iVar16 = unaff_SI;
LAB_1eea_0699:
      iRam00000002 = iVar16;
      _LAB_0000_0000 = in_stack_00000000;
      iVar15 = 0;
      if ((-1 < (int)uVar20) && (iVar15 = *(int *)0x8869, (int)uVar20 <= iVar15)) {
        return (char *)0x0;
      }
      iVar16 = -0x7acc;
      if (iVar15 != 0) {
        if (iVar15 != *(int *)0x8869) {
          return (char *)0x2e67;
        }
        iVar16 = -0x793c;
      }
      uVar13 = uVar10;
      if ((int)uVar10 < (int)uVar9) {
        uVar13 = uVar9;
        uVar9 = uVar10;
      }
      if ((int)uVar9 < 0) {
        uVar9 = 0;
      }
      if (*(int *)0x886b < (int)uVar13) {
        uVar13 = *(uint *)0x886b;
      }
      iVar17 = *(int *)0x885c;
      uVar13 = uVar13 + *(int *)0x885e;
      uVar9 = uVar9 + *(int *)0x885e;
      if (*(uint *)0x885a < uVar13) {
        *(uint *)0x885a = uVar13;
      }
      if (uVar9 < *(uint *)0x8858) {
        *(uint *)0x8858 = uVar9;
      }
      piVar23 = (int *)(iVar16 + uVar9 * 2);
      for (iVar16 = (uVar13 - uVar9) + 1; iVar16 != 0; iVar16 = iVar16 + -1) {
        piVar4 = piVar23;
        piVar23 = piVar23 + 1;
        *piVar4 = iVar15 + iVar17;
      }
      return (char *)(iVar15 + iVar17);
    }
    iVar15 = uVar13 - uVar12;
    if (SBORROW2(uVar13,uVar12)) {
      iVar15 = (int)(CONCAT12(uVar12 <= uVar13,iVar15) >> 1);
      *(int *)0x886f = iVar15;
      *(int *)0x8873 = iVar15 >> 1;
      if (SBORROW2(uVar10,uVar9)) {
        iVar15 = (int)(CONCAT12(uVar9 <= uVar10,uVar10 - uVar9) >> 1);
      }
      else {
        iVar15 = (int)(uVar10 - uVar9) >> 1;
      }
    }
    else {
      *(int *)0x886f = iVar15;
      *(int *)0x8873 = iVar15 >> 1;
      iVar15 = uVar10 - uVar9;
      if (SBORROW2(uVar10,uVar9)) {
        iVar15 = (int)(CONCAT12(uVar9 <= uVar10,iVar15) >> 1);
        *(int *)0x886f = *(int *)0x886f >> 1;
        *(int *)0x8873 = *(int *)0x8873 >> 1;
      }
    }
    *(int *)0x8871 = iVar15;
    *(int *)0x8875 = iVar15 >> 1;
    do {
      uVar9 = (uint)(uVar33 >> 0x10);
      if ((uVar33 & 9) == 0) {
LAB_1eea_0a9d:
        iVar15 = *(int *)0x886b;
        if ((int)uVar10 <= iVar15) {
LAB_1eea_0aa5:
          iVar15 = 0;
        }
        lVar31 = (long)(int)(iVar15 - uVar9) * (long)*(int *)0x886f;
        iVar16 = (int)(lVar31 / (long)*(int *)0x8871);
        iVar17 = (int)(lVar31 % (long)*(int *)0x8871);
        bVar21 = (byte)((ulong)lVar31 >> 0x18);
        if ((char)(bVar21 ^ *(byte *)0x8872) < '\0') {
          iVar17 = -iVar17;
          iVar16 = iVar16 + -1;
        }
        if (-1 < (int)((uint)(byte)((byte)((uint)(iVar17 - *(int *)0x8875) >> 8) ^ bVar21) << 8)) {
          iVar16 = iVar16 + 1;
        }
        uVar20 = iVar16 + uVar12;
        iVar16 = unaff_SI;
        if (((int)uVar20 < 0) || (iVar16 = unaff_SI, *(int *)0x8869 < (int)uVar20))
        goto LAB_1eea_0699;
      }
      else {
        uVar20 = 0;
        if (-1 < (int)uVar13) {
          uVar20 = *(uint *)0x8869;
        }
        lVar31 = (long)(int)(uVar20 - uVar12) * (long)*(int *)0x8871;
        iVar15 = (int)(lVar31 / (long)*(int *)0x886f);
        iVar16 = (int)(lVar31 % (long)*(int *)0x886f);
        bVar21 = (byte)((ulong)lVar31 >> 0x18);
        if ((char)(bVar21 ^ *(byte *)0x8870) < '\0') {
          iVar16 = -iVar16;
          iVar15 = iVar15 + -1;
        }
        if (-1 < (int)((uint)(byte)((byte)((uint)(iVar16 - *(int *)0x8873) >> 8) ^ bVar21) << 8)) {
          iVar15 = iVar15 + 1;
        }
        iVar15 = iVar15 + uVar9;
        if (iVar15 < 0) goto LAB_1eea_0aa5;
        if (*(int *)0x886b < iVar15) goto LAB_1eea_0a9d;
      }
      uVar11 = uVar13;
      uVar13 = uVar12;
      FUN_1eea_063e();
      uVar12 = uVar11;
      if (*(char *)0x886e == '\0') goto code_r0x0001f990;
      *(int *)0x8530 = iVar15;
      *(uint *)0x852c = uVar20;
      uVar33 = CONCAT22(uVar10,(uint)*(byte *)0x886e);
      *(undefined1 *)0x886e = 0;
      uVar10 = uVar9;
    } while( true );
  }
  if (cVar3 != '\0' && bVar29 == cVar7 < '\0') {
    unaff_SI = 0x1f;
  }
  return (char *)((*(uint *)(unaff_BP + 6) & 0xe0) + unaff_SI);
code_r0x0001f990:
  *(int *)0x8532 = iVar15;
  *(uint *)0x852e = uVar20;
  iVar15 = unaff_SI;
LAB_1eea_06a8:
  iRam00000002 = iVar15;
  iVar15 = *(int *)0x885c;
  _LAB_0000_0000 = in_stack_00000000;
  *(int *)0x852c = *(int *)0x852c + iVar15;
  *(int *)0x852e = *(int *)0x852e + iVar15;
  iVar15 = *(int *)0x885e;
  *(int *)0x8530 = *(int *)0x8530 + iVar15;
  *(int *)0x8532 = *(int *)0x8532 + iVar15;
  uVar9 = *(uint *)0x852e;
  if (uVar9 < *(uint *)0x852c) {
    *(undefined2 *)0x852e = *(undefined2 *)0x852c;
    *(uint *)0x852c = uVar9;
    uVar25 = *(undefined2 *)0x8532;
    *(undefined2 *)0x8532 = *(undefined2 *)0x8530;
    *(undefined2 *)0x8530 = uVar25;
  }
  iVar15 = *(int *)0x852e;
  iVar16 = *(int *)0x852c;
  *(uint *)0x8854 = iVar15 - iVar16;
  uVar9 = *(uint *)0x8532;
  uVar13 = *(uint *)0x8530;
  uVar12 = uVar9 - uVar13;
  iVar17 = 2;
  uVar10 = uVar13;
  if ((int)uVar12 < 0) {
    iVar17 = -2;
    uVar12 = -uVar12;
    uVar10 = uVar9;
    uVar9 = uVar13;
  }
  *(uint *)0x8856 = uVar12;
  if (*(uint *)0x885a < uVar9) {
    *(uint *)0x885a = uVar9;
  }
  if (uVar10 < *(uint *)0x8858) {
    *(uint *)0x8858 = uVar10;
  }
  if ((uint)(iVar15 - iVar16) <= uVar12) {
    iVar24 = *(int *)0x8530 << 1;
    pcVar18 = (char *)*(uint *)0x852c;
    iVar15 = *(int *)0x8856;
    iVar19 = -(iVar15 + 1U >> 1);
    iVar16 = *(int *)0x8854;
    iVar14 = iVar15;
    while( true ) {
      if (pcVar18 < (char *)*(uint *)(iVar24 + -0x7acc)) {
        *(uint *)(iVar24 + -0x7acc) = (uint)pcVar18;
      }
      if ((char *)*(uint *)(iVar24 + -0x793c) < pcVar18) {
        *(uint *)(iVar24 + -0x793c) = (uint)pcVar18;
      }
      iVar14 = iVar14 + -1;
      if (iVar14 < 0) break;
      iVar24 = iVar24 + iVar17;
      iVar19 = iVar19 + iVar16;
      if (-1 < iVar19) {
        iVar19 = iVar19 - iVar15;
        pcVar18 = pcVar18 + 1;
      }
    }
    return pcVar18;
  }
  iVar24 = *(int *)0x8530 << 1;
  pcVar18 = (char *)*(uint *)0x852c;
  iVar15 = *(int *)0x8854;
  iVar19 = -(iVar15 + 1U >> 1);
  iVar16 = *(int *)0x8856;
  iVar14 = iVar15;
  do {
    if (pcVar18 < (char *)*(uint *)(iVar24 + -0x7acc)) {
      *(uint *)(iVar24 + -0x7acc) = (uint)pcVar18;
    }
    while( true ) {
      iVar14 = iVar14 + -1;
      if (iVar14 < 0) {
        if ((char *)*(uint *)(iVar24 + -0x793c) < pcVar18) {
          *(uint *)(iVar24 + -0x793c) = (uint)pcVar18;
        }
        return pcVar18;
      }
      iVar19 = iVar19 + iVar16;
      if (-1 < iVar19) break;
      pcVar18 = pcVar18 + 1;
    }
    if ((char *)*(uint *)(iVar24 + -0x793c) < pcVar18) {
      *(uint *)(iVar24 + -0x793c) = (uint)pcVar18;
    }
    pcVar18 = pcVar18 + 1;
    iVar19 = iVar19 - iVar15;
    iVar24 = iVar24 + iVar17;
  } while( true );
}



/* 11e1:09f8 FUN_11e1_09f8 */

int __cdecl16far FUN_11e1_09f8(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 1;
  while( true ) {
    if (0x32 < local_4) {
      return local_4 + -1;
    }
    if (*(int *)(local_4 * 0x2a + 0xda) == 0) break;
    local_4 = local_4 + 1;
  }
  return local_4;
}



/* 11e1:0a32 FUN_11e1_0a32 */

void __cdecl16far FUN_11e1_0a32(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  do {
    *(undefined2 *)(local_4 * 0x2a + 0x104) = 0;
    local_4 = local_4 + 1;
  } while (local_4 < 0x32);
  return;
}



/* 11e1:0a5e FUN_11e1_0a5e */

void __cdecl16far
FUN_11e1_0a5e(int param_1,undefined2 param_2,int param_3,undefined2 param_4,undefined2 param_5,
             undefined2 param_6,undefined2 param_7)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined4 local_6;
  
  param_1 = param_1 * 0x2a;
  local_6 = (undefined2 *)CONCAT22(0x2a22,(undefined2 *)(param_1 + 0xda));
  *local_6 = 1;
  *(undefined2 *)(param_1 + 0xdc) = 0;
  *(int *)(param_1 + 0xde) = param_3 + -1;
  *(undefined2 *)(param_1 + 0xe0) = param_4;
  *(undefined2 *)(param_1 + 0xe2) = param_5;
  *(int *)(param_1 + 0xde) = param_3 + -1;
  if (param_3 == -1) {
    *(undefined2 *)(param_1 + 0xe4) = *(undefined2 *)(param_1 + 0xe0);
    *(undefined2 *)(param_1 + 0xe6) = *(undefined2 *)(param_1 + 0xe2);
  }
  else {
    *(undefined2 *)(param_1 + 0xe4) = 0;
    *(undefined2 *)(param_1 + 0xe6) = 0;
  }
  *(undefined2 *)(param_1 + 0xe8) = param_6;
  *(undefined2 *)(param_1 + 0xea) = *(undefined2 *)(param_1 + 0xe8);
  *(undefined2 *)(param_1 + 0xec) = 0xff;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0xfa) = param_2;
  *(undefined2 *)(param_1 + 0xfc) = param_7;
  uVar1 = *(undefined2 *)0xb8e8;
  *(undefined2 *)(param_1 + 0xfe) = *(undefined2 *)(param_1 + 0xfa);
  *(undefined2 *)(param_1 + 0x100) = uVar1;
  return;
}



/* 11e1:0b44 FUN_11e1_0b44 */

void __cdecl16far FUN_11e1_0b44(void)

{
  int local_4;
  
  local_4 = 0;
  do {
    FUN_11e1_0d94(local_4);
    local_4 = local_4 + 1;
  } while (local_4 < 0x32);
  return;
}



/* 11e1:0b66 FUN_11e1_0b66 */

void __cdecl16far FUN_11e1_0b66(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_c;
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  undefined2 uStack_4;
  
  local_c = 0;
  uVar2 = 0x11e1;
  do {
    iVar1 = local_c * 0x2a;
    uVar3 = uVar2;
    if ((*(int *)(iVar1 + 0x104) != 0) && (*(int *)(iVar1 + 0x106) != 0)) {
      local_6 = iVar1 + 0x104;
      uStack_4 = 0x2a22;
      if (*(char *)(iVar1 + 300) != -1) {
        FUN_11e1_0ce2(local_c,&local_8,&local_a);
        uVar3 = 0x1eea;
        FUN_1eea_0fbe(uVar2,*(undefined2 *)0x486,local_8,local_a,
                      *(undefined2 *)((uint)*(byte *)(local_6 + 0x28) * 2 + -0x490c));
      }
    }
    local_c = local_c + 1;
    uVar2 = uVar3;
  } while (local_c < 0x32);
  return;
}



/* 11e1:0bce FUN_11e1_0bce */

void __cdecl16far FUN_11e1_0bce(void)

{
  int iVar1;
  int unaff_BP;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar2 = 0x11e1;
  do {
    FUN_1eea_0fbe(uVar2);
    do {
      do {
        *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
        if (0x31 < *(int *)(unaff_BP + -10)) {
          return;
        }
        iVar1 = *(int *)(unaff_BP + -10) * 0x2a;
      } while ((*(int *)(iVar1 + 0x104) == 0) || (*(int *)(iVar1 + 0x106) == 0));
      *(int *)(unaff_BP + -4) = iVar1 + 0x104;
      *(undefined2 *)(unaff_BP + -2) = 0x2a22;
    } while (*(char *)((int)*(undefined4 *)(unaff_BP + -4) + 0x28) == -1);
    FUN_11e1_0ce2();
    uVar2 = 0x1eea;
  } while( true );
}



/* 11e1:0be4 FUN_11e1_0be4 */

void __cdecl16far FUN_11e1_0be4(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  do {
    if (*(int *)(local_4 * 0x2a + 0x104) != 0) {
      FUN_11e1_0c1a(local_4);
    }
    local_4 = local_4 + 1;
  } while (local_4 < 0x32);
  return;
}



/* 11e1:0c1a FUN_11e1_0c1a */

void __cdecl16far FUN_11e1_0c1a(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  undefined2 uStack_4;
  
  iVar1 = param_1 * 0x2a;
  local_6 = iVar1 + 0x104;
  uStack_4 = 0x2a22;
  if ((*(char *)(iVar1 + 300) != -1) && (*(int *)(iVar1 + 0x106) == 0)) {
    FUN_11e1_0ce2(param_1,&local_8,&local_a);
    if (*(int *)(local_6 + 0x22) != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1eea_00a4(0x11e1,*(undefined2 *)0x484,local_8,local_a,
                          *(undefined2 *)((uint)*(byte *)(local_6 + 0x28) * 2 + -0x490c));
    }
    FUN_1eea_0fa0(0x11e1,*(undefined2 *)0x484,local_8,local_a,
                  *(undefined2 *)((uint)*(byte *)(local_6 + 0x28) * 2 + -0x490c));
  }
  return;
}



/* 11e1:0ca2 FUN_11e1_0ca2 */

void __cdecl16far FUN_11e1_0ca2(void)

{
  int iVar1;
  int local_8;
  undefined4 local_6;
  
  local_8 = 0;
  do {
    iVar1 = local_8 * 0x2a;
    local_6 = (int *)CONCAT22(0x2a22,(int *)(iVar1 + 0x104));
    if ((*local_6 != 0) && (*(int *)(iVar1 + 0x106) != 0)) {
      *(undefined2 *)(iVar1 + 0x106) = 0;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x32);
  return;
}



/* 11e1:0ce2 FUN_11e1_0ce2 */

void __cdecl16far FUN_11e1_0ce2(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  param_1 = param_1 * 0x2a;
  if (*(int *)(param_1 + 0x108) == -2) {
    *param_2 = *(int *)(param_1 + 0x10e);
    iVar1 = *(int *)(param_1 + 0x110);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x108) + 1;
    if ((iVar1 < 1) && (iVar1 < 0x33)) {
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x108) * 0x2a + 0x104) == 0) {
      return;
    }
    *param_2 = *(int *)(*(int *)(param_1 + 0x108) * 0x2a + 0x10e) + *(int *)(param_1 + 0x10a) +
               *(int *)(param_1 + 0x10e);
    iVar1 = *(int *)(*(int *)(param_1 + 0x108) * 0x2a + 0x110) + *(int *)(param_1 + 0x10c) +
            *(int *)(param_1 + 0x110);
  }
  *param_3 = iVar1;
  return;
}



/* 11e1:0d94 FUN_11e1_0d94 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_11e1_0d94(int param_1,char *param_2,int *param_3)

{
  uint *puVar1;
  char *pcVar2;
  uint *puVar3;
  code *pcVar4;
  char *pcVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  char *in_CX;
  int *piVar12;
  char extraout_DH;
  uint extraout_DX;
  char *pcVar13;
  int *piVar14;
  uint *unaff_SI;
  uint *puVar15;
  char *pcVar16;
  uint *unaff_DI;
  uint *puVar17;
  undefined2 uVar18;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar19;
  undefined4 uVar20;
  int aiStack_7ffe [1964];
  uint auStack_70a5 [14400];
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  int iStack_12;
  undefined2 *in_stack_0000fff2;
  int in_stack_0000fff4;
  undefined4 local_6;
  
  iVar8 = param_1 * 0x2a;
  local_6 = (int *)CONCAT22(0x2a22,(int *)(iVar8 + 0x104));
  if ((*local_6 == 0) ||
     (*(int *)(iVar8 + 0x116) = *(int *)(iVar8 + 0x116) + *(int *)(iVar8 + 0x114),
     *(int *)(iVar8 + 0x116) < 0x100)) {
    return;
  }
  *(int *)(iVar8 + 0x116) = *(int *)(iVar8 + 0x116) + -0xff;
  uVar11 = *(uint *)(iVar8 + 0x128);
  do {
    pcVar5 = (char *)*(undefined4 *)(iVar8 + 0x128);
    uVar18 = (undefined2)((ulong)pcVar5 >> 0x10);
    pcVar13 = (char *)pcVar5;
    uVar9 = (uint)*pcVar5;
  } while (10 < uVar9);
  piVar14 = (int *)(uVar9 * 2);
  puVar15 = unaff_SI;
  switch(*pcVar5) {
  default:
    uVar20 = *(undefined4 *)unaff_SI;
    iStack_12 = *(int *)(param_1 + 0xe);
    uStack_14 = *(undefined2 *)0x958e;
    uStack_16 = 0x1000;
    uStack_18 = 0x5013;
    iVar8 = FUN_1ed2_0008();
    iStack_12 = *(int *)(param_1 + 0xc);
    uStack_14 = *(undefined2 *)0x958c;
    uStack_16 = 0x1ed2;
    uStack_18 = 0x5027;
    iVar10 = FUN_1ed2_0008();
    *param_3 = iVar10 + iVar8 + (int)uVar20;
    return;
  case '\x01':
    while( true ) {
      iVar8 = piVar14[4];
      uVar9 = (uint)((long)(int)pcVar13 * (long)iVar8);
      puVar1 = unaff_DI + 2;
      uVar11 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      unaff_DI[3] = unaff_DI[3] + (int)((ulong)((long)(int)pcVar13 * (long)iVar8) >> 0x10) +
                    (uint)CARRY2(uVar11,uVar9);
      iVar8 = piVar14[5];
      uVar9 = (uint)((long)(int)in_CX * (long)iVar8);
      puVar1 = unaff_DI + 4;
      uVar11 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      unaff_DI[5] = unaff_DI[5] + (int)((ulong)((long)(int)in_CX * (long)iVar8) >> 0x10) +
                    (uint)CARRY2(uVar11,uVar9);
      iVar8 = piVar14[6];
      uVar9 = (uint)((long)(int)unaff_SI * (long)iVar8);
      puVar1 = unaff_DI;
      uVar11 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      unaff_DI[1] = unaff_DI[1] + (int)((ulong)((long)(int)unaff_SI * (long)iVar8) >> 0x10) +
                    (uint)CARRY2(uVar11,uVar9);
      iVar8 = piVar14[7];
      uVar9 = (uint)((long)(int)unaff_SI * (long)iVar8);
      puVar1 = unaff_DI + 2;
      uVar11 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      unaff_DI[3] = unaff_DI[3] + (int)((ulong)((long)(int)unaff_SI * (long)iVar8) >> 0x10) +
                    (uint)CARRY2(uVar11,uVar9);
      iVar8 = piVar14[8];
      uVar9 = (uint)((long)(int)unaff_SI * (long)iVar8);
      puVar1 = unaff_DI + 4;
      uVar11 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      unaff_DI[5] = unaff_DI[5] + (int)((ulong)((long)(int)unaff_SI * (long)iVar8) >> 0x10) +
                    (uint)CARRY2(uVar11,uVar9);
      puVar17 = unaff_DI + 8;
      in_stack_0000fff2 = (undefined2 *)((int)in_stack_0000fff2 + -1);
      if (in_stack_0000fff2 == (undefined2 *)0x0) break;
      uVar11 = puVar15[3];
      pcVar13 = (char *)puVar15[4];
      unaff_SI = (uint *)puVar15[5];
      iVar8 = *piVar14;
      *puVar17 = (uint)((long)(int)uVar11 * (long)iVar8);
      unaff_DI[9] = (uint)((ulong)((long)(int)uVar11 * (long)iVar8) >> 0x10);
      iVar8 = piVar14[1];
      unaff_DI[10] = (uint)((long)(int)uVar11 * (long)iVar8);
      unaff_DI[0xb] = (uint)((ulong)((long)(int)uVar11 * (long)iVar8) >> 0x10);
      iVar8 = piVar14[2];
      unaff_DI[0xc] = (uint)((long)(int)uVar11 * (long)iVar8);
      unaff_DI[0xd] = (uint)((ulong)((long)(int)uVar11 * (long)iVar8) >> 0x10);
      iVar8 = piVar14[3];
      uVar9 = (uint)((long)(int)pcVar13 * (long)iVar8);
      puVar1 = puVar17;
      uVar11 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      unaff_DI[9] = unaff_DI[9] + (int)((ulong)((long)(int)pcVar13 * (long)iVar8) >> 0x10) +
                    (uint)CARRY2(uVar11,uVar9);
      in_CX = pcVar13;
      unaff_DI = puVar17;
      puVar15 = puVar15 + 3;
    }
    return;
  case '\x02':
  case '\x04':
    return;
  case '\x03':
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      puVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *puVar3 = *puVar1;
    }
    puVar15 = unaff_SI + -8;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      puVar1 = puVar15;
      puVar15 = puVar15 + 1;
      *puVar3 = *puVar1;
    }
    uVar6 = FUN_19c7_1be2();
    in_stack_0000fff2[1] = CONCAT11(uVar6,uVar6);
    if (in_stack_0000fff4 == 0) {
      uVar18 = FUN_19c7_1b74();
      *in_stack_0000fff2 = uVar18;
      in_stack_0000fff2[2] = piVar14;
      return;
    }
    if (uVar11 == 0) {
      uVar18 = FUN_19c7_1b74();
      in_stack_0000fff2[4] = uVar18;
      in_stack_0000fff2[6] = piVar14;
      return;
    }
    *(uint *)0x3982 = uVar11;
    *(int *)0x3984 = in_stack_0000fff4;
    bVar19 = false;
    uVar20 = FUN_19c7_1af8();
    if (bVar19) {
      uVar6 = 0x8a;
      if ((uVar11 & 4) == 0) {
        uVar6 = 0x85;
      }
      in_stack_0000fff2[1] = CONCAT11(uVar6,uVar6);
      return;
    }
    *(undefined2 *)0x3942 = (int)uVar20;
    *(undefined2 *)0x3944 = (int)((ulong)uVar20 >> 0x10);
    *(undefined2 *)0x3946 = piVar14;
    *(int *)0x3948 = iVar8;
    uVar20 = FUN_19c7_1b74();
    *in_stack_0000fff2 = (int)uVar20;
    *(undefined2 *)0x3942 = (int)uVar20;
    *(undefined2 *)0x3944 = (int)((ulong)uVar20 >> 0x10);
    in_stack_0000fff2[2] = piVar14;
    *(undefined2 *)0x3946 = piVar14;
    *(int *)0x3948 = iVar8;
    uVar18 = FUN_19c7_1b74();
    in_stack_0000fff2[4] = uVar18;
    in_stack_0000fff2[6] = piVar14;
    return;
  case '\x05':
    break;
  case '\x06':
    *(int *)((int)register0x00000010 + 0x2a7a + (int)unaff_SI) =
         (int)piVar14 +
         (uint)CARRY2(uVar9,uVar9) + *(int *)((int)register0x00000010 + 0x2a7a + (int)unaff_SI);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case '\a':
    iStack_12 = 0xb;
    uStack_14 = 0x11;
    uStack_16 = 0x93;
    uStack_18 = 0x74;
    uStack_1a = 1;
    uStack_1c = 0x1000;
    uStack_1e = 0x8336;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4c3 = uVar18;
    iStack_12 = 0x43;
    uStack_14 = 0x10;
    uStack_16 = 0x84;
    uStack_18 = 0xa7;
    uStack_1a = 1;
    uStack_1c = 0x1eea;
    uStack_1e = 0x8355;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4d1 = uVar18;
    iStack_12 = 0x43;
    uStack_14 = 0x10;
    uStack_16 = 0x84;
    uStack_18 = 0xb8;
    uStack_1a = 1;
    uStack_1c = 0x1eea;
    uStack_1e = 0x8374;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4d3 = uVar18;
    iStack_12 = 0;
    uStack_14 = 0x4b;
    uStack_16 = 100;
    uStack_18 = 0x7c;
    uStack_1a = 0x6d;
    uStack_1c = *(undefined2 *)0x790e;
    uStack_1e = 0x1eea;
    uStack_20 = 0x8396;
    FUN_1eea_0574();
    iStack_12 = 200;
    uStack_14 = 0xa0;
    uStack_16 = 0;
    uStack_18 = 0;
    uStack_1a = 1;
    uStack_1c = 0x1eea;
    uStack_1e = 0x83ae;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4c7 = uVar18;
    iStack_12 = 200;
    uStack_14 = 0xa0;
    uStack_16 = 0;
    uStack_18 = 0xa0;
    uStack_1a = 1;
    uStack_1c = 0x1eea;
    uStack_1e = 0x83cc;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4e1 = uVar18;
    iStack_12 = 0xaca;
    uStack_14 = 1;
    uStack_16 = 0x1eea;
    uStack_18 = 0x83df;
    FUN_20a6_024c();
    iStack_12 = 0x11;
    uStack_14 = 0x13;
    uStack_16 = 1;
    uStack_18 = 1;
    uStack_1a = 1;
    uStack_1c = 0x20a6;
    uStack_1e = 0x83f5;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4d5 = uVar18;
    iStack_12 = 0x11;
    uStack_14 = 0x13;
    uStack_16 = 1;
    uStack_18 = 0x15;
    uStack_1a = 1;
    uStack_1c = 0x1eea;
    uStack_1e = 0x8414;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4d9 = uVar18;
    iStack_12 = 0x11;
    uStack_14 = 0x13;
    uStack_16 = 0x13;
    uStack_18 = 1;
    uStack_1a = 1;
    uStack_1c = 0x1eea;
    uStack_1e = 0x842d;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4d7 = uVar18;
    iStack_12 = 0x11;
    uStack_14 = 0x13;
    uStack_16 = 0x13;
    uStack_18 = 0x15;
    uStack_1a = 1;
    uStack_1c = 0x1eea;
    uStack_1e = 0x8449;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4db = uVar18;
    if (*(char *)0x9ed6 != *(char *)0x2a4) {
      iStack_12 = 0x3b;
      uStack_14 = 0x3b;
      uStack_16 = 1;
      uStack_18 = 0x29;
      uStack_1a = 1;
      uStack_1c = 0x1eea;
      uStack_1e = 0x846e;
      uVar18 = thunk_EXT_FUN_0000_0000();
      *(undefined2 *)0xc4dd = uVar18;
    }
    if (*(char *)0x9ed6 == *(char *)0x2a4) {
      iStack_12 = 0xad6;
    }
    else {
      iStack_12 = 0xae0;
    }
    uStack_14 = 1;
    uStack_16 = 0x1eea;
    uStack_18 = 0x848f;
    FUN_20a6_0232();
    iStack_12 = 0x27;
    uStack_14 = 10;
    uStack_16 = 2;
    uStack_18 = 0x23;
    uStack_1a = 1;
    uStack_1c = 0x20a6;
    uStack_1e = 0x84ab;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4cd = uVar18;
    iStack_12 = 0x28;
    uStack_14 = 0xd;
    uStack_16 = 2;
    uStack_18 = 0x32;
    uStack_1a = 1;
    uStack_1c = 0x1eea;
    uStack_1e = 0x84ca;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4cf = uVar18;
    iStack_12 = 0;
    uStack_14 = 0x6a;
    uStack_16 = 0x100;
    uStack_18 = 1;
    uStack_1a = 0x20;
    uStack_1c = *(undefined2 *)0x790e;
    uStack_1e = 0x1eea;
    uStack_20 = 0x84ec;
    FUN_1eea_0574();
    if (*(char *)0x9ed6 == *(char *)0x2a4) {
      iStack_12 = 0x4b;
      uStack_14 = 100;
      uStack_16 = 0x7c;
      uStack_18 = 0x3c;
      uStack_1a = 1;
      uStack_1c = 0x1eea;
      uStack_1e = 0x8511;
      uVar18 = thunk_EXT_FUN_0000_0000();
      *(undefined2 *)0xc4c9 = uVar18;
      iStack_12 = 0x4b;
      uStack_14 = 100;
      uStack_16 = 0x7c;
      uStack_18 = 0xa1;
      uStack_1a = 1;
      uStack_1c = 0x1eea;
      uStack_1e = 0x8530;
      uVar18 = thunk_EXT_FUN_0000_0000();
      *(undefined2 *)0xc4cb = uVar18;
    }
    else {
      iStack_12 = 0;
      uStack_14 = 0;
      uStack_16 = 0x338;
      uStack_18 = 200;
      uStack_1a = 0x140;
      uStack_1c = 0;
      uStack_1e = 0;
      uStack_20 = *(undefined2 *)0x790e;
      uStack_22 = 0x1eea;
      uStack_24 = 0x8555;
      thunk_EXT_FUN_0000_0000();
    }
    iStack_12 = 200;
    uStack_14 = 0xa0;
    uStack_16 = 0;
    uStack_18 = 0;
    uStack_1a = 1;
    uStack_1c = 0x1eea;
    uStack_1e = 0x856d;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4c5 = uVar18;
    iStack_12 = 200;
    uStack_14 = 0xa0;
    uStack_16 = 0;
    uStack_18 = 0xa0;
    uStack_1a = 1;
    uStack_1c = 0x1eea;
    uStack_1e = 0x858b;
    uVar18 = thunk_EXT_FUN_0000_0000();
    *(undefined2 *)0xc4df = uVar18;
    iStack_12 = 0x1eea;
    uStack_14 = 0x8596;
    thunk_EXT_FUN_0000_0000();
    return;
  case '\b':
    iStack_12 = (int)*(char *)((int)piVar14 + 0xb);
    uStack_14 = 0x1000;
    uStack_16 = 0x6ce;
    FUN_2120_170a();
    iStack_12 = 0x2120;
    uStack_14 = 0x776;
    FUN_1000_0556();
    *(undefined1 *)(*(int *)0x9edc * 0x1d + -0x60e3) = 1;
    iStack_12 = 0x2120;
    uStack_14 = 0x789;
    FUN_1eea_11e7();
    iStack_12 = 0;
    uStack_14 = 0;
    uStack_16 = 0x1eea;
    uStack_18 = 0x792;
    thunk_EXT_FUN_0000_0000();
    iStack_12 = 0;
    uStack_14 = 1;
    uStack_16 = 0x1eea;
    uStack_18 = 0x7a1;
    thunk_EXT_FUN_0000_0000();
    return;
  case '\t':
    do {
    } while (piVar14 == (int *)0x0 || SCARRY2(uVar9,uVar9) != (int)piVar14 < 0);
    uVar11 = 0;
    do {
      if (*(char *)(uVar11 * 2 + 0x5393) == '\0') {
        *(undefined1 *)((uVar11 ^ 1) + 0x5396) = 0;
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 2);
    return;
  }
  bVar19 = false;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (bVar19) {
    FUN_19c7_2d9b();
    return;
  }
  if ((*(byte *)(piVar14 + -0x384e) & 0x80) != 0) {
    bVar19 = true;
    piVar12 = param_3;
    pcVar13 = param_2;
    if (param_3 == (int *)0x0) {
      FUN_19c7_44f6();
      return;
    }
    do {
      if (piVar12 == (int *)0x0) break;
      pcVar5 = pcVar13;
      pcVar13 = pcVar13 + 1;
      bVar19 = *pcVar5 == '\n';
      piVar12 = (int *)((int)piVar12 + -1);
    } while (!bVar19);
    if (bVar19) {
      iStack_12 = 0x1000;
      uStack_14 = 0xe0d4;
      uVar11 = FUN_19c7_4538();
      if (0xa8 < uVar11) {
        piVar14 = &iStack_12;
        iVar8 = 0x200;
        if (uVar11 < 0x228) {
          iVar8 = 0x80;
        }
        iVar8 = -iVar8;
        pcVar13 = (char *)((int)&iStack_12 + iVar8);
        *(undefined2 *)((int)&uStack_14 + iVar8) = unaff_SS;
        uVar18 = *(undefined2 *)((int)&uStack_14 + iVar8);
        do {
          pcVar5 = param_2;
          param_2 = param_2 + 1;
          cVar7 = *pcVar5;
          if (cVar7 == '\n') {
            cVar7 = '\r';
            if ((int *)pcVar13 == piVar14) {
              *(undefined2 *)((int)&uStack_14 + iVar8) = 0xe10e;
              cVar7 = FUN_19c7_44b6();
            }
            pcVar5 = pcVar13;
            pcVar13 = pcVar13 + 1;
            *pcVar5 = cVar7;
            cVar7 = '\n';
          }
          if ((int *)pcVar13 == piVar14) {
            *(undefined2 *)((int)&uStack_14 + iVar8) = 0xe119;
            cVar7 = FUN_19c7_44b6();
          }
          pcVar5 = pcVar13;
          pcVar13 = pcVar13 + 1;
          *pcVar5 = cVar7;
          param_3 = (int *)((int)param_3 + -1);
        } while (param_3 != (int *)0x0);
        *(undefined2 *)((int)&uStack_14 + iVar8) = 0xe103;
        FUN_19c7_44b6();
        FUN_19c7_44f6();
        return;
      }
      iStack_12 = 0;
      uStack_14 = 0x19c7;
      uStack_16 = 0xc57b;
      FUN_19c7_2a7c();
      uStack_14 = 0x19c7;
      uStack_16 = 0xc580;
      FUN_19c7_2d1b();
      iStack_12 = 0xff;
      uStack_14 = 0x19c7;
      uStack_16 = 0xc589;
      (*(code *)*(undefined2 *)0x8ee8)();
      param_2[-0x32d0] = param_2[-0x32d0] + extraout_DH;
      *(uint *)((int)auStack_70a5 + (int)pcVar13) =
           *(uint *)((int)auStack_70a5 + (int)pcVar13) & (uint)&iStack_12;
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      *(undefined2 *)0x8f49 = piVar14;
      *(undefined2 *)0x8f4b = unaff_DS;
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      if (*(int *)0x93a8 != 0) {
        bVar19 = false;
        (*(code *)*(undefined2 *)0x93a6)();
        if (bVar19) {
          FUN_19c7_2aa0();
          return;
        }
        (*(code *)*(undefined2 *)0x93a6)();
      }
      iVar8 = *(int *)0x2c;
      if (iVar8 != 0) {
        pcVar13 = (char *)0x0;
        do {
          if (*pcVar13 == '\0') break;
          iVar10 = 0xc;
          pcVar16 = (char *)0x8f3c;
          bVar19 = false;
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            pcVar2 = pcVar13;
            pcVar13 = pcVar13 + 1;
            pcVar5 = pcVar16;
            pcVar16 = pcVar16 + 1;
            bVar19 = *pcVar5 == *pcVar2;
          } while (bVar19);
          if (bVar19) {
            pcVar16 = (char *)0x8f64;
            iVar10 = (int)*pcVar13;
            do {
              pcVar13 = pcVar13 + 1;
              cVar7 = '\0';
              if (*pcVar13 != -1) {
                cVar7 = *pcVar13;
              }
              pcVar5 = pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar5 = cVar7;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
            break;
          }
          iVar10 = 0x7fff;
          bVar19 = true;
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            pcVar5 = pcVar13;
            pcVar13 = pcVar13 + 1;
            bVar19 = *pcVar5 == '\0';
          } while (!bVar19);
        } while (bVar19);
      }
      iVar8 = 4;
      do {
        bVar19 = false;
        *(byte *)(iVar8 + -0x709c) = *(byte *)(iVar8 + -0x709c) & 0xbf;
        pcVar4 = (code *)swi(0x21);
        (*pcVar4)();
        if ((!bVar19) && ((extraout_DX & 0x80) != 0)) {
          *(byte *)(iVar8 + -0x709c) = *(byte *)(iVar8 + -0x709c) | 0x40;
        }
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      FUN_19c7_2a69();
      FUN_19c7_2a69();
      return;
    }
  }
  FUN_19c7_4504();
  return;
}



/* 11e1:0f84 FUN_11e1_0f84 */

void __cdecl16far FUN_11e1_0f84(undefined1 param_1)

{
  undefined1 local_10;
  undefined1 local_f;
  
  local_f = 0;
  local_10 = param_1;
  FUN_19c7_4a00(0x10,&local_10,&local_10);
  return;
}



/* 11e1:0faa FUN_11e1_0faa */

void __cdecl16far FUN_11e1_0faa(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  *(undefined2 *)0xbd1e = 0x1e;
  for (local_4 = 0; local_4 < *(int *)0xbd1e; local_4 = local_4 + 1) {
    uVar2 = FUN_11e1_1488(*(int *)0x7916 + 1);
    *(undefined2 *)(local_4 * 2 + -0x43d2) = uVar2;
    uVar2 = FUN_11e1_1488(*(int *)0x7918 + 1);
    *(undefined2 *)(local_4 * 2 + -0x4396) = uVar2;
    uVar2 = FUN_14b9_02b2(5);
    *(undefined2 *)(local_4 * 2 + -0x431e) = uVar2;
    iVar1 = *(int *)(local_4 * 2 + -0x431e);
    iVar3 = FUN_14b9_02b2(0x14);
    iVar3 = iVar1 * 4 + iVar3;
    if (*(int *)0x399e == 0x4d) {
      iVar3 = iVar3 + 0x24;
    }
    else {
      iVar3 = *(int *)((iVar3 + 4 >> 3) * 2 + 0x522);
    }
    *(int *)(local_4 * 2 + -0x435a) = iVar3;
  }
  return;
}



/* 11e1:1052 FUN_11e1_1052 */

void __cdecl16far FUN_11e1_1052(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined2 unaff_DS;
  int local_c;
  
  iVar1 = *(int *)(((*(int *)(*(int *)0xc432 * 0x3c + -0x42ba) + 9U) / 10) * 2 + 0x52a);
  uVar2 = FUN_1ed2_007e(*(undefined2 *)0xbd28);
  uVar3 = FUN_1ed2_006e(*(undefined2 *)0xbd28);
  iVar4 = (*(int *)0x886b * 0x40) / 2;
  iVar5 = (*(int *)0x8869 * 0x40) / 2;
  local_c = 0;
  do {
    if (*(int *)0xbd1e <= local_c) {
      return;
    }
    if (iVar1 != 0) {
      iVar7 = local_c * 2;
      iVar12 = ((iVar1 << (*(byte *)(iVar7 + -0x431e) & 0x1f)) * *(int *)0xb686) / 0xc + 1;
      *(int *)(iVar7 + -0x43d2) = *(int *)(iVar7 + -0x43d2) + *(int *)(iVar7 + -0x43d2) / iVar12;
      *(int *)(iVar7 + -0x4396) = *(int *)(iVar7 + -0x4396) + *(int *)(iVar7 + -0x4396) / iVar12;
      iVar12 = local_c * 2;
      if ((((iVar5 < *(int *)(iVar12 + -0x43d2)) ||
           (-*(int *)(iVar12 + -0x43d2) != iVar5 && *(int *)(iVar12 + -0x43d2) <= -iVar5)) ||
          (iVar4 < *(int *)(iVar12 + -0x4396))) ||
         (-*(int *)(iVar12 + -0x4396) != iVar4 && *(int *)(iVar12 + -0x4396) <= -iVar4)) {
        uVar6 = FUN_11e1_1488(*(int *)0x7916 + 1 >> 1);
        *(undefined2 *)(local_c * 2 + -0x43d2) = uVar6;
        uVar6 = FUN_11e1_1488(*(int *)0x7918 + 1 >> 1);
        *(undefined2 *)(local_c * 2 + -0x4396) = uVar6;
      }
    }
    iVar12 = local_c * 2;
    *(int *)(iVar12 + -0x4396) = *(int *)(iVar12 + -0x4396) + *(int *)0xbd26;
    *(int *)(iVar12 + -0x43d2) = *(int *)(iVar12 + -0x43d2) - *(int *)0xbd24;
    if (*(int *)0xbd28 != 0) {
      uVar6 = *(undefined2 *)(iVar12 + -0x4396);
      iVar7 = FUN_1ed2_0008(uVar6,uVar3);
      iVar8 = FUN_1ed2_0008(*(undefined2 *)(iVar12 + -0x43d2),uVar2);
      *(int *)(iVar12 + -0x4396) = iVar8 + iVar7;
      iVar12 = FUN_1ed2_0008(*(undefined2 *)(local_c * 2 + -0x43d2),uVar3);
      iVar7 = FUN_1ed2_0008(uVar6,uVar2);
      *(int *)(local_c * 2 + -0x43d2) = iVar12 - iVar7;
    }
    piVar11 = (int *)(local_c * 2 + -0x4396);
    if (iVar4 < *piVar11) {
      iVar12 = *(int *)0x886b;
LAB_11e1_10fc:
      *piVar11 = *piVar11 + iVar12 * -0x40;
    }
    else {
      piVar11 = (int *)(local_c * 2 + -0x4396);
      if (-*piVar11 == iVar4 || -iVar4 < *piVar11) {
        piVar11 = (int *)(local_c * 2 + -0x43d2);
        if (iVar5 < *piVar11) {
          iVar12 = *(int *)0x8869;
          goto LAB_11e1_10fc;
        }
        piVar11 = (int *)(local_c * 2 + -0x43d2);
        if (-*piVar11 != iVar5 && *piVar11 <= -iVar5) {
          iVar12 = *(int *)0x8869;
          goto LAB_11e1_111e;
        }
      }
      else {
        iVar12 = *(int *)0x886b;
LAB_11e1_111e:
        *piVar11 = *piVar11 + iVar12 * 0x40;
      }
    }
    iVar12 = local_c * 2;
    uVar9 = (int)*(uint *)(iVar12 + -0x4396) >> 0xf;
    uVar10 = (int)*(uint *)(iVar12 + -0x43d2) >> 0xf;
    FUN_1eea_0b9f(*(undefined2 *)0x7922,
                  (((int)((*(uint *)(iVar12 + -0x43d2) ^ uVar10) - uVar10) >> 6 ^ uVar10) - uVar10)
                  + *(int *)0xbd20,
                  (((int)((*(uint *)(iVar12 + -0x4396) ^ uVar9) - uVar9) >> 6 ^ uVar9) - uVar9) +
                  *(int *)0xbd22,*(undefined2 *)(iVar12 + -0x435a));
    local_c = local_c + 1;
  } while( true );
}



/* 11e1:129e FUN_11e1_129e */

void __cdecl16far FUN_11e1_129e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined2 unaff_DS;
  uint local_12;
  uint local_10;
  int local_c;
  
  iVar1 = *(int *)(((*(int *)(*(int *)0xc432 * 0x3c + -0x42ba) + 9U) / 10) * 2 + 0x554);
  FUN_1ed2_007e(*(undefined2 *)0xbd28);
  FUN_1ed2_006e(*(undefined2 *)0xbd28);
  iVar2 = (*(int *)0x886b * 0x40) / 2;
  iVar3 = (*(int *)0x8869 * 0x40) / 2;
  for (local_c = 0; local_c < *(int *)0xbd1e; local_c = local_c + 1) {
    if (iVar1 == 0) {
      local_10 = *(uint *)(local_c * 2 + -0x43d2);
      local_12 = *(uint *)(local_c * 2 + -0x4396);
    }
    else {
      iVar10 = local_c * 2;
      iVar9 = ((iVar1 << (*(byte *)(iVar10 + -0x431e) & 0x1f)) * *(int *)0xb686) / 0xc + 1;
      local_10 = *(int *)(iVar10 + -0x43d2) / iVar9 + *(int *)(iVar10 + -0x43d2);
      local_12 = *(int *)(iVar10 + -0x4396) / iVar9 + *(int *)(iVar10 + -0x4396);
      iVar9 = local_c * 2;
      if ((((iVar3 < *(int *)(iVar9 + -0x43d2)) ||
           (-*(int *)(iVar9 + -0x43d2) != iVar3 && *(int *)(iVar9 + -0x43d2) <= -iVar3)) ||
          (iVar2 < *(int *)(iVar9 + -0x4396))) ||
         (-*(int *)(iVar9 + -0x4396) != iVar2 && *(int *)(iVar9 + -0x4396) <= -iVar2)) {
        uVar4 = FUN_11e1_1488(*(int *)0x7916 + 1 >> 1);
        *(undefined2 *)(local_c * 2 + -0x43d2) = uVar4;
        uVar4 = FUN_11e1_1488(*(int *)0x7918 + 1 >> 1);
        *(undefined2 *)(local_c * 2 + -0x4396) = uVar4;
        iVar10 = local_c * 2;
        iVar9 = ((iVar1 << (*(byte *)(iVar10 + -0x431e) & 0x1f)) * *(int *)0xb686) / 0xc + 1;
        local_10 = *(int *)(iVar10 + -0x43d2) / iVar9 + *(int *)(iVar10 + -0x43d2);
        local_12 = *(int *)(iVar10 + -0x4396) / iVar9 + *(int *)(iVar10 + -0x4396);
      }
    }
    iVar9 = local_c * 2;
    uVar5 = (int)local_12 >> 0xf;
    uVar6 = (int)local_10 >> 0xf;
    uVar7 = (int)*(uint *)(iVar9 + -0x4396) >> 0xf;
    uVar8 = (int)*(uint *)(iVar9 + -0x43d2) >> 0xf;
    FUN_1eea_0b5a(*(undefined2 *)0x7922,
                  (((int)((*(uint *)(iVar9 + -0x43d2) ^ uVar8) - uVar8) >> 6 ^ uVar8) - uVar8) +
                  *(int *)0xbd20,
                  (((int)((*(uint *)(iVar9 + -0x4396) ^ uVar7) - uVar7) >> 6 ^ uVar7) - uVar7) +
                  *(int *)0xbd22,
                  (((int)((local_10 ^ uVar6) - uVar6) >> 6 ^ uVar6) - uVar6) + *(int *)0xbd20,
                  (((int)((local_12 ^ uVar5) - uVar5) >> 6 ^ uVar5) - uVar5) + *(int *)0xbd22,
                  *(undefined2 *)(iVar9 + -0x435a));
    *(uint *)(local_c * 2 + -0x43d2) = local_10;
    *(uint *)(local_c * 2 + -0x4396) = local_12;
  }
  return;
}



/* 11e1:1488 FUN_11e1_1488 */

int __cdecl16far FUN_11e1_1488(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_14b9_02b2(param_1);
  return (iVar1 - (param_1 >> 1)) * 0x40;
}



/* 132b:01be FUN_132b_01be */

void __cdecl16far FUN_132b_01be(void)

{
  char *pcVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined2 unaff_DS;
  int local_8;
  int local_6;
  int local_4;
  
  *(undefined2 *)0x94d6 = 0;
  if (*(int *)0xc432 < 2) {
    local_4 = 2;
  }
  else {
    local_4 = 0;
  }
  for (; local_4 < *(int *)0xc438; local_4 = local_4 + 1) {
    *(int *)0xc459 = local_4 * 0x3c + -0x42d6;
    if (((local_4 != *(int *)0xc432) &&
        (pbVar2 = (byte *)*(undefined2 *)0xc459, *(int *)(pbVar2 + 0x32) != 0)) &&
       ((*(char *)0x7930 != '\0' || ((*pbVar2 & 0x80) == 0)))) {
      uVar5 = FUN_1edc_000e(*(int *)(pbVar2 + 4) - *(int *)(*(int *)0xc432 * 0x3c + -0x42d2),
                            *(int *)(pbVar2 + 6) - *(int *)(*(int *)0xc432 * 0x3c + -0x42d0),0,0);
      uVar5 = FUN_1edc_000e(*(int *)(*(int *)0xc459 + 2) - *(int *)(*(int *)0xc432 * 0x3c + -0x42d4)
                            ,uVar5);
      *(undefined2 *)0xc446 = uVar5;
      local_6 = 0;
LAB_132b_02a1:
      if (local_6 < *(int *)0x94d6) {
        if (*(int *)0xc446 <= *(int *)(local_6 * 2 + -0x6b28)) goto LAB_132b_029e;
        local_8 = *(int *)0x94d6;
        while (local_8 = local_8 + -1, local_6 <= local_8) {
          iVar7 = local_8 * 2;
          *(undefined2 *)(iVar7 + -0x6b26) = *(undefined2 *)(iVar7 + -0x6b28);
          *(undefined2 *)(iVar7 + -0x6aea) = *(undefined2 *)(iVar7 + -0x6aec);
        }
      }
      *(undefined2 *)(local_6 * 2 + -0x6b28) = *(undefined2 *)0xc446;
      *(undefined2 *)(local_6 * 2 + -0x6aec) = *(undefined2 *)0xc459;
      *(int *)0x94d6 = *(int *)0x94d6 + 1;
    }
  }
  local_4 = 0;
  do {
    if (*(int *)0x94d6 <= local_4) {
      FUN_17ba_016a();
      if (*(int *)0xc45f != 0) {
        *(undefined2 *)0xc459 = *(undefined2 *)0xc45f;
        FUN_132b_145a();
      }
      return;
    }
    iVar7 = *(int *)(local_4 * 2 + -0x6aec);
    *(int *)0xc459 = iVar7;
    if (*(int *)(iVar7 + 0x32) == -0x8000) {
      if (6 < *(int *)(iVar7 + 0x28)) {
        *(undefined2 *)(iVar7 + 0x28) = 6;
      }
      piVar4 = (int *)*(int *)0xc459;
      iVar7 = piVar4[0x14];
      piVar4[0x14] = piVar4[0x14] + 1;
      *piVar4 = iVar7 + 6;
      puVar3 = (undefined2 *)*(int *)0xc459;
      FUN_1897_043e(*puVar3,-puVar3[0xb],puVar3[0xc],puVar3[0xd],puVar3[1],puVar3[2],puVar3[3],
                    puVar3[0x15]);
    }
    else {
      if (2 < *(byte *)(*(int *)0xc459 + 0x32)) {
        uVar8 = (uint)*(byte *)(*(int *)0xc459 + 0x38);
        local_6 = 1;
        do {
          *(uint *)(local_6 * 2 + -0x3b8b) = uVar8 & 1;
          uVar8 = (int)uVar8 >> 1;
          local_6 = local_6 + 1;
        } while (local_6 < 9);
      }
      if (*(char *)(*(int *)0xc459 + 0x39) < '\0') {
        pcVar1 = (char *)(*(int *)0xc459 + 0x39);
        *pcVar1 = *pcVar1 + '\x01';
        *(undefined2 *)0xc473 = 0;
      }
      else if (*(char *)0x7930 == '\0') {
        iVar7 = *(int *)0xc459;
        iVar6 = (int)*(char *)(iVar7 + 0x39);
        *(int *)0xc473 = iVar6;
        if (0 < iVar6) {
          pcVar1 = (char *)(iVar7 + 0x39);
          *pcVar1 = *pcVar1 + -1;
        }
        if (*(char *)0x9ed6 != *(char *)0x2a4) {
          *(uint *)0x37f0 =
               (uint)(*(int *)(local_4 * 2 + -0x6b28) < *(int *)(*(int *)0xc459 + 0x2a) * 0x10);
        }
        puVar3 = (undefined2 *)*(int *)0xc459;
        if (*(char *)((int)puVar3 + 0x33) == '\v') {
          iVar7 = 0x1000;
        }
        else {
          iVar7 = 0;
        }
        FUN_1897_03b6(*puVar3,-puVar3[0xb],iVar7 + puVar3[0xc],puVar3[0xd],puVar3[1],puVar3[2],
                      puVar3[3]);
        goto LAB_132b_038a;
      }
      FUN_186e_013e();
    }
LAB_132b_038a:
    local_4 = local_4 + 1;
  } while( true );
LAB_132b_029e:
  local_6 = local_6 + 1;
  goto LAB_132b_02a1;
}



/* 132b:0410 FUN_132b_0410 */

undefined2 __cdecl16far FUN_132b_0410(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0xc43c = 0;
  *(undefined2 *)0x9550 = 0xbd2a;
  while( true ) {
    if (0x1d < *(int *)0xc43c) {
      *(undefined2 *)0xc43c = 0x1d;
      return 0xc3f6;
    }
    iVar1 = *(int *)0x9550;
    if (*(int *)(iVar1 + 0x32) == 0) break;
    *(int *)0xc43c = *(int *)0xc43c + 1;
    *(int *)0x9550 = *(int *)0x9550 + 0x3c;
  }
  if (*(int *)0xc438 <= *(int *)0xc43c) {
    *(int *)0xc438 = *(int *)0xc43c + 1;
  }
  FUN_19c7_4d7c(iVar1,0,0x3c);
  return *(undefined2 *)0x9550;
}



/* 132b:0466 FUN_132b_0466 */

void __cdecl16far FUN_132b_0466(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_6;
  byte local_4;
  byte bStack_3;
  
  uVar5 = 0x132b;
  if (*(int *)(param_1 * 0x3c + -0x42a4) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 * 0x3c + -0x42a4);
  uVar2 = uVar1 & 0x7fff;
  if (uVar2 == 0x703) {
    FUN_2120_1926(0x132b,param_1);
  }
  else if (uVar2 == 0xa03) {
    FUN_2120_193a(0x132b,param_1);
  }
  else {
    if (uVar2 != 0xc05) goto LAB_132b_04ad;
    FUN_2120_194e(0x132b,param_1 * 0x3c + -0x42d6);
  }
  uVar5 = 0x2120;
LAB_132b_04ad:
  uVar4 = uVar5;
  if (param_1 == *(int *)0xc432) {
    *(undefined2 *)0xc465 = 0;
    uVar4 = 0x2120;
    FUN_2120_17aa(uVar5);
  }
  if (((uVar1 & 0x7fff) == 0x102) || ((uVar1 & 0x7fff) == 0x103)) {
    uVar4 = 0x1697;
    FUN_1697_1138(param_1);
    if (*(char *)(param_1 * 0x3c + -0x429b) == '\0') {
      for (local_6 = 0; local_6 < *(int *)0xc471; local_6 = local_6 + 1) {
        if (*(int *)(local_6 * 2 + -0x3b97) == param_1) {
          *(int *)0xc471 = *(int *)0xc471 + -1;
          for (; local_6 < *(int *)0xc471; local_6 = local_6 + 1) {
            *(undefined2 *)(local_6 * 2 + -0x3b97) = *(undefined2 *)(local_6 * 2 + -0x3b95);
          }
          break;
        }
      }
    }
  }
  *(undefined2 *)(param_1 * 0x3c + -0x42a4) = 0;
  uVar5 = uVar4;
  if (param_1 == *(int *)0xc461) {
    uVar5 = 0x2120;
    FUN_2120_17be(uVar4);
  }
  local_4 = (byte)uVar1;
  bStack_3 = (byte)(uVar1 >> 8);
  if ((2 < local_4) && ((uint)bStack_3 == *(uint *)0x9edc)) {
    *(int *)0xc434 = *(int *)0xc434 + *(int *)(param_1 * 0x3c + -0x42a6) * 2;
    for (local_6 = 0; local_6 < *(int *)0xc438; local_6 = local_6 + 1) {
      iVar3 = local_6 * 0x3c;
      if ((((*(int *)(iVar3 + -0x42a4) != 0) && (*(char *)(iVar3 + -0x42a4) == '\x02')) &&
          (*(char *)(iVar3 + -0x42a3) == '\x01')) &&
         ((*(char *)(iVar3 + -0x429b) != '\0' &&
          (param_1 * 0x3c + -0x42d6 == *(int *)(iVar3 + -0x42a2))))) {
        FUN_132b_0466(local_6);
      }
    }
  }
  if (local_4 == 6) {
    FUN_2120_17e6(uVar5,0x580);
    FUN_2120_17fa(0x2120);
  }
  else if (bStack_3 != 1) {
    FUN_2120_180e(uVar5);
  }
  if (param_1 == *(int *)0xc438 + -1) {
    do {
      *(int *)0xc438 = *(int *)0xc438 + -1;
    } while (*(int *)(*(int *)0xc438 * 0x3c + -0x42e0) == 0);
    return;
  }
  if (*(char *)(param_1 * 0x3c + -17000) == '\a') {
    FUN_132b_0466(param_1 + 1);
  }
  return;
}



/* 132b:064a FUN_132b_064a */

void __cdecl16far FUN_132b_064a(void)

{
  int *piVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 unaff_DS;
  int local_6;
  
  local_6 = 0;
  *(undefined2 *)0x9564 = 0xbd2a;
  while (local_6 < *(int *)0xc438) {
    iVar6 = *(int *)0x9564;
    if (*(int *)(iVar6 + 0x32) != 0) {
      if (*(char *)(iVar6 + 0x32) == '\a') {
        *(undefined2 *)(iVar6 + 0x14) = *(undefined2 *)(*(int *)0x956c + 0x14);
        *(undefined2 *)(*(int *)0x9564 + 0x1c) = *(undefined2 *)(*(int *)0x956c + 0x1c);
        if (local_6 != *(int *)0xc432) {
          *(undefined2 *)(*(int *)0x9564 + 0x16) = *(undefined2 *)(*(int *)0x956c + 0x16);
          *(undefined2 *)(*(int *)0x9564 + 0x18) = *(undefined2 *)(*(int *)0x956c + 0x18);
          *(undefined2 *)(*(int *)0x9564 + 0x1a) = *(undefined2 *)(*(int *)0x956c + 0x1a);
          cVar2 = *(char *)(*(int *)0x9564 + 0x36);
          if (cVar2 == '\0') {
            piVar1 = (int *)(*(int *)0x9564 + 0x16);
            *piVar1 = *piVar1 + *(int *)(*(int *)0x9564 + 0x2e);
          }
          else if (cVar2 == '\x01') {
            piVar1 = (int *)(*(int *)0x9564 + 0x18);
            *piVar1 = *piVar1 + *(int *)(*(int *)0x9564 + 0x2e);
          }
          else if (cVar2 == '\x02') {
            piVar1 = (int *)(*(int *)0x9564 + 0x1a);
            *piVar1 = *piVar1 + *(int *)(*(int *)0x9564 + 0x2e);
          }
        }
        iVar6 = *(int *)0x9564;
        *(undefined2 *)0x9566 = *(undefined2 *)(iVar6 + 0xe);
        *(undefined2 *)0x9568 = *(undefined2 *)(iVar6 + 0x10);
        *(undefined2 *)0x956a = *(undefined2 *)(iVar6 + 0x12);
        if ((*(int *)0x9566 != 0 || *(int *)0x9568 != 0) || *(int *)0x956a != 0) {
          iVar6 = *(int *)0x956c;
          FUN_1897_0502(0x9552,*(undefined2 *)(iVar6 + 0x16),-*(int *)(iVar6 + 0x18),
                        -*(int *)(iVar6 + 0x1a));
          FUN_14b9_03be(0x9552,0x9566,0x9568,0x956a);
        }
        *(undefined2 *)(*(int *)0x9564 + 8) = *(undefined2 *)(*(int *)0x9564 + 2);
        *(undefined2 *)(*(int *)0x9564 + 10) = *(undefined2 *)(*(int *)0x9564 + 4);
        *(undefined2 *)(*(int *)0x9564 + 0xc) = *(undefined2 *)(*(int *)0x9564 + 6);
        *(int *)(*(int *)0x9564 + 2) = *(int *)(*(int *)0x956c + 2) + *(int *)0x9566;
        *(int *)(*(int *)0x9564 + 4) = *(int *)(*(int *)0x956c + 4) + *(int *)0x9568;
        *(int *)(*(int *)0x9564 + 6) = *(int *)(*(int *)0x956c + 6) + *(int *)0x956a;
      }
      else {
        uVar3 = FUN_1ed2_006e(*(undefined2 *)(*(int *)0x9564 + 0x18));
        uVar4 = (uint)(*(int *)(*(int *)0x9564 + 0x1c) * *(int *)0xb67e) >> 5;
        *(uint *)(*(int *)0x9564 + 0x14) = uVar4;
        uVar3 = FUN_1ed2_0008(uVar4,uVar3);
        *(undefined2 *)(*(int *)0x9564 + 8) = *(undefined2 *)(*(int *)0x9564 + 2);
        *(undefined2 *)(*(int *)0x9564 + 10) = *(undefined2 *)(*(int *)0x9564 + 4);
        *(undefined2 *)(*(int *)0x9564 + 0xc) = *(undefined2 *)(*(int *)0x9564 + 6);
        uVar5 = FUN_1ed2_007e(*(undefined2 *)(*(int *)0x9564 + 0x16));
        iVar6 = FUN_1ed2_0008(uVar3,uVar5);
        *(int *)(*(int *)0x9564 + 2) = *(int *)(*(int *)0x9564 + 2) + iVar6;
        uVar5 = FUN_1ed2_006e(*(undefined2 *)(*(int *)0x9564 + 0x16));
        iVar6 = FUN_1ed2_0008(uVar3,uVar5);
        *(int *)(*(int *)0x9564 + 4) = *(int *)(*(int *)0x9564 + 4) + iVar6;
        uVar3 = FUN_1ed2_007e(*(undefined2 *)(*(int *)0x9564 + 0x18));
        iVar6 = FUN_1ed2_0008((uint)(*(int *)(*(int *)0x9564 + 0x1c) * *(int *)0xb67e) >> 5,uVar3);
        *(int *)(*(int *)0x9564 + 6) = *(int *)(*(int *)0x9564 + 6) + iVar6;
        if ((*(int *)0x9564 == *(int *)0xc467) && (*(char *)0xc44c != '\0')) {
          *(char *)0xc44c = *(char *)0xc44c + -1;
          *(int *)(*(int *)0x9564 + 2) = *(int *)(*(int *)0x9564 + 2) + *(int *)0xc44d;
          *(int *)(*(int *)0x9564 + 4) = *(int *)(*(int *)0x9564 + 4) + *(int *)0xc44f;
          *(int *)(*(int *)0x9564 + 6) = *(int *)(*(int *)0x9564 + 6) + *(int *)0xc451;
          *(int *)0xc44d = *(int *)0xc44d - *(int *)0xc453;
          *(int *)0xc44f = *(int *)0xc44f - *(int *)0xc455;
          *(int *)0xc451 = *(int *)0xc451 - *(int *)0xc457;
        }
        *(undefined2 *)0x956c = *(undefined2 *)0x9564;
      }
    }
    local_6 = local_6 + 1;
    *(int *)0x9564 = *(int *)0x9564 + 0x3c;
  }
  return;
}



/* 132b:08f2 FUN_132b_08f2 */
/* Decompilation failed: Low-level Error: Bad instruction count exceeded:
    ...
    Instruction at (ram,0x00010842) overlaps instruction at (ram,0x00010841)
 */

/* 132b:0b4a FUN_132b_0b4a */

void __cdecl16far FUN_132b_0b4a(void)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = *(int *)0xc459;
  if ((*(char *)(iVar3 + 0x33) != '\x01') && (*(char *)(iVar3 + 0x32) == '\x02')) {
    *(undefined2 *)0xbd54 = 0x80;
  }
  if (*(char *)(iVar3 + 0x3b) == '\0') {
    FUN_132b_0f46();
  }
  else {
    FUN_132b_0e94();
    *(undefined2 *)(*(int *)0xc459 + 0x20) = *(undefined2 *)0xc44a;
    *(undefined2 *)(*(int *)0xc459 + 0x1e) = *(undefined2 *)0xc448;
  }
  local_4 = 0;
  *(undefined2 *)0xc45d = 0xbd2a;
  do {
    if (*(int *)0xc438 <= local_4) {
LAB_132b_0de9:
      piVar2 = (int *)(*(int *)0xc459 + 0x26);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_132b_0466(*(undefined2 *)0xc43e);
      }
      *(undefined2 *)0xbd54 = 0x200;
      return;
    }
    iVar3 = *(int *)0xc45d;
    if (((((*(int *)(iVar3 + 0x32) != 0) && (local_4 != *(int *)0xc43e)) &&
         ((*(byte *)(iVar3 + 0x33) & 0x80) == 0)) &&
        ((*(char *)(iVar3 + 0x32) != '\x01' &&
         (*(char *)(iVar3 + 0x33) != *(char *)(*(int *)0xc459 + 0x33))))) &&
       ((iVar3 = FUN_132b_1672(*(int *)0xc459,iVar3), iVar3 != 0 &&
        (iVar3 = FUN_186e_001e(*(undefined2 *)0xc459,*(undefined2 *)0xc45d), iVar3 != 0)))) {
      *(undefined2 *)(*(int *)0xc459 + 0x26) = 1;
      if (local_4 == 0) {
        iVar3 = FUN_14b9_00ac(*(int *)(*(int *)0xc459 + 8) - *(int *)(*(int *)0xc45d + 2),
                              *(int *)(*(int *)0xc459 + 10) - *(int *)(*(int *)0xc45d + 4));
        *(int *)0xc448 = iVar3 - *(int *)(*(int *)0xc45d + 0x16);
        FUN_1697_02d8(*(undefined2 *)(*(int *)0xc459 + 0x2e));
      }
      else if (1 < local_4) {
        if (((*(char *)(*(int *)0xc45d + 0x3a) == '\0') ||
            (*(char *)(*(int *)0xc45d + 0x33) == '\x01')) ||
           (*(char *)(*(int *)0xc459 + 0x32) != '\x01')) {
          if ((*(int *)0xc459 == *(int *)0xc467) && (*(char *)(*(int *)0xc459 + 0x32) == '\x02')) {
            FUN_1eea_0574(*(undefined2 *)0x5fe,0,0,0x140,0x72,0xd);
            thunk_EXT_FUN_0000_0000(0x1eea,0xf);
            FUN_1951_017a(10);
            FUN_1951_0006(0xf);
            *(undefined2 *)0xc465 = 0;
            FUN_2120_17aa(0x1951);
          }
          *(int *)(*(int *)0xc45d + 0x2c) =
               *(int *)(*(int *)0xc45d + 0x2c) + *(int *)(*(int *)0xc459 + 0x2e);
          if (*(int *)(*(int *)0xc45d + 0x2c) < *(int *)(*(int *)0xc45d + 0x30) * 2) {
            if (*(int *)(*(int *)0xc459 + 0x32) == 0x101) {
              if (100 < *(int *)(*(int *)0xc459 + 0x2e)) {
                iVar4 = *(int *)0xc45d;
                iVar3 = *(int *)0xb686;
                goto LAB_132b_0bcc;
              }
              if (*(int *)(*(int *)0xc45d + 0x30) < 0xc9) {
                *(undefined2 *)(*(int *)0xc459 + 0x32) = 0x8001;
                *(undefined2 *)*(undefined2 *)0xc459 = 5;
                *(undefined2 *)(*(int *)0xc459 + 0x26) = 0xb;
                *(undefined2 *)(*(int *)0xc459 + 0x1c) = 200;
                iVar3 = FUN_19c7_4e32();
                *(int *)(*(int *)0xc459 + 0x16) = iVar3 << 1;
                iVar3 = FUN_19c7_4e32();
                *(int *)(*(int *)0xc459 + 0x18) = iVar3 << 1;
                iVar3 = FUN_19c7_4e32();
                *(int *)(*(int *)0xc459 + 0x1a) = iVar3 << 1;
                FUN_1951_017a(0xc);
              }
              else {
                piVar2 = (int *)(*(int *)0xc45d + 0x2c);
                *piVar2 = *piVar2 - *(int *)(*(int *)0xc459 + 0x2e);
              }
            }
            else if (*(int *)(*(int *)0xc459 + 0x32) == 0x102) {
              *(int *)0xc45d = *(int *)0xc459;
              FUN_132b_0e08();
              goto LAB_132b_0de9;
            }
          }
          else {
            if (local_4 == *(int *)0xc432) {
              *(byte *)(*(int *)0xc45d + 0x33) = *(byte *)(*(int *)0xc45d + 0x33) | 0x80;
              iVar4 = *(int *)0xc45d;
              iVar3 = *(int *)0xb686;
              *(int *)(iVar4 + 0x26) = iVar3;
              goto LAB_132b_0bce;
            }
            FUN_132b_0e08();
            if (*(char *)(*(int *)0xc45d + 0x32) != '\a') {
              FUN_132b_0466(local_4);
              goto LAB_132b_0de9;
            }
            pbVar1 = (byte *)(*(int *)0xc45d + 0x33);
            *pbVar1 = *pbVar1 | 0x80;
          }
        }
        else {
          iVar4 = *(int *)0xc45d;
          iVar3 = -*(int *)0xb686;
LAB_132b_0bcc:
          iVar3 = iVar3 >> 1;
LAB_132b_0bce:
          *(undefined1 *)(iVar4 + 0x39) = (char)iVar3;
        }
      }
    }
    local_4 = local_4 + 1;
    *(int *)0xc45d = *(int *)0xc45d + 0x3c;
  } while( true );
}



/* 132b:0e08 FUN_132b_0e08 */

void __cdecl16far FUN_132b_0e08(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_132b_0410();
  *(int *)0xc45b = iVar1;
  *(undefined2 *)(iVar1 + 0x32) = 0x8000;
  *(undefined2 *)(*(int *)0xc45b + 0x26) = 8;
  *(undefined2 *)(*(int *)0xc45b + 0x28) = 0;
  *(undefined2 *)(*(int *)0xc45b + 0x1c) = 0;
  iVar1 = FUN_19c7_4e32();
  *(int *)(*(int *)0xc45b + 0x16) = iVar1 << 1;
  iVar1 = FUN_19c7_4e32();
  *(int *)(*(int *)0xc45b + 0x18) = iVar1 << 1;
  *(undefined2 *)(*(int *)0xc45b + 2) = *(undefined2 *)(*(int *)0xc45d + 2);
  *(undefined2 *)(*(int *)0xc45b + 4) = *(undefined2 *)(*(int *)0xc45d + 4);
  *(undefined2 *)(*(int *)0xc45b + 6) = *(undefined2 *)(*(int *)0xc45d + 6);
  *(undefined2 *)(*(int *)0xc45b + 0x2a) = *(undefined2 *)(*(int *)0xc45d + 0x2a);
  FUN_1951_017a(9);
  return;
}



/* 132b:0e94 FUN_132b_0e94 */

void __cdecl16far FUN_132b_0e94(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0xc45b = *(undefined2 *)(*(int *)0xc459 + 0x34);
  FUN_132b_0ea4();
  return;
}



/* 132b:0ea4 FUN_132b_0ea4 */

void __cdecl16far FUN_132b_0ea4(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  *(int *)0xc440 = *(int *)(*(int *)0xc45b + 2) - *(int *)(*(int *)0xc459 + 2);
  *(int *)0xc442 = *(int *)(*(int *)0xc45b + 4) - *(int *)(*(int *)0xc459 + 4);
  *(int *)0xc444 = *(int *)(*(int *)0xc45b + 6) - *(int *)(*(int *)0xc459 + 6);
  uVar1 = FUN_1edc_000e(*(undefined2 *)0xc440,*(undefined2 *)0xc442,0);
  *(undefined2 *)0xc446 = uVar1;
  iVar2 = FUN_14b9_00ac(*(undefined2 *)0xc440,*(undefined2 *)0xc442);
  *(int *)0xc448 = iVar2 - *(int *)(*(int *)0xc459 + 0x16);
  iVar2 = FUN_14b9_00ac(*(undefined2 *)0xc444,*(undefined2 *)0xc446);
  *(int *)0xc44a = iVar2 - *(int *)(*(int *)0xc459 + 0x18);
  iVar2 = FUN_1edc_000e(*(undefined2 *)0xc444,*(undefined2 *)0xc446,0);
  *(int *)0xc446 = (iVar2 - *(int *)(*(int *)0xc45b + 0x2a)) - *(int *)(*(int *)0xc459 + 0x2a);
  return;
}



/* 132b:0f46 FUN_132b_0f46 */

void __cdecl16far FUN_132b_0f46(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)(*(int *)0xc459 + 0x34);
  *(int *)0xc45b = iVar2;
  *(int *)0xc440 = *(int *)(iVar2 + 2) - *(int *)(*(int *)0xc459 + 2);
  *(int *)0xc442 = *(int *)(*(int *)0xc45b + 4) - *(int *)(*(int *)0xc459 + 4);
  *(int *)0xc444 = *(int *)(*(int *)0xc45b + 6) - *(int *)(*(int *)0xc459 + 6);
  uVar1 = FUN_1edc_000e(*(undefined2 *)0xc442,*(undefined2 *)0xc444,0,0);
  iVar2 = FUN_1edc_000e(*(undefined2 *)0xc440,uVar1);
  *(int *)0xc446 = (iVar2 - *(int *)(*(int *)0xc45b + 0x2a)) - *(int *)(*(int *)0xc459 + 0x2a);
  return;
}



/* 132b:116c FUN_132b_116c */

void __cdecl16far FUN_132b_116c(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int local_6;
  
  if (1 < *(int *)0xc43e) {
    *(undefined2 *)(*(int *)0xc459 + 0x2a) = 1;
  }
  local_6 = 0;
  *(undefined2 *)0xc45b = 0xbd2a;
  do {
    if (*(int *)0xc438 <= local_6) {
LAB_132b_13bf:
      if (1 < *(int *)0xc43e) {
        *(undefined2 *)(*(int *)0xc459 + 0x2a) = *(undefined2 *)(*(int *)0xc459 + 0x30);
      }
      return;
    }
    iVar5 = *(int *)0xc459;
    if (((((*(int *)0xc45b != iVar5) && (iVar2 = *(int *)0xc45b, *(int *)(iVar2 + 0x32) != 0)) &&
         ((*(byte *)(iVar2 + 0x33) & 0x80) == 0)) &&
        ((*(char *)(iVar2 + 0x32) != '\a' && (*(byte *)(iVar5 + 0x32) <= *(byte *)(iVar2 + 0x32)))))
       && (iVar5 = FUN_132b_1672(iVar5,iVar2), iVar5 != 0)) {
      uVar6 = 0x186e;
      iVar5 = FUN_186e_001e(*(undefined2 *)0xc459,*(undefined2 *)0xc45b);
      if (iVar5 != 0) {
        *(undefined2 *)(*(int *)0xc459 + 2) = *(undefined2 *)(*(int *)0xc459 + 8);
        *(undefined2 *)(*(int *)0xc459 + 4) = *(undefined2 *)(*(int *)0xc459 + 10);
        *(undefined2 *)(*(int *)0xc459 + 6) = *(undefined2 *)(*(int *)0xc459 + 0xc);
        FUN_132b_0ea4();
        if ((*(int *)0xc459 == -0x42d6) && (0x5a < *(int *)(*(int *)0xc45b + 0x30))) {
          if (*(int *)(*(int *)0xc459 + 0x1c) != 0) {
            uVar6 = 0x1697;
            FUN_1697_02d8(0x40);
          }
          *(undefined2 *)(*(int *)0xc459 + 0x1c) = 0;
          if (*(int *)0xc459 == *(int *)0xc467) {
            *(undefined2 *)0xc463 = 0;
            thunk_EXT_FUN_0000_0000(uVar6,0x14);
            FUN_1951_017a(10);
          }
          goto LAB_132b_13bf;
        }
        if ((*(int *)0xc459 == *(int *)0xc467) && (*(int *)(*(int *)0xc459 + 0x1c) != 0)) {
          if (*(char *)0xc44c == '\0') {
            thunk_EXT_FUN_0000_0000(0x186e,0x14);
            FUN_1951_017a(10);
            *(char *)0xc44c = *(char *)0xb686 << 1;
            uVar6 = FUN_1ed2_006e(*(undefined2 *)(*(int *)0xc459 + 0x18));
            uVar3 = (uint)(*(int *)(*(int *)0xc459 + 0x1c) * *(int *)0xb67e) >> 5;
            *(uint *)(*(int *)0xc459 + 0x14) = uVar3;
            uVar6 = FUN_1ed2_0008(uVar3,uVar6);
            uVar4 = FUN_1ed2_007e(*(int *)(*(int *)0xc459 + 0x16) + -0x8000);
            uVar4 = FUN_1ed2_0008(uVar6,uVar4);
            *(undefined2 *)0xc44d = uVar4;
            uVar4 = FUN_1ed2_006e(*(int *)(*(int *)0xc459 + 0x16) + -0x8000);
            uVar6 = FUN_1ed2_0008(uVar6,uVar4);
            *(undefined2 *)0xc44f = uVar6;
            uVar6 = FUN_1ed2_007e(*(int *)(*(int *)0xc459 + 0x18) + -0x8000);
            uVar6 = FUN_1ed2_0008((uint)(*(int *)(*(int *)0xc459 + 0x1c) * *(int *)0xb67e) >> 5,
                                  uVar6);
            *(undefined2 *)0xc451 = uVar6;
            iVar5 = (int)*(char *)0xc44c;
            *(int *)0xc453 = *(int *)0xc44d / iVar5;
            *(int *)0xc455 = *(int *)0xc44f / iVar5;
            *(int *)0xc457 = *(int *)0xc451 / iVar5;
            iVar5 = *(int *)0xc459;
            *(undefined2 *)(iVar5 + 0x1c) = 0;
            *(undefined2 *)(iVar5 + 0x14) = 0;
            piVar1 = (int *)(*(int *)0xc459 + 0x2c);
            *piVar1 = *piVar1 + (*(int *)(*(int *)0xc459 + 0x30) >> 1);
            iVar5 = *(int *)0xc459;
            if (*(int *)(iVar5 + 0x30) * 2 <= *(int *)(iVar5 + 0x2c)) {
              *(byte *)(iVar5 + 0x33) = *(byte *)(iVar5 + 0x33) | 0x80;
              iVar2 = *(int *)0xc459;
              iVar5 = *(int *)0xb686;
              *(int *)(iVar2 + 0x26) = iVar5 >> 1;
              *(undefined1 *)(iVar2 + 0x39) = (char)(iVar5 >> 1);
            }
          }
          goto LAB_132b_13bf;
        }
      }
    }
    local_6 = local_6 + 1;
    *(int *)0xc45b = *(int *)0xc45b + 0x3c;
  } while( true );
}



/* 132b:13d8 FUN_132b_13d8 */

void __cdecl16far FUN_132b_13d8(void)

{
  return;
}



/* 132b:13da FUN_132b_13da */

void __cdecl16far FUN_132b_13da(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_19c7_4e0a(*(int *)(*(int *)0xc459 + 2) - *(int *)0xbd2c);
  if (((iVar1 < 0x4269) &&
      (iVar1 = FUN_19c7_4e0a(*(int *)(*(int *)0xc459 + 4) - *(int *)0xbd2e), iVar1 < 0x4269)) &&
     (iVar1 = FUN_19c7_4e0a(*(int *)(*(int *)0xc459 + 6) - *(int *)0xbd30), iVar1 < 0x4269)) {
    return;
  }
  *(undefined2 *)0xc45b = 0xbd2a;
  FUN_132b_0ea4();
  *(undefined2 *)(*(int *)0xc459 + 0x1e) = *(undefined2 *)0xc448;
  *(undefined2 *)(*(int *)0xc459 + 0x20) = *(undefined2 *)0xc44a;
  return;
}



/* 132b:145a FUN_132b_145a */

void __cdecl16far FUN_132b_145a(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (*(int *)0xc459 == -1) {
    if (*(char *)0x9ed6 == *(char *)0x2a4) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = 1;
    }
    iVar2 = *(int *)0x7922;
    FUN_1eea_0574(iVar2,0,0,*(int *)(iVar2 + 6) + 1,*(int *)(iVar2 + 8) + 1,uVar1);
    return;
  }
  iVar2 = *(int *)0xc432 * 0x3c;
  FUN_1897_0502(0x13ee,*(undefined2 *)(iVar2 + -0x42c0),-*(int *)(iVar2 + -0x42be),
                -*(int *)(iVar2 + -0x42bc));
  iVar3 = *(int *)0xc432 * 0x3c;
  iVar2 = *(int *)0xc459;
  FUN_1859_0008(*(undefined2 *)0x7922,*(int *)(iVar2 + 2) - *(int *)(iVar3 + -0x42d4),
                *(int *)(iVar2 + 4) - *(int *)(iVar3 + -0x42d2),
                *(int *)(iVar2 + 6) - *(int *)(iVar3 + -0x42d0),0x9578,0x957a);
  iVar2 = FUN_14b9_02b2(4);
  if (iVar2 == 0) {
    uVar1 = *(undefined2 *)(*(int *)0x7922 + 6);
LAB_132b_151b:
    *(undefined2 *)0x957c = uVar1;
    *(undefined2 *)0x9580 = uVar1;
    iVar2 = FUN_14b9_02b2(*(undefined2 *)(*(int *)0x7922 + 8));
    *(int *)0x957e = iVar2;
    *(int *)0x9582 = iVar2 + 6;
  }
  else {
    if (iVar2 == 1) {
      uVar1 = *(undefined2 *)(*(int *)0x7922 + 8);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = 0;
        goto LAB_132b_151b;
      }
      if (iVar2 != 3) goto LAB_132b_1539;
      uVar1 = 0;
    }
    *(undefined2 *)0x957e = uVar1;
    *(undefined2 *)0x9582 = uVar1;
    iVar2 = FUN_14b9_02b2(*(undefined2 *)(*(int *)0x7922 + 6));
    *(int *)0x957c = iVar2;
    *(int *)0x9580 = iVar2 + 6;
  }
LAB_132b_1539:
  if (*(char *)0x9ed6 == *(char *)0x2a4) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = 1;
  }
  FUN_1eea_0bde(*(undefined2 *)0x7922,3,0x9578,uVar1);
  return;
}



/* 132b:1592 FUN_132b_1592 */

undefined2 __cdecl16far FUN_132b_1592(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_19c7_4e0a(*(int *)(param_1 + 2) - *(int *)(param_2 + 2));
  if (iVar1 < param_3) {
    iVar1 = FUN_19c7_4e0a(*(int *)(param_1 + 4) - *(int *)(param_2 + 4));
    if (iVar1 < param_3) {
      iVar1 = FUN_19c7_4e0a(*(int *)(param_1 + 6) - *(int *)(param_2 + 6));
      if (iVar1 < param_3) {
        return 1;
      }
    }
  }
  return 0;
}



/* 132b:15ec FUN_132b_15ec */

undefined2 __cdecl16far FUN_132b_15ec(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  if ((((*(int *)(param_1 + 2) + *(int *)(param_1 + 0x2a) <
         *(int *)(param_2 + 2) - *(int *)(param_2 + 0x2a)) ||
       (*(int *)(param_2 + 2) + *(int *)(param_2 + 0x2a) <
        *(int *)(param_1 + 2) - *(int *)(param_1 + 0x2a))) ||
      (*(int *)(param_1 + 4) + *(int *)(param_1 + 0x2a) <
       *(int *)(param_2 + 4) - *(int *)(param_2 + 0x2a))) ||
     (((*(int *)(param_2 + 4) + *(int *)(param_2 + 0x2a) <
        *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2a) ||
       (*(int *)(param_1 + 6) + *(int *)(param_1 + 0x2a) <
        *(int *)(param_2 + 6) - *(int *)(param_2 + 0x2a))) ||
      (*(int *)(param_2 + 6) + *(int *)(param_2 + 0x2a) <
       *(int *)(param_1 + 6) - *(int *)(param_1 + 0x2a))))) {
    return 0;
  }
  return 1;
}



/* 132b:1672 FUN_132b_1672 */

undefined2 __cdecl16far FUN_132b_1672(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_8 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 2);
  local_a = iVar1;
  if (iVar1 < local_8) {
    local_a = local_8;
    local_8 = iVar1;
  }
  local_4 = *(int *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 2);
  local_6 = iVar1;
  if (iVar1 < local_4) {
    local_6 = local_4;
    local_4 = iVar1;
  }
  if ((local_4 - *(int *)(param_2 + 0x2a) <= *(int *)(param_1 + 0x2a) + local_a) &&
     (local_8 - *(int *)(param_1 + 0x2a) <= *(int *)(param_2 + 0x2a) + local_6)) {
    local_8 = *(int *)(param_1 + 10);
    iVar1 = *(int *)(param_1 + 4);
    local_a = iVar1;
    if (iVar1 < local_8) {
      local_a = local_8;
      local_8 = iVar1;
    }
    local_4 = *(int *)(param_2 + 10);
    iVar1 = *(int *)(param_2 + 4);
    local_6 = iVar1;
    if (iVar1 < local_4) {
      local_6 = local_4;
      local_4 = iVar1;
    }
    if ((local_4 - *(int *)(param_2 + 0x2a) <= *(int *)(param_1 + 0x2a) + local_a) &&
       (local_8 - *(int *)(param_1 + 0x2a) <= *(int *)(param_2 + 0x2a) + local_6)) {
      local_8 = *(int *)(param_1 + 0xc);
      iVar1 = *(int *)(param_1 + 6);
      local_a = iVar1;
      if (iVar1 < local_8) {
        local_a = local_8;
        local_8 = iVar1;
      }
      local_4 = *(int *)(param_2 + 0xc);
      iVar1 = *(int *)(param_2 + 6);
      local_6 = iVar1;
      if (iVar1 < local_4) {
        local_6 = local_4;
        local_4 = iVar1;
      }
      if ((local_4 - *(int *)(param_2 + 0x2a) <= *(int *)(param_1 + 0x2a) + local_a) &&
         (local_8 - *(int *)(param_1 + 0x2a) <= *(int *)(param_2 + 0x2a) + local_6)) {
        return 1;
      }
    }
  }
  return 0;
}



/* 132b:17b4 FUN_132b_17b4 */

uint __cdecl16far FUN_132b_17b4(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 unaff_DS;
  int local_22;
  int local_20;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_4;
  
  uVar2 = *(int *)(param_2 + 0x2a) + *(int *)(param_1 + 0x2a);
  uVar3 = ((*(uint *)(param_1 + 0x14) - *(uint *)(param_2 + 0x14) &
           ~-(uint)(*(uint *)(param_1 + 0x14) < *(uint *)(param_2 + 0x14))) +
          *(int *)(param_2 + 0x14)) / uVar2;
  bVar1 = FUN_14b9_04a8(uVar3);
  local_20 = *(int *)(param_2 + 2);
  local_22 = *(int *)(param_2 + 4);
  local_4 = *(int *)(param_2 + 6);
  local_e = *(int *)(param_1 + 2);
  local_10 = *(int *)(param_1 + 4);
  local_12 = *(int *)(param_1 + 6);
  iVar4 = local_20 - *(int *)(param_2 + 8);
  iVar5 = local_22 - *(int *)(param_2 + 10);
  iVar6 = local_4 - *(int *)(param_2 + 0xc);
  iVar7 = local_e - *(int *)(param_1 + 8);
  iVar8 = local_10 - *(int *)(param_1 + 10);
  iVar9 = local_12 - *(int *)(param_1 + 0xc);
  local_14 = 0;
  while( true ) {
    if ((int)uVar3 < local_14) {
      return uVar3;
    }
    if (((((int)(local_20 - uVar2) < local_e) && (local_e < (int)(local_20 + uVar2))) &&
        ((int)(local_22 - uVar2) < local_10)) &&
       (((local_10 < (int)(local_22 + uVar2) && ((int)(local_4 - uVar2) < local_12)) &&
        (local_12 < (int)(local_4 + uVar2))))) break;
    local_e = local_e + (iVar7 >> (bVar1 & 0x1f));
    local_10 = local_10 + (iVar8 >> (bVar1 & 0x1f));
    local_12 = local_12 + (iVar9 >> (bVar1 & 0x1f));
    local_20 = local_20 + (iVar4 >> (bVar1 & 0x1f));
    local_22 = local_22 + (iVar5 >> (bVar1 & 0x1f));
    local_4 = local_4 + (iVar6 >> (bVar1 & 0x1f));
    local_14 = local_14 + 1;
  }
  return 1;
}



/* 14b9:002e FUN_14b9_002e */

int __cdecl16far FUN_14b9_002e(int param_1,int param_2,int param_3)

{
  if ((param_1 <= param_3) && (param_3 = param_2, param_2 <= param_1)) {
    param_3 = param_1;
  }
  return param_3;
}



/* 14b9:0046 FUN_14b9_0046 */

uint __cdecl16far FUN_14b9_0046(undefined2 param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_6;
  
  uVar1 = FUN_19c7_4e0a(param_1);
  uVar2 = FUN_19c7_4e0a(param_2);
  if ((int)uVar2 < (int)uVar1) {
    uVar3 = uVar2;
    uVar2 = uVar1;
  }
  else {
    uVar3 = uVar1;
  }
  local_6 = ((int)uVar3 >> 1) + uVar2;
  iVar4 = ((int)uVar3 >> 0xf) + ((int)uVar2 >> 0xf) + (uint)CARRY2((int)uVar3 >> 1,uVar2);
  if ((-1 < iVar4) && ((0 < iVar4 || (0x7fff < local_6)))) {
    local_6 = 0x7fff;
  }
  return local_6;
}



/* 14b9:00ac FUN_14b9_00ac */

int __cdecl16far FUN_14b9_00ac(int param_1,int param_2)

{
  uint uVar1;
  uint3 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int local_c;
  int local_a;
  uint local_8;
  
  if (param_1 == 0) {
    if (param_2 < 1) {
      return -0x8000;
    }
    return 0;
  }
  if (param_2 == 0) {
    if (param_1 < 1) {
      return -0x4000;
    }
    return 0x4000;
  }
  iVar4 = FUN_19c7_4e0a(param_2);
  iVar5 = FUN_19c7_4e0a(param_1);
  if (iVar4 < iVar5) {
    local_a = FUN_19c7_4e0a(param_2);
    local_8 = local_a >> 0xf;
    cVar6 = '\x0e';
    do {
      bVar8 = local_a < 0;
      local_a = local_a << 1;
      local_8 = local_8 << 1 | (uint)bVar8;
      cVar6 = cVar6 + -1;
    } while (cVar6 != '\0');
    local_c = FUN_19c7_4e0a(param_1);
    bVar8 = true;
  }
  else {
    local_a = FUN_19c7_4e0a(param_1);
    local_8 = local_a >> 0xf;
    cVar6 = '\x0e';
    do {
      bVar8 = local_a < 0;
      local_a = local_a << 1;
      local_8 = local_8 << 1 | (uint)bVar8;
      cVar6 = cVar6 + -1;
    } while (cVar6 != '\0');
    local_c = FUN_19c7_4e0a(param_2);
    bVar8 = false;
  }
  iVar4 = FUN_19c7_4f62(local_a,local_8,local_c,local_c >> 0xf);
  iVar7 = iVar4 >> 0xf;
  uVar11 = 0;
  uVar10 = 0xb00;
  iVar5 = FUN_19c7_4e0a(0x1333 - iVar4,0xb00,0,iVar4,iVar7);
  uVar9 = FUN_19c7_4ffe(iVar5,iVar5 >> 0xf,uVar10,uVar11);
  cVar6 = '\x0e';
  do {
    iVar5 = (int)((long)uVar9 >> 0x11);
    uVar1 = (uint)(CONCAT12((uVar9 & 0x10000) != 0,(int)uVar9) >> 1);
    uVar9 = CONCAT22(iVar5,uVar1);
    cVar6 = cVar6 + -1;
  } while (cVar6 != '\0');
  uVar9 = FUN_19c7_4ffe(-(uVar1 + 0xd800),
                        -((iVar5 - (uint)(uVar1 < 0x2800)) + (uint)(uVar1 + 0xd800 != 0)),iVar4,
                        iVar7);
  cVar6 = '\x0e';
  do {
    uVar2 = CONCAT12((uVar9 & 0x10000) != 0,(int)uVar9) >> 1;
    iVar4 = (int)uVar2;
    uVar9 = CONCAT22((int)((long)uVar9 >> 0x11),iVar4);
    cVar6 = cVar6 + -1;
  } while (cVar6 != '\0');
  uVar3 = (undefined1)uVar2;
  cVar6 = (char)(uVar2 >> 8);
  if (param_1 < 1) {
    if (0 < param_2) {
      if (bVar8) {
        return CONCAT11(cVar6 + -0x40,uVar3);
      }
      return -iVar4;
    }
    if (!bVar8) {
      return CONCAT11(cVar6 + -0x80,uVar3);
    }
    iVar5 = -0x4000;
  }
  else if (param_2 < 1) {
    if (bVar8) {
      return CONCAT11(cVar6 + '@',uVar3);
    }
    iVar5 = -0x8000;
  }
  else {
    if (!bVar8) {
      return iVar4;
    }
    iVar5 = 0x4000;
  }
  return iVar5 - iVar4;
}



/* 14b9:0230 FUN_14b9_0230 */

void __cdecl16far FUN_14b9_0230(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_1ed2_007e(param_1,param_2);
  FUN_1ed2_0008(uVar1);
  return;
}



/* 14b9:024c FUN_14b9_024c */

void __cdecl16far FUN_14b9_024c(undefined2 param_1,undefined2 param_2)

{
  FUN_14b9_0230(CONCAT11((char)((uint)param_1 >> 8) + '@',(char)param_1),param_2);
  return;
}



/* 14b9:0262 FUN_14b9_0262 */

void __cdecl16far FUN_14b9_0262(byte param_1)

{
  if (param_1 < 0x80) {
    return;
  }
  return;
}



/* 14b9:0284 FUN_14b9_0284 */

undefined2 __cdecl16far FUN_14b9_0284(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 < 1) {
    return 0xffff;
  }
  return 1;
}



/* 14b9:02b2 FUN_14b9_02b2 */

undefined2 __cdecl16far FUN_14b9_02b2(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  
  iVar4 = param_1 >> 0xf;
  iVar2 = FUN_19c7_4e32(param_1,iVar4);
  uVar5 = FUN_19c7_4ffe(iVar2,iVar2 >> 0xf,param_1,iVar4);
  cVar3 = '\x0f';
  do {
    uVar1 = (undefined2)(CONCAT12((uVar5 & 0x10000) != 0,(int)uVar5) >> 1);
    uVar5 = CONCAT22((int)((long)uVar5 >> 0x11),uVar1);
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  return uVar1;
}



/* 14b9:02d4 FUN_14b9_02d4 */

void __cdecl16far FUN_14b9_02d4(undefined2 *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  *(int *)0x9586 = *param_2;
  *(int *)0x958a = *param_3;
  *(int *)0x9588 = *param_4;
  iVar1 = FUN_1ed2_0008(*(undefined2 *)0x958a,param_1[6]);
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x9588,param_1[3]);
  iVar3 = FUN_1ed2_0008(*(undefined2 *)0x9586,*param_1);
  *param_2 = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(*(undefined2 *)0x958a,param_1[7]);
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x9588,param_1[4]);
  iVar3 = FUN_1ed2_0008(*(undefined2 *)0x9586,param_1[1]);
  *param_3 = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(*(undefined2 *)0x958a,param_1[8]);
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x9588,param_1[5]);
  iVar3 = FUN_1ed2_0008(*(undefined2 *)0x9586,param_1[2]);
  *param_4 = iVar3 + iVar2 + iVar1;
  return;
}



/* 14b9:03be FUN_14b9_03be */

void __cdecl16far FUN_14b9_03be(undefined2 *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  *(int *)0x958c = *param_2;
  *(int *)0x9590 = *param_3;
  *(int *)0x958e = *param_4;
  iVar1 = FUN_1ed2_0008(*(undefined2 *)0x9590,param_1[2]);
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x958e,param_1[1]);
  iVar3 = FUN_1ed2_0008(*(undefined2 *)0x958c,*param_1);
  *param_2 = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(*(undefined2 *)0x9590,param_1[5]);
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x958e,param_1[4]);
  iVar3 = FUN_1ed2_0008(*(undefined2 *)0x958c,param_1[3]);
  *param_4 = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(*(undefined2 *)0x9590,param_1[8]);
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x958e,param_1[7]);
  iVar3 = FUN_1ed2_0008(*(undefined2 *)0x958c,param_1[6]);
  *param_3 = iVar3 + iVar2 + iVar1;
  return;
}



/* 14b9:04a8 FUN_14b9_04a8 */

int __cdecl16far FUN_14b9_04a8(uint param_1)

{
  int unaff_SI;
  
  for (param_1 = param_1 - 1; param_1 != 0; param_1 = param_1 >> 1) {
    unaff_SI = unaff_SI + 1;
  }
  return unaff_SI;
}



/* 1505:00dc FUN_1505_00dc */

void __cdecl16far FUN_1505_00dc(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  if (*(int *)0xc432 == 0) {
    local_4 = 0;
    do {
      FUN_1505_0228((uint)(*(char *)(local_4 + 0x53aa) != '\0') + *(char *)(local_4 + 0x53c2) * 2,
                    (int)*(char *)(local_4 + 0x53b6),local_4 * 8 + 0x78c);
      local_4 = local_4 + 1;
    } while (local_4 < 0xc);
    local_4 = 0;
    do {
      FUN_1505_0228((uint)(*(char *)(local_4 + 0x541e) != '\0') + *(char *)(local_4 + 0x542c) * 2,
                    (int)*(char *)(local_4 + 0x5425),local_4 * 8 + 0x754);
      local_4 = local_4 + 1;
    } while (local_4 < 7);
    local_4 = 0;
    do {
      FUN_1505_0228((uint)(*(char *)(local_4 + 0x538c) != '\0') + *(char *)(local_4 + 0x53a0) * 2,
                    (int)*(char *)(local_4 + 0x5396),local_4 * 8 + 0x704);
      local_4 = local_4 + 1;
    } while (local_4 < 10);
    local_4 = 0;
    do {
      FUN_1505_0228((uint)(*(char *)(local_4 + 0x53ce) != '\0') + *(char *)(local_4 + 0x53e8) * 2,
                    (int)*(char *)(local_4 + 0x53db),local_4 * 8 + 0x69c);
      local_4 = local_4 + 1;
    } while (local_4 < 0xd);
    for (local_4 = 0; local_4 < 0xd; local_4 = local_4 + 1) {
      FUN_1505_0228((uint)(*(char *)(local_4 + 0x53f6) != '\0') + *(char *)(local_4 + 0x5410) * 2,
                    (int)*(char *)(local_4 + 0x5403),local_4 * 8 + 0x634);
    }
  }
  else if (1 < *(int *)0xc432) {
    FUN_1505_1488();
  }
  return;
}



/* 1505:0228 FUN_1505_0228 */

void __cdecl16far FUN_1505_0228(uint param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 local_4;
  
  if (param_1 == 0) {
    uVar1 = *(undefined2 *)0x62e;
  }
  else if (param_1 == 1) {
    if (param_2 == 0) {
      uVar1 = *(undefined2 *)0x632;
    }
    else {
      uVar1 = *(undefined2 *)0x630;
    }
  }
  else {
    uVar1 = 0xd;
  }
  if (param_1 != *(byte *)((int)param_3 + 7)) {
    thunk_EXT_FUN_0000_0000
              (0x1505,*(undefined2 *)0x5fe,*param_3,param_3[1],*(undefined1 *)(param_3 + 2),
               *(undefined1 *)((int)param_3 + 5),(uint)*(byte *)((int)param_3 + 7),uVar1);
    thunk_EXT_FUN_0000_0000
              (0x1eea,*(undefined2 *)0x790e,*param_3,param_3[1],*(undefined1 *)(param_3 + 2),
               *(undefined1 *)((int)param_3 + 5),*(undefined1 *)((int)param_3 + 7),uVar1);
    local_4 = (undefined1)uVar1;
    *(undefined1 *)((int)param_3 + 7) = local_4;
  }
  return;
}



/* 1505:02b8 FUN_1505_02b8 */

void __cdecl16far FUN_1505_02b8(void)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (1 < local_4) {
      return;
    }
    *(undefined2 *)0x614 = *(undefined2 *)0x7910;
    FUN_1eea_0b5a(*(undefined2 *)0x790e,0x57,0x78,0xe7,0x78,0);
    if (*(char *)0x9ed6 == *(char *)0x2a4) break;
    thunk_EXT_FUN_0000_0000(0x1eea,0x338,0x3c,0x7c,100,0x4b,*(undefined2 *)0x626,0,0);
    *(undefined2 *)0x600 = *(undefined2 *)0x78fc;
    if (*(int *)0xc432 == 0) {
      if (*(char *)0x9ed6 == *(char *)0x2a4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_1eea_00a4(0x1eea,*(undefined2 *)0x612,0,0,*(undefined2 *)0xc4cb);
      }
      thunk_EXT_FUN_0000_0000(0x1eea,0x338,0xa1,0x7c,100,0x4b,0x600,0,0);
    }
    else if (*(int *)0xc432 != 1) {
      FUN_1eea_0574(0x600,0,0,*(int *)0x606 + 1,*(int *)0x608 + 1,0);
    }
    iVar1 = thunk_EXT_FUN_0000_0000(0x1eea,0);
    if (iVar1 == 0) {
      local_4 = local_4 + 1;
    }
    else {
      *(byte *)0x7910 = *(byte *)0x7910 ^ 1;
      *(byte *)0x78fc = *(byte *)0x78fc ^ 1;
    }
    local_4 = local_4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,*(undefined2 *)0x626,0,0,*(undefined2 *)0xc4c9);
}



/* 1505:03d4 FUN_1505_03d4 */

void __cdecl16far FUN_1505_03d4(void)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  int local_8;
  
  *(undefined2 *)0x614 = *(undefined2 *)0x7910;
  *(int *)0xc459 = *(int *)0xc461 * 0x3c + -0x42d6;
  FUN_1eea_0b5a(*(undefined2 *)0x790e,0x57,0x78,0xe7,0x78,0);
  if (*(int *)0xc461 != 0) {
    FUN_1505_05e8();
  }
  if (*(int *)0x7928 < 3) {
    if (*(int *)0xc4b5 == 0) {
      return;
    }
    piVar1 = (int *)0xc4b5;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      thunk_EXT_FUN_0000_0000
                (0x1eea,*(undefined2 *)0x5fe,0x3c,0x7c,100,0x4b,*(undefined2 *)0x626,0,0);
      return;
    }
  }
  if (*(char *)0x9ed6 == *(char *)0x2a4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea,*(undefined2 *)0x626,0,0,*(undefined2 *)0xc4c9);
  }
  thunk_EXT_FUN_0000_0000(0x1eea,0x338,0x3c,0x7c,100,0x4b,*(undefined2 *)0x626,0,0);
  if (*(int *)0xc461 != 0) {
    FUN_1897_01ac(*(undefined2 *)0x626,0,-*(int *)0x7ec,0,0,0,0,0);
    iVar2 = *(int *)(*(int *)0xc461 * 0x3c + -0x42ac) << 2;
    uVar3 = FUN_1ed2_007e(*(undefined2 *)0x7ec);
    iVar4 = FUN_1ed2_0008(iVar2,uVar3);
    uVar3 = FUN_1ed2_006e(*(undefined2 *)0x7ec);
    uVar3 = FUN_1ed2_0008(iVar2,uVar3);
    FUN_1ed2_007e(*(undefined2 *)0x628);
    FUN_1ed2_006e(*(undefined2 *)0x628);
    iVar2 = *(int *)0xc461 * 0x3c;
    *(int *)0xc459 = iVar2 + -0x42d6;
    if (*(int *)(iVar2 + -0x42a4) == -0x8000) {
      if (6 < *(int *)(iVar2 + -0x42ae)) {
        *(undefined2 *)(iVar2 + -0x42ae) = 6;
      }
      *(int *)*(int *)0xc459 = ((int *)*(int *)0xc459)[0x14] + 6;
    }
    if (2 < *(byte *)(*(int *)0xc459 + 0x32)) {
      uVar6 = (uint)*(byte *)(*(int *)0xc459 + 0x38);
      local_8 = 1;
      do {
        *(uint *)(local_8 * 2 + -0x3b8b) = uVar6 & 1;
        uVar6 = (int)uVar6 >> 1;
        local_8 = local_8 + 1;
      } while (local_8 < 9);
    }
    if (*(int *)0x7928 < 3) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(char *)(*(int *)0xc459 + 0x39);
    }
    *(int *)0xc473 = iVar2;
    if (*(char *)0x9ed6 != *(char *)0x2a4) {
      *(undefined2 *)0x37f0 = 1;
    }
    if (*(char *)((undefined2 *)*(int *)0xc459 + 0x19) == '\x06') {
      uVar5 = 0x8000;
    }
    else {
      uVar5 = *(undefined2 *)0x628;
    }
    FUN_1897_03b6(*(undefined2 *)*(int *)0xc459,uVar5,0,0,0,uVar3,-iVar4);
    *(int *)0x628 = *(int *)0x628 + *(int *)0xb67e * 0x80;
  }
  return;
}



/* 1505:05e8 FUN_1505_05e8 */

void __cdecl16far FUN_1505_05e8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar4 = *(int *)0xc459;
  iVar1 = *(int *)(iVar4 + 0x30) >> 5;
  iVar2 = iVar1 + 5;
  iVar3 = *(int *)(iVar4 + 0x30) - (*(int *)(iVar4 + 0x2c) >> 1);
  if (iVar3 < 0x191) {
    iVar4 = (iVar2 * iVar3) / *(int *)(*(int *)0xc459 + 0x30);
  }
  else {
    iVar4 = ((iVar3 >> 3) * iVar2) / (*(int *)(iVar4 + 0x30) >> 3);
  }
  if (-1 < iVar4) {
    FUN_1eea_0b5a(*(undefined2 *)0x790e,0xa0 - iVar2,0x78,iVar1 + 0xa4,0x78,0xd,iVar4);
    FUN_1eea_0b5a(*(undefined2 *)0x790e,0xa0 - iVar4,0x78,iVar4 + 0x9f,0x78,4);
  }
  return;
}



/* 1505:068a FUN_1505_068a */

void __cdecl16far FUN_1505_068a(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  undefined2 uVar4;
  int local_6;
  int local_4;
  
  *(undefined2 *)0x600 = *(undefined2 *)0x78fc;
  *(undefined2 *)0x60c = 2;
  *(undefined2 *)0x60e = 2;
  if (*(int *)0xc432 == 0) {
    if (*(char *)0x9ed6 == *(char *)0x2a4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1eea_00a4(0x1505,*(undefined2 *)0x612,0,0,*(undefined2 *)0xc4cb);
    }
    thunk_EXT_FUN_0000_0000(0x1505,0x338,0xa1,0x7c,100,0x4b,0x600,0,0);
  }
  else if (*(int *)0xc432 != 1) {
    FUN_1eea_0574(0x600,0,0,*(int *)0x606 + 1,*(int *)0x608 + 1,0);
  }
  *(int *)0x95e2 = *(int *)0x606 >> 1;
  iVar1 = *(int *)0x608;
  *(int *)0x95e4 = iVar1 >> 1;
  if (*(int *)0xc4b9 == 8) {
    FUN_1505_0c52(0x28,10,*(undefined2 *)0x95e2,(iVar1 >> 1) + 4);
    iVar1 = *(int *)0x95e4 + 1;
    uVar4 = *(undefined2 *)0x95e2;
    uVar3 = 4;
    uVar2 = 0x10;
  }
  else if (*(int *)0xc4b9 == 7) {
    FUN_1505_0c52(0x2c,0xb,*(undefined2 *)0x95e2,*(int *)0x95e4 + 4);
    FUN_1505_0c52(0x14,5,*(undefined2 *)0x95e2,*(int *)0x95e4 + 2);
    iVar1 = *(int *)0x95e4 + 1;
    uVar4 = *(undefined2 *)0x95e2;
    uVar3 = 2;
    uVar2 = 8;
  }
  else {
    FUN_1505_0c52(0x30,0xc,*(undefined2 *)0x95e2,*(int *)0x95e4 + 4);
    iVar1 = *(int *)0x95e4 + 2;
    uVar4 = *(undefined2 *)0x95e2;
    uVar3 = 6;
    uVar2 = 0x18;
  }
  FUN_1505_0c52(uVar2,uVar3,uVar4,iVar1);
  FUN_1eea_0b9f(0x600,*(undefined2 *)0x95e2,*(undefined2 *)0x95e4,2);
  iVar1 = *(int *)0xc432 * 0x3c;
  FUN_1897_0502(0x9592,*(undefined2 *)(iVar1 + -0x42c0),-*(int *)(iVar1 + -0x42be),
                -*(int *)(iVar1 + -0x42bc));
  *(undefined2 *)0x95d8 = 0x1000;
  local_4 = -0x42d6;
  for (local_6 = 0; local_6 < *(int *)0xc438; local_6 = local_6 + 1) {
    if ((((*(int *)(local_4 + 0x32) != 0) && (*(char *)(local_4 + 0x32) != '\a')) &&
        (*(char *)(local_4 + 0x32) != -0x80)) && (local_6 != *(int *)0xc432)) {
      iVar1 = *(int *)0xc432 * 0x3c;
      FUN_1505_0886(*(int *)(local_4 + 2) - *(int *)(iVar1 + -0x42d4),
                    *(int *)(local_4 + 4) - *(int *)(iVar1 + -0x42d2),
                    *(int *)(local_4 + 6) - *(int *)(iVar1 + -0x42d0),local_6,local_4);
    }
    local_4 = local_4 + 0x3c;
  }
  return;
}



/* 1505:0886 FUN_1505_0886 */

void __cdecl16far
FUN_1505_0886(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int in_DX;
  int iVar8;
  int iVar9;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x95a8 = param_1;
  *(undefined2 *)0x95bc = param_2;
  *(undefined2 *)0x95b2 = param_3;
  uVar2 = FUN_1edc_000e(*(undefined2 *)0x95b2,*(undefined2 *)0x95bc,0,0);
  iVar3 = FUN_1edc_000e(*(undefined2 *)0x95a8,uVar2);
  if (*(int *)(*(int *)0xc4b9 * 2 + 0x7fe) < iVar3) {
    return;
  }
  uVar4 = FUN_1ed2_001e(*(undefined2 *)0x95bc,*(undefined2 *)0x959e);
  iVar3 = in_DX;
  uVar5 = FUN_1ed2_001e(*(undefined2 *)0x95b2,*(undefined2 *)0x9598);
  iVar9 = iVar3;
  uVar6 = FUN_1ed2_001e(*(undefined2 *)0x95a8,*(undefined2 *)0x9592);
  iVar8 = iVar9 + iVar3 + (uint)CARRY2(uVar6,uVar5) + in_DX + (uint)CARRY2(uVar6 + uVar5,uVar4);
  *(int *)0x95aa = uVar6 + uVar5 + uVar4;
  *(int *)0x95ac = iVar8;
  uVar4 = FUN_1ed2_001e(*(undefined2 *)0x95bc,*(undefined2 *)0x95a0);
  iVar3 = iVar8;
  uVar5 = FUN_1ed2_001e(*(undefined2 *)0x95b2,*(undefined2 *)0x959a);
  iVar9 = iVar3;
  uVar6 = FUN_1ed2_001e(*(undefined2 *)0x95a8,*(undefined2 *)0x9594);
  iVar8 = iVar9 + iVar3 + (uint)CARRY2(uVar6,uVar5) + iVar8 + (uint)CARRY2(uVar6 + uVar5,uVar4);
  *(int *)0x95b4 = uVar6 + uVar5 + uVar4;
  *(int *)0x95b6 = iVar8;
  uVar4 = FUN_1ed2_001e(*(undefined2 *)0x95bc,*(undefined2 *)0x95a2);
  iVar3 = iVar8;
  uVar5 = FUN_1ed2_001e(*(undefined2 *)0x95b2,*(undefined2 *)0x959c);
  iVar9 = iVar3;
  uVar6 = FUN_1ed2_001e(*(undefined2 *)0x95a8,*(undefined2 *)0x9596);
  iVar9 = iVar9 + iVar3 + (uint)CARRY2(uVar6,uVar5) + iVar8 + (uint)CARRY2(uVar6 + uVar5,uVar4);
  *(int *)0x95be = uVar6 + uVar5 + uVar4;
  *(int *)0x95c0 = iVar9;
  *(int *)0x95d6 = iVar9;
  uVar2 = FUN_1ed2_007e(*(undefined2 *)0x7ec);
  uVar2 = FUN_1ed2_001e(*(undefined2 *)0x95d6,uVar2);
  *(undefined2 *)0x95b8 = uVar2;
  *(int *)0x95ba = iVar9;
  uVar2 = FUN_1ed2_007e(*(undefined2 *)0x7ec);
  uVar4 = FUN_1ed2_001e(*(undefined2 *)0x95d6,uVar2);
  iVar3 = iVar9;
  uVar2 = FUN_1ed2_006e(*(undefined2 *)0x7ec);
  uVar5 = FUN_1ed2_001e(*(undefined2 *)0x95b6,uVar2);
  *(int *)0x95b4 = uVar5 + uVar4;
  *(int *)0x95b6 = iVar3 + iVar9 + (uint)CARRY2(uVar5,uVar4);
  *(int *)0x95a4 = *(int *)0x606 >> 1;
  *(int *)0x95a6 = *(int *)0x608 >> 1;
  iVar3 = (*(int *)0x95ac >> (*(byte *)0xc4b9 & 0x1f)) + *(int *)0x95a4;
  *(int *)0x95c6 = iVar3;
  *(int *)0x95c8 = iVar3 >> 0xf;
  *(int *)0x95ca = iVar3;
  *(int *)0x95cc = iVar3 >> 0xf;
  iVar3 = -*(int *)0x95b6 >> ((0 < *(int *)0x95b6) + *(char *)0xc4b9 & 0x1fU);
  if (iVar3 < 1) {
    uVar2 = 10;
  }
  else {
    uVar2 = 2;
  }
  iVar3 = iVar3 - ((iVar3 >> 2) - *(int *)0x95a6);
  *(int *)0x95ce = iVar3;
  *(int *)0x95d0 = iVar3 >> 0xf;
  iVar3 = -*(int *)0x95ba >> ((0 < *(int *)0x95ba) + *(char *)0xc4b9 & 0x1fU);
  iVar3 = iVar3 - ((iVar3 >> 2) - *(int *)0x95a6);
  *(int *)0x95d2 = iVar3;
  *(int *)0x95d4 = iVar3 >> 0xf;
  if (*(char *)(param_5 + 0x32) == '\x01') {
    uVar2 = 9;
  }
  else {
    FUN_1eea_0b5a(0x600,*(undefined2 *)0x95c6,*(undefined2 *)0x95ce,*(undefined2 *)0x95ca,
                  *(undefined2 *)0x95d2,uVar2);
    cVar1 = *(char *)(param_5 + 0x32);
    if (cVar1 == '\x02') {
      if (*(char *)0x9ed6 == *(char *)0x2a1) {
        uVar2 = 5;
      }
      else {
        uVar2 = 0xd;
      }
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 != '\x04') {
          if (cVar1 != '\x05') {
            if (cVar1 != '\x06') goto LAB_1505_0b90;
            FUN_1eea_0b9f(0x600,*(int *)0x95c6 + 1,*(int *)0x95ce + -1,0xf);
          }
          FUN_1eea_0b9f(0x600,*(undefined2 *)0x95c6,*(int *)0x95ce + -1,0xf);
        }
        FUN_1eea_0b9f(0x600,*(int *)0x95c6 + 1,*(undefined2 *)0x95ce,0xf);
      }
      uVar2 = 0xf;
    }
  }
  FUN_1eea_0b9f(0x600,*(undefined2 *)0x95c6,*(undefined2 *)0x95ce,uVar2);
LAB_1505_0b90:
  if (param_4 == *(int *)0xc461) {
    iVar3 = *(int *)0x95c6 + -2;
    iVar9 = *(int *)((uint)*(byte *)(param_5 + 0x32) * 2 + 0x7ee) + *(int *)0x95c6 + 2;
    iVar8 = *(int *)0x95ce + 2;
    iVar7 = (*(int *)0x95ce - *(int *)((uint)*(byte *)(param_5 + 0x32) * 2 + 0x7fc)) + -2;
    FUN_1eea_0b5a(0x600,iVar3,iVar7,iVar9,iVar7,0xf);
    FUN_1eea_0b5a(0x600,iVar9,iVar7,iVar9,iVar8,0xf);
    FUN_1eea_0b5a(0x600,iVar9,iVar8,iVar3,iVar8,0xf);
    FUN_1eea_0b5a(0x600,iVar3,iVar8,iVar3,iVar7,0xf);
  }
  return;
}



/* 1505:0c52 FUN_1505_0c52 */

void __cdecl16far FUN_1505_0c52(int param_1,int param_2,undefined2 param_3,undefined2 param_4)

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
    FUN_1505_0ecc(local_12,local_14,param_3,param_4);
    if (lVar3 < 0) {
      lVar17 = FUN_19c7_4ffe(local_12,local_12 >> 0xf,iVar7,uVar13);
      lVar3 = lVar17 + lVar2 + lVar3;
      local_12 = local_12 + 1;
    }
    else {
      lVar17 = FUN_19c7_4ffe(local_14,local_14 >> 0xf,iVar6,uVar12);
      lVar18 = FUN_19c7_4ffe(local_12,local_12 >> 0xf,iVar7,uVar13);
      lVar3 = (lVar18 - lVar17) + lVar2 + lVar19 + lVar3;
      local_12 = local_12 + 1;
      local_14 = local_14 + -1;
    }
  }
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
    FUN_1505_0ecc(local_12,local_14,param_3,param_4);
    if (lVar15 < 0) {
      lVar19 = FUN_19c7_4ffe(local_14,local_14 >> 0xf,iVar6,uVar12);
      lVar15 = lVar19 + lVar4 + lVar15;
      local_14 = local_14 + 1;
    }
    else {
      lVar19 = FUN_19c7_4ffe(local_12,local_12 >> 0xf,iVar7,uVar13);
      lVar14 = FUN_19c7_4ffe(local_14,local_14 >> 0xf,iVar6,uVar12);
      lVar15 = (lVar14 - lVar19) + lVar4 + lVar1 + lVar15;
      local_14 = local_14 + 1;
      local_12 = local_12 + -1;
    }
  }
  return;
}



/* 1505:0ecc FUN_1505_0ecc */

void __cdecl16far FUN_1505_0ecc(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 unaff_DS;
  
  FUN_1eea_0b9f(*(int *)0x612,param_3 + param_1,param_4 + param_2,
                *(undefined2 *)(*(int *)0x612 + 0xc));
  if (param_1 != 0) {
    FUN_1eea_0b9f(*(int *)0x612,param_3 - param_1,param_4 + param_2,
                  *(undefined2 *)(*(int *)0x612 + 0xc));
  }
  if (param_2 != 0) {
    FUN_1eea_0b9f(*(int *)0x612,param_3 + param_1,param_4 - param_2,
                  *(undefined2 *)(*(int *)0x612 + 0xc));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_1eea_0b9f(*(int *)0x612,param_3 - param_1,param_4 - param_2,
                  *(undefined2 *)(*(int *)0x612 + 0xc));
  }
  return;
}



/* 1505:0f62 FUN_1505_0f62 */

void __cdecl16far
FUN_1505_0f62(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  FUN_19c7_480c(0xad6a,param_3);
  uVar1 = FUN_19c7_48e8(0x19c7,param_4,0xa176,10);
  FUN_19c7_47cc(0xad6a,uVar1);
  FUN_1505_0fa4(param_1,param_2);
  return;
}



/* 1505:0fa4 FUN_1505_0fa4 */

void __cdecl16far FUN_1505_0fa4(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  thunk_EXT_FUN_0000_0000(0x1505,*(undefined2 *)0x790e,param_1,param_2,0xad6a);
  return;
}



/* 1505:0fc0 FUN_1505_0fc0 */

void __cdecl16far FUN_1505_0fc0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  iVar5 = *(int *)0x7922;
  iVar1 = *(int *)(iVar5 + 6) + 1 >> 1;
  iVar2 = iVar1 + -1;
  iVar3 = *(int *)(iVar5 + 8) + 1 >> 1;
  iVar4 = iVar3 + -1;
  if (*(uint *)0x874 < *(uint *)0xc4b7) {
    if (((*(int *)0xc432 == 0) || (-1 < *(int *)0xc4bb)) && ((*(byte *)0xb67c & 1) == 0)) {
      return;
    }
    FUN_1eea_0b5a(iVar5,iVar1 + -0xb,iVar3 + -0xb,iVar1 + 9,iVar3 + -0xb,7);
    FUN_1eea_0b5a(*(undefined2 *)0x7922,iVar1 + 9,iVar3 + -0xb,iVar1 + 9,iVar3 + 9,7);
    FUN_1eea_0b5a(*(undefined2 *)0x7922,iVar1 + 9,iVar3 + 9,iVar1 + -0xb,iVar3 + 9,7);
    iVar2 = iVar1 + -0xb;
    iVar5 = iVar3 + -0xb;
  }
  else {
    FUN_1eea_0b5a(*(undefined2 *)0x7922,iVar1 + -0xb,iVar4,iVar1 + -5,iVar4,7);
    FUN_1eea_0b5a(*(undefined2 *)0x7922,iVar1 + 9,iVar4,iVar1 + 3,iVar4,7);
    FUN_1eea_0b5a(*(undefined2 *)0x7922,iVar2,iVar3 + -0xb,iVar2,iVar3 + -5,7);
    iVar5 = iVar3 + 3;
  }
  FUN_1eea_0b5a(*(undefined2 *)0x7922,iVar2,iVar3 + 9,iVar2,iVar5,7);
  return;
}



/* 1505:1126 FUN_1505_1126 */

void __cdecl16far FUN_1505_1126(void)

{
  undefined2 unaff_DS;
  int local_6;
  int local_4;
  
  if (*(int *)0xc461 != 0) {
    *(int *)0xc459 = *(int *)0xc461 * 0x3c + -0x42d6;
    FUN_1859_0008(*(undefined2 *)0x7922,*(int *)(*(int *)0xc459 + 2) - *(int *)(*(int *)0xc467 + 2),
                  *(int *)(*(int *)0xc459 + 4) - *(int *)(*(int *)0xc467 + 4),
                  *(int *)(*(int *)0xc459 + 6) - *(int *)(*(int *)0xc467 + 6),&local_4,&local_6);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1859,*(undefined2 *)0x7922,local_4 + -8,local_6 + -5,*(undefined2 *)0xc4c3
                       );
  }
  return;
}



/* 1505:11a4 FUN_1505_11a4 */

void __cdecl16far FUN_1505_11a4(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  bool bVar6;
  
  uVar5 = 0x1505;
  if (1 < *(int *)0xc432) {
    *(undefined2 *)(*(int *)0x790e + 8) = 0xb4;
    FUN_1eea_0574(*(undefined2 *)0x790e,0xfa,0x8e,0x2b,0x27,0);
    if (*(char *)0x9ed6 == *(char *)0x2a4) {
      FUN_1eea_0b5a(*(undefined2 *)0x790e,0x125,0x8e,0x125,0xb4,0x26);
      FUN_1eea_0b5a(*(undefined2 *)0x790e,0x126,0x8e,0x126,0xb4,0x27);
      FUN_1eea_0b5a(*(undefined2 *)0x790e,0x127,0x8e,0x127,0xb4,0x28);
    }
    else {
      FUN_1eea_0574(*(undefined2 *)0x790e,0x125,0x8e,3,0x27,8);
    }
    iVar2 = *(int *)0xc467;
    iVar1 = *(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x2c) / 2;
    uVar3 = iVar1 >> 0xf;
    cVar4 = '\x05';
    do {
      bVar6 = iVar1 < 0;
      iVar1 = iVar1 << 1;
      uVar3 = uVar3 << 1 | (uint)bVar6;
      cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
    iVar2 = FUN_19c7_4f62(iVar1,uVar3,*(int *)(iVar2 + 0x30),*(int *)(iVar2 + 0x30) >> 0xf);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x19c7,*(undefined2 *)0x790e,0x118,0xb0 - iVar2,*(undefined2 *)0xc4c1);
  }
  if (*(int *)0xc432 != 0) {
    return;
  }
  if ((*(int *)0x16dc == 0) && (*(int *)0x62c != 0)) {
    uVar5 = 0x1951;
    FUN_1951_017a(0x19);
  }
  *(undefined2 *)0x62c = *(undefined2 *)0x16dc;
  thunk_EXT_FUN_0000_0000
            (uVar5,*(undefined2 *)0x790e,0x12f,0x13,0xc,0x15,*(undefined2 *)0x62e,
             *(undefined2 *)0x630);
  uVar3 = *(int *)0x16dc + 0x1fU >> 5;
  if (0x15 < uVar3) {
    uVar3 = 0x15;
  }
  if (uVar3 != 0) {
    thunk_EXT_FUN_0000_0000
              (0x1eea,*(undefined2 *)0x790e,0x12f,0x13,0xc,uVar3,*(undefined2 *)0x630,
               *(undefined2 *)0x62e);
  }
  *(undefined2 *)(*(int *)0x790e + 8) = 99;
  FUN_1eea_0574(*(undefined2 *)0x790e,0x127,0x3d,10,0x27,0);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x1eea,*(undefined2 *)0x790e,0x127,
                      (int)(((ulong)(0x36 - *(int *)0xbd46) * 0x25 & 0xffff) / 0x36) + 0x3d,
                      *(undefined2 *)0xc4cd);
}



/* 1505:1488 FUN_1505_1488 */

void __cdecl16far FUN_1505_1488(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int local_4;
  
  uVar4 = 0x1505;
  for (local_4 = 0; local_4 < 2; local_4 = local_4 + 1) {
    iVar2 = (((int)*(char *)(local_4 + 0x868) - *(int *)(local_4 * 2 + -0x3b1d)) *
            (int)*(char *)(local_4 + 0x862)) / (int)*(char *)(local_4 + 0x868);
    uVar3 = uVar4;
    if (0 < iVar2) {
      if (*(char *)0x9ed6 == *(char *)0x2a1) {
        uVar1 = 0xf;
      }
      else {
        uVar1 = 10;
      }
      uVar3 = 0x1eea;
      thunk_EXT_FUN_0000_0000
                (uVar4,*(undefined2 *)0x790e,*(undefined1 *)(local_4 + 0x850),
                 *(undefined1 *)(local_4 + 0x856),(int)*(char *)(local_4 + 0x85c),iVar2,uVar1,0xc);
      if (*(char *)0x9ed6 == *(char *)0x2a4) {
        uVar3 = 0x1eea;
        thunk_EXT_FUN_0000_0000
                  (0x1eea,*(undefined2 *)0x790e,*(undefined1 *)(local_4 + 0x850),
                   *(undefined1 *)(local_4 + 0x856),(int)*(char *)(local_4 + 0x85c),iVar2,0x49,0x1a)
        ;
      }
    }
    uVar4 = uVar3;
  }
  for (local_4 = 2; local_4 < 5; local_4 = local_4 + 1) {
    iVar2 = (((int)*(char *)(local_4 + 0x868) - *(int *)(local_4 * 2 + -0x3b1d)) *
            (int)*(char *)(local_4 + 0x85c)) / (int)*(char *)(local_4 + 0x868);
    uVar3 = uVar4;
    if (0 < iVar2) {
      if (*(char *)0x9ed6 == *(char *)0x2a1) {
        uVar1 = 0xf;
      }
      else {
        uVar1 = 10;
      }
      uVar3 = 0x1eea;
      thunk_EXT_FUN_0000_0000
                (uVar4,*(undefined2 *)0x790e,*(undefined1 *)(local_4 + 0x850),
                 *(undefined1 *)(local_4 + 0x856),iVar2,(int)*(char *)(local_4 + 0x862),uVar1,0xc);
      if (*(char *)0x9ed6 == *(char *)0x2a4) {
        uVar3 = 0x1eea;
        thunk_EXT_FUN_0000_0000
                  (0x1eea,*(undefined2 *)0x790e,*(undefined1 *)(local_4 + 0x850),
                   *(undefined1 *)(local_4 + 0x856),iVar2,(int)*(char *)(local_4 + 0x862),0x49,0x1a)
        ;
      }
    }
    uVar4 = uVar3;
  }
  if ((0 < *(int *)0x62a) && (*(int *)0xb68c != -1)) {
    FUN_1eea_0574(*(undefined2 *)0x790e,0x1f,0xae,0x2d,7,0);
    if (*(char *)0x9ed6 == *(char *)0x2a4) {
      *(undefined2 *)(*(int *)0x790e + 0xc) = 0x1a;
      FUN_1951_0274(*(undefined2 *)0x790e,0x20,0xae,*(undefined2 *)(*(int *)0xb68c * 2 + 0x844),0x2c
                   );
      *(undefined2 *)(*(int *)0x790e + 0xc) = 0xc;
    }
    else {
      *(undefined2 *)(*(int *)0x790e + 0xc) = 4;
    }
    FUN_1951_0274(*(undefined2 *)0x790e,0x1f,0xaf,*(undefined2 *)(*(int *)0xb68c * 2 + 0x844),0x2c);
    *(undefined2 *)(*(int *)0x790e + 0xc) = 2;
  }
  return;
}



/* 1505:1684 FUN_1505_1684 */

void __cdecl16far FUN_1505_1684(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  thunk_EXT_FUN_0000_0000
            (0x1505,*(undefined2 *)0x790e,0x127,0x31,0x14,10,*(undefined2 *)0x630,
             *(undefined2 *)0x62e);
  thunk_EXT_FUN_0000_0000
            (0x1eea,*(undefined2 *)0x5fe,0x127,0x31,0x14,10,*(undefined2 *)0x630,
             *(undefined2 *)0x62e);
  if (0 < *(int *)0xb67a) {
    local_4 = *(int *)0xb67a * 4;
    if (5 < *(int *)0xb67a) {
      local_4 = local_4 + -0x14;
      thunk_EXT_FUN_0000_0000
                (0x1eea,*(undefined2 *)0x790e,0x13b - local_4,0x31,local_4,4,*(undefined2 *)0x62e,
                 *(undefined2 *)0x630);
      thunk_EXT_FUN_0000_0000
                (0x1eea,*(undefined2 *)0x5fe,0x13b - local_4,0x31,local_4,4,*(undefined2 *)0x62e,
                 *(undefined2 *)0x630);
      local_4 = 0x14;
    }
    thunk_EXT_FUN_0000_0000
              (0x1eea,*(undefined2 *)0x790e,0x13b - local_4,0x37,local_4,4,*(undefined2 *)0x62e,
               *(undefined2 *)0x630);
    thunk_EXT_FUN_0000_0000
              (0x1eea,*(undefined2 *)0x5fe,0x13b - local_4,0x37,local_4,4,*(undefined2 *)0x62e,
               *(undefined2 *)0x630);
  }
  return;
}



/* 1505:18a0 FUN_1505_18a0 */

void __cdecl16far FUN_1505_18a0(undefined2 param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0xc432 == 0) {
    FUN_1eea_0574(*(undefined2 *)0x790e,0x49,0x6c,0xae,7,0);
    FUN_1951_0274(*(undefined2 *)0x790e,0x4a,0x6d,param_1,0xae);
    thunk_EXT_FUN_0000_0000
              (0x1951,*(undefined2 *)0x790e,0x49,0x6c,0xae,7,*(undefined2 *)0x5fe,0x49,0x6c);
    *(int *)0x16da = param_2 * 0x3c;
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
    *(undefined2 *)0x86e = uVar1;
  }
  return;
}



/* 1697:0048 FUN_1697_0048 */

void __cdecl16far FUN_1697_0048(void)

{
  FUN_1697_0116();
  FUN_1697_0154();
  FUN_1697_01ac();
  FUN_1697_0202();
  FUN_1697_02a8();
  FUN_1697_0070();
  FUN_1505_00dc();
  return;
}



/* 1697:0070 FUN_1697_0070 */

void __cdecl16far FUN_1697_0070(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  do {
    *(undefined2 *)(local_4 * 2 + -0x3b1d) = 0;
    local_4 = local_4 + 1;
  } while (local_4 < 5);
  local_4 = 0;
  do {
    *(int *)0xc4e3 = *(int *)0xc4e3 + (int)*(char *)(local_4 + 0x53db);
    local_4 = local_4 + 1;
  } while (local_4 < 0xd);
  local_4 = 0;
  do {
    *(int *)0xc4e5 = *(int *)0xc4e5 + (int)*(char *)(local_4 + 0x5425);
    local_4 = local_4 + 1;
  } while (local_4 < 7);
  local_4 = 0;
  do {
    *(int *)0xc4e7 = *(int *)0xc4e7 + (int)*(char *)(local_4 + 0x53b6);
    local_4 = local_4 + 1;
  } while (local_4 < 0xc);
  local_4 = 0;
  do {
    *(int *)0xc4e9 = *(int *)0xc4e9 + (int)*(char *)(local_4 + 0x5403);
    local_4 = local_4 + 1;
  } while (local_4 < 0xd);
  local_4 = 0;
  do {
    *(int *)0xc4eb = *(int *)0xc4eb + (int)*(char *)(local_4 + 0x5396);
    local_4 = local_4 + 1;
  } while (local_4 < 10);
  return;
}



/* 1697:0116 FUN_1697_0116 */

void __cdecl16far FUN_1697_0116(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  *(undefined2 *)0xc4f7 = 0;
  local_4 = 0;
  do {
    if (*(char *)(local_4 + 0x5403) != '\0') {
      *(int *)0xc4f7 = *(int *)0xc4f7 + 1;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 6);
  *(uint *)0x617e = (uint)('\x01' < *(char *)0x5402);
  return;
}



/* 1697:0154 FUN_1697_0154 */

void __cdecl16far FUN_1697_0154(void)

{
  undefined2 unaff_DS;
  int local_6;
  
  *(undefined2 *)0xc4f3 = 0x30c;
  local_6 = 0;
  do {
    if (*(char *)(*(int *)(local_6 * 2 + 0x888) + 0x5425) != '\0') {
      *(int *)0xc4f3 = *(int *)0xc4f3 + -0x78;
    }
    local_6 = local_6 + 1;
  } while (local_6 < 5);
  *(undefined2 *)0xc4f5 = 0x96;
  if (*(char *)0x5421 != '\0') {
    *(int *)0xc4f5 = *(int *)0xc4f5 + *(int *)0xc4f7 * 0x32;
  }
  if (*(char *)0x5420 != '\0') {
    *(int *)0xc4f5 = *(int *)0xc4f5 + 100;
  }
  return;
}



/* 1697:01ac FUN_1697_01ac */

void __cdecl16far FUN_1697_01ac(void)

{
  undefined2 unaff_DS;
  
  *(int *)0xc4fb =
       (int)*(char *)0x53b6 + (int)*(char *)0x53b9 + (int)*(char *)0x53b8 + (int)*(char *)0x53bb;
  *(int *)0xc4fd = (int)*(char *)0x53b7 + (int)*(char *)0x53ba + (int)*(char *)0x53c1;
  if (3 < *(int *)0xc4f7) {
    *(int *)0xc4fb = *(int *)0xc4fb + (int)*(char *)0x53bc + (int)*(char *)0x53be;
    *(int *)0xc4fd = *(int *)0xc4fd + (int)*(char *)0x53bd;
  }
  return;
}



/* 1697:0202 FUN_1697_0202 */

void __cdecl16far FUN_1697_0202(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = ((int)*(char *)0x539a + (int)*(char *)0x539b) * 3;
  if (*(int *)0xc4f7 < iVar2) {
    iVar2 = *(int *)0xc4f7;
  }
  iVar2 = ((*(char *)0x539c + 1 >> 1) + (*(char *)0x539d + 1 >> 1) + (*(char *)0x539e + 1 >> 1) +
          (*(char *)0x539f + 1 >> 1)) * 4 + ((int)*(char *)0x5396 + (int)*(char *)0x5397) * 5 +
          iVar2 + ((int)*(char *)0x5398 + (int)*(char *)0x5399) * 2 + (int)*(char *)0x539a +
          (int)*(char *)0x539b;
  *(int *)0xbd4e = iVar2;
  if (iVar2 < 0) {
    *(undefined2 *)0xbd4e = 0;
  }
  if (*(uint *)0xbd4e < *(uint *)0xbd46) {
    uVar1 = *(undefined2 *)0xbd4e;
    *(undefined2 *)0xbd46 = uVar1;
    if (*(int *)0xc432 == 0) {
      *(undefined2 *)0xc463 = uVar1;
    }
  }
  return;
}



/* 1697:02a8 FUN_1697_02a8 */

void __cdecl16far FUN_1697_02a8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = 0;
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(undefined1 *)(iVar1 + -0x3acb) = 0xff;
    iVar2 = iVar3;
    if (*(char *)(iVar1 + 0x53db) != '\0') {
      iVar2 = iVar3 + 1;
      *(undefined1 *)(iVar3 + -0x3acb) = (char)iVar1;
    }
    iVar3 = iVar2;
  }
  return;
}



/* 1697:02d8 FUN_1697_02d8 */

uint __cdecl16far FUN_1697_02d8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_4;
  
  bVar1 = FUN_19c7_4e32();
  iVar2 = FUN_19c7_4e0a(*(undefined2 *)0xc448);
  if (iVar2 < 0x4000) {
    uVar3 = *(uint *)0xc4fb;
  }
  else {
    uVar3 = *(uint *)0xc4fd;
  }
  if (uVar3 <= (bVar1 & 7)) {
    *(int *)0xbd56 = *(int *)0xbd56 + param_1;
    if (*(int *)0xa172 < 2) {
      uVar3 = *(uint *)0x9a80;
      if ((-1 < *(int *)0x9a82) && ((0 < *(int *)0x9a82 || (0x1555 < uVar3)))) {
        uVar3 = 0x1555;
      }
      local_4 = -(((int)(uVar3 - ((int)uVar3 >> 2)) >> 5) + -0xc0);
    }
    else {
      local_4 = 0x40;
    }
    uVar3 = *(uint *)0xbd56;
    if (local_4 <= (int)uVar3) {
      FUN_1697_0374((int)uVar3 / local_4);
      uVar3 = *(int *)0xbd56 / local_4;
      *(int *)0xbd56 = *(int *)0xbd56 % local_4;
    }
  }
  return uVar3;
}



/* 1697:0374 FUN_1697_0374 */

void __cdecl16far FUN_1697_0374(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1090_11ba(param_1);
  *(int *)0xc52f = *(int *)0xc52f + (param_1 - iVar1);
  *(int *)0x62a = *(int *)0xb686 * 3;
  FUN_1697_0048();
  if (*(int *)0xc432 < 2) {
    thunk_EXT_FUN_0000_0000(0x1090,0x1e);
    FUN_1951_017a(10);
  }
  return;
}



/* 1697:03bc FUN_1697_03bc */

int __cdecl16far FUN_1697_03bc(int param_1)

{
  undefined2 unaff_DS;
  
  if (*(int *)0xc4f7 < 4) {
    return param_1;
  }
  return param_1 * (0xb - *(int *)0xc4f7) >> 3;
}



/* 1697:04ba FUN_1697_04ba */

void __cdecl16far FUN_1697_04ba(void)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  int local_8;
  int local_6;
  int local_4;
  
  if ((((1 < *(int *)0x9edc) && (*(int *)0xc461 != 0)) && (*(int *)0x9ee3 < 2)) &&
     ((*(int *)0xc52d < 4 && (*(char *)0xc436 == '\0')))) {
    if (*(char *)(*(int *)0x9edc * 0x1d + -0x60e5) != '\0') {
      uVar3 = 0x90a;
LAB_1697_04fb:
      FUN_1505_18a0(uVar3,5);
      return;
    }
    if (*(int *)0x9edc == 0xd) {
      *(undefined2 *)0xc463 = 0;
      uVar3 = 0x933;
      goto LAB_1697_04fb;
    }
    FUN_1505_18a0(0x94c,3);
    *(undefined2 *)0x9ee3 = 2;
  }
  if (*(int *)0xc432 != 0) {
    if (*(char *)0x16de != '\0') {
      return;
    }
    *(undefined1 *)0x16de = 0xc;
    if (*(int *)0xc432 != 1) {
      if (*(char *)(*(int *)0xc467 + 0x3a) == '\0') {
        return;
      }
      FUN_1697_0c5e(*(undefined1 *)(*(int *)0xc467 + 0x3a));
      return;
    }
    cVar1 = *(char *)0x53da;
    if (cVar1 == '\0') {
      return;
    }
    if (cVar1 == '\x01') {
      uVar5 = *(uint *)0xc4ed;
      *(int *)0xc4ed = *(int *)0xc4ed + 1;
      uVar5 = uVar5 & 3;
    }
    else {
      if (cVar1 == '\x02') {
        FUN_1697_09da(*(uint *)0xc4ed & 2);
        FUN_1697_09da((*(uint *)0xc4ed & 2) + 1);
        *(int *)0xc4ed = *(int *)0xc4ed + 2;
        return;
      }
      if (cVar1 != '\x03') {
        return;
      }
      FUN_1697_09da(0);
      FUN_1697_09da(1);
      FUN_1697_09da(2);
      uVar5 = 3;
    }
    FUN_1697_09da(uVar5);
    return;
  }
  if (*(int *)0xc52d == 3) {
    if (*(int *)0x16dc != 0) {
      return;
    }
    *(undefined2 *)0x16dc = *(undefined2 *)0xc4f3;
  }
  if ((*(int *)0xc52d == 1) && (*(int *)0xc461 == 0)) {
    FUN_1505_18a0(0x960);
    uVar3 = 0x1b;
    goto LAB_1697_0574;
  }
  iVar4 = FUN_132b_0410();
  *(int *)0x95e6 = iVar4;
  *(undefined2 *)(iVar4 + 0x1e) = 0;
  *(undefined2 *)(iVar4 + 0x20) = 0;
  *(undefined2 *)(*(int *)0x95e6 + 0x16) = *(undefined2 *)(*(int *)0xc432 * 0x3c + -0x42c0);
  *(undefined2 *)(*(int *)0x95e6 + 0x18) = *(undefined2 *)(*(int *)0xc432 * 0x3c + -0x42be);
  *(undefined2 *)(*(int *)0x95e6 + 0x1a) = *(undefined2 *)(*(int *)0xc432 * 0x3c + -0x42bc);
  FUN_1897_0502(0x13ca,*(undefined2 *)0xbd40,-*(int *)0xbd42,-*(int *)0xbd44);
  local_4 = 0;
  iVar4 = *(int *)0xc52d;
  if (iVar4 == 1) {
LAB_1697_061a:
    local_8 = -0x32;
LAB_1697_061f:
    local_6 = 0;
  }
  else {
    if (iVar4 != 3) {
      if (iVar4 == 5) goto LAB_1697_061a;
      local_8 = -(*(int *)0xb67e * 5 + 0x50);
      goto LAB_1697_061f;
    }
    local_8 = 0;
    local_6 = 100;
  }
  FUN_14b9_03be(0x13ca,&local_4,&local_6,&local_8);
  iVar4 = *(int *)(*(int *)0xc432 * 0x3c + -0x42d4) + local_4;
  *(int *)(*(int *)0x95e6 + 2) = iVar4;
  *(int *)(*(int *)0x95e6 + 8) = iVar4;
  iVar4 = *(int *)(*(int *)0xc432 * 0x3c + -0x42d2) + local_6;
  *(int *)(*(int *)0x95e6 + 4) = iVar4;
  *(int *)(*(int *)0x95e6 + 10) = iVar4;
  iVar4 = *(int *)(*(int *)0xc432 * 0x3c + -0x42d0) + local_8;
  *(int *)(*(int *)0x95e6 + 6) = iVar4;
  *(int *)(*(int *)0x95e6 + 0xc) = iVar4;
  if (*(int *)0xc52d < 3) {
    if (*(int *)0xb67a == 0) {
      return;
    }
    bVar2 = *(byte *)(*(int *)0xc52d + 0x884);
    *(uint *)(*(int *)0x95e6 + 0x1c) = (uint)bVar2;
    *(uint *)(*(int *)0x95e6 + 0x24) = (uint)bVar2;
    *(undefined1 *)(*(int *)0x95e6 + 0x3a) = *(undefined1 *)(*(int *)0xc52d + 0x87c);
    *(undefined2 *)(*(int *)0x95e6 + 0x2e) = *(undefined2 *)(*(int *)0xc52d * 2 + 0x876);
    *(undefined1 *)(*(int *)0x95e6 + 0x3b) = *(undefined1 *)(*(int *)0xc52d + 0x880);
    iVar4 = *(int *)0x95e6;
    *(undefined2 *)(iVar4 + 0x2a) = 0x19;
    *(undefined2 *)(iVar4 + 0x30) = 0x19;
    if (*(char *)(*(int *)0x95e6 + 0x3b) == '\0') {
      if (3 < *(int *)0xc471) {
        FUN_132b_0466(*(undefined2 *)0xc43c);
        return;
      }
      iVar4 = *(int *)0xc471;
      *(int *)0xc471 = *(int *)0xc471 + 1;
      *(undefined2 *)(iVar4 * 2 + -0x3b97) = *(undefined2 *)0xc43c;
      *(int *)0xc465 = *(int *)0xc471 + 1;
      FUN_2120_17aa(0x14b9);
    }
    if (*(int *)(*(int *)0x95e6 + 0x2e) == 0) {
      *(undefined2 *)(*(int *)0x95e6 + 0x32) = 0x103;
      *(undefined2 *)*(undefined2 *)0x95e6 = 0;
    }
    else {
      *(undefined2 *)(*(int *)0x95e6 + 0x32) = 0x102;
      *(undefined2 *)*(undefined2 *)0x95e6 = 2;
      *(undefined2 *)(*(int *)0x95e6 + 0x30) = 1;
    }
    *(int *)(*(int *)0x95e6 + 0x34) = *(int *)0xc461 * 0x3c + -0x42d6;
    *(undefined2 *)(*(int *)0x95e6 + 0x22) = 0x3000;
    *(undefined2 *)(*(int *)0x95e6 + 0x26) = 0xffff;
    FUN_1951_017a(5);
    if (*(int *)0xc503 < 0x14) {
      iVar4 = *(int *)0xc503;
      *(int *)0xc503 = *(int *)0xc503 + 1;
      *(undefined2 *)(iVar4 * 2 + -0x3afb) = *(undefined2 *)0xc43c;
    }
    *(int *)0xb67a = *(int *)0xb67a + -1;
    FUN_1505_1684();
    return;
  }
  if (*(int *)0xc52d == 4) {
    FUN_1697_0914(*(undefined2 *)0x95e6);
    return;
  }
  if (*(int *)0xc52d == 5) {
    FUN_1697_097c(*(undefined2 *)0x95e6);
    return;
  }
  if (*(int *)0xc501 != 0) {
    return;
  }
  *(undefined2 *)(*(int *)0x95e6 + 0x32) = 0x101;
  *(undefined2 *)*(undefined2 *)0x95e6 = 4;
  *(undefined1 *)(*(int *)0x95e6 + 0x3b) = 0;
  *(undefined2 *)(*(int *)0x95e6 + 0x1c) = 300;
  *(undefined2 *)(*(int *)0x95e6 + 0x2e) = *(undefined2 *)0xc4f5;
  *(undefined2 *)(*(int *)0x95e6 + 0x2a) = 10;
  *(int *)(*(int *)0x95e6 + 0x26) = *(int *)0xb686 << 2;
  *(undefined2 *)0xc4f1 = *(undefined2 *)0xc43c;
  *(int *)0xc4ef = *(int *)0xb686 * 3;
  uVar3 = 6;
LAB_1697_0574:
  FUN_1951_017a(uVar3);
  return;
}



/* 1697:0914 FUN_1697_0914 */

void __cdecl16far FUN_1697_0914(undefined2 *param_1)

{
  undefined2 unaff_DS;
  
  param_1[0xe] = 200;
  param_1[0x12] = 200;
  param_1[0x15] = 1;
  param_1[0x18] = 1;
  *(undefined2 *)0xc469 = *(undefined2 *)0xc43c;
  if (*(int *)0xc471 == 0) {
    *(undefined2 *)0xc471 = 1;
  }
  *(undefined2 *)0xc465 = 2;
  FUN_2120_17aa(0x1697);
  param_1[0x19] = 0x104;
  *param_1 = 0;
  param_1[0x13] = *(int *)0xb686 << 1;
  FUN_1951_017a(5);
  return;
}



/* 1697:097c FUN_1697_097c */

void __cdecl16far FUN_1697_097c(undefined2 *param_1)

{
  undefined2 unaff_DS;
  
  param_1[0xe] = 0x96;
  param_1[0x12] = 0x96;
  param_1[0x15] = 1;
  param_1[0x18] = 1;
  param_1[0x19] = 0x104;
  *param_1 = 0xd;
  param_1[0x13] = *(int *)0xb686 * 3;
  FUN_1505_18a0(0x96a,3);
  FUN_1951_017a(5);
  return;
}



/* 1697:09da FUN_1697_09da */

void __cdecl16far FUN_1697_09da(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  iVar2 = (int)*(char *)(param_1 + 0xc535);
  if ((iVar2 != -1) && ('\0' < *(char *)(iVar2 + -0x3acf))) {
    if (*(char *)(iVar2 + 0x53d6) == '\0') {
      *(char *)(iVar2 + -0x3acf) = *(char *)(iVar2 + -0x3acf) + -1;
    }
    if ((param_1 & 1) == 0) {
      uVar3 = 0x1e;
    }
    else {
      uVar3 = 0xffe2;
    }
    iVar2 = FUN_132b_0410(uVar3,iVar2);
    *(int *)0x95e8 = iVar2;
    *(undefined2 *)(iVar2 + 0x32) = 0x101;
    *(undefined2 *)*(undefined2 *)0x95e8 = 3;
    *(undefined2 *)(*(int *)0x95e8 + 0x16) = *(undefined2 *)(*(int *)0xc432 * 0x3c + -0x42c0);
    *(undefined2 *)(*(int *)0x95e8 + 0x18) = *(undefined2 *)(*(int *)0xc432 * 0x3c + -0x42be);
    *(undefined2 *)(*(int *)0x95e8 + 0x1a) = *(undefined2 *)(*(int *)0xc432 * 0x3c + -0x42bc);
    *(undefined2 *)(*(int *)0x95e8 + 0x1c) = 400;
    *(undefined2 *)(*(int *)0x95e8 + 0x22) = 0x4000;
    *(int *)(*(int *)0x95e8 + 0x26) = *(int *)0xb686 + 1;
    *(undefined2 *)(*(int *)0x95e8 + 0x2a) = 4;
    *(undefined2 *)(*(int *)0x95e8 + 0x2e) = 0x14;
    *(undefined1 *)(*(int *)0x95e8 + 0x3b) = 0;
    if ((param_1 & 2) == 0) {
      uVar4 = FUN_1ed2_0008(uVar3,*(undefined2 *)0x13ca);
      *(undefined2 *)0xc440 = uVar4;
      uVar4 = FUN_1ed2_0008(uVar3,*(undefined2 *)0x13d6);
      *(undefined2 *)0xc442 = uVar4;
      uVar4 = *(undefined2 *)0x13d0;
    }
    else {
      uVar4 = FUN_1ed2_0008(uVar3,*(undefined2 *)0x13cc);
      *(undefined2 *)0xc440 = uVar4;
      uVar4 = FUN_1ed2_0008(uVar3,*(undefined2 *)0x13d8);
      *(undefined2 *)0xc442 = uVar4;
      uVar4 = *(undefined2 *)0x13d2;
    }
    uVar3 = FUN_1ed2_0008(uVar3,uVar4);
    *(undefined2 *)0xc444 = uVar3;
    iVar2 = *(int *)(*(int *)0xc432 * 0x3c + -0x42d4) + *(int *)0xc440;
    *(int *)(*(int *)0x95e8 + 2) = iVar2;
    *(int *)(*(int *)0x95e8 + 8) = iVar2;
    iVar2 = *(int *)(*(int *)0xc432 * 0x3c + -0x42d2) + *(int *)0xc442;
    *(int *)(*(int *)0x95e8 + 4) = iVar2;
    *(int *)(*(int *)0x95e8 + 10) = iVar2;
    iVar2 = *(int *)(*(int *)0xc432 * 0x3c + -0x42d0) + *(int *)0xc444;
    *(int *)(*(int *)0x95e8 + 6) = iVar2;
    *(int *)(*(int *)0x95e8 + 0xc) = iVar2;
    if (800 < *(uint *)0x872) {
      *(undefined2 *)0x872 = 800;
    }
    iVar2 = *(int *)0xc467;
    *(int *)0xc459 = iVar2;
    uVar3 = FUN_1ed2_006e(*(undefined2 *)(iVar2 + 0x18));
    uVar3 = FUN_1ed2_0008(*(undefined2 *)0x872,uVar3);
    *(undefined2 *)0xc446 = uVar3;
    uVar3 = FUN_1ed2_007e(*(undefined2 *)(*(int *)0xc467 + 0x16));
    iVar2 = FUN_1ed2_0008(*(undefined2 *)0xc446,uVar3);
    *(int *)0xc440 = iVar2 - *(int *)0xc440;
    uVar3 = FUN_1ed2_006e(*(undefined2 *)(*(int *)0xc467 + 0x16));
    iVar2 = FUN_1ed2_0008(*(undefined2 *)0xc446,uVar3);
    *(int *)0xc442 = iVar2 - *(int *)0xc442;
    uVar3 = FUN_1ed2_007e(*(undefined2 *)(*(int *)0xc467 + 0x18));
    iVar2 = FUN_1ed2_0008(*(undefined2 *)0x872,uVar3);
    *(int *)0xc444 = iVar2 - *(int *)0xc444;
    uVar3 = FUN_1edc_000e(*(undefined2 *)0xc440,*(undefined2 *)0xc442,0);
    *(undefined2 *)0xc446 = uVar3;
    iVar2 = FUN_14b9_00ac(*(undefined2 *)0xc440,*(undefined2 *)0xc442);
    piVar1 = (int *)(*(int *)0x95e8 + 0x16);
    *piVar1 = *piVar1 + (iVar2 - *(int *)(*(int *)0x95e8 + 0x16));
    iVar2 = FUN_14b9_00ac(*(undefined2 *)0xc444,*(undefined2 *)0xc446);
    piVar1 = (int *)(*(int *)0x95e8 + 0x18);
    *piVar1 = *piVar1 + (iVar2 - *(int *)(*(int *)0x95e8 + 0x18));
    FUN_1951_017a(3);
  }
  return;
}



/* 1697:0c5e FUN_1697_0c5e */

void __cdecl16far FUN_1697_0c5e(int param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  uint local_4;
  
  if (0x40 < *(int *)0xc4bb) {
    *(int *)0xc4bb = *(int *)0xc4bb + -0x155;
    for (local_4 = 0; (int)local_4 < param_1; local_4 = local_4 + 1) {
      if ((local_4 & 1) == 0) {
        uVar2 = 0x1e;
      }
      else {
        uVar2 = 0xffe2;
      }
      iVar3 = FUN_132b_0410(uVar2);
      *(int *)0x95ec = iVar3;
      *(undefined2 *)(iVar3 + 0x32) = 0x101;
      *(undefined2 *)*(undefined2 *)0x95ec = 3;
      *(undefined2 *)(*(int *)0x95ec + 0x16) = *(undefined2 *)(*(int *)0xc432 * 0x3c + -0x42c0);
      *(undefined2 *)(*(int *)0x95ec + 0x18) = *(undefined2 *)(*(int *)0xc432 * 0x3c + -0x42be);
      *(undefined2 *)(*(int *)0x95ec + 0x1a) = *(undefined2 *)(*(int *)0xc432 * 0x3c + -0x42bc);
      *(undefined2 *)(*(int *)0x95ec + 0x1c) = 400;
      *(undefined2 *)(*(int *)0x95ec + 0x22) = 0x4000;
      *(undefined2 *)(*(int *)0x95ec + 0x26) = *(undefined2 *)0xb686;
      *(undefined2 *)(*(int *)0x95ec + 0x2a) = 4;
      *(undefined2 *)(*(int *)0x95ec + 0x2e) = 10;
      *(undefined1 *)(*(int *)0x95ec + 0x3b) = 0;
      if ((local_4 & 2) == 0) {
        uVar4 = FUN_1ed2_0008(uVar2,*(undefined2 *)0x13ca);
        *(undefined2 *)0xc440 = uVar4;
        uVar4 = FUN_1ed2_0008(uVar2,*(undefined2 *)0x13d6);
        *(undefined2 *)0xc442 = uVar4;
        uVar4 = *(undefined2 *)0x13d0;
      }
      else {
        uVar4 = FUN_1ed2_0008(uVar2,*(undefined2 *)0x13cc);
        *(undefined2 *)0xc440 = uVar4;
        uVar4 = FUN_1ed2_0008(uVar2,*(undefined2 *)0x13d8);
        *(undefined2 *)0xc442 = uVar4;
        uVar4 = *(undefined2 *)0x13d2;
      }
      uVar2 = FUN_1ed2_0008(uVar2,uVar4);
      *(undefined2 *)0xc444 = uVar2;
      iVar3 = *(int *)(*(int *)0xc432 * 0x3c + -0x42d4) + *(int *)0xc440;
      *(int *)(*(int *)0x95ec + 2) = iVar3;
      *(int *)(*(int *)0x95ec + 8) = iVar3;
      iVar3 = *(int *)(*(int *)0xc432 * 0x3c + -0x42d2) + *(int *)0xc442;
      *(int *)(*(int *)0x95ec + 4) = iVar3;
      *(int *)(*(int *)0x95ec + 10) = iVar3;
      iVar3 = *(int *)(*(int *)0xc432 * 0x3c + -0x42d0) + *(int *)0xc444;
      *(int *)(*(int *)0x95ec + 6) = iVar3;
      *(int *)(*(int *)0x95ec + 0xc) = iVar3;
      if (800 < *(uint *)0x872) {
        *(undefined2 *)0x872 = 800;
      }
      iVar3 = *(int *)0xc467;
      *(int *)0xc459 = iVar3;
      uVar2 = FUN_1ed2_006e(*(undefined2 *)(iVar3 + 0x18));
      uVar2 = FUN_1ed2_0008(*(undefined2 *)0x872,uVar2);
      *(undefined2 *)0xc446 = uVar2;
      uVar2 = FUN_1ed2_007e(*(undefined2 *)(*(int *)0xc467 + 0x16));
      iVar3 = FUN_1ed2_0008(*(undefined2 *)0xc446,uVar2);
      *(int *)0xc440 = iVar3 - *(int *)0xc440;
      uVar2 = FUN_1ed2_006e(*(undefined2 *)(*(int *)0xc467 + 0x16));
      iVar3 = FUN_1ed2_0008(*(undefined2 *)0xc446,uVar2);
      *(int *)0xc442 = iVar3 - *(int *)0xc442;
      uVar2 = FUN_1ed2_007e(*(undefined2 *)(*(int *)0xc467 + 0x18));
      iVar3 = FUN_1ed2_0008(*(undefined2 *)0x872,uVar2);
      *(int *)0xc444 = iVar3 - *(int *)0xc444;
      uVar2 = FUN_1edc_000e(*(undefined2 *)0xc440,*(undefined2 *)0xc442,0);
      *(undefined2 *)0xc446 = uVar2;
      iVar3 = FUN_14b9_00ac(*(undefined2 *)0xc440,*(undefined2 *)0xc442);
      piVar1 = (int *)(*(int *)0x95ec + 0x16);
      *piVar1 = *piVar1 + (iVar3 - *(int *)(*(int *)0x95ec + 0x16));
      iVar3 = FUN_14b9_00ac(*(undefined2 *)0xc444,*(undefined2 *)0xc446);
      piVar1 = (int *)(*(int *)0x95ec + 0x18);
      *piVar1 = *piVar1 + (iVar3 - *(int *)(*(int *)0x95ec + 0x18));
      FUN_1951_017a(3);
    }
  }
  return;
}



/* 1697:0ede FUN_1697_0ede */

void __cdecl16far FUN_1697_0ede(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_6;
  
  *(undefined2 *)0x872 = 0x7fff;
  *(undefined2 *)0x874 = 0x7fff;
  *(undefined2 *)0x870 = 0;
  if ((*(int *)0xc432 < 2) || (1 < *(int *)0xc432)) {
    local_6 = 2;
    *(undefined2 *)0xc45b = 0xbda2;
    while (local_6 < *(int *)0xc438) {
      iVar3 = *(int *)0xc45b;
      if ((((*(char *)(iVar3 + 0x33) != '\x01') && (*(int *)(iVar3 + 0x32) != 0)) &&
          (*(char *)(iVar3 + 0x33) != -0x80)) &&
         ((*(char *)(iVar3 + 0x32) != '\x01' &&
          ((*(char *)(iVar3 + 0x32) != '\x02' || (*(int *)0xc432 != 0)))))) {
        *(int *)0xc440 = *(int *)(iVar3 + 2) - *(int *)(*(int *)0xc467 + 2);
        *(int *)0xc442 = *(int *)(*(int *)0xc45b + 4) - *(int *)(*(int *)0xc467 + 4);
        *(int *)0xc444 = *(int *)(*(int *)0xc45b + 6) - *(int *)(*(int *)0xc467 + 6);
        uVar2 = FUN_1edc_000e(*(undefined2 *)0xc440,*(undefined2 *)0xc442,0);
        uVar2 = FUN_1edc_000e(*(undefined2 *)0xc444,uVar2,0);
        *(undefined2 *)0xc446 = uVar2;
        if (*(uint *)0xc446 < *(uint *)0x872) {
          iVar3 = FUN_14b9_00ac(*(undefined2 *)0xc440,*(undefined2 *)0xc442);
          iVar3 = FUN_19c7_4e0a(iVar3 - *(int *)(*(int *)0xc467 + 0x16));
          if (iVar3 < 0x1000) {
            iVar3 = FUN_14b9_00ac(*(undefined2 *)0xc444,*(undefined2 *)0xc446);
            iVar3 = FUN_19c7_4e0a(iVar3 - *(int *)(*(int *)0xc467 + 0x18));
            if (iVar3 < 0x1000) {
              iVar3 = *(int *)0xc446;
              *(int *)0x872 = iVar3;
              iVar1 = *(int *)0xc45b;
              *(int *)0x874 = iVar3 - *(int *)(iVar1 + 0x2a);
              *(int *)0x870 = iVar1;
            }
          }
        }
      }
      local_6 = local_6 + 1;
      *(int *)0xc45b = *(int *)0xc45b + 0x3c;
    }
  }
  return;
}



/* 1697:1024 FUN_1697_1024 */

void __cdecl16far FUN_1697_1024(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  if ((*(byte *)0xb684 & 7) == 0) {
    local_4 = 0;
    do {
      if (*(char *)(local_4 + -0x3acf) < '\x03') {
        *(char *)(local_4 + -0x3acf) = *(char *)(local_4 + -0x3acf) + '\x01';
      }
      local_4 = local_4 + 1;
    } while (local_4 < 4);
  }
  if (*(int *)0xc4bb < 0x800) {
    *(int *)0xc4bb = *(int *)0xc4bb + *(int *)0xb67e * 5;
  }
  if (0x800 < *(int *)0xc4bb) {
    *(undefined2 *)0xc4bb = 0x800;
  }
  return;
}



/* 1697:109e FUN_1697_109e */

void __cdecl16far FUN_1697_109e(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar4 = *(int *)0xc467;
  if (*(int *)(iVar4 + 0x1c) != *(int *)0xc463) {
    iVar1 = *(int *)(iVar4 + 0x24) * *(int *)0xb67e + 0x7f >> 7;
    iVar2 = *(int *)0xc463 - *(int *)(iVar4 + 0x1c);
    if (0 < iVar2) {
      if (*(int *)(iVar4 + 0x1c) == 0) {
        if (*(int *)0xc432 < 2) {
          uVar3 = 7;
        }
        else {
          uVar3 = 0xe;
        }
        FUN_1951_017a(uVar3);
      }
      iVar4 = iVar1;
      if (iVar2 < iVar1) {
        iVar4 = iVar2;
      }
      *(int *)(*(int *)0xc467 + 0x1c) = *(int *)(*(int *)0xc467 + 0x1c) + iVar4;
    }
    if (iVar2 < 0) {
      iVar4 = -iVar2;
      if (-iVar1 != iVar2 && iVar1 <= -iVar2) {
        iVar4 = iVar1;
      }
      *(int *)(*(int *)0xc467 + 0x1c) = *(int *)(*(int *)0xc467 + 0x1c) - iVar4;
      if (*(int *)(*(int *)0xc467 + 0x1c) == 0) {
        FUN_1951_017a(0x1c);
      }
    }
  }
  return;
}



/* 1697:1138 FUN_1697_1138 */

void __cdecl16far FUN_1697_1138(int param_1)

{
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    if (*(int *)0xc503 <= local_4) {
      return;
    }
    if (*(int *)(local_4 * 2 + -0x3afb) == param_1) break;
    local_4 = local_4 + 1;
  }
  *(int *)0xc503 = *(int *)0xc503 + -1;
  for (; local_4 < *(int *)0xc503; local_4 = local_4 + 1) {
    *(undefined2 *)(local_4 * 2 + -0x3afb) = *(undefined2 *)(local_4 * 2 + -0x3af9);
  }
  return;
}



/* 1697:11ba FUN_1697_11ba */

void __cdecl16far FUN_1697_11ba(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = *(int *)0xc471;
  while (local_4 = local_4 + -1, -1 < local_4) {
    FUN_132b_0466(*(undefined2 *)(local_4 * 2 + -0x3b97));
    *(int *)0xb67a = *(int *)0xb67a + 1;
  }
  FUN_1505_1684();
  return;
}



/* 1697:11f2 FUN_1697_11f2 */

void __cdecl16far FUN_1697_11f2(int param_1)

{
  uint uVar1;
  undefined2 unaff_DS;
  int local_4;
  
  for (local_4 = 0; local_4 < param_1; local_4 = local_4 + 1) {
    uVar1 = FUN_19c7_4e32(1);
    FUN_1090_12ec(*(undefined1 *)(*(int *)0x9edc * 8 + (uVar1 & 7) + 0x97a));
  }
  return;
}



/* 17ba:016a FUN_17ba_016a */

void __cdecl16far FUN_17ba_016a(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  *(undefined2 *)0xc501 = 0;
  for (local_4 = 0; local_4 < *(int *)0xc549; local_4 = local_4 + 1) {
    *(undefined2 *)0xc459 = *(undefined2 *)(local_4 * 2 + -0x3ac7);
    *(undefined2 *)0xc45b = *(undefined2 *)(local_4 * 2 + -0x3abf);
    iVar2 = *(int *)0xc432 * 0x3c;
    FUN_1897_0502(0x13ee,*(undefined2 *)(iVar2 + -0x42c0),-*(int *)(iVar2 + -0x42be),
                  -*(int *)(iVar2 + -0x42bc));
    iVar3 = *(int *)0xc432 * 0x3c;
    iVar2 = *(int *)0xc459;
    FUN_1859_0008(*(undefined2 *)0x7922,*(int *)(iVar2 + 2) - *(int *)(iVar3 + -0x42d4),
                  *(int *)(iVar2 + 4) - *(int *)(iVar3 + -0x42d2),
                  *(int *)(iVar2 + 6) - *(int *)(iVar3 + -0x42d0),0x95ee,0x95f0);
    if (*(int *)0xc45b == *(int *)0xc467) {
      uVar1 = *(undefined2 *)(*(int *)0x7922 + 8);
      *(undefined2 *)0x95f8 = uVar1;
      *(undefined2 *)0x95f4 = uVar1;
      *(int *)0x95f2 = *(int *)0xbd20 + -10;
      *(int *)0x95f6 = *(int *)0xbd20 + 10;
      *(int *)0xc501 = *(int *)0xc501 + 1;
    }
    else {
      iVar3 = *(int *)0xc432 * 0x3c;
      iVar2 = *(int *)0xc45b;
      FUN_1859_0008(*(undefined2 *)0x7922,*(int *)(iVar2 + 2) - *(int *)(iVar3 + -0x42d4),
                    *(int *)(iVar2 + 4) - *(int *)(iVar3 + -0x42d2),
                    *(int *)(iVar2 + 6) - *(int *)(iVar3 + -0x42d0),0x95f2,0x95f4);
      iVar3 = *(int *)0xc432 * 0x3c;
      iVar2 = *(int *)0xc45b;
      FUN_1859_0008(*(undefined2 *)0x7922,*(int *)(iVar2 + 2) - *(int *)(iVar3 + -0x42d4),
                    *(int *)(iVar2 + 4) - *(int *)(iVar3 + -0x42d2),
                    (*(int *)(iVar2 + 6) - *(int *)(iVar3 + -0x42d0)) + 0x28,0x95f6,0x95f8);
    }
    FUN_1eea_0bde(*(undefined2 *)0x7922,3,0x95ee,0xd);
  }
  *(undefined2 *)0xc549 = 0;
  return;
}



/* 17ba:02cc FUN_17ba_02cc */

void __cdecl16far FUN_17ba_02cc(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_6;
  int local_4;
  
  *(undefined2 *)(*(int *)0xc459 + 0x34) = 0xbd2a;
  local_6 = *(int *)0xc446;
  local_4 = 2;
  *(undefined2 *)0xc45b = 0xbda2;
  while (local_4 < *(int *)0xc438) {
    iVar1 = *(int *)0xc45b;
    if (((1 < *(byte *)(iVar1 + 0x32)) && (*(char *)(iVar1 + 0x32) != '\a')) &&
       (*(char *)(iVar1 + 0x33) == '\x01')) {
      uVar2 = FUN_1edc_000e(*(int *)(*(int *)0xc45b + 4) - *(int *)(*(int *)0xc459 + 4),
                            *(int *)(iVar1 + 6) - *(int *)(*(int *)0xc459 + 6),0,0);
      iVar3 = FUN_1edc_000e(*(int *)(*(int *)0xc45b + 2) - *(int *)(*(int *)0xc459 + 2),uVar2);
      iVar1 = *(int *)0xc459;
      iVar3 = (iVar3 - *(int *)(*(int *)0xc45b + 0x2a)) - *(int *)(iVar1 + 0x2a);
      *(int *)0xc446 = iVar3;
      if (iVar3 < local_6) {
        *(undefined2 *)(iVar1 + 0x34) = *(undefined2 *)0xc45b;
        local_6 = iVar3;
      }
    }
    local_4 = local_4 + 1;
    *(int *)0xc45b = *(int *)0xc45b + 0x3c;
  }
  return;
}



/* 17ba:05aa FUN_17ba_05aa */

void __cdecl16far FUN_17ba_05aa(void)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x9ed6 == *(char *)0x2a4) {
    FUN_1eea_0004(0,0x40,0xc561);
    FUN_1eea_0004(0x40,0x40,0xc621);
    FUN_1eea_0004(0x80,0x40,0xc6e1);
    FUN_1eea_0004(0xc0,0x40,0xc7a1);
  }
  return;
}



/* 17ba:060e FUN_17ba_060e */

void __cdecl16far FUN_17ba_060e(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined2 unaff_DS;
  int local_e;
  undefined1 *local_a;
  undefined1 *local_8;
  
  if ((*(byte *)0xb684 & 1) == 0) {
    iVar4 = *(int *)(*(int *)0x95fa * 2 + 0xaa6) * 3;
    *(undefined1 *)0xc5af = *(undefined1 *)(iVar4 + -0x3a9f);
    *(undefined1 *)0xc5b0 = *(undefined1 *)(iVar4 + -0x3a9e);
    *(undefined1 *)0xc5b1 = *(undefined1 *)(iVar4 + -0x3a9d);
    uVar1 = *(undefined1 *)0xc5b2;
    uVar2 = *(undefined1 *)0xc5b3;
    uVar3 = *(undefined1 *)0xc5b4;
    local_8 = (undefined1 *)0xc5b5;
    local_a = (undefined1 *)0xc5b2;
    local_e = 0;
    puVar5 = local_a;
    do {
      local_a = puVar5;
      *local_a = *local_8;
      local_e = local_e + 1;
      puVar5 = local_a + 1;
      local_8 = local_8 + 1;
    } while (local_e < 9);
    local_a[1] = uVar1;
    local_a[2] = uVar2;
    local_a[3] = uVar3;
    FUN_1eea_0004(0x1a,5,0xc5af);
    *(int *)0x95fa = (*(int *)0x95fa + 1) % 6;
  }
  return;
}



/* 1859:0008 FUN_1859_0008 */

void __cdecl16far
FUN_1859_0008(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 *param_5,undefined2 *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_DX;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x95fc = param_2;
  *(undefined2 *)0x9600 = param_3;
  *(undefined2 *)0x95fe = param_4;
  uVar1 = FUN_1ed2_001e(*(undefined2 *)0x9600,*(undefined2 *)0x13fa);
  iVar6 = in_DX;
  uVar2 = FUN_1ed2_001e(*(undefined2 *)0x95fe,*(undefined2 *)0x13f4);
  iVar4 = iVar6;
  uVar3 = FUN_1ed2_001e(*(undefined2 *)0x95fc,*(undefined2 *)0x13ee);
  iVar5 = iVar4 + iVar6 + (uint)CARRY2(uVar3,uVar2) + in_DX + (uint)CARRY2(uVar3 + uVar2,uVar1);
  *(int *)0x1400 = uVar3 + uVar2 + uVar1;
  *(int *)0x1402 = iVar5;
  uVar1 = FUN_1ed2_001e(*(undefined2 *)0x9600,*(undefined2 *)0x13fc);
  iVar6 = iVar5;
  uVar2 = FUN_1ed2_001e(*(undefined2 *)0x95fe,*(undefined2 *)0x13f6);
  iVar4 = iVar6;
  uVar3 = FUN_1ed2_001e(*(undefined2 *)0x95fc,*(undefined2 *)0x13f0);
  iVar5 = iVar4 + iVar6 + (uint)CARRY2(uVar3,uVar2) + iVar5 + (uint)CARRY2(uVar3 + uVar2,uVar1);
  *(int *)0x1408 = uVar3 + uVar2 + uVar1;
  *(int *)0x140a = iVar5;
  uVar1 = FUN_1ed2_001e(*(undefined2 *)0x9600,*(undefined2 *)0x13fe);
  iVar6 = iVar5;
  uVar2 = FUN_1ed2_001e(*(undefined2 *)0x95fe,*(undefined2 *)0x13f8);
  iVar4 = iVar6;
  uVar3 = FUN_1ed2_001e(*(undefined2 *)0x95fc,*(undefined2 *)0x13f2);
  iVar6 = iVar4 + iVar6 + (uint)CARRY2(uVar3,uVar2) + iVar5 + (uint)CARRY2(uVar3 + uVar2,uVar1);
  *(int *)0x1410 = uVar3 + uVar2 + uVar1;
  *(int *)0x1412 = iVar6;
  if ((iVar6 < 2) && (iVar6 < 1)) {
    *param_5 = 0xfc18;
    *param_6 = 0xfc18;
    return;
  }
  *(int *)0xbd20 = *(int *)(param_1 + 6) >> 1;
  *(int *)0xbd22 = *(int *)(param_1 + 8) >> 1;
  FUN_19b7_00af();
  FUN_19b7_0002(0);
  FUN_19b7_00d3();
  *param_5 = *(undefined2 *)0x1418;
  *param_6 = *(undefined2 *)0x1420;
  return;
}



/* 186e:001e FUN_186e_001e */

undefined2 __cdecl16far FUN_186e_001e(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  *(int *)0x960a = *(int *)(param_1 + 2) - param_2[1];
  *(int *)0x960c = *(int *)(param_1 + 6) - param_2[3];
  *(int *)0x960e = param_2[2] - *(int *)(param_1 + 4);
  FUN_19c7_001a(0x186e,param_2[0xb],-param_2[0xc],param_2[0xd],0x13dc);
  FUN_19c7_0084(0x19c7,0x960a,0x13dc);
  *(undefined2 *)0x9602 = *(undefined2 *)(param_1 + 0x2a);
  *(int *)0x9602 = *(int *)0x9602 + (*(uint *)(param_1 + 0x14) >> 1);
  *(undefined2 *)0x9610 =
       *(undefined2 *)(*(int *)(((int)*param_2 >> 8) * 2 + 0x1376) + (*param_2 & 0x7f) * 2);
  while( true ) {
    iVar3 = *(int *)*(undefined2 *)0x9610;
    if (iVar3 == -0x8000) {
      return 0;
    }
    *(int *)0x9604 = iVar3;
    iVar1 = *(int *)0x9610;
    *(undefined2 *)0x9606 = *(undefined2 *)(iVar1 + 4);
    iVar2 = *(int *)(iVar1 + 2);
    *(int *)0x9608 = -iVar2;
    if ((((-iVar2 - *(int *)(iVar1 + 8) <= *(int *)0x960e + *(int *)0x9602) &&
         (*(int *)0x960e - *(int *)0x9602 <= *(int *)0x9608)) &&
        (*(int *)0x960a - *(int *)0x9602 <= *(int *)(iVar1 + 6) + iVar3)) &&
       (((iVar3 <= *(int *)0x960a + *(int *)0x9602 &&
         (*(int *)0x960c - *(int *)0x9602 <= *(int *)(iVar1 + 10) + *(int *)0x9606)) &&
        (*(int *)0x9606 <= *(int *)0x960c + *(int *)0x9602)))) break;
    *(int *)0x9610 = *(int *)0x9610 + 0xc;
  }
  return 1;
}



/* 186e:013e FUN_186e_013e */

void __cdecl16far FUN_186e_013e(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x9656 =
       *(undefined2 *)
        (*(int *)(((int)*(uint *)*(undefined2 *)0xc459 >> 8) * 2 + 0x1376) +
        (*(uint *)*(undefined2 *)0xc459 & 0x7f) * 2);
  while (iVar3 = *(int *)*(undefined2 *)0x9656, iVar3 != -0x8000) {
    *(int *)0x963a = iVar3;
    iVar2 = *(int *)0x9656;
    *(undefined2 *)0x963c = *(undefined2 *)(iVar2 + 4);
    *(int *)0x964e = -*(int *)(iVar2 + 2);
    *(undefined2 *)0x9650 = *(undefined2 *)(iVar2 + 6);
    *(undefined2 *)0x9652 = *(undefined2 *)(iVar2 + 10);
    *(int *)0x9654 = -*(int *)(iVar2 + 8);
    uVar1 = *(undefined2 *)0x93c0;
    *(int *)0x6a = iVar3;
    *(undefined2 *)0x6c = *(undefined2 *)0x963c;
    *(undefined2 *)0x6e = *(undefined2 *)0x964e;
    *(int *)0x70 = iVar3 + *(int *)0x9650;
    *(undefined2 *)0x72 = *(undefined2 *)0x963c;
    *(undefined2 *)0x74 = *(undefined2 *)0x964e;
    *(undefined2 *)0x76 = *(undefined2 *)0x70;
    *(undefined2 *)0x78 = *(undefined2 *)0x963c;
    *(int *)0x7a = *(int *)0x964e + *(int *)0x9654;
    *(int *)0x7c = iVar3;
    *(undefined2 *)0x7e = *(undefined2 *)0x963c;
    *(undefined2 *)0x80 = *(undefined2 *)0x7a;
    *(int *)0x82 = iVar3;
    *(int *)0x84 = *(int *)0x963c + *(int *)0x9652;
    *(undefined2 *)0x86 = *(undefined2 *)0x964e;
    *(undefined2 *)0x88 = *(undefined2 *)0x70;
    *(undefined2 *)0x8a = *(undefined2 *)0x84;
    *(undefined2 *)0x8c = *(undefined2 *)0x964e;
    *(undefined2 *)0x8e = *(undefined2 *)0x70;
    *(undefined2 *)0x90 = *(undefined2 *)0x84;
    *(undefined2 *)0x92 = *(undefined2 *)0x7a;
    *(int *)0x94 = iVar3;
    *(undefined2 *)0x96 = *(undefined2 *)0x84;
    *(undefined2 *)0x98 = *(undefined2 *)0x7a;
    *(undefined2 *)0xc865 = *(undefined2 *)0xea;
    iVar3 = *(int *)0xc459;
    FUN_1897_03b6(0x200,-*(int *)(iVar3 + 0x16),*(undefined2 *)(iVar3 + 0x18),
                  *(undefined2 *)(iVar3 + 0x1a),*(undefined2 *)(iVar3 + 2),
                  *(undefined2 *)(iVar3 + 4),*(undefined2 *)(iVar3 + 6));
    *(int *)0x9656 = *(int *)0x9656 + 0xc;
  }
  return;
}



/* 1897:007c FUN_1897_007c */

void __cdecl16far FUN_1897_007c(void)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined2 unaff_DS;
  int local_8;
  
  uVar1 = *(undefined2 *)(*(int *)0x9edc * 2 + 0x166e);
  local_8 = 0;
  do {
    *(undefined1 *)(local_8 + 0x161e) = (char)((uint)uVar1 >> 8);
    *(undefined1 *)(local_8 + 0x163e) = (char)uVar1;
    local_8 = local_8 + 1;
  } while (local_8 < 0x20);
  *(undefined2 *)0x37fa = 0x155e;
  FUN_19c7_4d50(0x1528,0x165e,0x10);
  if (*(int *)0x9edc == 10) {
    uVar2 = 0x77;
  }
  else if ((*(int *)0x9edc == 2) || (*(int *)0x9edc == 9)) {
    uVar2 = 0xff;
  }
  else {
    uVar2 = 0x55;
  }
  *(undefined1 *)0x1535 = uVar2;
  if (*(int *)0x9edc == 0xb) {
    uVar2 = 0x88;
  }
  else {
    uVar2 = 0x77;
  }
  *(undefined1 *)0x1530 = uVar2;
  return;
}



/* 1897:010c FUN_1897_010c */

uint __cdecl16far FUN_1897_010c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  uVar1 = param_1;
  if (*(int *)0x399e != 0x4d) {
    if (*(int *)0xc473 == 0) {
      param_1 = param_1 & 0xff;
      return (uint)*(byte *)((uVar1 & 0xf) + 0x1528) * 0x100 + param_1;
    }
    return 0xf;
  }
  if (*(int *)0xc473 != 0) {
    return 0x10;
  }
  if ((byte)param_1 < 0x40) {
    return param_1 & 0xff;
  }
  if ((byte)param_1 == 0xfe) {
    param_1 = (param_1 & 0xff00) + 0xff;
  }
  uVar1 = (int)param_1 >> 0xf;
  uVar1 = ((int)((param_1 ^ uVar1) - uVar1) >> 8 ^ uVar1) - uVar1;
  uVar2 = (int)uVar1 >> 0xf;
  iVar3 = (((int)((uVar1 ^ uVar2) - uVar2) >> 2 ^ uVar2) - uVar2) + 0x10;
  if (0x1f < iVar3) {
    iVar3 = 0x1f;
  }
  return (param_1 & 0xe0) + iVar3;
}



/* 1897:01ac FUN_1897_01ac */

void __cdecl16far
FUN_1897_01ac(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined2 unaff_DS;
  
  *(uint *)0x37f0 = (uint)(*(int *)0x399e != 0x4d);
  FUN_1897_02b0(param_1);
  FUN_1897_0350(param_2,param_3,param_4);
  FUN_1897_039e(param_5,param_6,param_7);
  return;
}



/* 1897:01ee FUN_1897_01ee */

void __cdecl16far FUN_1897_01ee(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0xb67e;
  *(int *)0xc4a3 = *(int *)0xc4a3 + iVar1 * 0x80;
  *(int *)0xc4a1 = *(int *)0xc4a1 + iVar1 * 0x100;
  *(int *)0xc49f = *(int *)0xc49f + iVar1 * 0x180;
  *(int *)0xc49d = *(int *)0xc49d + iVar1 * 0x200;
  *(int *)0xc49b = *(int *)0xc49b + iVar1 * 0x280;
  *(int *)0xc499 = *(int *)0xc499 + iVar1 * 0x300;
  *(int *)0xc497 = *(int *)0xc497 + iVar1 * 0x380;
  *(int *)0xc495 = *(int *)0xc495 + iVar1 * 0x400;
  *(int *)0xc493 = *(int *)0xc493 + iVar1 * 0x480;
  *(int *)0xc4a5 = -*(int *)0xc4a3;
  *(int *)0xc4a7 = -*(int *)0xc4a1;
  *(int *)0xc4a9 = -*(int *)0xc49f;
  *(int *)0xc4ab = -*(int *)0xc49d;
  *(int *)0xc4ad = -*(int *)0xc49b;
  *(int *)0xc4af = -*(int *)0xc499;
  *(int *)0xc4b1 = -*(int *)0xc497;
  *(int *)0xc4b3 = -*(int *)0xc495;
  FUN_19c7_4d50(0x13ee,0x13ca,0x12);
  FUN_19c5_0013();
  return;
}



/* 1897:02b0 FUN_1897_02b0 */

void __cdecl16far FUN_1897_02b0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x37fe = 0xffdc;
  *(undefined2 *)0x3800 = 0x24;
  *(undefined2 *)0x3802 = 0x24;
  iVar1 = param_1[3];
  iVar2 = param_1[4];
  *(int *)0xbd20 = (iVar1 + 2 >> 1) + -1;
  *(int *)0xbd22 = (iVar2 + 2 >> 1) + -1;
  FUN_19c5_0008(param_1);
  *(int *)0x39a4 = param_1[1];
  *(int *)0x39a6 = param_1[2];
  *(int *)0x39a8 = param_1[1] + param_1[3];
  *(int *)0x39aa = param_1[2] + param_1[4];
  *(int *)0x39ac = param_1[1] + *(int *)0xbd20;
  *(int *)0x39ae = param_1[2] + *(int *)0xbd22;
  *(int *)0x8869 = iVar1;
  *(int *)0x886b = iVar2;
  *(undefined2 *)0x39c4 = *(undefined2 *)(*param_1 * 2 + 0x39bc);
  return;
}



/* 1897:0350 FUN_1897_0350 */

void __cdecl16far FUN_1897_0350(int param_1,int param_2,int param_3)

{
  FUN_1897_0502(0x13ca,-param_1,-param_2,-param_3);
  FUN_19c7_001a(0x1897,-param_1,-param_2,param_3,0x13dc);
  FUN_19c7_0050(0x19c7,0x13dc,0x80);
  return;
}



/* 1897:039e FUN_1897_039e */

void __cdecl16far FUN_1897_039e(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x13b8 = param_1;
  *(undefined2 *)0x13ba = param_2;
  *(undefined2 *)0x13bc = param_3;
  return;
}



/* 1897:03b6 FUN_1897_03b6 */

void __cdecl16far
FUN_1897_03b6(uint param_1,int param_2,int param_3,undefined2 param_4,int param_5,int param_6,
             int param_7)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x3906 = *(undefined2 *)(((int)param_1 >> 8) * 2 + -0x379f);
  *(int *)0x13a6 = param_2;
  *(int *)0x13a8 = param_3;
  *(undefined2 *)0x13aa = param_4;
  *(int *)0x13a0 = param_5 - *(int *)0x13b8;
  *(int *)0x13a2 = param_6 - *(int *)0x13ba;
  *(int *)0x13a4 = param_7 - *(int *)0x13bc;
  FUN_19c7_001a(0x1897,-param_2,-param_3,param_4,0x13dc);
  FUN_1897_0820();
  FUN_19c7_003e(0x19c7,param_1 & 0xff,*(undefined2 *)0x13a0,*(undefined2 *)0x13a4,-*(int *)0x13a2,
                0x13dc,0xc475);
  return;
}



/* 1897:043e FUN_1897_043e */

void __cdecl16far
FUN_1897_043e(uint param_1,int param_2,int param_3,undefined2 param_4,int param_5,int param_6,
             int param_7,int param_8)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x3906 = *(undefined2 *)(((int)param_1 >> 8) * 2 + -0x379f);
  *(int *)0x13a6 = param_2;
  *(int *)0x13a8 = param_3;
  *(undefined2 *)0x13aa = param_4;
  if (param_8 < 0x40) {
    param_8 = 0x40;
  }
  uVar1 = FUN_1ed2_005f(param_5 - *(int *)0x13b8,0x40,param_8);
  *(undefined2 *)0x13a0 = uVar1;
  uVar1 = FUN_1ed2_005f(param_6 - *(int *)0x13ba,0x40,param_8);
  *(undefined2 *)0x13a2 = uVar1;
  uVar1 = FUN_1ed2_005f(param_7 - *(int *)0x13bc,0x40,param_8);
  *(undefined2 *)0x13a4 = uVar1;
  FUN_19c7_001a(0x1ed2,-param_2,-param_3,param_4,0x13dc);
  FUN_1897_0820();
  FUN_19c7_003e(0x19c7,param_1 & 0xff,*(undefined2 *)0x13a0,*(undefined2 *)0x13a4,-*(int *)0x13a2,
                0x13dc,0xc475);
  return;
}



/* 1897:0502 FUN_1897_0502 */

void __cdecl16far
FUN_1897_0502(int *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  uVar1 = FUN_1ed2_007e(param_2);
  *(undefined2 *)0x13be = uVar1;
  uVar1 = FUN_1ed2_006e(param_2);
  *(undefined2 *)0x13c0 = uVar1;
  uVar1 = FUN_1ed2_007e(param_3);
  *(undefined2 *)0x13c2 = uVar1;
  uVar1 = FUN_1ed2_006e(param_3);
  *(undefined2 *)0x13c4 = uVar1;
  uVar1 = FUN_1ed2_007e(param_4);
  *(undefined2 *)0x13c6 = uVar1;
  uVar1 = FUN_1ed2_006e(param_4);
  *(undefined2 *)0x13c8 = uVar1;
  uVar1 = FUN_1ed2_0008(*(undefined2 *)0x13c2,*(undefined2 *)0x13c6);
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x13be,uVar1);
  iVar3 = FUN_1ed2_0008(*(undefined2 *)0x13c0,*(undefined2 *)0x13c8);
  *param_1 = iVar3 + iVar2;
  uVar1 = FUN_1ed2_0008(*(undefined2 *)0x13c2,*(undefined2 *)0x13c8);
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x13be,uVar1);
  iVar3 = FUN_1ed2_0008(*(undefined2 *)0x13c0,*(undefined2 *)0x13c6);
  param_1[1] = iVar2 - iVar3;
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x13be,*(undefined2 *)0x13c4);
  param_1[2] = iVar2;
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x13c6,*(undefined2 *)0x13c4);
  param_1[3] = iVar2;
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x13c8,*(undefined2 *)0x13c4);
  param_1[4] = iVar2;
  param_1[5] = -*(int *)0x13c2;
  uVar1 = FUN_1ed2_0008(*(undefined2 *)0x13c2,*(undefined2 *)0x13c6);
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x13c0,uVar1);
  iVar3 = FUN_1ed2_0008(*(undefined2 *)0x13be,*(undefined2 *)0x13c8);
  param_1[6] = iVar2 - iVar3;
  uVar1 = FUN_1ed2_0008(*(undefined2 *)0x13c2,*(undefined2 *)0x13c8);
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x13c0,uVar1);
  iVar3 = FUN_1ed2_0008(*(undefined2 *)0x13c6,*(undefined2 *)0x13be);
  param_1[7] = iVar3 + iVar2;
  iVar2 = FUN_1ed2_0008(*(undefined2 *)0x13c0,*(undefined2 *)0x13c4);
  param_1[8] = iVar2;
  return;
}



/* 1897:0820 FUN_1897_0820 */

void __cdecl16far FUN_1897_0820(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0x13de;
  *(undefined2 *)0x13de = *(undefined2 *)0x13e2;
  *(undefined2 *)0x13e2 = uVar1;
  uVar1 = *(undefined2 *)0x13e0;
  *(undefined2 *)0x13e0 = *(undefined2 *)0x13e8;
  *(undefined2 *)0x13e8 = uVar1;
  uVar1 = *(undefined2 *)0x13e6;
  *(undefined2 *)0x13e6 = *(undefined2 *)0x13ea;
  *(undefined2 *)0x13ea = uVar1;
  return;
}



/* 1897:0856 FUN_1897_0856 */

void __cdecl16far FUN_1897_0856(undefined2 *param_1,undefined2 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1ed2_0008(param_1[2],param_2[6]);
  iVar2 = FUN_1ed2_0008(param_1[1],param_2[3]);
  iVar3 = FUN_1ed2_0008(*param_1,*param_2);
  *param_3 = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[2],param_2[7]);
  iVar2 = FUN_1ed2_0008(param_1[1],param_2[4]);
  iVar3 = FUN_1ed2_0008(*param_1,param_2[1]);
  param_3[1] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[2],param_2[8]);
  iVar2 = FUN_1ed2_0008(param_1[1],param_2[5]);
  iVar3 = FUN_1ed2_0008(*param_1,param_2[2]);
  param_3[2] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[5],param_2[6]);
  iVar2 = FUN_1ed2_0008(param_1[4],param_2[3]);
  iVar3 = FUN_1ed2_0008(param_1[3],*param_2);
  param_3[3] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[5],param_2[7]);
  iVar2 = FUN_1ed2_0008(param_1[4],param_2[4]);
  iVar3 = FUN_1ed2_0008(param_1[3],param_2[1]);
  param_3[4] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[5],param_2[8]);
  iVar2 = FUN_1ed2_0008(param_1[4],param_2[5]);
  iVar3 = FUN_1ed2_0008(param_1[3],param_2[2]);
  param_3[5] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[8],param_2[6]);
  iVar2 = FUN_1ed2_0008(param_1[7],param_2[3]);
  iVar3 = FUN_1ed2_0008(param_1[6],*param_2);
  param_3[6] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[8],param_2[7]);
  iVar2 = FUN_1ed2_0008(param_1[7],param_2[4]);
  iVar3 = FUN_1ed2_0008(param_1[6],param_2[1]);
  param_3[7] = iVar3 + iVar2 + iVar1;
  iVar1 = FUN_1ed2_0008(param_1[8],param_2[8]);
  iVar2 = FUN_1ed2_0008(param_1[7],param_2[5]);
  iVar3 = FUN_1ed2_0008(param_1[6],param_2[2]);
  param_3[8] = iVar3 + iVar2 + iVar1;
  return;
}



/* 1897:0af2 FUN_1897_0af2 */

void __cdecl16far FUN_1897_0af2(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_6;
  
  *(undefined2 *)0x965a = *(undefined2 *)(param_1 * 2 + -0x379f);
  *(undefined2 *)0x9658 = 0;
  iVar1 = *(int *)*(undefined4 *)0x9658;
  local_6 = 0;
  do {
    if (iVar1 <= local_6) {
      return;
    }
    *(int *)0x9658 = local_6 * 2 + 2;
    uVar5 = (undefined2)((ulong)*(undefined4 *)0x9658 >> 0x10);
    piVar2 = *(int **)*(undefined4 *)0x9658;
    *(int *)0x9658 = (int)piVar2;
    if (*(int *)0x7928 == 3) {
      piVar2 = (int *)*(int *)0x9658;
      if (*piVar2 == -0x7ffe) {
        *piVar2 = piVar2[2];
        *(undefined2 *)((int)*(undefined4 *)0x9658 + 4) = 0x8001;
        goto LAB_1897_0b38;
      }
    }
    else if ((*piVar2 != -0x7fff) && (piVar2[2] == -0x7fff)) {
      piVar2[2] = *piVar2;
      *(undefined2 *)*(undefined4 *)0x9658 = 0x8002;
LAB_1897_0b38:
      uVar4 = (undefined2)((ulong)*(undefined4 *)0x9658 >> 0x10);
      iVar3 = (int)*(undefined4 *)0x9658;
      uVar5 = *(undefined2 *)(iVar3 + 6);
      *(undefined2 *)(iVar3 + 6) = *(undefined2 *)(iVar3 + 2);
      *(undefined2 *)((int)*(undefined4 *)0x9658 + 2) = uVar5;
    }
    local_6 = local_6 + 1;
  } while( true );
}



/* 1951:0006 FUN_1951_0006 */

void __cdecl16far FUN_1951_0006(int param_1)

{
  int iVar1;
  uint uVar2;
  
  while (iVar1 = param_1 + -1, param_1 != 0) {
    do {
      uVar2 = FUN_19c7_4bfc(0x3da);
    } while ((uVar2 & 8) == 0);
    do {
      uVar2 = FUN_19c7_4bfc(0x3da);
      param_1 = iVar1;
    } while ((uVar2 & 8) != 0);
  }
  return;
}



/* 1951:0038 FUN_1951_0038 */

void __cdecl16far FUN_1951_0038(undefined1 param_1,undefined1 param_2)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0xc86a = 2;
  *(undefined1 *)0xc86c = 0;
  *(undefined1 *)0xc870 = param_1;
  *(undefined1 *)0xc86f = param_2;
  FUN_19c7_4a00(0x10,0xc869,0xc869);
  return;
}



/* 1951:0064 FUN_1951_0064 */

void __cdecl16far FUN_1951_0064(undefined1 param_1)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0xc86a = 0;
  *(undefined1 *)0xc869 = param_1;
  FUN_19c7_4a00(0x10,0xc869,0xc869);
  return;
}



/* 1951:0086 FUN_1951_0086 */

void __cdecl16far FUN_1951_0086(char *param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  for (; (*param_1 != '.' && (*param_1 != '\0')); param_1 = param_1 + 1) {
  }
  FUN_19c7_480c(param_1,param_2);
  return;
}



/* 1951:00b2 FUN_1951_00b2 */

void __cdecl16far FUN_1951_00b2(undefined2 param_1)

{
  FUN_1000_030e();
  FUN_1951_0064(3);
  FUN_19c7_4c0a(7);
  FUN_19c7_4ada(param_1);
  FUN_19c7_29de(0x19c7,99);
  return;
}



/* 1951:00ea FUN_1951_00ea */

uint __cdecl16far FUN_1951_00ea(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  
  uVar5 = 0x1951;
  if (*(char *)0x1754 != '\0') {
    FUN_1000_0332();
    uVar5 = 0x1000;
  }
LAB_1951_00fd:
  do {
    iVar3 = thunk_EXT_FUN_0000_0000(uVar5);
    if (iVar3 != 0) {
      return 0;
    }
    uVar6 = 0x1eea;
    uVar4 = thunk_EXT_FUN_0000_0000(0x1eea);
    if ((char)uVar4 != '\0') {
      uVar4 = uVar4 & 0xff;
      if ((0x60 < uVar4) && (uVar4 < 0x7b)) {
        uVar4 = uVar4 - 0x20;
      }
      return uVar4;
    }
    cVar2 = (char)(uVar4 >> 8);
    uVar4 = CONCAT11((cVar2 >> 7) + '\x01',cVar2);
    if (uVar4 == 0x110) {
      uVar6 = 0x1000;
      FUN_1000_0332();
    }
    else if (uVar4 != 0x124) {
      if (uVar4 != 0x12f) {
        return uVar4;
      }
      pbVar1 = (byte *)0x1694;
      *pbVar1 = *pbVar1 ^ 1;
      if (*pbVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x1a;
      }
      thunk_EXT_FUN_0000_0000(0x1eea,uVar5);
      uVar5 = 0x1eea;
      goto LAB_1951_00fd;
    }
    uVar5 = uVar6;
    if (*(char *)0x29f != '\0') {
      uVar5 = 0x1eea;
      thunk_EXT_FUN_0000_0000(uVar6);
    }
  } while( true );
}



/* 1951:017a FUN_1951_017a */

void __cdecl16far FUN_1951_017a(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  if (*(char *)0x1694 != '\0') {
    thunk_EXT_FUN_0000_0000(0x1951,param_1);
  }
  return;
}



/* 1951:0192 FUN_1951_0192 */

undefined2 __cdecl16far FUN_1951_0192(undefined2 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 in_DX;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined1 local_8 [6];
  
  puVar1 = (undefined1 *)FUN_19c7_4c1a(param_1,0x2e);
  *puVar1 = 0;
  FUN_19c7_47cc(param_1,0x1695);
  iVar2 = FUN_201d_0008(param_1,0,local_8);
  if (iVar2 != 0) {
    FUN_19c7_480c(0xad6a,param_1);
    FUN_19c7_47cc(0xad6a,0x169a);
    uVar3 = thunk_EXT_FUN_0000_0000(0x19c7,0xa176,10);
    uVar4 = FUN_19c7_48e8(0x1eea,uVar3);
    in_DX = (undefined2)((ulong)uVar4 >> 0x10);
    FUN_19c7_47cc(0xad6a,(int)uVar4);
    FUN_1951_00b2(0xad6a);
  }
  FUN_201d_00b2();
  return in_DX;
}



/* 1951:0230 FUN_1951_0230 */

int __cdecl16far FUN_1951_0230(int param_1,char *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  int local_8;
  char *local_6;
  
  local_6 = param_2;
  uVar1 = *(undefined2 *)(param_1 + 0x10);
  local_8 = 0;
  uVar3 = 0x1951;
  while (*local_6 != '\0') {
    iVar2 = thunk_EXT_FUN_0000_0000(uVar3,uVar1,*local_6);
    local_8 = local_8 + iVar2;
    uVar3 = 0x1eea;
    local_6 = local_6 + 1;
  }
  return local_8;
}



/* 1951:0274 FUN_1951_0274 */

void __cdecl16far
FUN_1951_0274(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_1951_0230(param_1,param_4);
  thunk_EXT_FUN_0000_0000(0x1951,param_1,(param_5 - iVar1) / 2 + param_2,param_3,param_4);
  return;
}



/* 1951:02ac FUN_1951_02ac */

void __cdecl16far FUN_1951_02ac(void)

{
  if (cRam00000440 == '\0') {
    return;
  }
  do {
  } while( true );
}



/* 197d:0004 FUN_197d_0004 */

void __cdecl16far FUN_197d_0004(void)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x16d4 = 1;
  *(undefined2 *)0x16c4 = 1;
  *(undefined2 *)0x16ce = 1;
  *(undefined2 *)0x16ba = 0;
  *(undefined2 *)0x16bc = 0;
  FUN_197d_0150();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  uRam000100e5 = in_BX;
  uRam000100e7 = unaff_ES;
  (*pcVar1)();
  return;
}



/* 197d:0042 FUN_197d_0042 */

void __cdecl16far FUN_197d_0042(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x16d4 = 0;
  out(0x43,0x36);
  out(0x40,0);
  out(0x40,0);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



/* 197d:0150 FUN_197d_0150 */

void __cdecl16near FUN_197d_0150(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 unaff_DS;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  
  *(undefined1 *)0x16c6 = 1;
  *(undefined1 *)0x16cd = 1;
  *(undefined2 *)0x16c9 = 0;
  *(undefined2 *)0x16cb = 0;
  iVar2 = FUN_197d_01e5((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 |
                        (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                        (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                        (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  iVar6 = 0x10;
  do {
    iVar3 = FUN_197d_01e5();
    puVar1 = (uint *)0x16c9;
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + (iVar2 - iVar3);
    *(int *)0x16cb = *(int *)0x16cb + (uint)CARRY2(uVar4,iVar2 - iVar3);
    iVar6 = iVar6 + -1;
    iVar2 = iVar3;
  } while (iVar6 != 0);
  uVar5 = *(uint *)0x16c9;
  iVar2 = *(int *)0x16cb;
  puVar1 = (uint *)0x16ba;
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  *(int *)0x16bc = *(int *)0x16bc + iVar2 + (uint)CARRY2(uVar4,uVar5);
  uVar4 = (uint)(CONCAT22(iVar2,uVar5) / 0x10);
  uVar5 = uVar4 >> 1;
  *(uint *)0x16c9 = uVar5;
  uVar4 = (uVar5 + (uVar4 >> 5)) / 0xf89;
  if ((uVar4 < 4) || (6 < uVar4)) {
    *(undefined1 *)0x16cd = 0;
    *(undefined2 *)0x16c9 = 0x4dae;
    uVar4 = 5;
  }
  *(uint *)0x16c7 = uVar4;
  if (*(int *)0x16c4 != 1) {
    *(uint *)0x16c4 = uVar4;
  }
  uVar4 = *(uint *)0x16c9;
  uVar5 = *(uint *)0x16c4;
  *(uint *)0x16c0 = uVar4 / uVar5;
  *(uint *)0x16be = uVar4 / uVar5;
  return;
}



/* 197d:01e5 FUN_197d_01e5 */

undefined2 __cdecl16near FUN_197d_01e5(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) != 0);
  iVar4 = 0;
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return 0;
    }
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) == 0);
  out(0x43,0);
  uVar2 = in(0x40);
  uVar3 = in(0x40);
  return CONCAT11(uVar3,uVar2);
}



/* 19b0:0002 FUN_19b0_0002 */

void __cdecl16far FUN_19b0_0002(void)

{
  char cVar1;
  code *pcVar2;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  LOCK();
  cVar1 = *(char *)0x1755;
  *(char *)0x1755 = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    *(undefined2 *)0x1756 = in_BX;
    *(undefined2 *)0x1758 = unaff_ES;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    *(undefined2 *)0x175a = in_BX;
    *(undefined2 *)0x175c = unaff_ES;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



/* 19b0:003b FUN_19b0_003b */

void __cdecl16far FUN_19b0_003b(void)

{
  char cVar1;
  code *pcVar2;
  undefined2 unaff_DS;
  
  LOCK();
  cVar1 = *(char *)0x1755;
  *(char *)0x1755 = '\0';
  UNLOCK();
  if (cVar1 != '\0') {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



/* 19b7:0002 FUN_19b7_0002 */

void __cdecl16far FUN_19b7_0002(void)

{
  FUN_19b7_0014();
  return;
}



/* 19b7:0014 FUN_19b7_0014 */

void __cdecl16near FUN_19b7_0014(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int in_BX;
  undefined2 unaff_DS;
  
  iVar4 = *(int *)(in_BX + 0x1412);
  if (*(char *)0x7925 != '\0') {
    iVar4 = iVar4 << 1;
  }
  if (*(char *)0x7926 != '\0') {
    iVar4 = iVar4 >> (*(byte *)0x7926 & 0x1f);
  }
  if (iVar4 < 1) {
    *(undefined2 *)(in_BX + 0x1418) = 0x8000;
    *(undefined2 *)(in_BX + 0x141a) = 0x8000;
    *(undefined2 *)(in_BX + 0x1420) = 0x8000;
    *(undefined2 *)(in_BX + 0x1422) = 0x8000;
    return;
  }
  uVar2 = (uint)(CONCAT22((int)*(char *)(in_BX + 0x1403),*(undefined2 *)(in_BX + 0x1401)) /
                (long)iVar4);
  uVar1 = *(uint *)0xbd20;
  *(int *)(in_BX + 0x141a) = ((int)uVar2 >> 0xf) + (uint)CARRY2(uVar2,*(uint *)0xbd20);
  *(int *)(in_BX + 0x1418) = uVar2 + uVar1;
  uVar1 = *(uint *)(in_BX + 0x1409);
  uVar3 = (uint)*(char *)(in_BX + 0x140b);
  uVar2 = (uint)(((ulong)(((int)uVar3 >> 1 & 1U) != 0) << 0x10 |
                 (ulong)(CONCAT12((uVar3 & 1) != 0,uVar1) >> 1)) >> 1);
  uVar2 = (uint)(CONCAT22((((int)uVar3 >> 2) - uVar3) - (uint)(uVar2 < uVar1),uVar2 - uVar1) /
                (long)iVar4);
  uVar1 = *(uint *)0xbd22;
  *(int *)(in_BX + 0x1422) = ((int)uVar2 >> 0xf) + (uint)CARRY2(uVar2,*(uint *)0xbd22);
  *(int *)(in_BX + 0x1420) = uVar2 + uVar1;
  return;
}



/* 19b7:0097 FUN_19b7_0097 */

long FUN_19b7_0097(void)

{
  long lVar1;
  undefined2 in_AX;
  int in_CX;
  undefined2 in_DX;
  undefined1 uVar2;
  
  uVar2 = (undefined1)((uint)in_DX >> 8);
  lVar1 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11((char)in_DX,(char)((uint)in_AX >> 8))) /
          (long)in_CX;
  return (ulong)CONCAT21((int)(char)((ulong)lVar1 >> 8),(char)lVar1) << 8;
}



/* 19b7:00af FUN_19b7_00af */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19b7_00af(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x1762 = _LAB_0000_0000;
  _LAB_0000_0000 = 0x97;
  *(undefined2 *)0x1764 = uRam00000002;
  uRam00000002 = 0x19b7;
  return;
}



/* 19b7:00d3 FUN_19b7_00d3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_19b7_00d3(void)

{
  undefined2 unaff_DS;
  
  _LAB_0000_0000 = *(undefined2 *)0x1762;
  uRam00000002 = *(undefined2 *)0x1764;
  return;
}



/* 19c5:0008 FUN_19c5_0008 */

void __cdecl16far FUN_19c5_0008(void)

{
  thunk_EXT_FUN_0000_0000(0x19c5);
  return;
}



/* 19c5:0013 FUN_19c5_0013 */

void __cdecl16far FUN_19c5_0013(void)

{
  thunk_EXT_FUN_0000_0000(0x19c5);
  return;
}



/* 19c7:001a FUN_19c7_001a */

void FUN_19c7_001a(undefined2 param_1)

{
  uint in_stack_00000000;
  
  uRam00010016 = param_1;
  uRam00010014 = in_stack_00000000;
  FUN_19c7_1267();
                    /* WARNING: Could not recover jumptable at 0x00019c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)uRam00010014)();
  return;
}



/* 19c7:003e FUN_19c7_003e */

void FUN_19c7_003e(undefined2 param_1)

{
  uint in_stack_00000000;
  
  uRam00010016 = param_1;
  uRam00010014 = in_stack_00000000;
  FUN_19c7_0159();
                    /* WARNING: Could not recover jumptable at 0x00019cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)uRam00010014)();
  return;
}



/* 19c7:0050 FUN_19c7_0050 */

void FUN_19c7_0050(undefined2 param_1)

{
  uint in_stack_00000000;
  
  uRam00010016 = param_1;
  uRam00010014 = in_stack_00000000;
  FUN_19c7_0096();
                    /* WARNING: Could not recover jumptable at 0x00019ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)uRam00010014)();
  return;
}



/* 19c7:0062 FUN_19c7_0062 */

void FUN_19c7_0062(void)

{
  undefined2 in_stack_00000000;
  
  uRam00010018 = in_stack_00000000;
  FUN_1897_010c();
  return;
}



/* 19c7:0072 FUN_19c7_0072 */

void FUN_19c7_0072(undefined2 param_1)

{
  uint in_stack_00000000;
  
  uRam00010016 = param_1;
  uRam00010014 = in_stack_00000000;
  FUN_19c7_1caa();
                    /* WARNING: Could not recover jumptable at 0x00019cef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)uRam00010014)();
  return;
}



/* 19c7:0084 FUN_19c7_0084 */

void FUN_19c7_0084(undefined2 param_1)

{
  uint in_stack_00000000;
  
  uRam00010016 = param_1;
  uRam00010014 = in_stack_00000000;
  FUN_19c7_1097();
                    /* WARNING: Could not recover jumptable at 0x00019d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)uRam00010014)();
  return;
}



/* 19c7:0096 FUN_19c7_0096 */

int __cdecl16near FUN_19c7_0096(undefined2 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  uVar4 = (param_2 << 1) >> 0xf;
  uVar4 = (param_2 << 1 ^ uVar4) - uVar4;
  if (uVar4 < 0x100) {
    uVar4 = 0x100;
  }
  *(undefined2 *)0x37e2 = (int)(0x7fff00 / (ulong)uVar4);
  FUN_19c7_11d2(param_1,0x35ac);
  FUN_19c7_11a0(0x35ac,0x35be);
  iVar1 = -*(int *)0x37e2;
  *(uint *)0x35b0 =
       (uint)(((ulong)((long)iVar1 * (long)*(int *)0x35b0) >> 0x10) << 1) |
       (uint)((int)((long)iVar1 * (long)*(int *)0x35b0) < 0);
  *(uint *)0x35b6 =
       (uint)(((ulong)((long)iVar1 * (long)*(int *)0x35b6) >> 0x10) << 1) |
       (uint)((int)((long)iVar1 * (long)*(int *)0x35b6) < 0);
  iVar2 = (int)((long)iVar1 * (long)*(int *)0x35bc);
  iVar3 = iVar2 << 1;
  *(uint *)0x35bc =
       (uint)(((ulong)((long)iVar1 * (long)*(int *)0x35bc) >> 0x10) << 1) | (uint)(iVar2 < 0);
  *(int *)0x35ac = *(int *)0x35ac >> 1;
  *(int *)0x35b2 = *(int *)0x35b2 >> 1;
  *(int *)0x35b8 = *(int *)0x35b8 >> 1;
  *(int *)0x35ae = *(int *)0x35ae >> 1;
  *(int *)0x35b4 = *(int *)0x35b4 >> 1;
  *(int *)0x35ba = *(int *)0x35ba >> 1;
  if (*(int *)0x37ee == 0) {
    *(int *)0x35ae = -*(int *)0x35ae - (-*(int *)0x35ae >> 2);
    *(int *)0x35b4 = -*(int *)0x35b4 - (-*(int *)0x35b4 >> 2);
    iVar3 = -*(int *)0x35ba - (-*(int *)0x35ba >> 2);
    *(int *)0x35ba = iVar3;
  }
  else {
    *(int *)0x35ae = -*(int *)0x35ae;
    *(int *)0x35b4 = -*(int *)0x35b4;
    *(int *)0x35ba = -*(int *)0x35ba;
  }
  return iVar3;
}



/* 19c7:0159 FUN_19c7_0159 */

void __cdecl16near
FUN_19c7_0159(uint param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  uint *puVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 unaff_DS;
  bool bVar6;
  
  uVar2 = *(undefined2 *)0x3906;
  if (*(uint *)0x0 <= param_1) {
    return;
  }
  *(undefined2 *)0x3750 = param_2;
  *(undefined2 *)0x3752 = param_3;
  *(undefined2 *)0x3754 = param_4;
  *(undefined2 *)0x37d0 = param_5;
  *(undefined2 *)0x37d2 = param_6;
  FUN_19c7_11ec(0x3750,0x35ac,0x3756);
  puVar5 = (uint *)*(undefined2 *)(param_1 * 2 + 2);
  uVar4 = (int)*(uint *)0x3760 >> 0xf;
  do {
    puVar1 = puVar5;
    uVar3 = puVar5[1];
    puVar5 = puVar5 + 2;
  } while (*puVar1 < (*(uint *)0x3760 ^ uVar4) - uVar4);
  bVar6 = uVar3 == 0xfffe;
  FUN_19c7_022b();
  if (bVar6) {
    FUN_19c7_0290();
    *(undefined2 *)0x37e0 = *(undefined2 *)(uVar3 + 4);
    FUN_19c7_04c8();
    FUN_19c7_01f6();
    FUN_19c7_05fa();
    FUN_19c7_087c();
    FUN_19c7_0ac3();
    FUN_19c7_0217();
  }
  return;
}



/* 19c7:01f6 FUN_19c7_01f6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_01f6(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x196a = _LAB_0000_0000;
  *(undefined2 *)0x196c = uRam00000002;
  uRam00000002 = 0x19c7;
  _LAB_0000_0000 = 0x861;
  return;
}



/* 19c7:0217 FUN_19c7_0217 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_19c7_0217(void)

{
  undefined2 unaff_DS;
  
  _LAB_0000_0000 = *(undefined2 *)0x196a;
  uRam00000002 = *(undefined2 *)0x196c;
  return;
}



/* 19c7:022b FUN_19c7_022b */

undefined2 __cdecl16near FUN_19c7_022b(void)

{
  int in_AX;
  uint uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar1 = (int)*(uint *)0x3760 >> 0xf;
  if (((((*(uint *)0x3760 ^ uVar1) - uVar1) + 1) * 2 < *(uint *)0x37e2) &&
     (uVar1 = *(int *)0x3760 + in_AX + *(int *)0x3760, -1 < (int)uVar1)) {
    uVar2 = *(uint *)0x3758;
    if ((int)uVar2 < 0) {
      uVar2 = ~uVar2 + (uint)(0xfffe < ~*(uint *)0x3756);
    }
    if (uVar2 <= uVar1) {
      uVar2 = *(uint *)0x375c;
      if ((int)uVar2 < 0) {
        uVar2 = ~uVar2 + (uint)(0xfffe < ~*(uint *)0x375a);
      }
      if (uVar2 <= uVar1) {
        return 0;
      }
    }
  }
  return 0xffff;
}



/* 19c7:0290 FUN_19c7_0290 */

void __cdecl16near FUN_19c7_0290(void)

{
  undefined2 uVar1;
  int in_CX;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  byte *unaff_SI;
  undefined2 uVar5;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  int *piVar6;
  int iVar7;
  
  *(int *)0x37dc = in_CX;
  *(int *)0x36f0 = -*(int *)0x3750;
  *(int *)0x36f2 = -*(int *)0x3752;
  *(int *)0x36f4 = -*(int *)0x3754;
  if (in_CX < 1) {
    *(undefined2 *)0x37d4 = 0x35ac;
    return;
  }
  *(undefined2 *)0x37d4 = 0x35d0;
  uVar5 = 0x35ac;
  iVar4 = *(int *)0x37d0;
  while( true ) {
    iVar7 = *(int *)0x37d4;
    FUN_19c7_1144(iVar4,uVar5,iVar7);
    FUN_19c7_11a0(iVar4,iVar7 + 0x12);
    *(int *)0x37d4 = *(int *)0x37d4 + 0x24;
    in_CX = in_CX + -1;
    if (in_CX == 0) break;
    uVar5 = *(undefined2 *)((uint)*unaff_SI * 2 + *(int *)0x37d2);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = uVar5;
    if ((unaff_SI[1] != 1) && (uVar3 = 0, uVar1 = uVar5, '\0' < (char)unaff_SI[1])) {
      uVar1 = 0;
      uVar2 = uVar5;
    }
    unaff_SI = unaff_SI + 2;
    iVar4 = *(int *)0x37d4 + 0x24;
    FUN_19c7_1267(uVar1,uVar3,uVar2);
    uVar5 = 0x35d0;
  }
  *(undefined2 *)0x37d4 = 0x35d0;
  *(undefined2 *)0x3762 = *(undefined2 *)0x3756;
  *(undefined2 *)0x3764 = *(undefined2 *)0x3758;
  *(undefined2 *)0x3766 = *(undefined2 *)0x375a;
  *(undefined2 *)0x3768 = *(undefined2 *)0x375c;
  *(undefined2 *)0x376a = *(undefined2 *)0x375e;
  *(undefined2 *)0x376c = *(undefined2 *)0x3760;
  *(undefined2 *)0x37da = 0x3762;
  iVar4 = *(int *)0x37dc;
  iVar7 = 0x35e2;
  piVar6 = (int *)0x36f0;
  FUN_19c7_1097(0x36f0,0x35e2);
  FUN_19c7_0434();
  while( true ) {
    *(int *)0x37da = *(int *)0x37da + 0xc;
    piVar6 = piVar6 + 3;
    iVar7 = iVar7 + 0x24;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) break;
    FUN_19c7_03ab();
    *piVar6 = *(int *)0x36f0 - *(int *)unaff_SI;
    piVar6[1] = *(int *)0x36f2 - *(int *)(unaff_SI + 2);
    piVar6[2] = *(int *)0x36f4 - *(int *)(unaff_SI + 4);
    unaff_SI = unaff_SI + 6;
    FUN_19c7_1097(piVar6,iVar7);
    FUN_19c7_045e();
  }
  return;
}



/* 19c7:03ab FUN_19c7_03ab */

void __cdecl16near FUN_19c7_03ab(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int *in_BX;
  int *unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  *in_BX = *unaff_SI;
  in_BX[1] = unaff_SI[1];
  in_BX[2] = unaff_SI[2];
  FUN_19c7_11ec();
  *in_BX = -*in_BX;
  in_BX[1] = -in_BX[1];
  in_BX[2] = -in_BX[2];
  FUN_19c7_11ec(in_BX,unaff_DI + -0x12,*(undefined2 *)0x37da);
  puVar4 = (uint *)*(undefined2 *)0x37da;
  uVar3 = *(uint *)0x3756;
  puVar1 = puVar4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  puVar4[1] = puVar4[1] + *(int *)0x3758 + (uint)CARRY2(uVar2,uVar3);
  uVar3 = *(uint *)0x37c2;
  puVar1 = puVar4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  puVar4[1] = puVar4[1] + *(int *)0x37c4 + (uint)CARRY2(uVar2,uVar3);
  uVar3 = *(uint *)0x375a;
  puVar1 = puVar4 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  puVar4[3] = puVar4[3] + *(int *)0x375c + (uint)CARRY2(uVar2,uVar3);
  uVar3 = *(uint *)0x37c6;
  puVar1 = puVar4 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  puVar4[3] = puVar4[3] + *(int *)0x37c8 + (uint)CARRY2(uVar2,uVar3);
  uVar3 = *(uint *)0x375e;
  puVar1 = puVar4 + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  puVar4[5] = puVar4[5] + *(int *)0x3760 + (uint)CARRY2(uVar2,uVar3);
  uVar3 = *(uint *)0x37ca;
  puVar1 = puVar4 + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  puVar4[5] = puVar4[5] + *(int *)0x37cc + (uint)CARRY2(uVar2,uVar3);
  return;
}



/* 19c7:0434 FUN_19c7_0434 */

void __cdecl16near FUN_19c7_0434(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x37f8 = 0x3720;
  *(undefined2 *)0x3720 = *(undefined2 *)0x37fe;
  *(undefined2 *)0x3722 = *(undefined2 *)0x3800;
  *(undefined2 *)0x3724 = *(undefined2 *)0x3802;
  FUN_19c7_1097(0x3720);
  *(int *)0x37f8 = *(int *)0x37f8 + 6;
  return;
}



/* 19c7:045e FUN_19c7_045e */

void __cdecl16near FUN_19c7_045e(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)*(undefined2 *)0x37f8;
  *puVar1 = *(undefined2 *)0x3720;
  puVar1[1] = *(undefined2 *)0x3722;
  puVar1[2] = *(undefined2 *)0x3724;
  FUN_19c7_1097(puVar1);
  *(int *)0x37f8 = *(int *)0x37f8 + 6;
  return;
}



/* 19c7:04c8 FUN_19c7_04c8 */

int __cdecl16near FUN_19c7_04c8(void)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  uint *unaff_SI;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  byte *pbVar10;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  uVar5 = *unaff_SI;
  puVar8 = unaff_SI + 1;
  *(uint *)0x37de = uVar5;
  if (uVar5 == 0) {
    return 0;
  }
  iVar3 = (uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf);
  iVar9 = 0;
  piVar6 = (int *)0x36f0;
  *(undefined2 *)0x37f8 = 0x3720;
  do {
    *(undefined1 *)0x37ec = 0xff;
    puVar7 = puVar8;
    while( true ) {
      while( true ) {
        uVar5 = *puVar7;
        puVar8 = puVar7 + 1;
        if ((char)(uVar5 >> 8) != -0x80) break;
        uVar5 = uVar5 & 0xff;
        *(int *)0x37f8 = uVar5 * 2;
        piVar6 = (int *)(uVar5 * 6 + 0x36f0);
        *(int *)0x37f8 = *(int *)0x37f8 + uVar5 * 4;
        *(int *)0x37f8 = *(int *)0x37f8 + 0x3720;
        puVar7 = puVar8;
      }
      if (uVar5 != 0x8100) break;
      pbVar10 = (byte *)((int)puVar7 + 3);
      puVar7 = puVar7 + 2;
      if ((int)(char)*pbVar10 != *(int *)(((byte)*puVar8 & 0x1f) * 2 + *(int *)0x37d2)) {
        *(undefined1 *)0x37ec = 0x7f;
      }
    }
    lVar2 = (long)(int)*puVar8 * (long)piVar6[1] + (long)(int)uVar5 * (long)*piVar6 +
            (long)(int)puVar7[2] * (long)piVar6[2];
    puVar8 = puVar7 + 5;
    bVar4 = ~(byte)((int)((int)((ulong)lVar2 >> 0x10) + puVar7[4] +
                         (uint)CARRY2((uint)lVar2,puVar7[3])) >> 0xf) & *(byte *)0x37ec;
    *(byte *)(iVar9 + 0x3186) = bVar4;
    if ((char)bVar4 < '\0') {
      FUN_19c7_05b9();
    }
    iVar9 = iVar9 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_19c7_0599();
  uVar5 = (int)*(uint *)0x37de >> 0xf;
  iVar3 = (*(uint *)0x37de ^ uVar5) - uVar5;
  pbVar10 = (byte *)0x3186;
  do {
    uVar5 = (uint)(byte)*puVar8;
    puVar8 = (uint *)((int)puVar8 + 1);
    if (uVar5 != 0) {
      if (*pbVar10 < 0x80) {
        puVar8 = (uint *)((int)puVar8 + uVar5);
      }
      else {
        do {
          puVar1 = puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          *(undefined1 *)((byte)*puVar1 + 0x3486) = 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    pbVar10 = pbVar10 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)0x37de < 0) {
    FUN_19c7_0ca9(puVar8);
    return *(int *)0x37de * -2 + 1;
  }
  return 1;
}



/* 19c7:0599 FUN_19c7_0599 */

void __cdecl16near FUN_19c7_0599(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  
  uVar2 = (int)*(uint *)0x37e0 >> 0xf;
  puVar3 = (undefined2 *)0x3486;
  for (uVar2 = ((*(uint *)0x37e0 ^ uVar2) - uVar2) + 2 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  return;
}



/* 19c7:05b9 FUN_19c7_05b9 */

void __cdecl16near FUN_19c7_05b9(void)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  piVar1 = (int *)*(int *)0x37f8;
  uVar2 = (long)*(int *)(unaff_SI + -8) * (long)piVar1[1] +
          (long)*(int *)(unaff_SI + -10) * (long)*piVar1 +
          (long)*(int *)(unaff_SI + -6) * (long)piVar1[2];
  iVar3 = (int)uVar2;
  *(byte *)(unaff_DI + 0x3286) =
       (byte)(((uVar2 >> 0x10 & 0x7fff) << 1 | (ulong)(iVar3 < 0)) << 1) | iVar3 << 1 < 0;
  return;
}



/* 19c7:05fa FUN_19c7_05fa */

void __cdecl16near FUN_19c7_05fa(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *unaff_SI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar5 = *(int *)0x37e0;
  if (iVar5 != 0) {
    if (iVar5 < 0) {
      iVar5 = -iVar5;
      *(undefined2 *)0x37ce = 0xc877;
      do {
        iVar4 = (uint)(byte)*unaff_SI * 0x10;
        uVar1 = *(uint *)(iVar4 + 0x196a);
        iVar6 = *(int *)(iVar4 + 0x196c);
        uVar2 = *(uint *)0x3756;
        iVar3 = *(int *)0x3758;
        *(int *)(iVar4 + -0x3789) = uVar1 + *(uint *)0x3756;
        *(int *)(iVar4 + -0x3787) = iVar6 + iVar3 + (uint)CARRY2(uVar1,uVar2);
        uVar1 = *(uint *)(iVar4 + 0x196e);
        iVar6 = *(int *)(iVar4 + 0x1970);
        uVar2 = *(uint *)0x375a;
        iVar3 = *(int *)0x375c;
        *(int *)(iVar4 + -0x3785) = uVar1 + *(uint *)0x375a;
        *(int *)(iVar4 + -0x3783) = iVar6 + iVar3 + (uint)CARRY2(uVar1,uVar2);
        uVar1 = *(uint *)(iVar4 + 0x1972);
        iVar6 = *(int *)(iVar4 + 0x1974);
        uVar2 = *(uint *)0x375e;
        iVar3 = *(int *)0x3760;
        *(int *)(iVar4 + -0x3781) = uVar1 + *(uint *)0x375e;
        *(int *)(iVar4 + -0x377f) = iVar6 + iVar3 + (uint)CARRY2(uVar1,uVar2);
        FUN_19c7_07fd();
        unaff_SI = (uint *)((int)unaff_SI + 1);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return;
    }
    *(undefined2 *)0x37ce = 0xc877;
    if (*(int *)0x37de != 0) {
      iVar6 = 0;
      do {
        while( true ) {
          for (; (uVar1 = *unaff_SI, 0x7fff < uVar1 && (uVar1 < 0x8010)); unaff_SI = unaff_SI + 1) {
            iVar3 = (uVar1 & 0xf) * 0xc;
            *(undefined2 *)0x3756 = *(undefined2 *)(iVar3 + 0x3762);
            *(undefined2 *)0x3758 = *(undefined2 *)(iVar3 + 0x3764);
            *(undefined2 *)0x375a = *(undefined2 *)(iVar3 + 0x3766);
            *(undefined2 *)0x375c = *(undefined2 *)(iVar3 + 0x3768);
            *(undefined2 *)0x375e = *(undefined2 *)(iVar3 + 0x376a);
            *(undefined2 *)0x3760 = *(undefined2 *)(iVar3 + 0x376c);
          }
          if (*(char *)(iVar6 + 0x3486) != '\0') break;
          unaff_SI = unaff_SI + 3;
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) {
            return;
          }
        }
        FUN_19c7_075a();
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return;
    }
    do {
      FUN_19c7_075a();
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



/* 19c7:075a FUN_19c7_075a */

void __cdecl16near FUN_19c7_075a(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *in_BX;
  undefined2 unaff_BP;
  uint *unaff_SI;
  uint *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  for (; (uVar2 = *unaff_SI, 0x7fff < uVar2 && (uVar2 < 0x8010)); unaff_SI = unaff_SI + 1) {
    iVar5 = (uVar2 & 0xff) * 0xc;
    in_BX = (int *)(*(int *)0x37d4 + (uVar2 & 0xff) * 0x24);
    *(undefined2 *)0x3756 = *(undefined2 *)(iVar5 + 0x3762);
    *(undefined2 *)0x3758 = *(undefined2 *)(iVar5 + 0x3764);
    *(undefined2 *)0x375a = *(undefined2 *)(iVar5 + 0x3766);
    *(undefined2 *)0x375c = *(undefined2 *)(iVar5 + 0x3768);
    *(undefined2 *)0x375e = *(undefined2 *)(iVar5 + 0x376a);
    *(undefined2 *)0x3760 = *(undefined2 *)(iVar5 + 0x376c);
  }
  uVar3 = unaff_SI[1];
  uVar4 = unaff_SI[2];
  iVar5 = *in_BX;
  *unaff_DI = (uint)((long)(int)uVar2 * (long)iVar5);
  unaff_DI[1] = (uint)((ulong)((long)(int)uVar2 * (long)iVar5) >> 0x10);
  iVar5 = in_BX[1];
  unaff_DI[2] = (uint)((long)(int)uVar2 * (long)iVar5);
  unaff_DI[3] = (uint)((ulong)((long)(int)uVar2 * (long)iVar5) >> 0x10);
  iVar5 = in_BX[2];
  unaff_DI[4] = (uint)((long)(int)uVar2 * (long)iVar5);
  unaff_DI[5] = (uint)((ulong)((long)(int)uVar2 * (long)iVar5) >> 0x10);
  iVar5 = in_BX[3];
  uVar7 = (uint)((long)(int)uVar3 * (long)iVar5);
  puVar1 = unaff_DI;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  unaff_DI[1] = unaff_DI[1] + (int)((ulong)((long)(int)uVar3 * (long)iVar5) >> 0x10) +
                (uint)CARRY2(uVar2,uVar7);
  iVar5 = in_BX[4];
  uVar7 = (uint)((long)(int)uVar3 * (long)iVar5);
  puVar1 = unaff_DI + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  unaff_DI[3] = unaff_DI[3] + (int)((ulong)((long)(int)uVar3 * (long)iVar5) >> 0x10) +
                (uint)CARRY2(uVar2,uVar7);
  iVar5 = in_BX[5];
  uVar7 = (uint)((long)(int)uVar3 * (long)iVar5);
  puVar1 = unaff_DI + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  unaff_DI[5] = unaff_DI[5] + (int)((ulong)((long)(int)uVar3 * (long)iVar5) >> 0x10) +
                (uint)CARRY2(uVar2,uVar7);
  iVar5 = in_BX[6];
  uVar7 = (uint)((long)(int)uVar4 * (long)iVar5);
  uVar3 = *(uint *)0x3756;
  uVar8 = uVar7 + *(uint *)0x3756;
  iVar6 = *(int *)0x3758;
  puVar1 = unaff_DI;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar8;
  unaff_DI[1] = unaff_DI[1] +
                (int)((ulong)((long)(int)uVar4 * (long)iVar5) >> 0x10) + iVar6 +
                (uint)CARRY2(uVar7,uVar3) + (uint)CARRY2(uVar2,uVar8);
  iVar5 = in_BX[7];
  uVar7 = (uint)((long)(int)uVar4 * (long)iVar5);
  uVar3 = *(uint *)0x375a;
  uVar8 = uVar7 + *(uint *)0x375a;
  iVar6 = *(int *)0x375c;
  puVar1 = unaff_DI + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar8;
  unaff_DI[3] = unaff_DI[3] +
                (int)((ulong)((long)(int)uVar4 * (long)iVar5) >> 0x10) + iVar6 +
                (uint)CARRY2(uVar7,uVar3) + (uint)CARRY2(uVar2,uVar8);
  iVar5 = in_BX[8];
  uVar7 = (uint)((long)(int)uVar4 * (long)iVar5);
  uVar3 = *(uint *)0x375e;
  uVar8 = uVar7 + *(uint *)0x375e;
  iVar6 = *(int *)0x3760;
  puVar1 = unaff_DI + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar8;
  unaff_DI[5] = unaff_DI[5] +
                (int)((ulong)((long)(int)uVar4 * (long)iVar5) >> 0x10) + iVar6 +
                (uint)CARRY2(uVar7,uVar3) + (uint)CARRY2(uVar2,uVar8);
  FUN_19c7_07fd(unaff_BP);
  return;
}



/* 19c7:07fd FUN_19c7_07fd */

void __cdecl16near FUN_19c7_07fd(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_BX;
  undefined2 *unaff_DI;
  undefined2 unaff_DS;
  
  iVar2 = unaff_DI[5];
  if (0xff < iVar2) {
    iVar1 = (int)(CONCAT22((int)*(char *)((int)unaff_DI + 3),*(undefined2 *)((int)unaff_DI + 1)) /
                 (long)iVar2);
    *in_BX = iVar1;
    in_BX[1] = iVar1 >> 0xf;
    iVar2 = (int)(CONCAT22((int)*(char *)((int)unaff_DI + 7),*(undefined2 *)((int)unaff_DI + 5)) /
                 (long)iVar2);
    in_BX[2] = iVar2;
    in_BX[3] = iVar2 >> 0xf;
    return;
  }
  if (iVar2 < 1) {
    in_BX[1] = -0x8000;
    return;
  }
  uVar3 = *(uint *)((int)unaff_DI + 9) >> 1;
  iVar2 = (int)((long)((ulong)(uint)((int)unaff_DI[1] >> 1) << 0x10 |
                      (ulong)(CONCAT12((unaff_DI[1] & 1) != 0,*unaff_DI) >> 1)) / (long)(int)uVar3);
  *in_BX = iVar2;
  in_BX[1] = iVar2 >> 0xf;
  iVar2 = (int)((long)((ulong)(uint)((int)unaff_DI[3] >> 1) << 0x10 |
                      (ulong)(CONCAT12((unaff_DI[3] & 1) != 0,unaff_DI[2]) >> 1)) / (long)(int)uVar3
               );
  in_BX[2] = iVar2;
  in_BX[3] = iVar2 >> 0xf;
  return;
}



/* 19c7:0861 FUN_19c7_0861 */

long FUN_19c7_0861(void)

{
  long lVar1;
  undefined2 in_AX;
  int in_CX;
  undefined2 in_DX;
  
  lVar1 = CONCAT22((int)(char)((uint)in_DX >> 8),CONCAT11((char)in_DX,(char)((uint)in_AX >> 8))) /
          (long)in_CX;
  return (ulong)CONCAT21((int)(char)((ulong)lVar1 >> 8),(char)lVar1) << 8;
}



/* 19c7:087c FUN_19c7_087c */

void __cdecl16near FUN_19c7_087c(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *unaff_SI;
  uint *puVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar3 = 0x196e;
  puVar4 = (uint *)(unaff_SI + 1);
  for (iVar2 = *unaff_SI; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    if ((*(int *)0x37de == 0) ||
       ((*(byte *)((*puVar1 & 0xff) + 0x3486) & *(byte *)((*puVar1 >> 8) + 0x3486)) != 0)) {
      FUN_19c7_0987(puVar4,iVar3);
    }
    iVar3 = iVar3 + 0x18;
  }
  return;
}



/* 19c7:08c6 FUN_19c7_08c6 */

void __cdecl16near FUN_19c7_08c6(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int in_BX;
  int iVar6;
  int iVar7;
  int *unaff_SI;
  int unaff_DI;
  int iVar8;
  undefined2 unaff_DS;
  
  uVar4 = *(uint *)(unaff_DI + -0x2789);
  iVar5 = *(int *)(unaff_DI + -0x2787);
  uVar1 = *(uint *)0x39ac;
  *unaff_SI = uVar4 + *(uint *)0x39ac;
  unaff_SI[1] = iVar5 + (uint)CARRY2(uVar4,uVar1);
  uVar4 = *(uint *)(unaff_DI + -0x2785);
  iVar5 = *(int *)(unaff_DI + -0x2783);
  uVar1 = *(uint *)0x39ae;
  unaff_SI[2] = uVar4 + *(uint *)0x39ae;
  unaff_SI[3] = iVar5 + (uint)CARRY2(uVar4,uVar1);
  iVar8 = unaff_DI * 2;
  iVar6 = in_BX * 2;
  iVar3 = *(int *)(iVar8 + -0x377f) - *(int *)(iVar6 + -0x377f);
  iVar7 = 1 - *(int *)(iVar6 + -0x377f);
  iVar5 = (int)(((long)(int)((*(int *)(iVar8 + -0x3787) - *(int *)(iVar6 + -0x3787)) -
                            (uint)(*(uint *)(iVar8 + -0x3789) < *(uint *)(iVar6 + -0x3789))) *
                (long)iVar7) / (long)iVar3) + *(int *)(iVar6 + -0x3787);
  uVar4 = CONCAT11((char)iVar5,(char)((uint)*(undefined2 *)(iVar6 + -0x3789) >> 8));
  iVar2 = uVar4 + *(uint *)0x39ac;
  iVar5 = (int)(char)((uint)iVar5 >> 8) + (uint)CARRY2(uVar4,*(uint *)0x39ac);
  unaff_SI[4] = iVar2;
  unaff_SI[5] = iVar5;
  unaff_SI[8] = iVar2;
  unaff_SI[9] = iVar5;
  iVar5 = (int)(((long)(int)((*(int *)(iVar8 + -0x3783) - *(int *)(iVar6 + -0x3783)) -
                            (uint)(*(uint *)(iVar8 + -0x3785) < *(uint *)(iVar6 + -0x3785))) *
                (long)iVar7) / (long)iVar3) + *(int *)(iVar6 + -0x3783);
  uVar4 = CONCAT11((char)iVar5,(char)((uint)*(undefined2 *)(iVar6 + -0x3785) >> 8));
  iVar2 = uVar4 + *(uint *)0x39ae;
  iVar5 = (int)(char)((uint)iVar5 >> 8) + (uint)CARRY2(uVar4,*(uint *)0x39ae);
  unaff_SI[6] = iVar2;
  unaff_SI[7] = iVar5;
  unaff_SI[10] = iVar2;
  unaff_SI[0xb] = iVar5;
  FUN_19c7_19d4();
  unaff_SI[1] = unaff_SI[1] | 0x4040;
  return;
}



/* 19c7:0987 FUN_19c7_0987 */

void __cdecl16near FUN_19c7_0987(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int in_BX;
  int iVar6;
  int *unaff_BP;
  int iVar7;
  int unaff_DI;
  int iVar8;
  undefined2 unaff_DS;
  
  if (*(int *)(unaff_DI + -0x2787) == -0x8000) {
    if (*(int *)(in_BX + -0x2787) == -0x8000) {
      unaff_BP[1] = -0x7f80;
      return;
    }
    uVar4 = *(uint *)(in_BX + -0x2789);
    iVar5 = *(int *)(in_BX + -0x2787);
    uVar1 = *(uint *)0x39ac;
    unaff_BP[4] = uVar4 + *(uint *)0x39ac;
    unaff_BP[5] = iVar5 + (uint)CARRY2(uVar4,uVar1);
    uVar4 = *(uint *)(in_BX + -0x2785);
    iVar5 = *(int *)(in_BX + -0x2783);
    uVar1 = *(uint *)0x39ae;
    unaff_BP[6] = uVar4 + *(uint *)0x39ae;
    unaff_BP[7] = iVar5 + (uint)CARRY2(uVar4,uVar1);
    iVar8 = unaff_DI * 2;
    iVar6 = in_BX * 2;
    iVar3 = *(int *)(iVar6 + -0x377f) - *(int *)(iVar8 + -0x377f);
    iVar7 = 1 - *(int *)(iVar8 + -0x377f);
    iVar5 = (int)(((long)(int)((*(int *)(iVar6 + -0x3787) - *(int *)(iVar8 + -0x3787)) -
                              (uint)(*(uint *)(iVar6 + -0x3789) < *(uint *)(iVar8 + -0x3789))) *
                  (long)iVar7) / (long)iVar3) + *(int *)(iVar8 + -0x3787);
    uVar4 = CONCAT11((char)iVar5,(char)((uint)*(undefined2 *)(iVar8 + -0x3789) >> 8));
    iVar2 = uVar4 + *(uint *)0x39ac;
    iVar5 = (int)(char)((uint)iVar5 >> 8) + (uint)CARRY2(uVar4,*(uint *)0x39ac);
    *unaff_BP = iVar2;
    unaff_BP[1] = iVar5;
    unaff_BP[8] = iVar2;
    unaff_BP[9] = iVar5;
    iVar5 = (int)(((long)(int)((*(int *)(iVar6 + -0x3783) - *(int *)(iVar8 + -0x3783)) -
                              (uint)(*(uint *)(iVar6 + -0x3785) < *(uint *)(iVar8 + -0x3785))) *
                  (long)iVar7) / (long)iVar3) + *(int *)(iVar8 + -0x3783);
    uVar4 = CONCAT11((char)iVar5,(char)((uint)*(undefined2 *)(iVar8 + -0x3785) >> 8));
    iVar2 = uVar4 + *(uint *)0x39ae;
    iVar5 = (int)(char)((uint)iVar5 >> 8) + (uint)CARRY2(uVar4,*(uint *)0x39ae);
    unaff_BP[2] = iVar2;
    unaff_BP[3] = iVar5;
    unaff_BP[10] = iVar2;
    unaff_BP[0xb] = iVar5;
    FUN_19c7_19d4();
    unaff_BP[1] = unaff_BP[1] | 0x4040;
    return;
  }
  if (*(int *)(in_BX + -0x2787) == -0x8000) {
    FUN_19c7_08c6();
    return;
  }
  uVar4 = *(uint *)(unaff_DI + -0x2789);
  iVar5 = *(int *)(unaff_DI + -0x2787);
  uVar1 = *(uint *)0x39ac;
  *unaff_BP = uVar4 + *(uint *)0x39ac;
  unaff_BP[1] = iVar5 + (uint)CARRY2(uVar4,uVar1);
  uVar4 = *(uint *)(unaff_DI + -0x2785);
  iVar5 = *(int *)(unaff_DI + -0x2783);
  uVar1 = *(uint *)0x39ae;
  unaff_BP[2] = uVar4 + *(uint *)0x39ae;
  unaff_BP[3] = iVar5 + (uint)CARRY2(uVar4,uVar1);
  uVar4 = *(uint *)(in_BX + -0x2789);
  iVar5 = *(int *)(in_BX + -0x2787);
  uVar1 = *(uint *)0x39ac;
  unaff_BP[4] = uVar4 + *(uint *)0x39ac;
  unaff_BP[5] = iVar5 + (uint)CARRY2(uVar4,uVar1);
  uVar4 = *(uint *)(in_BX + -0x2785);
  iVar5 = *(int *)(in_BX + -0x2783);
  uVar1 = *(uint *)0x39ae;
  unaff_BP[6] = uVar4 + *(uint *)0x39ae;
  unaff_BP[7] = iVar5 + (uint)CARRY2(uVar4,uVar1);
  FUN_19c7_19d4();
  return;
}



/* 19c7:0ac3 FUN_19c7_0ac3 */

void __cdecl16near FUN_19c7_0ac3(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)0x37de;
  if (iVar2 < 0) {
    pcVar3 = (char *)0x3386;
    while (pcVar1 = pcVar3, pcVar3 = pcVar3 + 1, *pcVar1 != -1) {
      FUN_19c7_0af5();
    }
    return;
  }
  if (iVar2 != 0) {
    do {
      FUN_19c7_0af5();
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return;
  }
  iVar2 = 1;
  do {
    FUN_19c7_0b36();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* 19c7:0af5 FUN_19c7_0af5 */

void __cdecl16near FUN_19c7_0af5(void)

{
  int in_BX;
  undefined2 unaff_DS;
  
  if (0x7f < *(byte *)(in_BX + 0x3186)) {
    *(undefined1 *)0x3804 = *(undefined1 *)(in_BX + 0x3286);
    FUN_19c7_0b36();
  }
  return;
}



/* 19c7:0b36 FUN_19c7_0b36 */

void __cdecl16near FUN_19c7_0b36(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 extraout_AH;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  byte *unaff_SI;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  while( true ) {
    do {
      while( true ) {
        pbVar7 = unaff_SI;
        bVar2 = *pbVar7;
        pbVar8 = pbVar7 + 1;
        if (bVar2 == 0xff) {
          return;
        }
        if ((bVar2 & 0x80) != 0) break;
        if ((bVar2 & 0x20) == 0) {
          if ((bVar2 & 0x40) == 0) {
            uVar6 = (uint)bVar2;
            *(uint *)0x37f2 = uVar6;
            *(undefined2 *)0x37f4 = pbVar8;
            if (pbVar8[uVar6] == 0xff) {
              unaff_SI = pbVar8 + uVar6 + 1;
            }
            else {
              do {
                pbVar7 = pbVar8;
                pbVar8 = pbVar7 + 1;
                FUN_19c7_1660();
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
              unaff_SI = pbVar7 + 2;
              uVar3 = *(undefined1 *)(ulong)(*(int *)0x37fa + (uint)*pbVar8);
              uVar4 = CONCAT11(extraout_AH,uVar3);
              if (*(int *)0x37f0 == 0) {
                if (*(int *)0x399e == 0x4d) {
                  uVar4 = FUN_19c7_0062(CONCAT11(*(undefined1 *)0x3804,uVar3));
                }
                FUN_19c7_172a(uVar4);
              }
              else {
                uVar4 = FUN_19c7_0062(uVar4);
                FUN_19c7_172a(uVar4);
                pbVar8 = (byte *)*(undefined2 *)0x37f4;
                iVar5 = *(int *)0x37f2;
                FUN_19c7_1ce9();
                do {
                  pbVar1 = pbVar8;
                  pbVar8 = pbVar8 + 1;
                  if ((*(uint *)((uint)*pbVar1 * 0x18 + 0x1970) & 0x80) == 0) {
                    FUN_19c7_1cf1();
                  }
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
            }
          }
          else {
            uVar6 = bVar2 & 0x1f;
            unaff_SI = pbVar7 + 2;
            FUN_19c7_1ce9();
            do {
              pbVar1 = unaff_SI;
              unaff_SI = unaff_SI + 1;
              if ((*(uint *)((uint)*pbVar1 * 0x18 + 0x1970) & 0x80) == 0) {
                FUN_19c7_1cf1();
              }
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
        }
        else {
          uVar6 = bVar2 & 0x1f;
          bVar2 = *pbVar8;
          unaff_SI = pbVar7 + 2;
          do {
            pbVar1 = unaff_SI;
            unaff_SI = unaff_SI + 1;
            iVar5 = (uint)*pbVar1 * 8;
            if (((*(int *)(iVar5 + -0x2787) != -0x8000) &&
                (*(int *)(iVar5 + -0x2787) +
                 (uint)CARRY2(*(uint *)(iVar5 + -0x2789),*(uint *)0x39ac) + 1 < 2)) &&
               (*(int *)(iVar5 + -0x2783) + (uint)CARRY2(*(uint *)(iVar5 + -0x2785),*(uint *)0x39ae)
                + 1 < 2)) {
              FUN_19c7_1ce1(*(uint *)(iVar5 + -0x2789) + *(uint *)0x39ac,
                            *(uint *)(iVar5 + -0x2785) + *(uint *)0x39ae,bVar2);
            }
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      unaff_SI = pbVar7 + 2;
    } while ((int)(char)*pbVar8 == *(int *)((bVar2 & 0x7f) * 2 + *(int *)0x37d2));
    bVar2 = pbVar7[2];
    if (bVar2 == 0xff) break;
    unaff_SI = pbVar7 + (bVar2 & 0x1f) + 4;
  }
  return;
}



/* 19c7:0ca9 FUN_19c7_0ca9 */

void __cdecl16near FUN_19c7_0ca9(void)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined2 in_BX;
  int iVar5;
  int iVar6;
  byte *unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  uint in_stack_00000000;
  
  *(undefined2 *)0x37f6 = in_BX;
  iVar6 = 0;
  bVar1 = *unaff_SI;
  do {
    uVar2 = (uint)bVar1;
    iVar5 = uVar2 << 1;
    uVar4 = 0;
    if (*(char *)(*(int *)0x37f6 + uVar2) == '\0') {
      uVar4 = 2;
    }
LAB_19c7_0cce:
    do {
      if (uVar4 != 0) {
        if (uVar4 == 1) {
          *unaff_DI = (byte)uVar2;
          unaff_DI = unaff_DI + 1;
          uVar4 = 4;
        }
        else {
          if (uVar4 != 2) {
            if (uVar4 == 3) {
              uVar4 = 4;
              goto LAB_19c7_0d28;
            }
            iVar6 = iVar6 + -1;
            if (iVar6 < 0) {
              *unaff_DI = 0xff;
              return;
            }
            uVar4 = in_stack_00000000 & 0xff;
            uVar2 = in_stack_00000000 >> 8;
            iVar5 = uVar2 << 1;
            goto LAB_19c7_0cce;
          }
          uVar4 = 3;
        }
        uVar3 = (undefined1)uVar4;
        bVar1 = unaff_SI[iVar5 + 1];
        if (bVar1 != 0xff) {
          if (-1 < (char)bVar1) break;
          *unaff_DI = bVar1;
          unaff_DI = unaff_DI + 1;
        }
        goto LAB_19c7_0cce;
      }
      uVar4 = 1;
LAB_19c7_0d28:
      uVar3 = (undefined1)uVar4;
      bVar1 = unaff_SI[iVar5 + 2];
    } while (bVar1 == 0xff);
    in_stack_00000000 = CONCAT11((byte)uVar2,uVar3);
    iVar6 = iVar6 + 1;
  } while( true );
}



/* 19c7:0e8c FUN_19c7_0e8c */

int __cdecl16near FUN_19c7_0e8c(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 >> 2;
  if ((param_1 & 0x4000) != 0) {
    uVar1 = ~uVar1;
  }
  iVar2 = *(int *)(uVar1 & 0xffe);
  if ((int)param_1 < 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* 19c7:0eb9 FUN_19c7_0eb9 */

int __cdecl16near FUN_19c7_0eb9(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 >> 2;
  if ((param_1 & 0x4000) == 0) {
    uVar1 = ~uVar1;
  }
  iVar2 = *(int *)(uVar1 & 0xffe);
  if ((int)((uint)(byte)((char)(param_1 >> 8) + 0x40) << 8) < 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* 19c7:0ee9 FUN_19c7_0ee9 */

int __cdecl16near FUN_19c7_0ee9(uint param_1,uint param_2)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  byte bVar5;
  undefined2 uVar4;
  uint uVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  uVar6 = 0;
  if ((int)param_2 < 0) {
    uVar6 = 8;
    param_2 = -param_2;
  }
  if ((int)param_1 < 0) {
    uVar6 = (uint)(byte)((char)uVar6 + 4);
    param_1 = -param_1;
  }
  uVar3 = param_2;
  if (param_2 < param_1) {
    uVar6 = (uint)(byte)((char)uVar6 + 2);
    uVar3 = param_1;
    param_1 = param_2;
  }
  if ((param_1 < uVar3) && (uVar3 != 0)) {
    uVar1 = ((ulong)param_1 << 0x10) / (ulong)uVar3;
    uVar4 = *(undefined2 *)(uVar6 + 0x3932);
    cVar2 = (char)uVar1;
    iVar7 = (((((uint)(byte)(uVar1 >> 8) << 1 | (uint)(cVar2 < '\0')) << 1 |
              (uint)((char)(cVar2 << 1) < '\0')) << 1 | (uint)((char)(cVar2 << 2) < '\0')) << 1 |
            (uint)((char)(cVar2 << 3) < '\0')) << 1;
  }
  else {
    uVar4 = *(undefined2 *)(uVar6 + 0x3932);
    iVar7 = 0x1ffe;
  }
  bVar5 = (byte)((uint)uVar4 >> 8);
  if ((char)uVar4 < '\0') {
    return (uint)bVar5 * 0x100 - *(int *)(iVar7 + 0x1000);
  }
  return (uint)bVar5 * 0x100 + *(int *)(iVar7 + 0x1000);
}



/* 19c7:0f5e FUN_19c7_0f5e */

uint __cdecl16near FUN_19c7_0f5e(int param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 >> 2;
  if ((param_2 & 0x4000) != 0) {
    uVar2 = ~uVar2;
  }
  iVar3 = *(int *)(uVar2 & 0xffe);
  if ((int)param_2 < 0) {
    iVar3 = -iVar3;
  }
  uVar1 = (long)iVar3 * (long)param_1;
  uVar2 = (uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0);
  if ((int)((uint)(byte)(uVar1 >> 8) << 8) < 0) {
    uVar2 = uVar2 | 1;
  }
  return uVar2;
}



/* 19c7:0f9f FUN_19c7_0f9f */

uint __cdecl16near FUN_19c7_0f9f(int param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 >> 2;
  if ((param_2 & 0x4000) == 0) {
    uVar2 = ~uVar2;
  }
  iVar3 = *(int *)(uVar2 & 0xffe);
  if ((int)((uint)(byte)((char)(param_2 >> 8) + 0x40) << 8) < 0) {
    iVar3 = -iVar3;
  }
  uVar1 = (long)iVar3 * (long)param_1;
  uVar2 = (uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0);
  if ((int)((uint)(byte)(uVar1 >> 8) << 8) < 0) {
    uVar2 = uVar2 | 1;
  }
  return uVar2;
}



/* 19c7:0fe3 FUN_19c7_0fe3 */

int __cdecl16near FUN_19c7_0fe3(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = -param_1;
  }
  iVar2 = *(int *)((uVar1 >> 4 & 0x7fe) + 0x3202);
  if ((int)param_1 < 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* 19c7:1013 FUN_19c7_1013 */

uint __cdecl16near FUN_19c7_1013(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf);
  uVar2 = (param_2 ^ (int)param_2 >> 0xf) - ((int)param_2 >> 0xf);
  if (uVar2 == uVar1) {
    uVar2 = DAT_2ac5_3200;
  }
  else {
    uVar3 = uVar2;
    if (uVar1 <= uVar2) {
      uVar3 = uVar1;
      uVar1 = uVar2;
    }
    uVar2 = *(uint *)((uint)(byte)(((ulong)uVar3 << 0x10) / (ulong)uVar1 >> 8) * 2 + 0x3000);
  }
  uVar2 = (int)((ulong)uVar2 * (ulong)uVar1 >> 0x10) + uVar1;
  if (uVar2 < uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* 19c7:1062 FUN_19c7_1062 */

int __cdecl16near FUN_19c7_1062(undefined2 param_1,undefined2 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_19c7_1013(param_1,param_2);
  if (iVar1 < 0) {
    return ((param_3 ^ (int)param_3 >> 0xf) - ((int)param_3 >> 0xf) >> 1) + iVar1;
  }
  iVar1 = FUN_19c7_1013(iVar1,param_3);
  return iVar1;
}



/* 19c7:1097 FUN_19c7_1097 */

int __cdecl16near FUN_19c7_1097(uint *param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_19c7_11ec(param_1,param_2);
  *param_1 = *(int *)0x390e << 1 | (uint)(*(int *)0x390c < 0);
  param_1[1] = *(int *)0x3912 << 1 | (uint)(*(int *)0x3910 < 0);
  iVar1 = *(int *)0x3914;
  param_1[2] = *(int *)0x3916 << 1 | (uint)(iVar1 < 0);
  return iVar1 << 1;
}



/* 19c7:1144 FUN_19c7_1144 */

void __cdecl16near FUN_19c7_1144(void)

{
  FUN_19c7_1168();
  FUN_19c7_1168();
  FUN_19c7_1168();
  return;
}



/* 19c7:1168 FUN_19c7_1168 */

void __cdecl16near FUN_19c7_1168(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int *in_BX;
  int *unaff_SI;
  uint *unaff_DI;
  undefined2 unaff_DS;
  
  iVar14 = 3;
  do {
    iVar5 = *unaff_SI;
    iVar6 = *in_BX;
    *(undefined2 *)0x3924 = (int)((long)iVar5 * (long)iVar6);
    iVar7 = unaff_SI[1];
    iVar8 = in_BX[3];
    uVar12 = (uint)((long)iVar7 * (long)iVar8);
    puVar1 = (uint *)0x3924;
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + uVar12;
    iVar9 = unaff_SI[2];
    iVar10 = in_BX[6];
    uVar13 = (uint)((long)iVar9 * (long)iVar10);
    puVar1 = (uint *)0x3924;
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + uVar13;
    piVar2 = (int *)0x3924;
    iVar11 = *piVar2;
    *piVar2 = *piVar2 << 1;
    *unaff_DI = ((int)((ulong)((long)iVar9 * (long)iVar10) >> 0x10) +
                 (int)((ulong)((long)iVar5 * (long)iVar6) >> 0x10) +
                 (int)((ulong)((long)iVar7 * (long)iVar8) >> 0x10) + (uint)CARRY2(uVar3,uVar12) +
                (uint)CARRY2(uVar4,uVar13)) * 2 | (uint)(iVar11 < 0);
    unaff_DI = unaff_DI + 1;
    in_BX = in_BX + 1;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  return;
}



/* 19c7:11a0 FUN_19c7_11a0 */

void __cdecl16near FUN_19c7_11a0(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 unaff_DS;
  
  *param_2 = *param_1;
  param_2[3] = param_1[1];
  param_2[6] = param_1[2];
  param_2[1] = param_1[3];
  param_2[4] = param_1[4];
  param_2[7] = param_1[5];
  param_2[2] = param_1[6];
  param_2[5] = param_1[7];
  param_2[8] = param_1[8];
  return;
}



/* 19c7:11d2 FUN_19c7_11d2 */

void __cdecl16near FUN_19c7_11d2(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = param_2;
    param_2 = param_2 + 1;
    puVar1 = param_1;
    param_1 = param_1 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 19c7:11ec FUN_19c7_11ec */

void __cdecl16near FUN_19c7_11ec(int *param_1,int *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 unaff_DS;
  
  iVar3 = *param_1;
  iVar4 = param_1[1];
  iVar5 = param_1[2];
  iVar6 = *param_2;
  *param_3 = (uint)((long)iVar3 * (long)iVar6);
  param_3[1] = (uint)((ulong)((long)iVar3 * (long)iVar6) >> 0x10);
  iVar6 = param_2[1];
  param_3[2] = (uint)((long)iVar3 * (long)iVar6);
  param_3[3] = (uint)((ulong)((long)iVar3 * (long)iVar6) >> 0x10);
  iVar6 = param_2[2];
  param_3[4] = (uint)((long)iVar3 * (long)iVar6);
  param_3[5] = (uint)((ulong)((long)iVar3 * (long)iVar6) >> 0x10);
  iVar3 = param_2[3];
  uVar7 = (uint)((long)iVar4 * (long)iVar3);
  puVar1 = param_3;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  param_3[1] = param_3[1] + (int)((ulong)((long)iVar4 * (long)iVar3) >> 0x10) +
               (uint)CARRY2(uVar2,uVar7);
  iVar3 = param_2[4];
  uVar7 = (uint)((long)iVar4 * (long)iVar3);
  puVar1 = param_3 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  param_3[3] = param_3[3] + (int)((ulong)((long)iVar4 * (long)iVar3) >> 0x10) +
               (uint)CARRY2(uVar2,uVar7);
  iVar3 = param_2[5];
  uVar7 = (uint)((long)iVar4 * (long)iVar3);
  puVar1 = param_3 + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  param_3[5] = param_3[5] + (int)((ulong)((long)iVar4 * (long)iVar3) >> 0x10) +
               (uint)CARRY2(uVar2,uVar7);
  iVar3 = param_2[6];
  uVar7 = (uint)((long)iVar5 * (long)iVar3);
  puVar1 = param_3;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  param_3[1] = param_3[1] + (int)((ulong)((long)iVar5 * (long)iVar3) >> 0x10) +
               (uint)CARRY2(uVar2,uVar7);
  iVar3 = param_2[7];
  uVar7 = (uint)((long)iVar5 * (long)iVar3);
  puVar1 = param_3 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  param_3[3] = param_3[3] + (int)((ulong)((long)iVar5 * (long)iVar3) >> 0x10) +
               (uint)CARRY2(uVar2,uVar7);
  iVar3 = param_2[8];
  uVar7 = (uint)((long)iVar5 * (long)iVar3);
  puVar1 = param_3 + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar7;
  param_3[5] = param_3[5] + (int)((ulong)((long)iVar5 * (long)iVar3) >> 0x10) +
               (uint)CARRY2(uVar2,uVar7);
  return;
}



/* 19c7:1267 FUN_19c7_1267 */

int __cdecl16near
FUN_19c7_1267(undefined2 param_1,undefined2 param_2,undefined2 param_3,int *param_4)

{
  ulong uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  uVar2 = FUN_19c7_0e8c(param_1);
  *(undefined2 *)0x3926 = uVar2;
  uVar2 = FUN_19c7_0eb9();
  *(undefined2 *)0x3928 = uVar2;
  uVar2 = FUN_19c7_0e8c(param_3);
  *(undefined2 *)0x392e = uVar2;
  uVar2 = FUN_19c7_0eb9();
  *(undefined2 *)0x3930 = uVar2;
  uVar2 = FUN_19c7_0e8c(param_2);
  *(undefined2 *)0x392a = uVar2;
  uVar2 = FUN_19c7_0eb9();
  *(undefined2 *)0x392c = uVar2;
  uVar1 = (long)(int)((uint)(((ulong)((long)*(int *)0x392e * (long)*(int *)0x392a) >> 0x10) << 1) |
                     (uint)((int)((long)*(int *)0x392e * (long)*(int *)0x392a) < 0)) *
          (long)*(int *)0x3926;
  *param_4 = ((uint)(((ulong)((long)*(int *)0x3930 * (long)*(int *)0x3928) >> 0x10) << 1) |
             (uint)((int)((long)*(int *)0x3930 * (long)*(int *)0x3928) < 0)) -
             ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0));
  uVar1 = (long)(int)((uint)(((ulong)((long)*(int *)0x3930 * (long)*(int *)0x392a) >> 0x10) << 1) |
                     (uint)((int)((long)*(int *)0x3930 * (long)*(int *)0x392a) < 0)) *
          (long)*(int *)0x3926;
  param_4[1] = ((uint)(((ulong)((long)*(int *)0x392e * (long)*(int *)0x3928) >> 0x10) << 1) |
               (uint)((int)((long)*(int *)0x392e * (long)*(int *)0x3928) < 0)) +
               ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0));
  param_4[2] = -((uint)(((ulong)((long)*(int *)0x392c * (long)*(int *)0x3926) >> 0x10) << 1) |
                (uint)((int)((long)*(int *)0x392c * (long)*(int *)0x3926) < 0));
  param_4[3] = -((uint)(((ulong)((long)*(int *)0x392e * (long)*(int *)0x392c) >> 0x10) << 1) |
                (uint)((int)((long)*(int *)0x392e * (long)*(int *)0x392c) < 0));
  param_4[4] = (uint)(((ulong)((long)*(int *)0x3930 * (long)*(int *)0x392c) >> 0x10) << 1) |
               (uint)((int)((long)*(int *)0x3930 * (long)*(int *)0x392c) < 0);
  param_4[5] = *(int *)0x392a;
  uVar1 = (long)(int)((uint)(((ulong)((long)*(int *)0x392e * (long)*(int *)0x392a) >> 0x10) << 1) |
                     (uint)((int)((long)*(int *)0x392e * (long)*(int *)0x392a) < 0)) *
          (long)*(int *)0x3928;
  param_4[6] = ((uint)(((ulong)((long)*(int *)0x3930 * (long)*(int *)0x3926) >> 0x10) << 1) |
               (uint)((int)((long)*(int *)0x3930 * (long)*(int *)0x3926) < 0)) +
               ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0));
  uVar1 = (long)(int)((uint)(((ulong)((long)*(int *)0x3930 * (long)*(int *)0x392a) >> 0x10) << 1) |
                     (uint)((int)((long)*(int *)0x3930 * (long)*(int *)0x392a) < 0)) *
          (long)*(int *)0x3928;
  param_4[7] = ((uint)(((ulong)((long)*(int *)0x392e * (long)*(int *)0x3926) >> 0x10) << 1) |
               (uint)((int)((long)*(int *)0x392e * (long)*(int *)0x3926) < 0)) -
               ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0));
  iVar3 = (int)((long)*(int *)0x392c * (long)*(int *)0x3928);
  param_4[8] = (uint)(((ulong)((long)*(int *)0x392c * (long)*(int *)0x3928) >> 0x10) << 1) |
               (uint)(iVar3 < 0);
  return iVar3 << 1;
}



/* 19c7:1389 FUN_19c7_1389 */

void __cdecl16near
FUN_19c7_1389(undefined2 *param_1,undefined2 *param_2,uint *param_3,undefined2 *param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar1 = FUN_19c7_0fe3(param_1[5]);
  if ((uVar1 ^ (int)uVar1 >> 0xf) - ((int)uVar1 >> 0xf) < 0x3e81) {
    uVar2 = FUN_19c7_0ee9(-param_1[2],param_1[8]);
    uVar3 = FUN_19c7_0ee9(-param_1[3],param_1[4]);
  }
  else {
    uVar2 = FUN_19c7_0ee9(param_1[6],*param_1);
    uVar3 = 0;
  }
  *param_4 = uVar3;
  *param_2 = uVar2;
  *param_3 = uVar1;
  return;
}



/* 19c7:144f FUN_19c7_144f */

void __cdecl16near FUN_19c7_144f(int *param_1)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  uVar1 = FUN_19c7_1062(param_1[2],param_1[1],*param_1);
  uVar1 = uVar1 >> 2;
  if (uVar1 != 0) {
    *param_1 = (int)(((long)*param_1 * 0xfff) / (long)(int)uVar1) << 1;
    param_1[1] = (int)(((long)param_1[1] * 0xfff) / (long)(int)uVar1) << 1;
    param_1[2] = (int)(((long)param_1[2] * 0xfff) / (long)(int)uVar1) << 1;
  }
  return;
}



/* 19c7:1494 FUN_19c7_1494 */

void __cdecl16near FUN_19c7_1494(int param_1)

{
  FUN_19c7_144f(param_1);
  FUN_19c7_144f(param_1 + 6);
  FUN_19c7_144f(param_1 + 0xc);
  return;
}



/* 19c7:14bf FUN_19c7_14bf */

void __cdecl16near FUN_19c7_14bf(void)

{
  return;
}



/* 19c7:14d1 FUN_19c7_14d1 */

long __cdecl16near FUN_19c7_14d1(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (int)param_3 >> 0xf;
  uVar1 = param_3 ^ uVar2;
  if (uVar1 == uVar2) {
    param_3 = param_3 + 1;
  }
  if ((param_2 ^ (int)param_2 >> 0xf) - ((int)param_2 >> 0xf) < uVar1 - uVar2) {
    return (long)(int)(((long)param_1 * (long)(int)param_2) / (long)(int)param_3);
  }
  return (long)((int)param_2 / (int)param_3) * (long)param_1;
}



/* 19c7:1507 FUN_19c7_1507 */

int __cdecl16near
FUN_19c7_1507(undefined2 param_1,undefined2 param_2,undefined2 param_3,int *param_4)

{
  ulong uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  uVar2 = FUN_19c7_0e8c(param_3);
  *(undefined2 *)0x3926 = uVar2;
  uVar2 = FUN_19c7_0eb9();
  *(undefined2 *)0x3928 = uVar2;
  uVar2 = FUN_19c7_0e8c(param_1);
  *(undefined2 *)0x392e = uVar2;
  uVar2 = FUN_19c7_0eb9();
  *(undefined2 *)0x3930 = uVar2;
  uVar2 = FUN_19c7_0e8c(param_2);
  *(undefined2 *)0x392a = uVar2;
  uVar2 = FUN_19c7_0eb9();
  *(undefined2 *)0x392c = uVar2;
  uVar1 = (long)(int)((uint)(((ulong)((long)*(int *)0x3926 * (long)*(int *)0x392a) >> 0x10) << 1) |
                     (uint)((int)((long)*(int *)0x3926 * (long)*(int *)0x392a) < 0)) *
          (long)*(int *)0x392e;
  *param_4 = ((uint)(((ulong)((long)*(int *)0x3928 * (long)*(int *)0x3930) >> 0x10) << 1) |
             (uint)((int)((long)*(int *)0x3928 * (long)*(int *)0x3930) < 0)) +
             ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0));
  param_4[1] = (uint)(((ulong)((long)*(int *)0x392c * (long)*(int *)0x392e) >> 0x10) << 1) |
               (uint)((int)((long)*(int *)0x392c * (long)*(int *)0x392e) < 0);
  uVar1 = (long)(int)((uint)(((ulong)((long)*(int *)0x3928 * (long)*(int *)0x392a) >> 0x10) << 1) |
                     (uint)((int)((long)*(int *)0x3928 * (long)*(int *)0x392a) < 0)) *
          (long)*(int *)0x392e;
  param_4[2] = ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0)) -
               ((uint)(((ulong)((long)*(int *)0x3926 * (long)*(int *)0x3930) >> 0x10) << 1) |
               (uint)((int)((long)*(int *)0x3926 * (long)*(int *)0x3930) < 0));
  uVar1 = (long)(int)((uint)(((ulong)((long)*(int *)0x3926 * (long)*(int *)0x392a) >> 0x10) << 1) |
                     (uint)((int)((long)*(int *)0x3926 * (long)*(int *)0x392a) < 0)) *
          (long)*(int *)0x3930;
  param_4[3] = ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0)) -
               ((uint)(((ulong)((long)*(int *)0x3928 * (long)*(int *)0x392e) >> 0x10) << 1) |
               (uint)((int)((long)*(int *)0x3928 * (long)*(int *)0x392e) < 0));
  param_4[4] = (uint)(((ulong)((long)*(int *)0x392c * (long)*(int *)0x3930) >> 0x10) << 1) |
               (uint)((int)((long)*(int *)0x392c * (long)*(int *)0x3930) < 0);
  uVar1 = (long)(int)((uint)(((ulong)((long)*(int *)0x3928 * (long)*(int *)0x392a) >> 0x10) << 1) |
                     (uint)((int)((long)*(int *)0x3928 * (long)*(int *)0x392a) < 0)) *
          (long)*(int *)0x3930;
  param_4[5] = ((uint)(((ulong)((long)*(int *)0x3926 * (long)*(int *)0x392e) >> 0x10) << 1) |
               (uint)((int)((long)*(int *)0x3926 * (long)*(int *)0x392e) < 0)) +
               ((uint)((uVar1 >> 0x10) << 1) | (uint)((int)uVar1 < 0));
  param_4[6] = (uint)(((ulong)((long)*(int *)0x3926 * (long)*(int *)0x392c) >> 0x10) << 1) |
               (uint)((int)((long)*(int *)0x3926 * (long)*(int *)0x392c) < 0);
  param_4[7] = -*(int *)0x392a;
  iVar3 = (int)((long)*(int *)0x3928 * (long)*(int *)0x392c);
  param_4[8] = (uint)(((ulong)((long)*(int *)0x3928 * (long)*(int *)0x392c) >> 0x10) << 1) |
               (uint)(iVar3 < 0);
  return iVar3 << 1;
}



/* 19c7:1660 FUN_19c7_1660 */

void __cdecl16near FUN_19c7_1660(void)

{
  uint uVar1;
  int unaff_SI;
  undefined2 unaff_DS;
  
  *(uint *)0x398c = *(uint *)0x398c | *(uint *)(unaff_SI + 2);
  if ((*(uint *)(unaff_SI + 2) & 0x40) != 0) {
    FUN_19c7_1700();
  }
  uVar1 = *(uint *)(unaff_SI + 2);
  if ((uVar1 & 0x80) == 0) {
    *(uint *)0x3996 = *(uint *)0x3996 | 4;
    FUN_19c7_23a3();
    uVar1 = *(uint *)(unaff_SI + 2);
    if ((uVar1 & 3) != 0) {
      if ((uVar1 & 2) == 0) {
        uVar1 = FUN_19c7_16e5();
      }
      else {
        uVar1 = FUN_19c7_16ca();
      }
    }
    if ((uVar1 & 0xc) != 0) {
      if ((uVar1 & 8) == 0) {
        FUN_19c7_16e5();
      }
      else {
        FUN_19c7_16ca();
      }
    }
  }
  else if ((uVar1 & 3) != 0) {
    if ((uVar1 & 2) == 0) {
      FUN_19c7_16e5();
    }
    else {
      FUN_19c7_16ca();
    }
  }
  return;
}



/* 19c7:16ca FUN_19c7_16ca */

void __cdecl16near FUN_19c7_16ca(void)

{
  int in_CX;
  int iVar1;
  int in_BX;
  undefined2 unaff_DS;
  
  iVar1 = in_CX;
  if (in_CX < in_BX) {
    iVar1 = in_BX;
    in_BX = in_CX;
  }
  if (*(int *)0x3990 <= iVar1) {
    *(int *)0x3990 = iVar1;
  }
  if (in_BX < *(int *)0x398e) {
    *(int *)0x398e = in_BX;
  }
  return;
}



/* 19c7:16e5 FUN_19c7_16e5 */

void __cdecl16near FUN_19c7_16e5(void)

{
  int in_CX;
  int iVar1;
  int in_BX;
  undefined2 unaff_DS;
  
  iVar1 = in_CX;
  if (in_CX < in_BX) {
    iVar1 = in_BX;
    in_BX = in_CX;
  }
  if (*(int *)0x3994 <= iVar1) {
    *(int *)0x3994 = iVar1;
  }
  if (in_BX < *(int *)0x3992) {
    *(int *)0x3992 = in_BX;
  }
  return;
}



/* 19c7:1700 FUN_19c7_1700 */

void __cdecl16near FUN_19c7_1700(void)

{
  undefined2 *puVar1;
  int unaff_SI;
  undefined2 unaff_DS;
  
  puVar1 = (undefined2 *)0x3962;
  if (*(int *)0x3998 != 0) {
    puVar1 = (undefined2 *)0x396a;
  }
  *(int *)0x3998 = *(int *)0x3998 + 1;
  *puVar1 = *(undefined2 *)(unaff_SI + 0x10);
  puVar1[1] = *(undefined2 *)(unaff_SI + 0x12);
  puVar1[2] = *(undefined2 *)(unaff_SI + 0x14);
  puVar1[3] = *(undefined2 *)(unaff_SI + 0x16);
  return;
}



/* 19c7:172a FUN_19c7_172a */

void __cdecl16near FUN_19c7_172a(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  FUN_19c7_1ce9(param_1);
  if (*(int *)0x3998 == 2) {
    FUN_19c7_19d4();
    FUN_19c7_1660();
  }
  if (*(int *)0x3996 == 0) {
    if (((*(uint *)0x398c & 5) == 0) || ((*(uint *)0x398c & 10) == 0)) goto LAB_19c7_176c;
    FUN_19c7_179d();
    FUN_19c7_17b1();
  }
  else {
    if ((*(uint *)0x398c & 5) != 0) {
      FUN_19c7_179d();
    }
    if ((*(uint *)0x398c & 10) != 0) {
      FUN_19c7_17b1();
    }
  }
  FUN_19c7_1cf9();
LAB_19c7_176c:
  *(undefined2 *)0x3992 = 0x7fff;
  *(undefined2 *)0x398e = 0x7fff;
  *(undefined2 *)0x3994 = 0x8000;
  *(undefined2 *)0x3990 = 0x8000;
  *(undefined2 *)0x3996 = 0;
  *(undefined2 *)0x398c = 0;
  *(undefined2 *)0x3998 = 0;
  return;
}



/* 19c7:179d FUN_19c7_179d */

void __cdecl16near FUN_19c7_179d(void)

{
  undefined2 unaff_DS;
  
  FUN_19c7_2460(*(undefined2 *)0x3994,*(undefined2 *)0x3992,*(int *)0x39a8 + 1);
  return;
}



/* 19c7:17b1 FUN_19c7_17b1 */

void __cdecl16near FUN_19c7_17b1(void)

{
  undefined2 unaff_DS;
  
  FUN_19c7_2460(*(undefined2 *)0x3990,*(undefined2 *)0x398e,*(int *)0x39a4 + -1);
  return;
}



/* 19c7:17c5 FUN_19c7_17c5 */

void __cdecl16near FUN_19c7_17c5(int param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  undefined2 unaff_DS;
  
  FUN_19c7_1ce9(param_5);
  *(int *)0x196e = param_1;
  *(int *)0x1970 = param_1 >> 0xf;
  *(int *)0x1972 = param_2;
  *(int *)0x1974 = param_2 >> 0xf;
  *(int *)0x1976 = param_3;
  *(int *)0x1978 = param_3 >> 0xf;
  *(int *)0x197a = param_4;
  *(int *)0x197c = param_4 >> 0xf;
  FUN_19c7_19d4();
  FUN_19c7_1807();
  return;
}



/* 19c7:1807 FUN_19c7_1807 */

void __cdecl16near FUN_19c7_1807(void)

{
  int unaff_SI;
  undefined2 unaff_DS;
  
  if ((*(uint *)(unaff_SI + 2) & 0x80) == 0) {
    FUN_19c7_1cf1();
  }
  return;
}



/* 19c7:1822 FUN_19c7_1822 */

void __cdecl16near FUN_19c7_1822(void)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar4;
  uint uVar3;
  undefined1 extraout_AH;
  int iVar5;
  int iVar6;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  int iVar7;
  int *unaff_SI;
  undefined2 unaff_DS;
  bool bVar8;
  
  *(undefined1 *)0x399a = 0;
  iVar5 = unaff_SI[6];
  FUN_19c7_1972();
  iVar7 = *unaff_SI;
  iVar6 = unaff_SI[2];
  iVar2 = FUN_19c7_1972();
  if (iVar2 == 0) {
    unaff_SI[1] = 0;
    return;
  }
  bVar4 = (byte)((uint)iVar2 >> 8);
  if (((byte)iVar2 & bVar4) != 0) {
    if ((bVar4 & (byte)iVar2 & 3) != 0) {
      unaff_SI[1] = -0x7f80;
      return;
    }
    uVar3 = FUN_19c7_18ac();
    uVar1 = 0x85;
    if ((uVar3 & 8) == 0) {
      uVar1 = 0x8a;
    }
    unaff_SI[1] = CONCAT11(uVar1,uVar1);
    return;
  }
  FUN_19c7_18ac();
  if (!SBORROW2(extraout_DX,iVar7)) {
    *(int *)0x3986 = extraout_DX - iVar7;
    iVar7 = iVar5 - iVar6;
    if (!SBORROW2(iVar5,iVar6)) {
      *(int *)0x3988 = iVar7;
      *(undefined1 *)0x399b = extraout_AH;
      bVar8 = false;
      if ((*(byte *)0x399a & 1) == 0) {
        uVar1 = FUN_19c7_1906();
        if (!bVar8) {
          *unaff_SI = iVar7;
          unaff_SI[2] = extraout_DX_00;
          uVar1 = FUN_19c7_1906();
          if (!bVar8) {
            unaff_SI[4] = iVar7;
            unaff_SI[6] = extraout_DX_01;
            return;
          }
        }
        unaff_SI[1] = CONCAT11(uVar1,uVar1) | 0x8080;
        return;
      }
    }
  }
  FUN_19c7_19b6();
  return;
}



/* 19c7:18ac FUN_19c7_18ac */

void __cdecl16near FUN_19c7_18ac(void)

{
  byte in_AL;
  byte in_AH;
  undefined2 in_CX;
  undefined2 unaff_BP;
  int unaff_SI;
  undefined2 unaff_DS;
  byte bVar1;
  
  if ((in_AL & 1) != 0) {
    in_CX = *(undefined2 *)0x39a6;
  }
  if ((in_AL & 2) != 0) {
    in_CX = *(undefined2 *)0x39aa;
  }
  *(undefined2 *)(unaff_SI + 6) = in_CX;
  if ((in_AH & 1) != 0) {
    unaff_BP = *(undefined2 *)0x39a6;
  }
  if ((in_AH & 2) != 0) {
    unaff_BP = *(undefined2 *)0x39aa;
  }
  *(undefined2 *)(unaff_SI + 0xe) = unaff_BP;
  bVar1 = (in_AL & 8) != 0;
  if ((in_AL & 4) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((in_AH & 8) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((in_AH & 4) != 0) {
    bVar1 = bVar1 | 8;
  }
  *(undefined2 *)(unaff_SI + 2) = CONCAT11(bVar1,bVar1);
  return;
}



/* 19c7:1906 FUN_19c7_1906 */

undefined4 __cdecl16near FUN_19c7_1906(void)

{
  uint in_AX;
  int iVar1;
  int iVar2;
  int in_CX;
  int in_BX;
  undefined2 unaff_DS;
  
  if ((char)in_AX == '\0') {
    return CONCAT22(in_CX,in_AX);
  }
  if ((in_AX & 0xc) == 0) {
LAB_19c7_193a:
    iVar1 = *(int *)0x39a6;
    if ((in_AX & 1) != 0) goto LAB_19c7_1946;
  }
  else {
    iVar1 = *(int *)0x39a8;
    if ((in_AX & 4) != 0) {
      iVar1 = *(int *)0x39a4;
    }
    iVar1 = (int)(((long)(iVar1 - in_BX) * (long)*(int *)0x3988) / (long)*(int *)0x3986) + in_CX;
    in_AX = CONCAT11((char)((uint)iVar1 >> 8),1);
    if (iVar1 < *(int *)0x39a6) goto LAB_19c7_193a;
    if (iVar1 <= *(int *)0x39aa) {
      return CONCAT22(iVar1,in_AX);
    }
  }
  iVar1 = *(int *)0x39aa;
LAB_19c7_1946:
  iVar2 = (int)(((long)(iVar1 - in_CX) * (long)*(int *)0x3986) / (long)*(int *)0x3988) + in_BX;
  if (iVar2 < *(int *)0x39a4) {
    return CONCAT22(iVar1,0xa0a);
  }
  if (*(int *)0x39a8 < iVar2) {
    return CONCAT22(iVar1,0x505);
  }
  return CONCAT22(iVar1,iVar2);
}



/* 19c7:1972 FUN_19c7_1972 */

byte __cdecl16near FUN_19c7_1972(void)

{
  int iVar1;
  byte bVar2;
  int in_CX;
  int in_BX;
  undefined2 unaff_DS;
  
  bVar2 = 0;
  iVar1 = *(int *)0x39a4;
  if (SBORROW2(in_BX,iVar1)) {
    *(undefined1 *)0x399a = 1;
  }
  if (in_BX < iVar1) {
    bVar2 = 4;
  }
  if (*(int *)0x39a8 < in_BX) {
    bVar2 = bVar2 | 8;
  }
  iVar1 = *(int *)0x39a6;
  if (SBORROW2(in_CX,iVar1)) {
    *(undefined1 *)0x399a = 1;
  }
  if (in_CX < iVar1) {
    bVar2 = bVar2 | 1;
  }
  if (*(int *)0x39aa < in_CX) {
    return bVar2 | 2;
  }
  return bVar2;
}



/* 19c7:19b6 FUN_19c7_19b6 */

/* WARNING: Removing unreachable block (ram,0x0001b6db) */
/* WARNING: Removing unreachable block (ram,0x0001b6df) */
/* WARNING: Removing unreachable block (ram,0x0001b706) */
/* WARNING: Removing unreachable block (ram,0x0001b71d) */
/* WARNING: Removing unreachable block (ram,0x0001b758) */
/* WARNING: Removing unreachable block (ram,0x0001b760) */
/* WARNING: Removing unreachable block (ram,0x0001b762) */

void __cdecl16near FUN_19c7_19b6(void)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  uint unaff_BP;
  int *unaff_SI;
  int *piVar5;
  int *piVar6;
  undefined2 unaff_DS;
  
  unaff_SI[1] = *unaff_SI >> 0xf;
  unaff_SI[3] = unaff_SI[2] >> 0xf;
  unaff_SI[5] = unaff_SI[4] >> 0xf;
  unaff_SI[7] = unaff_SI[6] >> 0xf;
  FUN_19c7_1c6e();
  FUN_19c7_1c6e();
  if (unaff_BP == 0) {
    unaff_SI[1] = 0;
    return;
  }
  if (unaff_BP != 0) {
    if ((unaff_BP & 3) == 0) {
      uVar3 = FUN_19c7_1be2();
      unaff_SI[1] = CONCAT11(uVar3,uVar3) | 0x8080;
      return;
    }
    unaff_SI[1] = -0x7f80;
    return;
  }
  piVar6 = (int *)0x3942;
  piVar5 = unaff_SI;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    *piVar2 = *piVar1;
  }
  piVar5 = piVar5 + -8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    *piVar2 = *piVar1;
  }
  uVar3 = FUN_19c7_1be2();
  unaff_SI[1] = CONCAT11(uVar3,uVar3);
  iVar4 = FUN_19c7_1b74();
  *unaff_SI = iVar4;
  unaff_SI[2] = unaff_BP;
  return;
}



/* 19c7:19d4 FUN_19c7_19d4 */

/* WARNING: Removing unreachable block (ram,0x0001b6db) */
/* WARNING: Removing unreachable block (ram,0x0001b6df) */
/* WARNING: Removing unreachable block (ram,0x0001b706) */
/* WARNING: Removing unreachable block (ram,0x0001b71d) */
/* WARNING: Removing unreachable block (ram,0x0001b758) */
/* WARNING: Removing unreachable block (ram,0x0001b760) */
/* WARNING: Removing unreachable block (ram,0x0001b762) */

void __cdecl16near FUN_19c7_19d4(void)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  uint unaff_BP;
  int *unaff_SI;
  int *piVar5;
  int *piVar6;
  undefined2 unaff_DS;
  
  if ((((*unaff_SI >> 0xf == unaff_SI[1]) && (unaff_SI[4] >> 0xf == unaff_SI[5])) &&
      (unaff_SI[2] >> 0xf == unaff_SI[3])) && (unaff_SI[6] >> 0xf == unaff_SI[7])) {
    FUN_19c7_1822();
    return;
  }
  FUN_19c7_1c6e();
  FUN_19c7_1c6e();
  if (unaff_BP == 0) {
    unaff_SI[1] = 0;
    return;
  }
  if (unaff_BP != 0) {
    if ((unaff_BP & 3) == 0) {
      uVar3 = FUN_19c7_1be2();
      unaff_SI[1] = CONCAT11(uVar3,uVar3) | 0x8080;
      return;
    }
    unaff_SI[1] = -0x7f80;
    return;
  }
  piVar6 = (int *)0x3942;
  piVar5 = unaff_SI;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    *piVar2 = *piVar1;
  }
  piVar5 = piVar5 + -8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    *piVar2 = *piVar1;
  }
  uVar3 = FUN_19c7_1be2();
  unaff_SI[1] = CONCAT11(uVar3,uVar3);
  iVar4 = FUN_19c7_1b74();
  *unaff_SI = iVar4;
  unaff_SI[2] = unaff_BP;
  return;
}



/* 19c7:1af8 FUN_19c7_1af8 */

undefined2 __cdecl16near FUN_19c7_1af8(void)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  uint unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *unaff_DI;
  undefined2 unaff_DS;
  bool bVar7;
  undefined4 uVar8;
  
  *(undefined2 *)0x398a = 0x20;
  uVar2 = *unaff_DI;
  uVar6 = unaff_DI[2];
  iVar4 = unaff_DI[3];
  while( true ) {
    piVar1 = (int *)0x398a;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      return uVar2;
    }
    uVar3 = iVar4 + unaff_SI[3] + (uint)CARRY2(uVar6,unaff_SI[2]);
    iVar4 = (int)uVar3 >> 1;
    bVar7 = iVar4 == 0;
    uVar6 = (uint)(CONCAT12((uVar3 & 1) != 0,uVar6 + unaff_SI[2]) >> 1);
    uVar8 = FUN_19c7_1c6e();
    uVar5 = (undefined2)((ulong)uVar8 >> 0x10);
    uVar2 = (undefined2)uVar8;
    if (bVar7) break;
    if ((*(uint *)0x3984 & unaff_BP) == 0) {
      *unaff_SI = uVar2;
      unaff_SI[1] = uVar5;
      unaff_SI[2] = uVar6;
      unaff_SI[3] = iVar4;
      uVar2 = *unaff_DI;
      uVar6 = unaff_DI[2];
      iVar4 = unaff_DI[3];
    }
    else {
      if ((*(uint *)0x3982 & unaff_BP) != 0) {
        return uVar2;
      }
      *unaff_DI = uVar2;
      unaff_DI[1] = uVar5;
      unaff_DI[2] = uVar6;
      unaff_DI[3] = iVar4;
    }
  }
  return uVar2;
}



/* 19c7:1b74 FUN_19c7_1b74 */

undefined2 __cdecl16near FUN_19c7_1b74(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *unaff_SI;
  undefined2 *unaff_DI;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  *(undefined2 *)0x398a = 0x20;
  uVar4 = unaff_DI[2];
  uVar3 = unaff_DI[3];
  while( true ) {
    while( true ) {
      piVar1 = (int *)0x398a;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        return *unaff_SI;
      }
      bVar5 = CARRY2(uVar4,unaff_SI[2]);
      uVar4 = uVar4 + unaff_SI[2];
      uVar3 = uVar3 + unaff_SI[3] + (uint)bVar5;
      if (uVar4 == uVar3) {
        bVar5 = false;
        if (uVar4 == 0xffff) {
          uVar4 = 0;
          uVar3 = 0;
          bVar5 = true;
        }
      }
      else {
        uVar2 = uVar3 & 1;
        uVar3 = (int)uVar3 >> 1;
        bVar5 = uVar3 == 0;
        uVar4 = (uint)(CONCAT12(uVar2 != 0,uVar4) >> 1);
      }
      uVar6 = FUN_19c7_1c6e();
      if (bVar5) break;
      *unaff_DI = (int)uVar6;
      unaff_DI[1] = (int)((ulong)uVar6 >> 0x10);
      unaff_DI[2] = uVar4;
      unaff_DI[3] = uVar3;
    }
    uVar6 = FUN_19c7_1c47();
    if (!bVar5) break;
    *unaff_SI = (int)uVar6;
    unaff_SI[1] = (int)((ulong)uVar6 >> 0x10);
    unaff_SI[2] = uVar4;
    unaff_SI[3] = uVar3;
    uVar4 = unaff_DI[2];
    uVar3 = unaff_DI[3];
  }
  return (int)uVar6;
}



/* 19c7:1be2 FUN_19c7_1be2 */

void __cdecl16near FUN_19c7_1be2(void)

{
  undefined2 uVar1;
  uint unaff_BP;
  int unaff_SI;
  uint unaff_DI;
  undefined2 unaff_DS;
  
  if ((unaff_BP & 1) == 0) {
    if ((unaff_BP & 2) == 0) {
      uVar1 = *(undefined2 *)(unaff_SI + 4);
    }
    else {
      uVar1 = *(undefined2 *)0x39aa;
    }
  }
  else {
    uVar1 = *(undefined2 *)0x39a6;
  }
  *(undefined2 *)(unaff_SI + 6) = uVar1;
  if ((unaff_DI & 1) == 0) {
    if ((unaff_DI & 2) == 0) {
      uVar1 = *(undefined2 *)(unaff_SI + 0xc);
    }
    else {
      uVar1 = *(undefined2 *)0x39aa;
    }
  }
  else {
    uVar1 = *(undefined2 *)0x39a6;
  }
  *(undefined2 *)(unaff_SI + 0xe) = uVar1;
  return;
}



/* 19c7:1c47 FUN_19c7_1c47 */

void __cdecl16near FUN_19c7_1c47(void)

{
  int in_AX;
  int in_CX;
  int in_DX;
  int in_BX;
  undefined2 unaff_DS;
  
  if (((in_DX == 0) && (in_CX == 0)) &&
     ((in_AX == *(int *)0x39a4 ||
      (((in_AX == *(int *)0x39a8 || (in_BX == *(int *)0x39a6)) || (in_BX == *(int *)0x39aa)))))) {
    return;
  }
  return;
}



/* 19c7:1c6e FUN_19c7_1c6e */

void __cdecl16near FUN_19c7_1c6e(void)

{
  int in_CX;
  uint in_BX;
  undefined2 unaff_DS;
  
  if (in_CX < 0) {
    return;
  }
  if (in_CX == 0) {
    if (in_BX < *(uint *)0x39a6) {
      return;
    }
    if (in_BX <= *(uint *)0x39aa) {
      return;
    }
  }
  return;
}



/* 19c7:1caa FUN_19c7_1caa */

void __cdecl16near FUN_19c7_1caa(byte param_1)

{
  undefined2 unaff_DS;
  
  if (0x60 < param_1) {
    param_1 = param_1 - 0x20;
  }
  *(uint *)0x399e = (uint)param_1;
  if (param_1 == 0x45) {
    FUN_19c7_1d8c();
    return;
  }
  if (param_1 == 0x4d) {
    FUN_19c7_1daf();
    return;
  }
  if (param_1 == 0x43) {
    FUN_19c7_1dcb();
    return;
  }
  if (param_1 == 0x54) {
    FUN_19c7_1dee();
    return;
  }
  return;
}



/* 19c7:1ce1 FUN_19c7_1ce1 */

void FUN_19c7_1ce1(void)

{
  undefined2 unaff_DS;
  
                    /* WARNING: Could not recover jumptable at 0x0001b955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)(*(int *)0x399c + 2))();
  return;
}



/* 19c7:1ce9 FUN_19c7_1ce9 */

void FUN_19c7_1ce9(void)

{
  undefined2 unaff_DS;
  
                    /* WARNING: Could not recover jumptable at 0x0001b95d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)(*(int *)0x399c + 4))();
  return;
}



/* 19c7:1cf1 FUN_19c7_1cf1 */

void FUN_19c7_1cf1(void)

{
  undefined2 unaff_DS;
  
                    /* WARNING: Could not recover jumptable at 0x0001b965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)(*(int *)0x399c + 6))();
  return;
}



/* 19c7:1cf9 FUN_19c7_1cf9 */

void FUN_19c7_1cf9(void)

{
  undefined2 unaff_DS;
  
                    /* WARNING: Could not recover jumptable at 0x0001b96d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)(*(int *)0x399c + 8))();
  return;
}



/* 19c7:1d8c FUN_19c7_1d8c */

void __cdecl16near FUN_19c7_1d8c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  if (*(int *)0x4518 == 0) {
    iVar3 = 200;
    piVar4 = (int *)0x39c6;
    iVar2 = 0;
    do {
      piVar1 = piVar4;
      piVar4 = piVar4 + 1;
      *piVar1 = iVar2;
      iVar2 = iVar2 + 0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined2 *)0x399c = 0x1d09;
    return;
  }
  iVar3 = 0x1e0;
  piVar4 = (int *)0x39c6;
  iVar2 = 0;
  do {
    piVar1 = piVar4;
    piVar4 = piVar4 + 1;
    *piVar1 = iVar2;
    iVar2 = iVar2 + 0x50;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined2 *)0x399c = 0x1d09;
  *(undefined2 *)0x451a = 0x4f;
  *(undefined2 *)0x451c = 0xffaf;
  return;
}



/* 19c7:1daf FUN_19c7_1daf */

void __cdecl16near FUN_19c7_1daf(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  iVar3 = 200;
  piVar4 = (int *)0x39c6;
  iVar2 = 0;
  do {
    piVar1 = piVar4;
    piVar4 = piVar4 + 1;
    *piVar1 = iVar2;
    iVar2 = iVar2 + 0x140;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined2 *)0x399c = 0x1d15;
  return;
}



/* 19c7:1dcb FUN_19c7_1dcb */

void __cdecl16near FUN_19c7_1dcb(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  iVar3 = 100;
  piVar4 = (int *)0x39c6;
  iVar2 = 0;
  do {
    piVar1 = piVar4 + 1;
    *piVar4 = iVar2;
    piVar4 = piVar4 + 2;
    *piVar1 = iVar2 + 0x2000;
    iVar2 = iVar2 + 0x50;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined2 *)0x399c = 0x1d21;
  return;
}



/* 19c7:1dee FUN_19c7_1dee */

void __cdecl16near FUN_19c7_1dee(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  iVar3 = 0x32;
  piVar4 = (int *)0x39c6;
  iVar2 = 0;
  do {
    *piVar4 = iVar2;
    piVar4[1] = iVar2 + 0x2000;
    piVar1 = piVar4 + 3;
    piVar4[2] = iVar2 + 0x4000;
    piVar4 = piVar4 + 4;
    *piVar1 = iVar2 + 0x6000;
    iVar2 = iVar2 + 0xa0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined2 *)0x399c = 0x1d2d;
  return;
}



/* 19c7:1e40 FUN_19c7_1e40 */

void __cdecl16near FUN_19c7_1e40(int param_1)

{
  undefined2 unaff_DS;
  
  *(int *)0x39a0 = param_1;
  *(undefined2 *)0x39c4 = *(undefined2 *)(param_1 * 2 + 0x39bc);
  return;
}



/* 19c7:1e56 FUN_19c7_1e56 */

undefined4 __cdecl16near FUN_19c7_1e56(void)

{
  int iVar1;
  uint in_AX;
  undefined2 unaff_DS;
  
  *(uint *)0x39b0 = in_AX & 0xff;
  iVar1 = *(int *)((in_AX & 0xff) * 2 + 0x455c);
  out(0x3ce,iVar1 << 8);
  out(0x3ce,CONCAT11((char)((uint)iVar1 >> 8),1));
  return CONCAT22(0x3ce,*(undefined2 *)0x39c4);
}



/* 19c7:1e82 FUN_19c7_1e82 */

void __cdecl16near FUN_19c7_1e82(void)

{
  undefined1 uVar1;
  byte bVar2;
  uint in_AX;
  uint uVar3;
  undefined2 unaff_DS;
  
  *(uint *)0x39b0 = in_AX;
  uVar1 = *(undefined1 *)((in_AX & 0xf) + 0x4522);
  uVar3 = CONCAT11(uVar1,uVar1);
  *(uint *)0x4532 = uVar3;
  uVar3 = uVar3 & 0x3333;
  bVar2 = (char)uVar3 << 2 | (byte)(uVar3 >> 8);
  *(undefined2 *)0x4534 = CONCAT11(bVar2,bVar2);
  return;
}



/* 19c7:1ea7 FUN_19c7_1ea7 */

undefined2 __cdecl16near FUN_19c7_1ea7(void)

{
  char in_AL;
  byte bVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x39b0 = CONCAT11(in_AL,in_AL);
  uVar2 = CONCAT11(in_AL,in_AL << 4) & 0xfff;
  bVar1 = (byte)uVar2 | (byte)(uVar2 >> 8);
  *(undefined2 *)0x4536 = CONCAT11(bVar1,bVar1);
  return *(undefined2 *)0x39c4;
}



/* 19c7:1ec4 FUN_19c7_1ec4 */

void __cdecl16near FUN_19c7_1ec4(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 extraout_DX;
  uint unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if ((*(int *)0x39a4 <= param_1) && (param_1 <= *(int *)0x39a8)) {
    *(int *)0x450c = param_1;
    if ((*(int *)0x39a6 <= param_2) && (param_2 <= *(int *)0x39aa)) {
      *(int *)0x450e = param_2;
      FUN_19c7_1e56();
      uVar1 = FUN_19c7_1fce();
      out(extraout_DX,uVar1);
      uVar1 = 0x55;
      if ((unaff_SI & 2) != 0) {
        uVar1 = 0xaa;
      }
      *unaff_DI = uVar1;
    }
  }
  return;
}



/* 19c7:1f05 FUN_19c7_1f05 */

void __cdecl16near FUN_19c7_1f05(int param_1,int param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if ((*(int *)0x39a4 <= param_1) && (param_1 <= *(int *)0x39a8)) {
    *(int *)0x450c = param_1;
    if ((*(int *)0x39a6 <= param_2) && (param_2 <= *(int *)0x39aa)) {
      uVar1 = *(undefined2 *)0x39c4;
      iVar2 = *(int *)(param_2 << 1);
      *(undefined2 *)0x39b0 = param_3;
      *(undefined1 *)(iVar2 + param_1) = (char)param_3;
    }
  }
  return;
}



/* 19c7:1f40 FUN_19c7_1f40 */

void __cdecl16near FUN_19c7_1f40(uint param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined2 unaff_DS;
  
  if ((((*(int *)0x39a4 <= (int)param_1) && ((int)param_1 <= *(int *)0x39a8)) &&
      (*(int *)0x39a6 <= param_2)) && (param_2 <= *(int *)0x39aa)) {
    uVar2 = *(undefined2 *)0x39c4;
    pbVar4 = (byte *)(*(int *)(param_2 << 1) + ((int)param_1 >> 2));
    bVar3 = FUN_19c7_1e82();
    bVar1 = *(byte *)((param_1 & 3) + 0x4538);
    *pbVar4 = bVar3 & bVar1 | ~bVar1 & *pbVar4;
  }
  return;
}



/* 19c7:1f8b FUN_19c7_1f8b */

void __cdecl16near FUN_19c7_1f8b(uint param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if ((((*(int *)0x39a4 <= (int)param_1) && ((int)param_1 <= *(int *)0x39a8)) &&
      (*(int *)0x39a6 <= param_2)) && (param_2 <= *(int *)0x39aa)) {
    pbVar3 = (byte *)(*(int *)(param_2 << 1) + ((int)param_1 >> 1));
    bVar1 = FUN_19c7_1ea7();
    bVar2 = 0xf0;
    if ((param_1 & 1) != 0) {
      bVar2 = 0xf;
    }
    *pbVar3 = bVar1 & bVar2 | ~bVar2 & *pbVar3;
  }
  return;
}



/* 19c7:1fce FUN_19c7_1fce */

undefined1 __cdecl16near FUN_19c7_1fce(void)

{
  undefined2 unaff_DS;
  
  out(0x3ce,8);
  return *(undefined1 *)((*(uint *)0x450c & 7) + 0x4544);
}



/* 19c7:23a3 FUN_19c7_23a3 */

void __cdecl16near FUN_19c7_23a3(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_SI;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined2 unaff_DS;
  
  iVar5 = *unaff_SI;
  iVar6 = unaff_SI[4];
  iVar1 = iVar5;
  iVar4 = unaff_SI[2];
  iVar7 = unaff_SI[6];
  if (iVar6 < iVar5) {
    iVar1 = iVar6;
    iVar6 = iVar5;
    iVar4 = unaff_SI[6];
    iVar7 = unaff_SI[2];
  }
  iVar9 = iVar4 << 1;
  uVar3 = iVar6 - iVar1;
  iVar6 = 2;
  iVar5 = iVar4;
  if (iVar7 < iVar4) {
    iVar6 = -2;
    iVar5 = iVar7;
    iVar7 = iVar4;
  }
  if ((((*(int *)0x39a6 <= iVar5) && (iVar5 <= *(int *)0x39aa)) && (*(int *)0x39a6 <= iVar7)) &&
     (iVar7 <= *(int *)0x39aa)) {
    if (iVar5 < *(int *)0x450a) {
      *(int *)0x450a = iVar5;
    }
    uVar8 = iVar7 - iVar5;
    if (uVar3 < uVar8) {
      uVar2 = uVar8 + 1;
      iVar5 = -(uVar2 >> 1);
      while( true ) {
        while( true ) {
          if (iVar1 < *(int *)(iVar9 + 0x3d86)) {
            *(int *)(iVar9 + 0x3d86) = iVar1;
          }
          if (*(int *)(iVar9 + 0x4148) < iVar1) {
            *(int *)(iVar9 + 0x4148) = iVar1;
          }
          iVar5 = iVar5 + uVar3;
          if (-1 < iVar5) break;
          iVar9 = iVar9 + iVar6;
          uVar2 = uVar2 - 1;
          if (uVar2 == 0) {
            return;
          }
        }
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) break;
        iVar5 = iVar5 - uVar8;
        iVar1 = iVar1 + 1;
        iVar9 = iVar9 + iVar6;
      }
      return;
    }
    uVar2 = uVar3 + 1;
    iVar5 = -(uVar2 >> 1);
    while( true ) {
      if (iVar1 < *(int *)(iVar9 + 0x3d86)) {
        *(int *)(iVar9 + 0x3d86) = iVar1;
      }
      while (iVar4 = iVar1, iVar5 = iVar5 + uVar8, iVar5 < 0) {
        uVar2 = uVar2 - 1;
        iVar1 = iVar4 + 1;
        if (uVar2 == 0) {
          if (*(int *)(iVar9 + 0x4148) < iVar4) {
            *(int *)(iVar9 + 0x4148) = iVar4;
            return;
          }
          return;
        }
      }
      if (*(int *)(iVar9 + 0x4148) < iVar4) {
        *(int *)(iVar9 + 0x4148) = iVar4;
      }
      iVar5 = iVar5 - uVar3;
      uVar2 = uVar2 - 1;
      if (uVar2 == 0) break;
      iVar1 = iVar4 + 1;
      iVar9 = iVar9 + iVar6;
    }
  }
  return;
}



/* 19c7:2460 FUN_19c7_2460 */

void __cdecl16near FUN_19c7_2460(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = param_2;
  if (param_2 < param_1) {
    iVar1 = param_1;
    param_1 = param_2;
  }
  if ((*(int *)0x39a6 < iVar1) && (param_1 < *(int *)0x39aa)) {
    if (param_1 < *(int *)0x39a6) {
      param_1 = *(int *)0x39a6;
    }
    if (*(int *)0x39aa < iVar1) {
      iVar1 = *(int *)0x39aa;
    }
    if (iVar1 - param_1 != 0) {
      if (param_1 < *(int *)0x450a) {
        *(int *)0x450a = param_1;
      }
      iVar1 = (iVar1 - param_1) + 1;
      param_1 = param_1 << 1;
      do {
        if (param_3 < *(int *)(param_1 + 0x3d86)) {
          *(int *)(param_1 + 0x3d86) = param_3;
        }
        if (*(int *)(param_1 + 0x4148) < param_3) {
          *(int *)(param_1 + 0x4148) = param_3;
        }
        param_1 = param_1 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}



/* 19c7:2854 FUN_19c7_2854 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl16far FUN_19c7_2854(undefined1 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  char extraout_DH;
  uint extraout_DX;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  char *pcVar12;
  int unaff_ES;
  undefined2 unaff_DS;
  bool bVar13;
  undefined2 uStack_f24;
  undefined2 uStack_f22;
  undefined2 uStack_f20;
  undefined2 uStack_f1e;
  undefined2 uStack_f1c;
  
  pcVar4 = (code *)swi(0x21);
  bVar5 = (*pcVar4)();
  if (bVar5 < 2) {
    pcVar4 = (code *)swi(0x20);
    (*pcVar4)();
  }
  uVar9 = *(int *)0x2 + 0xd199;
  if (0xfff < uVar9) {
    uVar9 = 0x1000;
  }
  if ((undefined1 *)0xf21 < &param_1) {
    unaff_DS = 0x2e67;
    uStack_f20 = 0x19c7;
    uStack_f22 = 0xc4f1;
    FUN_19c7_2a7c();
    uStack_f20 = 0;
    uStack_f22 = 0x19c7;
    uStack_f24 = 0xc4f9;
    FUN_19c7_2d1b();
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
  }
  DAT_2e67_8eea = &uStack_f1e;
  DAT_2e67_8ee6 = &uStack_f1e;
  DAT_2e67_8ee4 = uVar9 * 0x10 + -1;
  *(int *)0x2 = uVar9 + 0x2e67;
  iVar8 = -(unaff_ES - (uVar9 + 0x2e67));
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  puVar11 = (undefined1 *)0x94bf;
  DAT_2e67_8f5b = unaff_DS;
  for (iVar7 = 0x5c21; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar2 = puVar11;
    puVar11 = puVar11 + 1;
    *puVar2 = 0;
  }
                    /* WARNING: Call to offcut address within same function */
  uStack_f1c = 0x19c7;
  uStack_f1e = 0xc541;
  func_0x0001c58a();
  uStack_f1c = 0x19c7;
  uStack_f1e = 0xc548;
  FUN_19c7_2c82();
  uStack_f1c = 0x19c7;
  uStack_f1e = 0xc54d;
  FUN_19c7_2af0();
  uStack_f1c = DAT_2e67_8f7c;
  uStack_f1e = DAT_2e67_8f7a;
  uStack_f20 = DAT_2e67_8f78;
  uStack_f22 = 0x19c7;
  uStack_f24 = 0xc560;
  uStack_f22 = FUN_1000_0000();
  uStack_f24 = 0x1000;
  FUN_19c7_29de();
  DAT_2e67_8ee8 = (code *)0x29de;
  uStack_f24 = 3;
  FUN_19c7_2a7c();
  FUN_19c7_2d1b();
  uStack_f24 = 0xff;
  (*DAT_2e67_8ee8)(0x19c7);
  *(char *)(uVar9 - 0x469) = *(char *)(uVar9 - 0x469) + extraout_DH;
  *(uint *)(puVar11 + -0x70a3) = *(uint *)(puVar11 + -0x70a3) & (uint)&uStack_f24;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  DAT_2e67_8f4b = 0x2e67;
  uStack_f22 = 0x1000;
  pcVar4 = (code *)swi(0x21);
  DAT_2e67_8f49 = iVar8;
  (*pcVar4)();
  if (DAT_2e67_93a8 != 0) {
    bVar13 = false;
    uStack_f1e = 0x1000;
    uStack_f20 = 0xc5c6;
    (*(code *)*(undefined2 *)0x93a6)();
    if (bVar13) {
      uStack_f1e = 0x2e67;
      FUN_19c7_2aa0();
      return;
    }
    uStack_f1e = 0x1000;
    uStack_f20 = 0xc5dc;
    (*(code *)*(undefined2 *)0x93a6)();
  }
  iVar7 = *(int *)0x2c;
  if (iVar7 != 0) {
    pcVar12 = (char *)0x0;
    do {
      if (*pcVar12 == '\0') break;
      iVar8 = 0xc;
      pcVar10 = (char *)0x8f3c;
      bVar13 = false;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar3 = pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar1 = pcVar10;
        pcVar10 = pcVar10 + 1;
        bVar13 = *pcVar1 == *pcVar3;
      } while (bVar13);
      if (bVar13) {
        uStack_f20 = 0x2e67;
        pcVar10 = (char *)0x8f64;
        iVar8 = (int)*pcVar12;
        do {
          pcVar12 = pcVar12 + 1;
          cVar6 = '\0';
          if (*pcVar12 != -1) {
            cVar6 = *pcVar12;
          }
          pcVar1 = pcVar10;
          pcVar10 = pcVar10 + 1;
          *pcVar1 = cVar6;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        break;
      }
      iVar8 = 0x7fff;
      bVar13 = true;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar1 = pcVar12;
        pcVar12 = pcVar12 + 1;
        bVar13 = *pcVar1 == '\0';
      } while (!bVar13);
    } while (bVar13);
  }
  uStack_f1e = 0x2e67;
  iVar7 = 4;
  do {
    bVar13 = false;
    *(byte *)(iVar7 + -0x709c) = *(byte *)(iVar7 + -0x709c) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar13) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar7 + -0x709c) = *(byte *)(iVar7 + -0x709c) | 0x40;
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  uStack_f1e = 0xc644;
  FUN_19c7_2a69();
  uStack_f1e = 0xc64d;
  FUN_19c7_2a69();
  return;
}



/* 19c7:29de FUN_19c7_29de */

void FUN_19c7_29de(undefined2 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_19c7_2a69();
  FUN_19c7_2a69();
  FUN_19c7_2a69();
  FUN_19c7_2a69();
  iVar2 = FUN_19c7_2aca();
  if ((iVar2 != 0) && (param_2 == 0)) {
    param_2 = 0xff;
  }
  iVar2 = 0xf;
  iVar3 = 5;
  do {
    if ((*(byte *)(iVar3 + -0x709c) & 1) != 0) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_19c7_2a3c();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(int *)0x93a8 != 0) {
    (*(code *)*(undefined2 *)0x93a6)();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x8f86 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



/* 19c7:2a3c FUN_19c7_2a3c */

void __cdecl16near FUN_19c7_2a3c(undefined2 param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x93a8 != 0) {
    (*(code *)*(undefined2 *)0x93a6)(0x19c7);
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(char *)0x8f86 != '\0') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



/* 19c7:2a69 FUN_19c7_2a69 */

void __cdecl16near FUN_19c7_2a69(void)

{
  int *piVar1;
  int *unaff_SI;
  int *unaff_DI;
  int *piVar2;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    piVar2 = unaff_DI + -2;
    piVar1 = unaff_DI + -1;
    unaff_DI = piVar2;
    if (*piVar2 != 0 || *piVar1 != 0) {
      (*(code *)*piVar2)(0x19c7);
    }
  }
  return;
}



/* 19c7:2a7c FUN_19c7_2a7c */

void __cdecl16far FUN_19c7_2a7c(void)

{
  undefined2 unaff_DS;
  
  FUN_19c7_2d1b(0xfc);
  if (*(int *)0x8f8e != 0) {
    (*(code *)*(undefined2 *)0x8f8c)(0x19c7);
  }
  FUN_19c7_2d1b(0xff);
  return;
}



/* 19c7:2aa0 FUN_19c7_2aa0 */

void __cdecl16far FUN_19c7_2aa0(void)

{
  uint *puVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  char extraout_DH;
  uint extraout_DX;
  int iVar7;
  undefined2 in_BX;
  int unaff_BP;
  char *pcVar8;
  int unaff_SI;
  char *pcVar9;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar10;
  undefined2 uStack_2;
  
  uStack_2 = 2;
  FUN_19c7_2a7c();
  FUN_19c7_2d1b();
  uStack_2 = 0xff;
  (*(code *)*(undefined2 *)0x8ee8)(0x19c7);
  *(char *)(unaff_SI + -0x32d0) = *(char *)(unaff_SI + -0x32d0) + extraout_DH;
  puVar1 = (uint *)(unaff_BP + unaff_DI + -0x70a3);
  *puVar1 = *puVar1 & (uint)&uStack_2;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(undefined2 *)0x8f49 = in_BX;
  *(undefined2 *)0x8f4b = unaff_ES;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0x93a8 != 0) {
    bVar10 = false;
    (*(code *)*(undefined2 *)0x93a6)();
    if (bVar10) {
      FUN_19c7_2aa0();
      return;
    }
    (*(code *)*(undefined2 *)0x93a6)();
  }
  iVar7 = *(int *)0x2c;
  if (iVar7 != 0) {
    pcVar9 = (char *)0x0;
    do {
      if (*pcVar9 == '\0') break;
      iVar6 = 0xc;
      pcVar8 = (char *)0x8f3c;
      bVar10 = false;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar3 = pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar2 = pcVar8;
        pcVar8 = pcVar8 + 1;
        bVar10 = *pcVar2 == *pcVar3;
      } while (bVar10);
      if (bVar10) {
        pcVar8 = (char *)0x8f64;
        iVar6 = (int)*pcVar9;
        do {
          pcVar9 = pcVar9 + 1;
          cVar5 = '\0';
          if (*pcVar9 != -1) {
            cVar5 = *pcVar9;
          }
          pcVar2 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar2 = cVar5;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        break;
      }
      iVar6 = 0x7fff;
      bVar10 = true;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar2 = pcVar9;
        pcVar9 = pcVar9 + 1;
        bVar10 = *pcVar2 == '\0';
      } while (!bVar10);
    } while (bVar10);
  }
  iVar7 = 4;
  do {
    bVar10 = false;
    *(byte *)(iVar7 + -0x709c) = *(byte *)(iVar7 + -0x709c) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar10) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar7 + -0x709c) = *(byte *)(iVar7 + -0x709c) | 0x40;
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  FUN_19c7_2a69();
  FUN_19c7_2a69();
  return;
}



/* 19c7:2aa6 FUN_19c7_2aa6 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_19c7_2aa6(undefined2 param_1,undefined2 param_2)

{
  uint *puVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  undefined1 *in_AX;
  int iVar6;
  char extraout_DH;
  uint extraout_DX;
  uint uVar7;
  int iVar8;
  int unaff_BP;
  char *pcVar9;
  int unaff_SI;
  char *pcVar10;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar11;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000002;
  undefined2 auStack_7ffe [16383];
  
  iVar8 = -(int)in_AX;
  uVar7 = (int)&param_1 + iVar8;
  if ((in_AX <= &param_1) && (*(uint *)0x8f94 <= uVar7)) {
    *(undefined2 *)((int)register0x00000010 + iVar8 + 2) = in_stack_00000002;
    *(undefined2 *)((int)register0x00000010 + iVar8) = in_stack_00000000;
    return;
  }
  if (*(int *)0x8f90 != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001c736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x8f90)();
    return;
  }
  FUN_19c7_2a7c();
  FUN_19c7_2d1b();
  (*(code *)*(undefined2 *)0x8ee8)();
  *(char *)(unaff_SI + -0x32d0) = *(char *)(unaff_SI + -0x32d0) + extraout_DH;
  puVar1 = (uint *)(unaff_BP + unaff_DI + -0x70a3);
  *puVar1 = *puVar1 & (int)register0x00000010 + 2U;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  *(uint *)0x8f49 = uVar7;
  *(undefined2 *)0x8f4b = unaff_ES;
  param_1 = 0x1000;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  if (*(int *)0x93a8 != 0) {
    bVar11 = false;
    param_2 = 0xc5c6;
    (*(code *)*(undefined2 *)0x93a6)();
    if (bVar11) {
      FUN_19c7_2aa0();
      return;
    }
    param_2 = 0xc5dc;
    (*(code *)*(undefined2 *)0x93a6)();
  }
  iVar8 = *(int *)0x2c;
  if (iVar8 != 0) {
    pcVar10 = (char *)0x0;
    do {
      if (*pcVar10 == '\0') break;
      iVar6 = 0xc;
      pcVar9 = (char *)0x8f3c;
      bVar11 = false;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar3 = pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar2 = pcVar9;
        pcVar9 = pcVar9 + 1;
        bVar11 = *pcVar2 == *pcVar3;
      } while (bVar11);
      if (bVar11) {
        pcVar9 = (char *)0x8f64;
        iVar6 = (int)*pcVar10;
        do {
          pcVar10 = pcVar10 + 1;
          cVar5 = '\0';
          if (*pcVar10 != -1) {
            cVar5 = *pcVar10;
          }
          pcVar2 = pcVar9;
          pcVar9 = pcVar9 + 1;
          *pcVar2 = cVar5;
          iVar6 = iVar6 + -1;
          param_2 = unaff_SS;
        } while (iVar6 != 0);
        break;
      }
      iVar6 = 0x7fff;
      bVar11 = true;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar2 = pcVar10;
        pcVar10 = pcVar10 + 1;
        bVar11 = *pcVar2 == '\0';
      } while (!bVar11);
    } while (bVar11);
  }
  iVar8 = 4;
  do {
    bVar11 = false;
    *(byte *)(iVar8 + -0x709c) = *(byte *)(iVar8 + -0x709c) & 0xbf;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if ((!bVar11) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar8 + -0x709c) = *(byte *)(iVar8 + -0x709c) | 0x40;
    }
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  FUN_19c7_2a69();
  FUN_19c7_2a69();
  return;
}



/* 19c7:2aca FUN_19c7_2aca */

uint __cdecl16far FUN_19c7_2aca(void)

{
  byte *pbVar1;
  byte bVar3;
  uint uVar2;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  
  pbVar5 = (byte *)0x0;
  iVar4 = 0x42;
  bVar3 = 0;
  do {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = bVar3 ^ *pbVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = CONCAT11(bVar3,*pbVar1) ^ 0x5500;
  if (bVar3 != 0x55) {
    FUN_19c7_2a7c();
    FUN_19c7_2d1b(1);
    uVar2 = 1;
  }
  return uVar2;
}



/* 19c7:2af0 FUN_19c7_2af0 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_19c7_2af0(undefined2 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  *(undefined2 *)0x8f96 = in_stack_00000000;
  *(undefined2 *)0x8f98 = param_1;
  uVar7 = 2;
  if (*(char *)0x8f5d != '\x02') {
    uVar13 = *(undefined2 *)0x2c;
    *(undefined2 *)0x8f80 = uVar13;
    iVar5 = -0x8000;
    pcVar10 = (char *)0x0;
LAB_19c7_2b16:
    do {
      pcVar11 = pcVar10;
      if (iVar5 != 0) {
        iVar5 = iVar5 + -1;
        pcVar4 = pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar10;
        if (*pcVar4 != '\0') goto LAB_19c7_2b16;
      }
      pcVar10 = pcVar11 + 1;
    } while (*pcVar11 != '\0');
    pcVar11 = pcVar11 + 3;
    *(undefined2 *)0x8f7e = pcVar11;
    uVar7 = 0xffff;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar4 != '\0');
    uVar7 = ~uVar7;
  }
  iVar5 = 1;
  pcVar10 = (char *)0x81;
  uVar13 = *(undefined2 *)0x8f5b;
LAB_19c7_2b34:
  do {
    do {
      pcVar4 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar4;
    } while (cVar3 == ' ');
  } while (cVar3 == '\t');
  if ((cVar3 != '\r') && (cVar3 != '\0')) {
    iVar5 = iVar5 + 1;
    do {
      pcVar10 = pcVar10 + -1;
LAB_19c7_2b47:
      pcVar4 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar4;
      if ((cVar3 == ' ') || (cVar3 == '\t')) goto LAB_19c7_2b34;
      if ((cVar3 == '\r') || (cVar3 == '\0')) break;
      if (cVar3 == '\"') {
LAB_19c7_2b80:
        do {
          while( true ) {
            while( true ) {
              pcVar4 = pcVar10;
              pcVar10 = pcVar10 + 1;
              cVar3 = *pcVar4;
              if ((cVar3 == '\r') || (cVar3 == '\0')) goto LAB_19c7_2bb0;
              if (cVar3 == '\"') goto LAB_19c7_2b47;
              if (cVar3 == '\\') break;
              uVar7 = uVar7 + 1;
            }
            uVar6 = 0;
            do {
              pcVar11 = pcVar10;
              uVar6 = uVar6 + 1;
              pcVar10 = pcVar11 + 1;
            } while (*pcVar11 == '\\');
            if (*pcVar11 == '\"') break;
            uVar7 = uVar7 + uVar6;
            pcVar10 = pcVar11;
          }
          uVar7 = uVar7 + (uVar6 >> 1) + (uint)((uVar6 & 1) != 0);
        } while ((uVar6 & 1) != 0);
        goto LAB_19c7_2b47;
      }
      if (cVar3 != '\\') {
        uVar7 = uVar7 + 1;
        goto LAB_19c7_2b47;
      }
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        pcVar4 = pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (*pcVar4 == '\\');
      if (*pcVar4 == '\"') {
        uVar7 = uVar7 + (uVar6 >> 1) + (uint)((uVar6 & 1) != 0);
        if ((uVar6 & 1) == 0) goto LAB_19c7_2b80;
        goto LAB_19c7_2b47;
      }
      uVar7 = uVar7 + uVar6;
    } while( true );
  }
LAB_19c7_2bb0:
  *(int *)0x8f78 = iVar5;
  iVar12 = (iVar5 + 1) * 2;
  iVar5 = -(uVar7 + iVar5 + iVar12 & 0xfffe);
  *(undefined1 **)0x8f7a = &param_2 + iVar5;
  pcVar11 = &param_2 + iVar12 + iVar5;
  *(undefined2 *)((int)((int)register0x00000010 + 2) + iVar5) = unaff_SS;
  uVar13 = *(undefined2 *)((int)((int)register0x00000010 + 2) + iVar5);
  *(char **)(&param_2 + iVar5) = pcVar11;
  puVar8 = (undefined2 *)(&param_3 + iVar5);
  pcVar4 = (char *)*(undefined4 *)0x8f7e;
  pcVar10 = (char *)pcVar4;
  do {
    pcVar2 = pcVar10;
    pcVar10 = pcVar10 + 1;
    cVar3 = *pcVar2;
    pcVar2 = pcVar11;
    pcVar11 = pcVar11 + 1;
    *pcVar2 = cVar3;
  } while (cVar3 != '\0');
  pcVar10 = (char *)0x81;
  uVar1 = *(undefined2 *)0x8f5b;
LAB_19c7_2be9:
  do {
    do {
      pcVar4 = pcVar10;
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar4;
    } while (cVar3 == ' ');
  } while (cVar3 == '\t');
  if ((cVar3 == '\r') || (cVar3 == '\0')) {
LAB_19c7_2c78:
    *(undefined2 *)((int)((int)register0x00000010 + 2) + iVar5) = unaff_SS;
    uVar13 = *(undefined2 *)((int)((int)register0x00000010 + 2) + iVar5);
    *puVar8 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001c8ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulong)*(uint *)0x8f96)();
    return;
  }
  *puVar8 = pcVar11;
  puVar8 = puVar8 + 1;
  do {
    pcVar10 = pcVar10 + -1;
LAB_19c7_2c06:
    pcVar4 = pcVar10;
    pcVar10 = pcVar10 + 1;
    cVar3 = *pcVar4;
    if ((cVar3 == ' ') || (cVar3 == '\t')) {
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar4 = '\0';
      goto LAB_19c7_2be9;
    }
    if ((cVar3 == '\r') || (cVar3 == '\0')) {
LAB_19c7_2c75:
      *pcVar11 = '\0';
      goto LAB_19c7_2c78;
    }
    if (cVar3 == '\"') {
LAB_19c7_2c42:
      while( true ) {
        pcVar4 = pcVar10;
        pcVar10 = pcVar10 + 1;
        cVar3 = *pcVar4;
        if ((cVar3 == '\r') || (cVar3 == '\0')) goto LAB_19c7_2c75;
        if (cVar3 == '\"') break;
        if (cVar3 == '\\') {
          uVar7 = 0;
          do {
            pcVar9 = pcVar10;
            uVar7 = uVar7 + 1;
            pcVar10 = pcVar9 + 1;
          } while (*pcVar9 == '\\');
          if (*pcVar9 == '\"') {
            for (uVar6 = uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
              pcVar4 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar4 = '\\';
            }
            if ((uVar7 & 1) == 0) break;
            pcVar4 = pcVar11;
            pcVar11 = pcVar11 + 1;
            *pcVar4 = '\"';
          }
          else {
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
              pcVar4 = pcVar11;
              pcVar11 = pcVar11 + 1;
              *pcVar4 = '\\';
            }
            pcVar10 = pcVar9;
          }
        }
        else {
          pcVar4 = pcVar11;
          pcVar11 = pcVar11 + 1;
          *pcVar4 = cVar3;
        }
      }
      goto LAB_19c7_2c06;
    }
    if (cVar3 != '\\') {
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar4 = cVar3;
      goto LAB_19c7_2c06;
    }
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
      pcVar4 = pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (*pcVar4 == '\\');
    if (*pcVar4 == '\"') {
      for (uVar6 = uVar7 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        pcVar4 = pcVar11;
        pcVar11 = pcVar11 + 1;
        *pcVar4 = '\\';
      }
      if ((uVar7 & 1) == 0) goto LAB_19c7_2c42;
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar4 = '\"';
      goto LAB_19c7_2c06;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar4 = pcVar11;
      pcVar11 = pcVar11 + 1;
      *pcVar4 = '\\';
    }
  } while( true );
}



/* 19c7:2c82 FUN_19c7_2c82 */

void __cdecl16far FUN_19c7_2c82(void)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  int *piVar8;
  char *pcVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 auStackY_86 [128];
  
  iVar6 = 0;
  pcVar9 = (char *)0x0;
  iVar5 = -1;
  iVar4 = *(int *)0x2c;
  if (iVar4 != 0) {
    cVar3 = *(char *)0x0;
    while (cVar3 != '\0') {
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar2 = pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (*pcVar2 != '\0');
      iVar6 = iVar6 + 1;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      cVar3 = *pcVar2;
    }
  }
  iVar6 = iVar6 + 1;
  puVar7 = (undefined2 *)(iVar6 * 2);
  iVar5 = FUN_19c7_2d46(iVar6,auStackY_86 + 0x84);
  pcVar9 = (char *)((int)puVar7 + iVar5);
  *(undefined2 *)0x8f7c = puVar7;
  piVar8 = (int *)0x0;
  while (iVar6 = iVar6 + -1, iVar6 != 0) {
    if (*piVar8 != 0x433b) {
      *puVar7 = pcVar9;
      puVar7 = puVar7 + 1;
    }
    do {
      piVar1 = piVar8;
      piVar8 = (int *)((int)piVar8 + 1);
      iVar5 = *piVar1;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      *pcVar2 = (char)iVar5;
    } while ((char)iVar5 != '\0');
  }
  *puVar7 = 0;
  return;
}



/* 19c7:2cf0 FUN_19c7_2cf0 */

int * __stdcall16far FUN_19c7_2cf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar3 = (int *)0x93ee;
  do {
    piVar1 = piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar3;
    if ((*piVar1 == param_1) || (piVar4 = (int *)0x0, *piVar1 == -1)) {
      return piVar4;
    }
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      piVar1 = piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
    } while ((char)*piVar1 != '\0');
  } while( true );
}



/* 19c7:2d1b FUN_19c7_2d1b */

void __stdcall16far FUN_19c7_2d1b(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  
  pcVar3 = (char *)FUN_19c7_2cf0(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



/* 19c7:2d46 FUN_19c7_2d46 */

void __cdecl16near FUN_19c7_2d46(void)

{
  uint *puVar1;
  char *pcVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  uint in_AX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char extraout_DH;
  uint extraout_DX;
  uint extraout_DX_00;
  int iVar9;
  int in_BX;
  int unaff_BP;
  char *pcVar10;
  int unaff_SI;
  char *pcVar11;
  int unaff_DI;
  int unaff_ES;
  undefined2 unaff_SS;
  int unaff_DS;
  bool bVar12;
  undefined1 auStackY_84 [128];
  
  uVar6 = in_AX + *(uint *)0x8eea;
  if (CARRY2(in_AX,*(uint *)0x8eea)) {
LAB_19c7_2d83:
    FUN_19c7_2a7c();
    FUN_19c7_2d1b();
    (*(code *)*(undefined2 *)0x8ee8)(0x19c7);
    *(char *)(unaff_SI + -0x32d0) = *(char *)(unaff_SI + -0x32d0) + extraout_DH;
    puVar1 = (uint *)(unaff_BP + unaff_DI + -0x70a3);
    *puVar1 = *puVar1 & (uint)(auStackY_84 + 0x82);
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    *(int *)0x8f49 = in_BX;
    *(int *)0x8f4b = unaff_ES;
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if (*(int *)0x93a8 != 0) {
      bVar12 = false;
      (*(code *)*(undefined2 *)0x93a6)();
      if (bVar12) {
        FUN_19c7_2aa0();
        return;
      }
      (*(code *)*(undefined2 *)0x93a6)();
    }
    iVar9 = *(int *)0x2c;
    if (iVar9 != 0) {
      pcVar11 = (char *)0x0;
      do {
        if (*pcVar11 == '\0') break;
        iVar8 = 0xc;
        pcVar10 = (char *)0x8f3c;
        bVar12 = false;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar3 = pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar2 = pcVar10;
          pcVar10 = pcVar10 + 1;
          bVar12 = *pcVar2 == *pcVar3;
        } while (bVar12);
        if (bVar12) {
          pcVar10 = (char *)0x8f64;
          iVar8 = (int)*pcVar11;
          do {
            pcVar11 = pcVar11 + 1;
            cVar5 = '\0';
            if (*pcVar11 != -1) {
              cVar5 = *pcVar11;
            }
            pcVar2 = pcVar10;
            pcVar10 = pcVar10 + 1;
            *pcVar2 = cVar5;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          break;
        }
        iVar8 = 0x7fff;
        bVar12 = true;
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar2 = pcVar11;
          pcVar11 = pcVar11 + 1;
          bVar12 = *pcVar2 == '\0';
        } while (!bVar12);
      } while (bVar12);
    }
    iVar9 = 4;
    do {
      bVar12 = false;
      *(byte *)(iVar9 + -0x709c) = *(byte *)(iVar9 + -0x709c) & 0xbf;
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      if ((!bVar12) && ((extraout_DX & 0x80) != 0)) {
        *(byte *)(iVar9 + -0x709c) = *(byte *)(iVar9 + -0x709c) | 0x40;
      }
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
    FUN_19c7_2a69();
    FUN_19c7_2a69();
    return;
  }
  if (*(uint *)0x8ee4 < uVar6) {
    uVar7 = (uint)(CONCAT12(0xfff0 < uVar6,uVar6 + 0xf) >> 1) >> 3;
    unaff_ES = *(int *)0x8f5b;
    bVar12 = CARRY2(uVar7,unaff_DS - unaff_ES);
    in_BX = uVar7 + (unaff_DS - unaff_ES);
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    if (bVar12) goto LAB_19c7_2d83;
    *(int *)0x8ee4 = (uVar6 + 0xf & 0xfff0) - 1;
    in_AX = extraout_DX_00;
  }
  *(int *)0x8eea = *(int *)0x8eea + in_AX;
  return;
}



/* 19c7:2d88 FUN_19c7_2d88 */

undefined2 __cdecl16far FUN_19c7_2d88(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_19c7_2dae();
    return 0xffff;
  }
  return 0;
}



/* 19c7:2d90 FUN_19c7_2d90 */

undefined2 __cdecl16far FUN_19c7_2d90(void)

{
  undefined2 in_AX;
  bool in_CF;
  
  if (in_CF) {
    FUN_19c7_2dae();
    return in_AX;
  }
  return 0;
}



/* 19c7:2d9b FUN_19c7_2d9b */

void __cdecl16far FUN_19c7_2d9b(void)

{
  bool in_CF;
  
  if (in_CF) {
    FUN_19c7_2dae();
  }
  return;
}



/* 19c7:2da8 FUN_19c7_2da8 */

void __cdecl16far FUN_19c7_2da8(void)

{
  FUN_19c7_2dae();
  return;
}



/* 19c7:2dae FUN_19c7_2dae */

void __cdecl16near FUN_19c7_2dae(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x8f60 = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_19c7_2dd3;
  if (*(byte *)0x8f5d < 3) {
LAB_19c7_2dc9:
    if (0x13 < bVar1) {
LAB_19c7_2dcd:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_19c7_2dcd;
    if (bVar1 < 0x20) goto LAB_19c7_2dc9;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0x8f9a);
LAB_19c7_2dd3:
  *(int *)0x8f55 = (int)cVar2;
  return;
}



/* 19c7:2ea4 FUN_19c7_2ea4 */

int __cdecl16far FUN_19c7_2ea4(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = 0;
  for (uVar2 = 0x8fb4; uVar2 <= *(uint *)0x90cc; uVar2 = uVar2 + 8) {
    if ((*(byte *)(uVar2 + 6) & 0x83) != 0) {
      iVar1 = FUN_19c7_3758(uVar2);
      if (iVar1 != -1) {
        iVar3 = iVar3 + 1;
      }
    }
  }
  return iVar3;
}



/* 19c7:2ed8 FUN_19c7_2ed8 */

undefined2 __cdecl16far FUN_19c7_2ed8(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = FUN_19c7_40b8();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_19c7_353c(param_1,param_2,iVar1);
  }
  return uVar2;
}



/* 19c7:2f04 FUN_19c7_2f04 */

uint __cdecl16far FUN_19c7_2f04(undefined1 *param_1,uint param_2,int param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined2 unaff_DS;
  uint local_6;
  
  uVar4 = param_2 * param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    return uVar4;
  }
  local_6 = uVar4;
  if (((*(byte *)(param_4 + 3) & 0xc) == 0) &&
     ((*(byte *)(((int)(param_4 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
    cVar2 = *(char *)((int)param_4 + 7);
    if (((*(byte *)(cVar2 + -0x709c) & 0x80) == 0) && ((uVar4 & 0x1ff) == 0)) {
      if (uVar4 != 0) {
        do {
          iVar7 = FUN_19c7_4330(0x19c7,(int)cVar2,param_1,local_6);
          if ((iVar7 == 0) || (iVar7 == -1)) goto joined_r0x0001cd44;
          local_6 = local_6 - iVar7;
          param_1 = param_1 + iVar7;
        } while (local_6 != 0);
      }
      goto LAB_19c7_303c;
    }
    piVar1 = param_4 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar6 = FUN_19c7_327e(param_4);
    }
    else {
      pbVar3 = (byte *)*param_4;
      *param_4 = *param_4 + 1;
      uVar6 = (uint)*pbVar3;
    }
    if (uVar6 == 0xffff) {
      return 0;
    }
    *param_1 = (char)uVar6;
    param_1 = param_1 + 1;
    local_6 = uVar4 - 1;
  }
  if (((*(byte *)(param_4 + 3) & 8) == 0) &&
     ((*(byte *)(((int)(param_4 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
    if (local_6 != 0) {
      cVar2 = *(char *)((int)param_4 + 7);
      do {
        iVar7 = FUN_19c7_4330(0x19c7,(int)cVar2,param_1,local_6);
        if ((iVar7 == 0) || (iVar7 == -1)) goto joined_r0x0001cd44;
        local_6 = local_6 - iVar7;
        param_1 = param_1 + iVar7;
      } while (local_6 != 0);
    }
  }
  else {
    while (local_6 != 0) {
      if (param_4[1] == 0) {
        if (local_6 < 0x200) {
          iVar7 = FUN_19c7_327e(param_4);
          if (iVar7 == -1) break;
          *param_1 = (char)iVar7;
          param_1 = param_1 + 1;
          local_6 = local_6 - 1;
        }
        else {
          iVar7 = FUN_19c7_4330(0x19c7,(int)*(char *)((int)param_4 + 7),param_1,local_6 & 0xfe00);
          if ((iVar7 == 0) || (iVar7 == -1)) goto joined_r0x0001cd44;
          local_6 = local_6 - iVar7;
          param_1 = param_1 + iVar7;
        }
      }
      else {
        iVar7 = (param_4[1] - local_6 & -(uint)((uint)param_4[1] < local_6)) + local_6;
        FUN_19c7_4d50(param_1,*param_4,iVar7);
        *param_4 = *param_4 + iVar7;
        param_1 = param_1 + iVar7;
        local_6 = local_6 - iVar7;
        param_4[1] = param_4[1] - iVar7;
      }
    }
  }
LAB_19c7_303c:
  return (uVar4 - local_6) / param_2;
joined_r0x0001cd44:
  if (iVar7 == -1) {
    bVar5 = 0x20;
  }
  else {
    bVar5 = 0x10;
  }
  *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) | bVar5;
  goto LAB_19c7_303c;
}



/* 19c7:30f6 FUN_19c7_30f6 */

uint __cdecl16far FUN_19c7_30f6(char *param_1,uint param_2,int param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  uint local_6;
  
  uVar4 = param_2 * param_3;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_19c7_311c;
  local_6 = uVar4;
  if (((*(byte *)(param_4 + 3) & 0xc) == 0) &&
     ((*(byte *)(((int)(param_4 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
    if ((uVar4 & 0x1ff) == 0) {
      uVar4 = FUN_19c7_440e(0x19c7,(int)*(char *)((int)param_4 + 7),param_1,uVar4);
      if (uVar4 != 0xffff) goto LAB_19c7_3161;
    }
    else {
      piVar1 = param_4 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        FUN_19c7_3340((int)*param_1,param_4);
      }
      else {
        cVar2 = *param_1;
        pcVar3 = (char *)*param_4;
        *param_4 = *param_4 + 1;
        *pcVar3 = cVar2;
      }
      if ((*(byte *)(param_4 + 3) & 0x20) == 0) {
        param_1 = param_1 + 1;
        local_6 = uVar4 - 1;
        goto LAB_19c7_3191;
      }
    }
LAB_19c7_311c:
    uVar4 = 0;
  }
  else {
LAB_19c7_3191:
    if (((*(byte *)(param_4 + 3) & 8) == 0) &&
       ((*(byte *)(((int)(param_4 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
      iVar5 = FUN_19c7_440e(0x19c7,(int)*(char *)((int)param_4 + 7),param_1,local_6);
      if (iVar5 != -1) {
        local_6 = local_6 - iVar5;
      }
    }
    else {
      while (local_6 != 0) {
        if (param_4[1] == 0) {
          piVar1 = param_4 + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 < 0) {
            FUN_19c7_3340((int)*param_1,param_4);
          }
          else {
            cVar2 = *param_1;
            pcVar3 = (char *)*param_4;
            *param_4 = *param_4 + 1;
            *pcVar3 = cVar2;
          }
          if ((*(byte *)(param_4 + 3) & 0x20) != 0) break;
          param_1 = param_1 + 1;
          local_6 = local_6 - 1;
        }
        else {
          iVar5 = (param_4[1] - local_6 & -(uint)((uint)param_4[1] < local_6)) + local_6;
          FUN_19c7_4d50(*param_4,param_1,iVar5);
          *param_4 = *param_4 + iVar5;
          param_1 = param_1 + iVar5;
          local_6 = local_6 - iVar5;
          param_4[1] = param_4[1] - iVar5;
        }
      }
    }
    uVar4 = uVar4 - local_6;
LAB_19c7_3161:
    uVar4 = uVar4 / param_2;
  }
  return uVar4;
}



/* 19c7:323c FUN_19c7_323c */

undefined2 __cdecl16far FUN_19c7_323c(undefined2 param_1,undefined1 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_19c7_3636(0x8fbc);
  uVar2 = FUN_19c7_37c8(0x8fbc,param_1,&param_2);
  FUN_19c7_36ba(uVar1,0x8fbc);
  return uVar2;
}



/* 19c7:327e FUN_19c7_327e */

uint __cdecl16far FUN_19c7_327e(int *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar4 = ((int)(param_1 + 0x3826) >> 3) * 6;
  if (((*(byte *)(param_1 + 3) & 0x83) != 0) && ((*(byte *)(param_1 + 3) & 0x40) == 0)) {
    if ((*(byte *)(param_1 + 3) & 2) == 0) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
      pbVar1 = (byte *)(iVar4 + -0x6fac);
      *pbVar1 = *pbVar1 & 0xfb;
      if (((*(byte *)(param_1 + 3) & 0xc) == 0) &&
         ((*(byte *)(((int)(param_1 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
        FUN_19c7_34ce(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar4 = FUN_19c7_4330(0x19c7,(int)*(char *)((int)param_1 + 7),param_1[2],
                            *(undefined2 *)(iVar4 + -0x6faa));
      param_1[1] = iVar4;
      if ((iVar4 != 0) && (iVar4 != -1)) {
        param_1[1] = param_1[1] + -1;
        pbVar2 = (byte *)*param_1;
        *param_1 = *param_1 + 1;
        return (uint)*pbVar2;
      }
      if (param_1[1] == 0) {
        bVar3 = 0x10;
      }
      else {
        bVar3 = 0x20;
      }
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | bVar3;
      param_1[1] = 0;
    }
    else {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
    }
  }
  return 0xffff;
}



/* 19c7:3340 FUN_19c7_3340 */

uint __cdecl16far FUN_19c7_3340(byte param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  int local_6;
  
  piVar1 = param_2;
  iVar2 = (int)*(char *)((int)param_2 + 7);
  iVar3 = ((int)(param_2 + 0x3826) >> 3) * 6;
  if ((((*(byte *)(param_2 + 3) & 0x83) != 0) && ((*(byte *)(param_2 + 3) & 0x40) == 0)) &&
     ((*(byte *)(param_2 + 3) & 1) == 0)) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) & 0xef;
    param_2[1] = 0;
    local_6 = 0;
    if (((*(byte *)(param_2 + 3) & 0xc) == 0) &&
       ((*(byte *)(((int)(param_2 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
      if ((param_2 == (int *)0x8fbc) || (param_2 == (int *)0x8fc4)) {
        iVar4 = FUN_19c7_4926(iVar2);
        if (iVar4 == 0) {
          *(int *)0x8fb2 = *(int *)0x8fb2 + 1;
          if (piVar1 == (int *)0x8fbc) {
            iVar4 = -0x132a;
          }
          else {
            iVar4 = -0x112a;
          }
          piVar1[2] = iVar4;
          *piVar1 = iVar4;
          *(undefined2 *)(iVar3 + -0x6faa) = 0x200;
          *(undefined1 *)(iVar3 + -0x6fac) = 1;
        }
      }
      else {
        FUN_19c7_34ce(param_2);
      }
    }
    if (((*(byte *)(piVar1 + 3) & 8) == 0) &&
       ((*(byte *)(((int)(piVar1 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
      iVar4 = 1;
      local_6 = FUN_19c7_440e(0x19c7,iVar2,&param_1,1);
    }
    else {
      iVar4 = *piVar1 - piVar1[2];
      *piVar1 = piVar1[2] + 1;
      piVar1[1] = *(int *)(iVar3 + -0x6faa) + -1;
      if (iVar4 < 1) {
        if ((*(byte *)(iVar2 + -0x709c) & 0x20) != 0) {
          FUN_19c7_4112(0x19c7,iVar2,0,0,2);
        }
      }
      else {
        local_6 = FUN_19c7_440e(0x19c7,iVar2,piVar1[2],iVar4);
      }
      *(byte *)piVar1[2] = param_1;
    }
    if (local_6 == iVar4) {
      return (uint)param_1;
    }
  }
  *(byte *)(piVar1 + 3) = *(byte *)(piVar1 + 3) | 0x20;
  return 0xffff;
}



/* 19c7:349e FUN_19c7_349e */

void __cdecl16far FUN_19c7_349e(undefined2 *param_1)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_1 + 3) & 0x83) != 0) && ((*(byte *)(param_1 + 3) & 8) != 0)) {
    FUN_19c7_454c(param_1[2]);
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



/* 19c7:34ce FUN_19c7_34ce */

void __cdecl16near FUN_19c7_34ce(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = ((int)(param_1 + 0x3826) >> 3) * 6;
  iVar2 = FUN_19c7_455e(0x200);
  param_1[2] = iVar2;
  if (iVar2 == 0) {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 4;
    param_1[2] = iVar1 + -0x6fab;
    *(undefined2 *)(iVar1 + -0x6faa) = 1;
  }
  else {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 8;
    *(undefined2 *)(iVar1 + -0x6faa) = 0x200;
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return;
}



/* 19c7:353c FUN_19c7_353c */

undefined2 * __cdecl16far FUN_19c7_353c(undefined2 param_1,char *param_2,undefined2 *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  undefined1 local_8;
  undefined1 local_6;
  
  cVar1 = *param_2;
  if (cVar1 == 'a') {
    uVar5 = 0x109;
  }
  else {
    if (cVar1 == 'r') {
      uVar5 = 0;
      local_6 = 1;
      goto LAB_19c7_3568;
    }
    if (cVar1 != 'w') {
      return (undefined2 *)0x0;
    }
    uVar5 = 0x301;
  }
  local_6 = 2;
LAB_19c7_3568:
  bVar2 = true;
  do {
    while( true ) {
      param_2 = param_2 + 1;
      if ((*param_2 == '\0') || (!bVar2)) {
        iVar3 = FUN_19c7_418c(param_1,uVar5,0x1a4);
        if (iVar3 < 0) {
          return (undefined2 *)0x0;
        }
        *(undefined1 *)(param_3 + 3) = local_6;
        *(int *)0x8fb2 = *(int *)0x8fb2 + 1;
        iVar4 = ((int)(param_3 + 0x3826) >> 3) * 6;
        *(undefined1 *)(iVar4 + -0x6fac) = 0;
        param_3[1] = 0;
        *(undefined2 *)(iVar4 + -0x6fa8) = 0;
        *param_3 = 0;
        param_3[2] = 0;
        local_8 = (undefined1)iVar3;
        *(undefined1 *)((int)param_3 + 7) = local_8;
        return param_3;
      }
      cVar1 = *param_2;
      if (cVar1 != '+') break;
      if ((uVar5 & 2) == 0) {
        uVar5 = uVar5 & 0xfffe | 2;
        local_6 = 0x80;
      }
      else {
LAB_19c7_35c5:
        bVar2 = false;
      }
    }
    if (cVar1 == 'b') {
      if ((uVar5 & 0xc000) != 0) goto LAB_19c7_35c5;
      uVar5 = uVar5 | 0x8000;
    }
    else {
      if ((cVar1 != 't') || ((uVar5 & 0xc000) != 0)) goto LAB_19c7_35c5;
      uVar5 = uVar5 | 0x4000;
    }
  } while( true );
}



/* 19c7:3636 FUN_19c7_3636 */

undefined2 __cdecl16far FUN_19c7_3636(undefined2 *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  *(int *)0x8fb2 = *(int *)0x8fb2 + 1;
  if (param_1 == (undefined2 *)0x8fbc) {
    local_4 = 0xecd6;
  }
  else {
    if (param_1 != (undefined2 *)0x8fc4) {
      return 0;
    }
    local_4 = 0xeed6;
  }
  if (((*(byte *)(param_1 + 3) & 0xc) == 0) &&
     ((*(byte *)(((int)(param_1 + 0x3826) >> 3) * 6 + -0x6fac) & 1) == 0)) {
    iVar1 = ((int)(param_1 + 0x3826) >> 3) * 6;
    param_1[2] = local_4;
    *param_1 = local_4;
    *(undefined2 *)(iVar1 + -0x6faa) = 0x200;
    param_1[1] = 0x200;
    *(undefined1 *)(iVar1 + -0x6fac) = 1;
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
    return 1;
  }
  return 0;
}



/* 19c7:36ba FUN_19c7_36ba */

void __cdecl16far FUN_19c7_36ba(int param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (param_1 == 0) {
    if ((param_2[2] == -0x132a) || (param_2[2] == -0x112a)) {
      iVar1 = FUN_19c7_4926((int)*(char *)((int)param_2 + 7));
      if (iVar1 != 0) {
        FUN_19c7_3758(param_2);
      }
    }
  }
  else if ((param_2 == (undefined2 *)0x8fbc) || (param_2 == (undefined2 *)0x8fc4)) {
    iVar1 = FUN_19c7_4926((int)*(char *)((int)param_2 + 7));
    if (iVar1 != 0) {
      iVar1 = ((int)(param_2 + 0x3826) >> 3) * 6;
      FUN_19c7_3758(param_2);
      *(undefined1 *)(iVar1 + -0x6fac) = 0;
      *(undefined2 *)(iVar1 + -0x6faa) = 0;
      *param_2 = 0;
      param_2[2] = 0;
    }
  }
  return;
}



/* 19c7:3758 FUN_19c7_3758 */

undefined2 __cdecl16far FUN_19c7_3758(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0;
  if (((*(byte *)(param_1 + 3) & 3) == 2) &&
     (((*(byte *)(param_1 + 3) & 8) != 0 ||
      ((*(byte *)(((int)(param_1 + 0x3826) >> 3) * 6 + -0x6fac) & 1) != 0)))) {
    iVar1 = *param_1 - param_1[2];
    if (0 < iVar1) {
      iVar2 = FUN_19c7_440e(0x19c7,(int)*(char *)((int)param_1 + 7),param_1[2],iVar1);
      if (iVar2 != iVar1) {
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 0x20;
        uVar3 = 0xffff;
      }
    }
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return uVar3;
}



/* 19c7:37c8 FUN_19c7_37c8 */
/* Decompilation failed: Low-level Error: Bad instruction count exceeded:
    ...
    Instruction at (ram,0x0001d202) overlaps instruction at (ram,0x0001d201)
 */

/* 19c7:3af4 FUN_19c7_3af4 */

void __cdecl16far FUN_19c7_3af4(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 unaff_DS;
  bool bVar7;
  char local_1a [12];
  int local_e;
  int local_a;
  int local_6;
  int local_4;
  
  if (param_1 != 10) {
    *(int *)0x9a6c = *(int *)0x9a6c + 1;
  }
  if ((*(int *)0x9a60 == 2) || (*(int *)0x9a60 == 0x10)) {
    local_6 = *(int *)*(int *)0x9a66;
    local_4 = ((int *)*(int *)0x9a66)[1];
    *(int *)0x9a66 = *(int *)0x9a66 + 4;
  }
  else {
    if (*(int *)0x9a6c == 0) {
      local_6 = *(int *)*(undefined2 *)0x9a66;
      local_4 = local_6 >> 0xf;
    }
    else {
      local_6 = *(int *)*(undefined2 *)0x9a66;
      local_4 = 0;
    }
    *(int *)0x9a66 = *(int *)0x9a66 + 2;
  }
  if ((*(int *)0x9a58 == 0) || (local_6 == 0 && local_4 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1;
  }
  *(int *)0x9a7a = iVar3;
  pcVar5 = (char *)*(undefined2 *)0x9a76;
  if ((*(int *)0x9a6c == 0) && (local_4 < 0)) {
    if (param_1 == 10) {
      *pcVar5 = '-';
      pcVar5 = pcVar5 + 1;
      bVar7 = local_6 != 0;
      local_6 = -local_6;
      local_4 = -(local_4 + (uint)bVar7);
    }
    local_a = 1;
  }
  else {
    local_a = 0;
  }
  FUN_19c7_4904(0x19c7,local_6,local_4,local_1a,param_1);
  if (*(int *)0x9a6a != 0) {
    iVar3 = FUN_19c7_486a(local_1a);
    iVar3 = *(int *)0x9a72 - iVar3;
    while (0 < iVar3) {
      *pcVar5 = '0';
      pcVar5 = pcVar5 + 1;
      iVar3 = iVar3 + -1;
    }
    local_e = iVar3 + -1;
  }
  iVar3 = *(int *)0x9a5e;
  pcVar6 = local_1a;
  do {
    cVar2 = *pcVar6;
    *pcVar5 = cVar2;
    if ((iVar3 != 0) && ('`' < cVar2)) {
      *pcVar5 = *pcVar5 + -0x20;
    }
    pcVar5 = pcVar5 + 1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  if (((*(int *)0x9a6c == 0) && (*(int *)0x9a62 != 0 || *(int *)0x9a68 != 0)) && (local_a == 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  FUN_19c7_3ee2(uVar4);
  return;
}



/* 19c7:3c2e FUN_19c7_3c2e */

void __cdecl16far FUN_19c7_3c2e(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int unaff_DS;
  undefined4 local_10;
  char *local_a;
  int iVar4;
  char *local_6;
  
  iVar4 = unaff_DS;
  if (param_1 != 0) {
    iVar3 = 1;
    local_a = (char *)*(undefined2 *)0x9a66;
    *(int *)0x9a66 = *(int *)0x9a66 + 2;
    goto LAB_19c7_3ce1;
  }
  if (*(int *)0x9a60 == 0x10) {
    local_a = (char *)*(undefined2 *)*(undefined2 *)0x9a66;
    iVar4 = ((undefined2 *)*(undefined2 *)0x9a66)[1];
    *(int *)0x9a66 = *(int *)0x9a66 + 4;
  }
  else {
    local_a = (char *)*(undefined2 *)*(undefined2 *)0x9a66;
    *(int *)0x9a66 = *(int *)0x9a66 + 2;
    local_6 = local_a;
  }
  if (*(int *)0x9a60 == 0x10) {
    if (local_a == (char *)0x0 && iVar4 == 0) {
      local_a = (char *)0x90ce;
LAB_19c7_3c9f:
      iVar4 = unaff_DS;
    }
  }
  else if (local_6 == (char *)0x0) {
    local_a = (char *)0x90d5;
    goto LAB_19c7_3c9f;
  }
  local_10 = (char *)CONCAT22(iVar4,local_a);
  iVar3 = 0;
  if (*(int *)0x9a6a == 0) {
    while (pcVar2 = local_10, local_10 = (char *)CONCAT22(local_10._2_2_,(char *)local_10 + 1),
          *pcVar2 != '\0') {
      iVar3 = iVar3 + 1;
    }
  }
  else {
    while ((pcVar2 = local_10, iVar3 < *(int *)0x9a72 &&
           (local_10 = (char *)CONCAT22(local_10._2_2_,(char *)local_10 + 1), *pcVar2 != '\0'))) {
      iVar3 = iVar3 + 1;
    }
  }
LAB_19c7_3ce1:
  iVar1 = *(int *)0x9a78;
  if (*(int *)0x9a64 == 0) {
    FUN_19c7_3e18(iVar1 - iVar3);
  }
  FUN_19c7_3e78(local_a,iVar4,iVar3);
  if (*(int *)0x9a64 != 0) {
    FUN_19c7_3e18(iVar1 - iVar3);
  }
  return;
}



/* 19c7:3d1a FUN_19c7_3d1a */

void __cdecl16far FUN_19c7_3d1a(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = *(undefined2 *)0x9a66;
  if ((param_1 == 0x67) || (param_1 == 0x47)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (*(int *)0x9a6a == 0) {
    *(undefined2 *)0x9a72 = 6;
  }
  if ((bVar1) && (*(int *)0x9a72 == 0)) {
    *(undefined2 *)0x9a72 = 1;
  }
  (*(code *)*(undefined2 *)0x90fa)
            (0x19c7,uVar3,*(undefined2 *)0x9a76,param_1,*(undefined2 *)0x9a72,*(undefined2 *)0x9a5e)
  ;
  if ((bVar1) && (*(int *)0x9a58 == 0)) {
    (*(code *)*(undefined2 *)0x90fe)(0x19c7,*(undefined2 *)0x9a76);
  }
  if ((*(int *)0x9a58 != 0) && (*(int *)0x9a72 == 0)) {
    (*(code *)*(undefined2 *)0x9106)(0x19c7,*(undefined2 *)0x9a76);
  }
  *(int *)0x9a66 = *(int *)0x9a66 + 8;
  *(undefined2 *)0x9a7a = 0;
  if (*(int *)0x9a62 != 0 || *(int *)0x9a68 != 0) {
    iVar2 = (*(code *)*(undefined2 *)0x910a)(0x19c7,uVar3);
    if (iVar2 != 0) {
      uVar3 = 1;
      goto LAB_19c7_3dce;
    }
  }
  uVar3 = 0;
LAB_19c7_3dce:
  FUN_19c7_3ee2(uVar3);
  return;
}



/* 19c7:3dd8 FUN_19c7_3dd8 */

void __cdecl16far FUN_19c7_3dd8(uint param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined2 unaff_DS;
  
  if (*(int *)0x9a70 == 0) {
    piVar2 = (int *)*(undefined2 *)0x9a5a;
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      param_1 = FUN_19c7_3340(param_1,piVar2);
    }
    else {
      puVar3 = (undefined1 *)*piVar2;
      *piVar2 = *piVar2 + 1;
      *puVar3 = (undefined1)param_1;
      param_1 = param_1 & 0xff;
    }
    if (param_1 == 0xffff) {
      *(int *)0x9a70 = *(int *)0x9a70 + 1;
    }
    else {
      *(int *)0x9a6e = *(int *)0x9a6e + 1;
    }
  }
  return;
}



/* 19c7:3e18 FUN_19c7_3e18 */

void __cdecl16far FUN_19c7_3e18(int param_1)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  if ((*(int *)0x9a70 == 0) && (iVar6 = param_1, 0 < param_1)) {
    while (iVar7 = iVar6 + -1, 0 < iVar6) {
      piVar3 = (int *)*(undefined2 *)0x9a5a;
      piVar1 = piVar3 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        uVar5 = FUN_19c7_3340(*(undefined2 *)0x9a7c,*(undefined2 *)0x9a5a);
      }
      else {
        bVar2 = *(byte *)0x9a7c;
        pbVar4 = (byte *)*piVar3;
        *piVar3 = *piVar3 + 1;
        *pbVar4 = bVar2;
        uVar5 = (uint)bVar2;
      }
      iVar6 = iVar7;
      if (uVar5 == 0xffff) {
        *(int *)0x9a70 = *(int *)0x9a70 + 1;
      }
    }
    if (*(int *)0x9a70 == 0) {
      *(int *)0x9a6e = *(int *)0x9a6e + param_1;
    }
  }
  return;
}



/* 19c7:3e78 FUN_19c7_3e78 */

void __cdecl16far FUN_19c7_3e78(byte *param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  iVar5 = param_2;
  if (*(int *)0x9a70 == 0) {
    while (iVar5 != 0) {
      piVar1 = (int *)(*(int *)0x9a5a + 2);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 < 0) {
        uVar4 = FUN_19c7_3340((int)(char)*param_1,*(undefined2 *)0x9a5a);
      }
      else {
        bVar2 = *param_1;
        pbVar3 = (byte *)*(int *)*(undefined2 *)0x9a5a;
        piVar1 = (int *)*(undefined2 *)0x9a5a;
        *piVar1 = *piVar1 + 1;
        *pbVar3 = bVar2;
        uVar4 = (uint)bVar2;
      }
      if (uVar4 == 0xffff) {
        *(int *)0x9a70 = *(int *)0x9a70 + 1;
      }
      param_1 = (byte *)CONCAT22(param_1._2_2_,(byte *)param_1 + 1);
      iVar5 = iVar5 + -1;
    }
    if (*(int *)0x9a70 == 0) {
      *(int *)0x9a6e = *(int *)0x9a6e + param_2;
    }
  }
  return;
}



/* 19c7:3ee2 FUN_19c7_3ee2 */

void __cdecl16far FUN_19c7_3ee2(int param_1)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined2 unaff_DS;
  bool bVar6;
  
  pcVar4 = (char *)*(undefined2 *)0x9a76;
  bVar2 = false;
  bVar6 = false;
  if (((*(int *)0x9a7c == 0x30) && (*(int *)0x9a6a != 0)) &&
     ((*(int *)0x9a5c == 0 || (*(int *)0x9a74 == 0)))) {
    *(undefined2 *)0x9a7c = 0x20;
  }
  iVar5 = *(int *)0x9a78;
  iVar3 = FUN_19c7_486a(pcVar4);
  iVar5 = (iVar5 - iVar3) - param_1;
  if (((*(int *)0x9a64 == 0) && (*pcVar4 == '-')) && (*(int *)0x9a7c == 0x30)) {
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    FUN_19c7_3dd8((int)*pcVar1);
  }
  if (((*(int *)0x9a7c == 0x30) || (iVar5 < 1)) || (*(int *)0x9a64 != 0)) {
    bVar6 = param_1 != 0;
    if (bVar6) {
      FUN_19c7_3fce();
    }
    if (*(int *)0x9a7a != 0) {
      bVar2 = true;
      FUN_19c7_3fe6();
    }
  }
  if (*(int *)0x9a64 == 0) {
    FUN_19c7_3e18(iVar5);
    if ((param_1 != 0) && (!bVar6)) {
      FUN_19c7_3fce();
    }
    if ((*(int *)0x9a7a != 0) && (!bVar2)) {
      FUN_19c7_3fe6();
    }
  }
  FUN_19c7_3e78(pcVar4);
  if (*(int *)0x9a64 != 0) {
    *(undefined2 *)0x9a7c = 0x20;
    FUN_19c7_3e18(iVar5);
  }
  return;
}



/* 19c7:3fce FUN_19c7_3fce */

void __cdecl16far FUN_19c7_3fce(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x9a62 == 0) {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0x2b;
  }
  FUN_19c7_3dd8(uVar1);
  return;
}



/* 19c7:3fe6 FUN_19c7_3fe6 */

void __cdecl16far FUN_19c7_3fe6(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  FUN_19c7_3dd8(0x30);
  if (*(int *)0x9a7a == 0x10) {
    if (*(int *)0x9a5e == 0) {
      uVar1 = 0x78;
    }
    else {
      uVar1 = 0x58;
    }
    FUN_19c7_3dd8(uVar1);
  }
  return;
}



/* 19c7:4010 FUN_19c7_4010 */

char * __cdecl16far FUN_19c7_4010(int *param_1,char *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 1;
  if (*param_2 == '*') {
    iVar1 = *(int *)*(undefined2 *)0x9a66;
    *(int *)0x9a66 = *(int *)0x9a66 + 2;
    param_2 = param_2 + 1;
  }
  else {
    if (*param_2 == '-') {
      local_4 = -1;
      param_2 = param_2 + 1;
    }
    iVar1 = 0;
    if (('/' < *param_2) && (*param_2 < ':')) {
      if ((*(int *)0x9a6a == 0) && (*param_2 == '0')) {
        *(undefined2 *)0x9a7c = 0x30;
      }
      do {
        iVar1 = iVar1 * 10 + (int)*param_2 + -0x30;
        param_2 = param_2 + 1;
        if (*param_2 < '0') break;
      } while (*param_2 < ':');
    }
  }
  *param_1 = local_4 * iVar1;
  return param_2;
}



/* 19c7:4090 FUN_19c7_4090 */

undefined2 __cdecl16far FUN_19c7_4090(char param_1)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)0x90dc;
  while( true ) {
    if (*pcVar1 == '\0') {
      return 0;
    }
    if (param_1 == *pcVar1) break;
    pcVar1 = pcVar1 + 1;
  }
  return 1;
}



/* 19c7:40b8 FUN_19c7_40b8 */

undefined2 * __cdecl16far FUN_19c7_40b8(void)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  puVar1 = (undefined2 *)0x8fb4;
  do {
    if ((*(byte *)(puVar1 + 3) & 0x83) == 0) {
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      *(undefined1 *)((int)puVar1 + 7) = 0xff;
      return puVar1;
    }
    bVar2 = puVar1 != (undefined2 *)*(undefined2 *)0x90cc;
    puVar1 = puVar1 + 4;
  } while (bVar2);
  return (undefined2 *)0x0;
}



/* 19c7:40f2 FUN_19c7_40f2 */

void FUN_19c7_40f2(undefined2 param_1,uint param_2)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = param_2 < *(uint *)0x8f62;
  if (bVar2) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar2) {
      *(undefined1 *)(param_2 + 0x8f64) = 0;
    }
  }
  FUN_19c7_2d88();
  return;
}



/* 19c7:4112 FUN_19c7_4112 */

void FUN_19c7_4112(undefined2 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(uint *)0x8f62 <= param_2) goto LAB_19c7_4189;
  bVar5 = false;
  if ((param_4 & 0x8000) != 0) {
    if (param_5 == 0) goto LAB_19c7_4189;
    bVar5 = false;
    pcVar2 = (code *)swi(0x21);
    uVar6 = (*pcVar2)();
    uVar3 = (uint)((ulong)uVar6 >> 0x10);
    if (bVar5) goto LAB_19c7_4189;
    if ((param_5 & 2) == 0) {
      uVar1 = (uint)CARRY2((uint)uVar6,param_3);
      bVar5 = CARRY2(uVar3,param_4) || CARRY2(uVar3 + param_4,uVar1);
      if ((int)(uVar3 + param_4 + uVar1) < 0) goto LAB_19c7_4189;
    }
    else {
      pcVar2 = (code *)swi(0x21);
      uVar6 = (*pcVar2)(uVar3);
      uVar4 = (uint)((ulong)uVar6 >> 0x10);
      uVar3 = (uint)CARRY2((uint)uVar6,param_3);
      uVar1 = uVar4 + param_4;
      bVar5 = CARRY2(uVar4,param_4) || CARRY2(uVar1,uVar3);
      if ((int)(uVar1 + uVar3) < 0) {
        pcVar2 = (code *)swi(0x21);
        (*pcVar2)();
        goto LAB_19c7_4189;
      }
    }
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (!bVar5) {
    *(byte *)(param_2 + 0x8f64) = *(byte *)(param_2 + 0x8f64) & 0xfd;
  }
LAB_19c7_4189:
  FUN_19c7_2d9b();
  return;
}



/* 19c7:418c FUN_19c7_418c */

/* WARNING: Removing unreachable block (ram,0x0001def4) */

uint __cdecl16far FUN_19c7_418c(undefined2 param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint extraout_DX;
  undefined2 unaff_DS;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  byte local_6;
  char local_4;
  
  uVar4 = (uint)_local_4 >> 8;
  local_4 = '\0';
  local_6 = 0;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || ((*(byte *)0x90e3 & 0x80) == 0)))) {
    local_6 = 0x80;
  }
  bVar7 = false;
  pcVar1 = (code *)swi(0x21);
  uVar6 = param_2;
  uVar2 = (*pcVar1)();
  if (bVar7) {
    if ((uVar2 != 2) || ((uVar6 & 0x100) == 0)) goto LAB_19c7_41d0;
    bVar7 = false;
    local_4 = -0x15;
    FUN_19c7_431f();
    uVar8 = 0;
    uVar6 = 0;
LAB_19c7_428e:
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if ((bool)uVar8) {
LAB_19c7_4297:
      uVar4 = FUN_19c7_2d9b();
      return uVar4;
    }
    if ((local_4 != '\0') || ((param_2 & 2) == 0)) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      bVar9 = false;
      pcVar1 = (code *)swi(0x21);
      uVar2 = (*pcVar1)();
      if (bVar9) goto LAB_19c7_4297;
      if ((!bVar7) && ((param_3 & 1) != 0)) {
        bVar7 = false;
        uVar6 = (uint)(byte)((byte)uVar6 | 1);
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
        if (bVar7) goto LAB_19c7_4297;
      }
    }
  }
  else {
    if ((uVar6 & 0x500) == 0x500) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      goto LAB_19c7_41d0;
    }
    bVar7 = true;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((extraout_DX & 0x80) != 0) {
      local_6 = local_6 | 0x40;
    }
    if ((local_6 & 0x40) == 0) {
      if ((param_2 & 0x200) == 0) {
        if (((local_6 & 0x80) != 0) && ((param_2 & 2) != 0)) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          iVar3 = (*pcVar1)();
          if ((iVar3 != 0) && ((char)uVar4 == '\x1a')) {
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
            pcVar1 = (code *)swi(0x21);
            (*pcVar1)();
          }
          uVar6 = 0;
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
        }
      }
      else {
        uVar8 = 0;
        if ((param_2 & 3) == 0) {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)();
          goto LAB_19c7_428e;
        }
        uVar6 = 0;
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
      }
    }
  }
  if ((local_6 & 0x40) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    bVar5 = 0;
    if ((uVar6 & 1) != 0) {
      bVar5 = 0x10;
    }
    if ((param_2 & 8) != 0) {
      bVar5 = bVar5 | 0x20;
    }
  }
  else {
    bVar5 = 0;
  }
  if (uVar2 < *(uint *)0x8f62) {
    *(byte *)(uVar2 + 0x8f64) = bVar5 | local_6 | 1;
    return uVar2;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
LAB_19c7_41d0:
  uVar4 = FUN_19c7_2d9b();
  return uVar4;
}



/* 19c7:431f FUN_19c7_431f */

void __cdecl16near FUN_19c7_431f(void)

{
  return;
}



/* 19c7:4330 FUN_19c7_4330 */

/* WARNING: Removing unreachable block (ram,0x0001e07b) */
/* WARNING: Removing unreachable block (ram,0x0001e070) */

void FUN_19c7_4330(undefined2 param_1,uint param_2,undefined2 param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  char cVar6;
  undefined2 uVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 uVar7;
  int iVar5;
  undefined1 extraout_AH_01;
  int iVar8;
  uint extraout_DX;
  char *pcVar9;
  char *pcVar10;
  undefined2 unaff_DS;
  bool bVar11;
  undefined4 uVar12;
  
  if (((*(uint *)0x8f62 <= param_2) || (param_4 == 0)) ||
     (bVar11 = false, (*(byte *)(param_2 + 0x8f64) & 2) != 0)) {
LAB_19c7_43a1:
    FUN_19c7_2d9b();
    return;
  }
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  pcVar10 = (char *)((ulong)uVar12 >> 0x10);
  if (((bVar11) || ((*(byte *)(param_2 + 0x8f64) & 0x80) == 0)) ||
     (*(byte *)(param_2 + 0x8f64) = *(byte *)(param_2 + 0x8f64) & 0xfb, (int)uVar12 == 0))
  goto LAB_19c7_43a1;
  uVar4 = 0xd00;
  if (*pcVar10 == '\n') {
    *(byte *)(param_2 + 0x8f64) = *(byte *)(param_2 + 0x8f64) | 4;
  }
LAB_19c7_4386:
  pcVar9 = (char *)((ulong)uVar12 >> 0x10);
  iVar8 = (int)uVar12;
  pcVar1 = pcVar9 + 1;
  cVar2 = *pcVar9;
  cVar6 = (char)((uint)uVar4 >> 8);
  uVar4 = CONCAT11(cVar6,cVar2);
  if (cVar2 == cVar6) {
    if (iVar8 != 1) {
      if (*pcVar1 != '\n') goto LAB_19c7_4396;
      goto LAB_19c7_4399;
    }
    bVar11 = false;
    if ((*(byte *)(param_2 + 0x8f64) & 0x40) == 0) {
      pcVar3 = (code *)swi(0x21);
      iVar5 = (*pcVar3)();
      if (!bVar11) {
        uVar7 = 0;
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(0x21);
          (*pcVar3)();
          iVar8 = 1;
          uVar7 = extraout_AH_01;
        }
        uVar4 = CONCAT11(uVar7,0xd);
        goto LAB_19c7_4396;
      }
      goto LAB_19c7_43a1;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    bVar11 = false;
    uVar7 = extraout_AH;
    if ((extraout_DX & 0x20) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar7 = extraout_AH_00;
      if (bVar11) goto LAB_19c7_43a1;
    }
    uVar4 = CONCAT11(uVar7,10);
  }
  else if (cVar2 == '\x1a') {
    *(byte *)(param_2 + 0x8f64) = *(byte *)(param_2 + 0x8f64) | 2;
    goto LAB_19c7_43a1;
  }
LAB_19c7_4396:
  *pcVar10 = (char)uVar4;
  pcVar10 = pcVar10 + 1;
LAB_19c7_4399:
  uVar12 = CONCAT22(pcVar1,iVar8 + -1);
  if (iVar8 + -1 == 0) goto LAB_19c7_43a1;
  goto LAB_19c7_4386;
}



/* 19c7:440e FUN_19c7_440e */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_19c7_440e(undefined2 param_1,uint param_2,char *param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  char extraout_DH;
  uint extraout_DX;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar11;
  uint auStack_70a5 [14408];
  undefined2 uStack_14;
  undefined2 uStack_12;
  char acStack_10 [2];
  
  if (*(uint *)0x8f62 <= param_2) {
LAB_19c7_4421:
    FUN_19c7_2d9b();
    return;
  }
  if ((*(byte *)(param_2 + 0x8f64) & 0x20) != 0) {
    bVar11 = false;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    if (bVar11) goto LAB_19c7_4421;
  }
  if ((*(byte *)(param_2 + 0x8f64) & 0x80) != 0) {
    bVar11 = true;
    iVar7 = param_4;
    pcVar9 = param_3;
    if (param_4 == 0) {
      FUN_19c7_44f6();
      return;
    }
    do {
      if (iVar7 == 0) break;
      pcVar2 = pcVar9;
      pcVar9 = pcVar9 + 1;
      bVar11 = *pcVar2 == '\n';
      iVar7 = iVar7 + -1;
    } while (!bVar11);
    if (bVar11) {
      acStack_10[0] = -0x39;
      acStack_10[1] = '\x19';
      uStack_12 = 0xe0d4;
      uVar5 = FUN_19c7_4538();
      if (0xa8 < uVar5) {
        pcVar9 = acStack_10;
        iVar7 = 0x200;
        if (uVar5 < 0x228) {
          iVar7 = 0x80;
        }
        iVar7 = -iVar7;
        pcVar8 = acStack_10 + iVar7;
        *(undefined2 *)(acStack_10 + iVar7 + -2) = unaff_SS;
        uVar10 = *(undefined2 *)(acStack_10 + iVar7 + -2);
        do {
          pcVar2 = param_3;
          param_3 = param_3 + 1;
          cVar4 = *pcVar2;
          if (cVar4 == '\n') {
            cVar4 = '\r';
            if (pcVar8 == pcVar9) {
              *(undefined2 *)(acStack_10 + iVar7 + -2) = 0xe10e;
              cVar4 = FUN_19c7_44b6();
            }
            pcVar2 = pcVar8;
            pcVar8 = pcVar8 + 1;
            *pcVar2 = cVar4;
            cVar4 = '\n';
          }
          if (pcVar8 == pcVar9) {
            *(undefined2 *)(acStack_10 + iVar7 + -2) = 0xe119;
            cVar4 = FUN_19c7_44b6();
          }
          pcVar2 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar2 = cVar4;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        *(undefined2 *)(acStack_10 + iVar7 + -2) = 0xe103;
        FUN_19c7_44b6();
        FUN_19c7_44f6();
        return;
      }
      acStack_10[0] = '\0';
      acStack_10[1] = '\0';
      uStack_12 = 0x19c7;
      uStack_14 = 0xc57b;
      FUN_19c7_2a7c();
      uStack_12 = 0x19c7;
      uStack_14 = 0xc580;
      FUN_19c7_2d1b();
      acStack_10[0] = -1;
      acStack_10[1] = '\0';
      uStack_12 = 0x19c7;
      uStack_14 = 0xc589;
      (*(code *)*(undefined2 *)0x8ee8)();
      param_3[-0x32d0] = param_3[-0x32d0] + extraout_DH;
      *(uint *)((int)auStack_70a5 + (int)pcVar9) =
           *(uint *)((int)auStack_70a5 + (int)pcVar9) & (uint)acStack_10;
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      *(uint *)0x8f49 = param_2;
      *(undefined2 *)0x8f4b = unaff_DS;
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      if (*(int *)0x93a8 != 0) {
        bVar11 = false;
        (*(code *)*(undefined2 *)0x93a6)();
        if (bVar11) {
          FUN_19c7_2aa0();
          return;
        }
        (*(code *)*(undefined2 *)0x93a6)();
      }
      iVar7 = *(int *)0x2c;
      if (iVar7 != 0) {
        pcVar9 = (char *)0x0;
        do {
          if (*pcVar9 == '\0') break;
          iVar6 = 0xc;
          pcVar8 = (char *)0x8f3c;
          bVar11 = false;
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar1 = pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar2 = pcVar8;
            pcVar8 = pcVar8 + 1;
            bVar11 = *pcVar2 == *pcVar1;
          } while (bVar11);
          if (bVar11) {
            pcVar8 = (char *)0x8f64;
            iVar6 = (int)*pcVar9;
            do {
              pcVar9 = pcVar9 + 1;
              cVar4 = '\0';
              if (*pcVar9 != -1) {
                cVar4 = *pcVar9;
              }
              pcVar2 = pcVar8;
              pcVar8 = pcVar8 + 1;
              *pcVar2 = cVar4;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            break;
          }
          iVar6 = 0x7fff;
          bVar11 = true;
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar2 = pcVar9;
            pcVar9 = pcVar9 + 1;
            bVar11 = *pcVar2 == '\0';
          } while (!bVar11);
        } while (bVar11);
      }
      iVar7 = 4;
      do {
        bVar11 = false;
        *(byte *)(iVar7 + -0x709c) = *(byte *)(iVar7 + -0x709c) & 0xbf;
        pcVar3 = (code *)swi(0x21);
        (*pcVar3)();
        if ((!bVar11) && ((extraout_DX & 0x80) != 0)) {
          *(byte *)(iVar7 + -0x709c) = *(byte *)(iVar7 + -0x709c) | 0x40;
        }
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      FUN_19c7_2a69();
      FUN_19c7_2a69();
      return;
    }
  }
  FUN_19c7_4504();
  return;
}



/* 19c7:44b6 FUN_19c7_44b6 */

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16near FUN_19c7_44b6(void)

{
  code *pcVar1;
  undefined2 in_AX;
  int iVar2;
  undefined2 uVar3;
  uint in_DX;
  int unaff_BP;
  uint unaff_DI;
  undefined2 unaff_SS;
  bool bVar4;
  
  bVar4 = unaff_DI < in_DX;
  if (unaff_DI != in_DX) {
    pcVar1 = (code *)swi(0x21);
    iVar2 = (*pcVar1)();
    if ((bVar4) || (*(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + iVar2, iVar2 == 0)) {
      uVar3 = FUN_19c7_2d9b();
      return uVar3;
    }
  }
  return in_AX;
}



/* 19c7:44f6 FUN_19c7_44f6 */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void FUN_19c7_44f6(void)

{
  FUN_19c7_2d9b();
  return;
}



/* 19c7:4504 FUN_19c7_4504 */

void FUN_19c7_4504(void)

{
  code *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  
  if (*(int *)(unaff_BP + 10) == 0) {
    FUN_19c7_2d9b();
    return;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_19c7_2d9b();
  return;
}



/* 19c7:4538 FUN_19c7_4538 */

int __cdecl16far FUN_19c7_4538(undefined1 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((undefined1 *)*(uint *)0x8f94 < &param_1) {
    iVar1 = -((int)*(uint *)0x8f94 - (int)&param_1);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* 19c7:454c FUN_19c7_454c */

void __cdecl16far FUN_19c7_454c(int param_1)

{
  undefined2 unaff_DS;
  
  if (param_1 != 0) {
    *(byte *)(param_1 + -2) = *(byte *)(param_1 + -2) | 1;
  }
  return;
}



/* 19c7:455e FUN_19c7_455e */

undefined2 __cdecl16far FUN_19c7_455e(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  bVar4 = *(int *)0x90e4 == 0;
  if (bVar4) {
    iVar1 = FUN_19c7_46e6();
    if (bVar4) {
      return 0;
    }
    puVar2 = (undefined2 *)(iVar1 + 1U & 0xfffe);
    *(undefined2 *)0x90e4 = puVar2;
    *(undefined2 *)0x90e6 = puVar2;
    *puVar2 = 1;
    puVar2[1] = 0xfffe;
    *(undefined2 *)0x90ea = puVar2 + 2;
  }
  uVar3 = FUN_19c7_45a7();
  return uVar3;
}



/* 19c7:45a7 FUN_19c7_45a7 */

uint * __cdecl16near FUN_19c7_45a7(void)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int in_CX;
  uint uVar6;
  undefined2 *in_BX;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined2 unaff_ES;
  uint *unaff_SS;
  uint *unaff_DS;
  bool bVar11;
  
  if ((in_CX + 1U == 0) || (uVar6 = in_CX + 1U & 0xfffe, 0xffed < uVar6)) {
LAB_19c7_4675:
    if (unaff_DS != unaff_SS) {
      *(undefined2 *)0x90f2 = unaff_DS;
    }
    in_BX[1] = *in_BX;
    return (uint *)0x0;
  }
  puVar10 = (uint *)in_BX[1];
  puVar7 = puVar10 + 1;
  uVar4 = *puVar10;
  puVar8 = puVar7;
  if ((uVar4 & 1) != 0) {
    do {
      uVar3 = uVar4 - 1;
      bVar11 = uVar3 == uVar6;
      if (uVar6 <= uVar3) {
LAB_19c7_45d7:
        if (bVar11) {
          *(char *)(puVar7 + -1) = (char)puVar7[-1] + -1;
        }
        else {
          puVar7[-1] = uVar6;
          *(int *)((int)puVar7 + uVar6) = (uVar3 - uVar6) + -1;
        }
        if (unaff_DS != unaff_SS) {
          *(undefined2 *)0x90f2 = unaff_DS;
        }
        in_BX[1] = (int)puVar7 + uVar6;
        return (uint *)CONCAT22(unaff_DS,puVar7);
      }
      puVar8 = (uint *)((int)puVar7 + uVar3) + 1;
      uVar4 = *(uint *)((int)puVar7 + uVar3);
      if ((uVar4 & 1) == 0) break;
      uVar4 = uVar4 + uVar3 + 2;
      *puVar10 = uVar4;
    } while( true );
  }
  *(undefined1 *)0x90f8 = 2;
  puVar10 = puVar7;
  do {
    if (uVar4 == 0xfffe) {
      if ((uint *)in_BX[4] == (uint *)0x0) {
        pcVar1 = (char *)0x90f8;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          uVar4 = in_BX[3];
          uVar3 = FUN_19c7_46c4();
          bVar11 = uVar3 == uVar4;
          if (!bVar11) {
            bVar11 = (uVar3 & 0xff01) == 0xfffe;
            FUN_19c7_46c4();
            if (bVar11) goto LAB_19c7_4675;
            puVar2 = puVar10 + -1;
            *(char *)puVar2 = (char)*puVar2 + -1;
            bVar11 = (char)*puVar2 == '\0';
          }
          iVar5 = FUN_19c7_468a();
          if (!bVar11) {
            puVar9 = (uint *)(iVar5 + -2);
            goto LAB_19c7_460e;
          }
          goto LAB_19c7_4675;
        }
        puVar10 = unaff_SS;
        if (unaff_DS != unaff_SS) {
          unaff_DS = (uint *)*(undefined2 *)0x90ee;
        }
      }
      else {
        unaff_DS = (uint *)in_BX[4];
      }
      puVar9 = (uint *)*in_BX;
    }
    else {
      puVar9 = (uint *)((int)puVar8 + uVar4);
      puVar10 = puVar8;
    }
LAB_19c7_460e:
    puVar7 = puVar9 + 1;
    uVar4 = *puVar9;
    puVar8 = puVar7;
    if ((uVar4 & 1) != 0) {
      while( true ) {
        uVar3 = uVar4 - 1;
        bVar11 = uVar3 == uVar6;
        if (uVar6 <= uVar3) goto LAB_19c7_45d7;
        puVar8 = (uint *)((int)puVar7 + uVar3) + 1;
        uVar4 = *(uint *)((int)puVar7 + uVar3);
        puVar10 = puVar7;
        if ((uVar4 & 1) == 0) break;
        uVar4 = uVar4 + uVar3 + 2;
        *puVar9 = uVar4;
      }
    }
  } while( true );
}



/* 19c7:468a FUN_19c7_468a */

undefined2 __cdecl16near FUN_19c7_468a(void)

{
  int in_CX;
  uint uVar1;
  uint uVar2;
  uint unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(unaff_DI + -2) & 1) != 0) {
    in_CX = (in_CX - *(uint *)(unaff_DI + -2)) + -1;
  }
  uVar1 = in_CX + 2;
  uVar2 = 0x7fff;
  do {
    if (uVar2 <= *(uint *)0x90f4) break;
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  do {
    if (CARRY2(uVar1,unaff_SI)) {
      return 0;
    }
    if (!CARRY2(uVar1 + unaff_SI,uVar2)) {
      bVar3 = (uVar1 + unaff_SI + uVar2 & ~uVar2) == unaff_SI;
      uVar4 = FUN_19c7_46c4();
      if (!bVar3) {
        return (int)uVar4;
      }
      uVar2 = ~(uint)((ulong)uVar4 >> 0x10);
    }
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  return 0;
}



/* 19c7:46c4 FUN_19c7_46c4 */

undefined4 __cdecl16near FUN_19c7_46c4(void)

{
  undefined2 in_DX;
  int in_BX;
  int unaff_SI;
  int iVar1;
  int unaff_DI;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  undefined4 uVar2;
  
  uVar2 = FUN_19c7_46e6();
  iVar1 = (int)uVar2;
  if (!(bool)in_ZF) {
    iVar1 = (int)uVar2 + (int)((ulong)uVar2 >> 0x10);
    *(undefined2 *)(iVar1 + -2) = 0xfffe;
    *(int *)(in_BX + 6) = iVar1;
    *(int *)(unaff_SI + -2) = (iVar1 - unaff_SI) + -1;
    iVar1 = unaff_DI;
  }
  return CONCAT22(in_DX,iVar1);
}



/* 19c7:46e6 FUN_19c7_46e6 */

void __cdecl16near FUN_19c7_46e6(void)

{
  FUN_19c7_4708(1);
  return;
}



/* 19c7:4708 FUN_19c7_4708 */

undefined2 __cdecl16far FUN_19c7_4708(int param_1,int param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  bVar5 = false;
  if (param_3 == 0) {
    if (param_1 == 1) {
      uVar3 = FUN_19c7_4776();
      if (!bVar5) {
        return uVar3;
      }
    }
    else {
      uVar1 = *(uint *)0x8f3a;
      if ((param_1 != 2) && (bVar5 = uVar1 < 0x8eea, uVar1 != 0x8eea)) {
        uVar6 = FUN_19c7_4776();
        param_2 = (int)((ulong)uVar6 >> 0x10);
        if (!bVar5) {
          return (int)uVar6;
        }
      }
      puVar4 = (undefined2 *)(uVar1 + 4);
      if ((puVar4 < (undefined2 *)0x8f3a) && (param_2 != 0)) {
        bVar5 = (param_2 + 0xfU >> 3 & 1) != 0;
        pcVar2 = (code *)swi(0x21);
        uVar6 = (*pcVar2)();
        if (!bVar5) {
          *puVar4 = (int)((ulong)uVar6 >> 0x10);
          *(undefined2 *)(uVar1 + 6) = (int)uVar6;
          *(undefined2 *)0x8f3a = puVar4;
          return 0;
        }
      }
    }
  }
  return 0xffff;
}



/* 19c7:4776 FUN_19c7_4776 */

void __cdecl16near FUN_19c7_4776(void)

{
  code *pcVar1;
  uint in_DX;
  uint extraout_DX;
  uint uVar2;
  int unaff_BP;
  uint *puVar3;
  uint *unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar4;
  
  puVar3 = unaff_DI;
  while (puVar3[1] != *(uint *)(unaff_BP + 0xe)) {
    puVar3 = puVar3 + 2;
    if (puVar3 == (uint *)0x8f3a) {
      return;
    }
  }
  uVar2 = in_DX + *puVar3;
  if (CARRY2(in_DX,*puVar3)) {
    return;
  }
  if ((puVar3 != unaff_DI) || (*(uint *)0x8ee4 < uVar2)) {
    bVar4 = puVar3 < unaff_DI;
    if (puVar3 == unaff_DI) {
      bVar4 = ((uint)(CONCAT12(0xfff0 < uVar2,uVar2 + 0xf) >> 1) >> 3) + *(uint *)(unaff_BP + 0xe) <
              *(uint *)0x8f5b;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar4) {
      return;
    }
    uVar2 = extraout_DX;
    if (puVar3 == unaff_DI) {
      *(uint *)0x8ee4 = extraout_DX;
    }
  }
  LOCK();
  *puVar3 = uVar2;
  UNLOCK();
  return;
}



/* 19c7:47cc FUN_19c7_47cc */

char * __cdecl16far FUN_19c7_47cc(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  
  iVar3 = -1;
  pcVar6 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = ~uVar4;
  param_2 = param_2 + -uVar4;
  pcVar7 = pcVar6 + -1;
  if (((uint)param_2 & 1) != 0) {
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    pcVar6[-1] = *pcVar1;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6;
  }
  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar1 = param_2;
    param_2 = param_2 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar4 = (uint)((uVar4 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return param_1;
}



/* 19c7:480c FUN_19c7_480c */

void __cdecl16far FUN_19c7_480c(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  
  uVar3 = 0xffff;
  pcVar5 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  if (((uint)param_1 & 1) != 0) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
    uVar3 = uVar3 - 1;
  }
  for (uVar4 = uVar3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 2;
    pcVar1 = param_2;
    param_2 = param_2 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  for (uVar3 = (uint)((uVar3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return;
}



/* 19c7:483e FUN_19c7_483e */

void __cdecl16far FUN_19c7_483e(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0xffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  param_2 = param_2 + -uVar3;
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = param_1;
    param_1 = param_1 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return;
}



/* 19c7:486a FUN_19c7_486a */

int __cdecl16far FUN_19c7_486a(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}



/* 19c7:48ae FUN_19c7_48ae */

uint __cdecl16far FUN_19c7_48ae(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  
  uVar4 = 0;
  if (param_3 != 0) {
    iVar3 = param_3;
    pcVar5 = param_1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    param_3 = param_3 - iVar3;
    do {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar2 = param_1;
      param_1 = param_1 + 1;
      pcVar1 = param_2;
      param_2 = param_2 + 1;
    } while (*pcVar1 == *pcVar2);
    uVar4 = 0;
    if ((byte)param_2[-1] <= (byte)param_1[-1]) {
      if (param_2[-1] == param_1[-1]) {
        return 0;
      }
      uVar4 = 0xfffe;
    }
    uVar4 = ~uVar4;
  }
  return uVar4;
}



/* 19c7:48e8 FUN_19c7_48e8 */

void FUN_19c7_48e8(void)

{
  FUN_19c7_4db6();
  return;
}



/* 19c7:4904 FUN_19c7_4904 */

void FUN_19c7_4904(void)

{
  FUN_19c7_4daa();
  return;
}



/* 19c7:4926 FUN_19c7_4926 */

undefined2 __cdecl16far FUN_19c7_4926(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (((param_1 < *(int *)0x8f62) && (-1 < param_1)) && ((*(byte *)(param_1 + -0x709c) & 0x40) != 0)
     ) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* 19c7:494a FUN_19c7_494a */

void __cdecl16far FUN_19c7_494a(char *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uVar1 = FUN_19c7_486a(param_1);
    FUN_19c7_440e(0x19c7,2,param_1,uVar1);
    FUN_19c7_440e(0x19c7,2,0x9216,2);
  }
  if ((*(int *)0x8f55 < 0) || (*(int *)0x93a2 <= *(int *)0x8f55)) {
    iVar3 = *(int *)0x93a2;
  }
  else {
    iVar3 = *(int *)0x8f55;
  }
  uVar1 = *(undefined2 *)(iVar3 * 2 + -0x6caa);
  uVar2 = FUN_19c7_486a(uVar1);
  FUN_19c7_440e(0x19c7,2,uVar1,uVar2);
  FUN_19c7_440e(0x19c7,2,0x9219,1);
  return;
}



/* 19c7:4a00 FUN_19c7_4a00 */

undefined2 __cdecl16far FUN_19c7_4a00(byte param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  bool bVar6;
  undefined4 uVar7;
  undefined2 auStack_12 [2];
  undefined1 local_c;
  byte local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  
  local_c = (code)0xcd;
  local_b = param_1;
  bVar6 = param_1 < 0x25;
  if ((param_1 == 0x25) || (bVar6 = param_1 < 0x26, param_1 == 0x26)) {
    local_8 = 0xcb;
    local_9 = 0x44;
    local_a = 0x44;
  }
  else {
    local_a = 0xcb;
  }
  uVar5 = *(undefined2 *)(param_2 + 2);
  uVar4 = *(undefined2 *)(param_2 + 4);
  uVar1 = *(undefined2 *)(param_2 + 8);
  uVar2 = *(undefined2 *)(param_2 + 10);
  uVar7 = (*(code *)&local_c)(0x19c7);
  uVar3 = (undefined2)uVar7;
  *param_3 = uVar3;
  param_3[1] = uVar5;
  param_3[2] = uVar4;
  param_3[3] = (int)((ulong)uVar7 >> 0x10);
  param_3[4] = uVar1;
  param_3[5] = uVar2;
  if (bVar6) {
    FUN_19c7_2da8();
    uVar3 = *param_3;
  }
  param_3[6] = (uint)bVar6;
  return uVar3;
}



/* 19c7:4a80 FUN_19c7_4a80 */

undefined2 __cdecl16far FUN_19c7_4a80(undefined1 *param_1,undefined2 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 *local_e;
  int local_c;
  undefined1 *local_a;
  undefined1 local_8;
  undefined1 *local_4;
  
  local_4 = &param_3;
  local_8 = 0x42;
  local_a = param_1;
  local_e = param_1;
  local_c = 0x7fff;
  uVar1 = FUN_19c7_37c8(&local_e,param_2,&param_3);
  local_c = local_c + -1;
  if (local_c < 0) {
    FUN_19c7_3340(0,&local_e);
  }
  else {
    *local_e = 0;
  }
  return uVar1;
}



/* 19c7:4ada FUN_19c7_4ada */

undefined2 __cdecl16far FUN_19c7_4ada(char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  do {
    pcVar1 = param_1;
    param_1 = param_1 + 1;
    if (*pcVar1 == '\0') {
      return 0;
    }
    iVar2 = FUN_19c7_4c0a(*pcVar1);
  } while (iVar2 != -1);
  return 0xffff;
}



/* 19c7:4afe FUN_19c7_4afe */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined2 __cdecl16far
FUN_19c7_4afe(byte param_1,int param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar8;
  undefined4 uVar9;
  undefined2 auStack_14 [2];
  undefined1 local_e;
  byte local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  
  local_e = (code)0xcd;
  local_d = param_1;
  bVar8 = param_1 < 0x25;
  if ((param_1 == 0x25) || (bVar8 = param_1 < 0x26, param_1 == 0x26)) {
    local_a = 0xcb;
    local_b = 0x44;
    local_c = 0x44;
  }
  else {
    local_c = 0xcb;
  }
  uVar7 = *(undefined2 *)(param_2 + 2);
  uVar6 = *(undefined2 *)(param_2 + 4);
  uVar3 = *(undefined2 *)(param_2 + 8);
  uVar4 = *(undefined2 *)(param_2 + 10);
  uVar1 = *param_4;
  uVar2 = param_4[3];
  uVar9 = (*(code *)&local_e)(0x19c7);
  uVar5 = (undefined2)uVar9;
  *param_4 = uVar1;
  param_4[3] = uVar2;
  *param_3 = uVar5;
  param_3[1] = uVar7;
  param_3[2] = uVar6;
  param_3[3] = (int)((ulong)uVar9 >> 0x10);
  param_3[4] = uVar3;
  param_3[5] = uVar4;
  if (bVar8) {
    FUN_19c7_2da8();
    uVar5 = *param_3;
  }
  param_3[6] = (uint)bVar8;
  return uVar5;
}



/* 19c7:4b94 FUN_19c7_4b94 */

undefined2 __cdecl16far FUN_19c7_4b94(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined4 uVar7;
  
  uVar6 = *(undefined2 *)(param_1 + 2);
  uVar5 = *(undefined2 *)(param_1 + 4);
  uVar1 = *(undefined2 *)(param_1 + 8);
  uVar2 = *(undefined2 *)(param_1 + 10);
  pcVar3 = (code *)swi(0x21);
  uVar7 = (*pcVar3)();
  uVar4 = (undefined2)uVar7;
  *param_2 = uVar4;
  param_2[1] = uVar6;
  param_2[2] = uVar5;
  param_2[3] = (int)((ulong)uVar7 >> 0x10);
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  if ((bool)in_CF) {
    FUN_19c7_2da8();
    uVar4 = *param_2;
  }
  param_2[6] = (uint)(byte)in_CF;
  return uVar4;
}



/* 19c7:4bde FUN_19c7_4bde */

void __cdecl16far
FUN_19c7_4bde(undefined2 param_1,undefined1 *param_2,undefined2 param_3,undefined1 *param_4,
             int param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  for (; param_5 != 0; param_5 = param_5 + -1) {
    puVar2 = param_4;
    param_4 = param_4 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



/* 19c7:4bfc FUN_19c7_4bfc */

undefined1 __cdecl16far FUN_19c7_4bfc(undefined2 param_1)

{
  undefined1 uVar1;
  
  uVar1 = in(param_1);
  return uVar1;
}



/* 19c7:4c0a FUN_19c7_4c0a */

uint __cdecl16far FUN_19c7_4c0a(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0xff;
}



/* 19c7:4c1a FUN_19c7_4c1a */

char * __cdecl16far FUN_19c7_4c1a(char *param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  iVar2 = -1;
  pcVar3 = param_1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (param_2 != *pcVar1);
  param_1 = param_1 + -1;
  if (*param_1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}



/* 19c7:4c44 FUN_19c7_4c44 */

uint __cdecl16far FUN_19c7_4c44(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      bVar2 = *param_1;
      bVar1 = *param_2;
      if ((bVar2 == 0) || (bVar1 == 0)) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if ((0x40 < bVar2) && (bVar2 < 0x5b)) {
        bVar2 = bVar2 + 0x20;
      }
      if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
        bVar1 = bVar1 + 0x20;
      }
      bVar4 = bVar2 < bVar1;
      if (bVar2 != bVar1) goto LAB_19c7_4c8a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar3 = 0;
    bVar4 = bVar2 < bVar1;
    if (bVar2 != bVar1) {
LAB_19c7_4c8a:
      uVar3 = 0;
      if (!bVar4) {
        uVar3 = 0xfffe;
      }
      uVar3 = ~uVar3;
    }
  }
  return uVar3;
}



/* 19c7:4cbe FUN_19c7_4cbe */

char * __cdecl16far FUN_19c7_4cbe(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar2 = cVar1 + -0x20;
    }
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return param_1;
}



/* 19c7:4ce0 FUN_19c7_4ce0 */

undefined2 * __cdecl16far FUN_19c7_4ce0(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 unaff_DS;
  
  puVar3 = param_1;
  if (param_3 != 0) {
    if ((param_2 < param_1) && (param_1 < (undefined2 *)((int)param_2 + param_3))) {
      puVar5 = (undefined1 *)((int)param_2 + param_3);
      puVar6 = (undefined1 *)((int)param_1 + param_3);
      while( true ) {
        puVar6 = puVar6 + -1;
        puVar5 = puVar5 + -1;
        if (param_3 == 0) break;
        param_3 = param_3 - 1;
        *puVar6 = *puVar5;
      }
    }
    else {
      if (((uint)param_1 & 1) != 0) {
        puVar2 = param_1;
        param_1 = (undefined2 *)((int)param_1 + 1);
        puVar1 = param_2;
        param_2 = (undefined2 *)((int)param_2 + 1);
        *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
        param_3 = param_3 - 1;
      }
      for (uVar4 = param_3 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar2 = param_1;
        param_1 = param_1 + 1;
        puVar1 = param_2;
        param_2 = param_2 + 1;
        *puVar2 = *puVar1;
      }
      for (uVar4 = (uint)((param_3 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar2 = param_1;
        param_1 = (undefined2 *)((int)param_1 + 1);
        puVar1 = param_2;
        param_2 = (undefined2 *)((int)param_2 + 1);
        *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      }
    }
  }
  return puVar3;
}



/* 19c7:4d28 FUN_19c7_4d28 */

int __cdecl16far FUN_19c7_4d28(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined2 unaff_DS;
  bool bVar4;
  bool bVar5;
  
  bVar4 = false;
  iVar3 = 0;
  bVar5 = true;
  if (param_3 != 0) {
    do {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pbVar2 = param_2;
      param_2 = param_2 + 1;
      pbVar1 = param_1;
      param_1 = param_1 + 1;
      bVar4 = *pbVar1 < *pbVar2;
      bVar5 = *pbVar1 == *pbVar2;
    } while (bVar5);
    if (!bVar5) {
      iVar3 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
    }
  }
  return iVar3;
}



/* 19c7:4d50 FUN_19c7_4d50 */

void __cdecl16far FUN_19c7_4d50(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  if (param_3 != 0) {
    if (((uint)param_1 & 1) != 0) {
      puVar2 = param_1;
      param_1 = (undefined2 *)((int)param_1 + 1);
      puVar1 = param_2;
      param_2 = (undefined2 *)((int)param_2 + 1);
      *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
      param_3 = param_3 - 1;
    }
    for (uVar3 = param_3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2 = param_1;
      param_1 = param_1 + 1;
      puVar1 = param_2;
      param_2 = param_2 + 1;
      *puVar2 = *puVar1;
    }
    for (uVar3 = (uint)((param_3 & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2 = param_1;
      param_1 = (undefined2 *)((int)param_1 + 1);
      puVar1 = param_2;
      param_2 = (undefined2 *)((int)param_2 + 1);
      *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
    }
  }
  return;
}



/* 19c7:4d7c FUN_19c7_4d7c */

undefined2 * __cdecl16far FUN_19c7_4d7c(undefined2 *param_1,undefined1 param_2,uint param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 unaff_DS;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    if (((uint)param_1 & 1) != 0) {
      puVar3 = (undefined2 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = param_2;
      param_3 = param_3 - 1;
    }
    for (uVar2 = param_3 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar1 = CONCAT11(param_2,param_2);
    }
    for (uVar2 = (uint)((param_3 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar1 = puVar3;
      puVar3 = (undefined2 *)((int)puVar3 + 1);
      *(undefined1 *)puVar1 = param_2;
    }
  }
  return param_1;
}



/* 19c7:4daa FUN_19c7_4daa */

byte * FUN_19c7_4daa(void)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  char cVar5;
  byte bVar4;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char in_BL;
  int iVar9;
  int unaff_BP;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar13;
  
  uVar1 = *(uint *)(unaff_BP + 0xc);
  iVar9 = *(int *)(unaff_BP + 6);
  uVar7 = *(uint *)(unaff_BP + 8);
  pbVar2 = (byte *)*(undefined2 *)(unaff_BP + 10);
  pbVar11 = pbVar2;
  pbVar10 = pbVar2;
  if (((in_BL != '\0') && (uVar1 == 10)) && ((int)uVar7 < 0)) {
    pbVar11 = pbVar2 + 1;
    *pbVar2 = 0x2d;
    bVar13 = iVar9 != 0;
    iVar9 = -iVar9;
    uVar7 = -(uVar7 + bVar13);
    pbVar10 = pbVar11;
  }
  do {
    uVar8 = 0;
    uVar6 = uVar7;
    if (uVar7 != 0) {
      uVar6 = uVar7 / uVar1;
      uVar8 = uVar7 % uVar1;
    }
    uVar3 = CONCAT22(uVar8,iVar9);
    iVar9 = (int)(uVar3 / uVar1);
    cVar5 = (char)(uVar3 % (ulong)uVar1);
    bVar4 = cVar5 + 0x30;
    if (0x39 < bVar4) {
      bVar4 = cVar5 + 0x57;
    }
    pbVar12 = pbVar11 + 1;
    *pbVar11 = bVar4;
    uVar7 = uVar6;
    pbVar11 = pbVar12;
  } while (uVar6 != 0 || iVar9 != 0);
  *pbVar12 = 0;
  do {
    pbVar12 = pbVar12 + -1;
    LOCK();
    bVar4 = *pbVar12;
    *pbVar12 = *pbVar10;
    UNLOCK();
    *pbVar10 = bVar4;
    pbVar11 = pbVar10 + 2;
    pbVar10 = pbVar10 + 1;
  } while (pbVar11 < pbVar12);
  return pbVar2;
}



/* 19c7:4db6 FUN_19c7_4db6 */

byte * __cdecl16far FUN_19c7_4db6(void)

{
  ulong uVar1;
  char cVar3;
  byte bVar2;
  int in_AX;
  uint uVar4;
  uint in_CX;
  uint in_DX;
  uint uVar5;
  char in_BL;
  byte *pbVar6;
  byte *unaff_DI;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_DS;
  bool bVar9;
  
  pbVar7 = unaff_DI;
  pbVar6 = unaff_DI;
  if (((in_BL != '\0') && (in_CX == 10)) && ((int)in_DX < 0)) {
    pbVar7 = unaff_DI + 1;
    *unaff_DI = 0x2d;
    bVar9 = in_AX != 0;
    in_AX = -in_AX;
    in_DX = -(in_DX + bVar9);
    pbVar6 = pbVar7;
  }
  do {
    uVar5 = 0;
    uVar4 = in_DX;
    if (in_DX != 0) {
      uVar4 = in_DX / in_CX;
      uVar5 = in_DX % in_CX;
    }
    uVar1 = CONCAT22(uVar5,in_AX);
    in_AX = (int)(uVar1 / in_CX);
    cVar3 = (char)(uVar1 % (ulong)in_CX);
    bVar2 = cVar3 + 0x30;
    if (0x39 < bVar2) {
      bVar2 = cVar3 + 0x57;
    }
    pbVar8 = pbVar7 + 1;
    *pbVar7 = bVar2;
    in_DX = uVar4;
    pbVar7 = pbVar8;
  } while (uVar4 != 0 || in_AX != 0);
  *pbVar8 = 0;
  do {
    pbVar8 = pbVar8 + -1;
    LOCK();
    bVar2 = *pbVar8;
    *pbVar8 = *pbVar6;
    UNLOCK();
    *pbVar6 = bVar2;
    pbVar7 = pbVar6 + 2;
    pbVar6 = pbVar6 + 1;
  } while (pbVar7 < pbVar8);
  return unaff_DI;
}



/* 19c7:4e0a FUN_19c7_4e0a */

int __cdecl16far FUN_19c7_4e0a(int param_1)

{
  if (param_1 < 0) {
    param_1 = -param_1;
  }
  return param_1;
}



/* 19c7:4e20 FUN_19c7_4e20 */

void __cdecl16far FUN_19c7_4e20(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x921e = param_1;
  *(undefined2 *)0x9220 = 0;
  return;
}



/* 19c7:4e32 FUN_19c7_4e32 */

uint __cdecl16far FUN_19c7_4e32(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  long lVar2;
  
  lVar2 = FUN_19c7_4ffe(*(undefined2 *)0x921e,*(undefined2 *)0x9220,0x43fd,3);
  uVar1 = (uint)((ulong)(lVar2 + 0x269ec3) >> 0x10);
  *(undefined2 *)0x921e = (int)(lVar2 + 0x269ec3);
  *(uint *)0x9220 = uVar1;
  return uVar1 & 0x7fff;
}



/* 19c7:4e68 FUN_19c7_4e68 */

void FUN_19c7_4e68(undefined2 param_1,undefined2 param_2,undefined2 *param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    param_2 = uVar2;
  }
  *param_3 = param_2;
  FUN_19c7_2d90();
  return;
}



/* 19c7:4e94 FUN_19c7_4e94 */

uint __cdecl16far FUN_19c7_4e94(int param_1,undefined2 *param_2)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined2 in_CX;
  undefined2 extraout_DX;
  undefined2 unaff_DS;
  
  if (param_1 == 0) {
    pcVar1 = (code *)swi(0x1a);
    bVar2 = (*pcVar1)();
    *param_2 = extraout_DX;
    param_2[1] = in_CX;
    uVar3 = (uint)bVar2;
  }
  else {
    uVar3 = 0xffff;
    if (param_1 == 1) {
      pcVar1 = (code *)swi(0x1a);
      (*pcVar1)();
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* 19c7:4ec2 FUN_19c7_4ec2 */

void FUN_19c7_4ec2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_19c7_2d90();
  return;
}



/* 19c7:4ed7 FUN_19c7_4ed7 */

void FUN_19c7_4ed7(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined2 *in_stack_00000008;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    *in_stack_00000008 = uVar2;
  }
  FUN_19c7_2d90();
  return;
}



/* 19c7:4ef0 FUN_19c7_4ef0 */

void FUN_19c7_4ef0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_19c7_2d90();
  return;
}



/* 19c7:4efa FUN_19c7_4efa */

void FUN_19c7_4efa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_19c7_2d90();
  return;
}



/* 19c7:4f18 FUN_19c7_4f18 */

void FUN_19c7_4f18(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 in_CF;
  undefined2 *in_stack_00000008;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    *in_stack_00000008 = uVar2;
  }
  FUN_19c7_2d90();
  return;
}



/* 19c7:4f30 FUN_19c7_4f30 */

void FUN_19c7_4f30(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  undefined2 in_stack_00000000;
  undefined2 *in_stack_0000000c;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    *in_stack_0000000c = uVar2;
  }
  FUN_19c7_2d90();
  return;
}



/* 19c7:4f37 FUN_19c7_4f37 */

void FUN_19c7_4f37(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  undefined2 in_stack_00000000;
  undefined2 *in_stack_0000000c;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    *in_stack_0000000c = uVar2;
  }
  FUN_19c7_2d90();
  return;
}



/* 19c7:4f54 FUN_19c7_4f54 */

void FUN_19c7_4f54(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_19c7_2d90();
  return;
}



/* 19c7:4f62 FUN_19c7_4f62 */

undefined4 __stdcall16far FUN_19c7_4f62(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  char cVar10;
  
  cVar10 = (int)param_2 < 0;
  if ((bool)cVar10) {
    bVar9 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar9 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar10 = cVar10 + '\x01';
    bVar9 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar9 - param_4;
  }
  if (param_4 == 0) {
    uVar4 = param_2 / param_3;
    iVar5 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    uVar7 = param_1;
    uVar4 = param_3;
    uVar6 = param_2;
    uVar8 = param_4;
    do {
      uVar3 = uVar8 & 1;
      uVar8 = uVar8 >> 1;
      uVar4 = (uint)(CONCAT12(uVar3 != 0,uVar4) >> 1);
      uVar3 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      uVar7 = (uint)(CONCAT12(uVar3 != 0,uVar7) >> 1);
    } while (uVar8 != 0);
    uVar1 = CONCAT22(uVar6,uVar7) / (ulong)uVar4;
    iVar5 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar4 = (uint)((ulong)lVar2 >> 0x10);
    uVar7 = uVar4 + iVar5 * param_4;
    if (((CARRY2(uVar4,iVar5 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar5 = iVar5 + -1;
    }
    uVar4 = 0;
  }
  if (cVar10 == '\x01') {
    bVar9 = iVar5 != 0;
    iVar5 = -iVar5;
    uVar4 = -(uint)bVar9 - uVar4;
  }
  return CONCAT22(uVar4,iVar5);
}



/* 19c7:4ffe FUN_19c7_4ffe */

long __stdcall16far FUN_19c7_4ffe(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulong)param_1 * (ulong)param_3;
  }
  return CONCAT22((int)((ulong)param_1 * (ulong)param_3 >> 0x10) +
                  param_2 * param_3 + param_1 * param_4,(int)((ulong)param_1 * (ulong)param_3));
}



/* 19c7:5032 FUN_19c7_5032 */

void __stdcall16far FUN_19c7_5032(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  uVar1 = FUN_19c7_4f62(*param_1,param_1[1],param_2,param_3);
  param_1[1] = (int)((ulong)uVar1 >> 0x10);
  *param_1 = (int)uVar1;
  return;
}



/* 19c7:5056 FUN_19c7_5056 */

undefined4 __stdcall16far FUN_19c7_5056(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_4 == 0) {
    uVar4 = param_2 / param_3;
    iVar5 = (int)(((ulong)param_2 % (ulong)param_3 << 0x10 | (ulong)param_1) / (ulong)param_3);
  }
  else {
    uVar8 = param_1;
    uVar6 = param_4;
    uVar7 = param_2;
    uVar4 = param_3;
    do {
      uVar3 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      uVar4 = (uint)(CONCAT12(uVar3 != 0,uVar4) >> 1);
      uVar3 = uVar7 & 1;
      uVar7 = uVar7 >> 1;
      uVar8 = (uint)(CONCAT12(uVar3 != 0,uVar8) >> 1);
    } while (uVar6 != 0);
    uVar1 = CONCAT22(uVar7,uVar8) / (ulong)uVar4;
    iVar5 = (int)uVar1;
    lVar2 = (ulong)param_3 * (uVar1 & 0xffff);
    uVar4 = (uint)((ulong)lVar2 >> 0x10);
    uVar8 = uVar4 + iVar5 * param_4;
    if (((CARRY2(uVar4,iVar5 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar5 = iVar5 + -1;
    }
    uVar4 = 0;
  }
  return CONCAT22(uVar4,iVar5);
}



/* 1ed2:0008 FUN_1ed2_0008 */

int __cdecl16far FUN_1ed2_0008(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)((long)param_1 * (long)param_2);
  return ((uint)(((ulong)((long)param_1 * (long)param_2) >> 0x10) << 1) | (uint)(iVar1 < 0)) +
         (uint)(iVar1 << 1 < 0);
}



/* 1ed2:001e FUN_1ed2_001e */

int __cdecl16far FUN_1ed2_001e(int param_1,int param_2)

{
  return param_1 * param_2 * 2;
}



/* 1ed2:005f FUN_1ed2_005f */

undefined2 __cdecl16far FUN_1ed2_005f(int param_1,int param_2,int param_3)

{
  return (int)(((long)param_1 * (long)param_2) / (long)param_3);
}



/* 1ed2:006e FUN_1ed2_006e */

int __cdecl16far FUN_1ed2_006e(int param_1)

{
  param_1 = param_1 + 0x4000;
  FUN_1ed2_008e();
  return param_1;
}



/* 1ed2:007e FUN_1ed2_007e */

undefined2 __cdecl16far FUN_1ed2_007e(undefined2 param_1)

{
  FUN_1ed2_008e();
  return param_1;
}



/* 1ed2:008e FUN_1ed2_008e */

undefined4 __cdecl16near FUN_1ed2_008e(void)

{
  long lVar1;
  uint in_BX;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = (in_BX >> 8) * 2;
  lVar1 = (long)(*(int *)(iVar2 + 0x176a) - *(int *)(iVar2 + 0x1768)) * (long)(int)(in_BX & 0xff);
  return CONCAT22((int)((ulong)lVar1 >> 8),CONCAT11((char)((ulong)lVar1 >> 8),(char)lVar1 << 1));
}



/* 1edc:000e FUN_1edc_000e */

uint __cdecl16far FUN_1edc_000e(uint param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  uVar3 = (param_1 ^ (int)param_1 >> 0xf) - ((int)param_1 >> 0xf);
  uVar4 = (param_2 ^ (int)param_2 >> 0xf) - ((int)param_2 >> 0xf);
  uVar7 = uVar4;
  if (uVar3 < uVar4) {
    uVar7 = uVar3;
    uVar3 = uVar4;
  }
  uVar4 = (uVar7 >> 2) + uVar3;
  iVar6 = uVar7 * 2 - uVar3;
  if (uVar3 <= uVar7 * 2 && iVar6 != 0) {
    uVar4 = uVar4 + ((uint)(iVar6 * 3) >> 4);
  }
  uVar4 = uVar4 - (uVar4 >> 6);
  if (param_3 <= uVar4) {
    return uVar4;
  }
  uVar1 = (long)(int)param_2 * (long)(int)param_2 + (long)(int)param_1 * (long)(int)param_1;
  uVar7 = (uint)uVar1;
  uVar4 = (uint)(uVar1 >> 0x10);
  uVar3 = 0;
  if ((-1 < (long)uVar1) && (uVar3 = 0, uVar1 != 0)) {
    uVar3 = 0x20;
    uVar5 = uVar4;
    if (uVar4 == 0) {
      uVar3 = 0x10;
      uVar5 = uVar7;
    }
    do {
      bVar8 = -1 < (int)uVar5;
      uVar5 = uVar5 << 1;
      uVar3 = uVar3 - 1;
    } while (bVar8);
    uVar2 = uVar1;
    for (uVar3 = uVar3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar7 = (uint)(CONCAT12((uVar2 & 0x10000) != 0,(int)uVar2) >> 1);
      uVar2 = CONCAT22((uint)(uVar2 >> 0x11),uVar7);
    }
    do {
      uVar3 = uVar7;
      uVar7 = (uint)(((ulong)uVar4 << 0x10 | uVar1 & 0xffff) / (ulong)uVar3);
      uVar7 = (uint)(CONCAT12(CARRY2(uVar7,uVar3),uVar7 + uVar3) >> 1);
    } while (uVar7 < uVar3);
  }
  return uVar3;
}



/* 1edc:0062 FUN_1edc_0062 */

uint __cdecl16far FUN_1edc_0062(int param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar1 = (long)param_2 * (long)param_2 + (long)param_1 * (long)param_1;
  uVar6 = (uint)uVar1;
  uVar5 = (uint)(uVar1 >> 0x10);
  uVar3 = 0;
  if ((-1 < (long)uVar1) && (uVar3 = 0, uVar1 != 0)) {
    uVar3 = 0x20;
    uVar4 = uVar5;
    if (uVar5 == 0) {
      uVar3 = 0x10;
      uVar4 = uVar6;
    }
    do {
      bVar7 = -1 < (int)uVar4;
      uVar4 = uVar4 << 1;
      uVar3 = uVar3 - 1;
    } while (bVar7);
    uVar2 = uVar1;
    for (uVar3 = uVar3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar6 = (uint)(CONCAT12((uVar2 & 0x10000) != 0,(int)uVar2) >> 1);
      uVar2 = CONCAT22((uint)(uVar2 >> 0x11),uVar6);
    }
    do {
      uVar3 = uVar6;
      uVar6 = (uint)(((ulong)uVar5 << 0x10 | uVar1 & 0xffff) / (ulong)uVar3);
      uVar6 = (uint)(CONCAT12(CARRY2(uVar6,uVar3),uVar6 + uVar3) >> 1);
    } while (uVar6 < uVar3);
  }
  return uVar3;
}



/* 1edc:0099 FUN_1edc_0099 */

uint __cdecl16far FUN_1edc_0099(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = 0;
  if ((-1 < (int)param_2) && (uVar2 = 0, param_1 != 0 || param_2 != 0)) {
    uVar2 = 0x20;
    uVar3 = param_2;
    if (param_2 == 0) {
      uVar2 = 0x10;
      uVar3 = param_1;
    }
    do {
      bVar5 = -1 < (int)uVar3;
      uVar3 = uVar3 << 1;
      uVar2 = uVar2 - 1;
    } while (bVar5);
    uVar3 = param_1;
    uVar4 = param_2;
    for (uVar2 = uVar2 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar1 = uVar4 & 1;
      uVar4 = uVar4 >> 1;
      uVar3 = (uint)(CONCAT12(uVar1 != 0,uVar3) >> 1);
    }
    do {
      uVar2 = uVar3;
      uVar3 = (uint)(CONCAT22(param_2,param_1) / (ulong)uVar2);
      uVar3 = (uint)(CONCAT12(CARRY2(uVar3,uVar2),uVar3 + uVar2) >> 1);
    } while (uVar3 < uVar2);
  }
  return uVar2;
}



/* 1eea:0004 FUN_1eea_0004 */

undefined2 __cdecl16far FUN_1eea_0004(char param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  undefined2 in_AX;
  undefined1 uVar8;
  int iVar6;
  int iVar7;
  char cVar9;
  byte *pbVar10;
  undefined2 uVar11;
  
  uVar11 = (undefined2)((ulong)param_3 >> 0x10);
  pbVar10 = (byte *)param_3;
  if ((DAT_0000_0489 & 2) != 0) {
    do {
      pbVar1 = pbVar10;
      pbVar2 = pbVar10 + 1;
      pbVar3 = pbVar10 + 2;
      pbVar10 = pbVar10 + 3;
      lVar4 = (ulong)*pbVar2 * 0x970a + (ulong)*pbVar1 * 0x4ccd + (ulong)*pbVar3 * 0x1c29;
      iVar6 = (int)lVar4;
      iVar7 = iVar6 << 1;
      cVar9 = (char)((ulong)lVar4 >> 0x10) + (iVar6 < 0);
      do {
        uVar8 = (undefined1)((uint)iVar7 >> 8);
        bVar5 = in(0x3da);
        iVar7 = CONCAT11(uVar8,bVar5);
      } while ((bVar5 & 8) == 0);
      out(0x3c8,param_1);
      out(0x3c9,cVar9);
      out(0x3c9,cVar9);
      out(0x3c9,cVar9);
      param_2 = param_2 + -1;
      param_1 = param_1 + '\x01';
    } while (param_2 != 0);
    return CONCAT11(uVar8,cVar9);
  }
  do {
    do {
      bVar5 = in(0x3da);
      in_AX = CONCAT11((char)((uint)in_AX >> 8),bVar5);
    } while ((bVar5 & 8) == 0);
    while( true ) {
      uVar8 = (undefined1)((uint)in_AX >> 8);
      bVar5 = in(0x3da);
      in_AX = CONCAT11(uVar8,bVar5);
      if ((bVar5 & 1) == 0) break;
      out(0x3c8,param_1);
      out(0x3c9,*pbVar10);
      pbVar2 = pbVar10 + 2;
      out(0x3c9,pbVar10[1]);
      pbVar10 = pbVar10 + 3;
      in_AX = CONCAT11(uVar8,*pbVar2);
      out(0x3c9,*pbVar2);
      param_2 = param_2 + -1;
      param_1 = param_1 + '\x01';
      if (param_2 == 0) {
        return in_AX;
      }
    }
  } while( true );
}



/* 1eea:00a4 FUN_1eea_00a4 */

void FUN_1eea_00a4(undefined2 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  if (*(char *)0x8405 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001ef52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uRam000100b5 = in_stack_00000000;
    (*(code *)(ulong)_FUN_1000_0000)();
    return;
  }
  *(undefined1 *)0x8404 = 1;
  uRam000100ce = in_stack_00000000;
  *(undefined2 *)0x8406 = param_1;
  *(undefined2 *)0x8408 = param_2;
  (*(code *)*(undefined2 *)0x0)();
  pcVar1 = (char *)0x8404;
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 != '\0') {
    func_0x000100ea();
    *(undefined1 *)0x8404 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001ef7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(ulong)*(uint *)0x8406)();
  return;
}



/* 1eea:00e4 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:00eb thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:00f2 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:00f9 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0100 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0107 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:010c thunk_FUN_1eea_00a4 */

void thunk_FUN_1eea_00a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1eea_00a4();
}



/* 1eea:0115 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:012a thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:014b thunk_FUN_1eea_00a4 */

void thunk_FUN_1eea_00a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1eea_00a4();
}



/* 1eea:015b thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0162 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0169 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0170 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0177 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0193 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:019a thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01a8 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01af thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01b6 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01c2 thunk_FUN_1eea_00a4 */

void thunk_FUN_1eea_00a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1eea_00a4();
}



/* 1eea:01c9 thunk_FUN_1eea_00a4 */

void thunk_FUN_1eea_00a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1eea_00a4();
}



/* 1eea:01d2 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01d9 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01e0 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01ee thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01f5 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:01fc thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0203 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:020a thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0211 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:023b thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0242 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0249 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:035a thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0361 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:037d thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:0384 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:03a0 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:03a7 thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:03ae thunk_EXT_FUN_0000_0000 */

/* WARNING: Control flow encountered bad instruction data */

void thunk_EXT_FUN_0000_0000(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 1eea:03ec FUN_1eea_03ec */

/* WARNING: Unable to track spacebase fully for stack */

int __cdecl16far FUN_1eea_03ec(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  undefined1 in_CF;
  bool bVar6;
  
  *(undefined2 *)0x840a = param_1;
  *(undefined2 *)0x840c = param_2;
  uVar5 = 0xffff;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (!(bool)in_CF) {
    iVar2 = FUN_1eea_04a8();
    return iVar2;
  }
  bVar6 = uVar5 < 0x100;
  *(int *)0x8410 = uVar5 - 0x100;
  pcVar1 = (code *)swi(0x21);
  uVar3 = (*pcVar1)();
  if (bVar6) {
    iVar2 = FUN_1eea_04a8();
    return iVar2;
  }
  *(undefined2 *)0x8412 = uVar3;
  *(undefined2 *)0x8414 = uVar3;
  *(BADSPACEBASE **)0x840e = register0x00000010;
  pcVar1 = (code *)swi(0x21);
  iVar4 = (*pcVar1)();
  iVar2 = DAT_2e67_8412;
  if (bVar6) {
    if (iVar4 == 2) {
      iVar2 = FUN_1eea_04a8();
      return iVar2;
    }
    if (iVar4 == 8) {
      iVar2 = FUN_1eea_04a8();
      return iVar2;
    }
    iVar2 = FUN_1eea_04a8();
    return iVar2;
  }
  iVar4 = *(int *)0x2a + ((uint)(CONCAT12(0xfff0 < *(uint *)0x2c,*(uint *)0x2c + 0xf) >> 1) >> 3);
  *(undefined2 *)(DAT_2e67_840e + -2) = 0xf322;
  FUN_1eea_04d7();
  uVar5 = (iVar4 - iVar2) + 8;
  bVar6 = uVar5 < DAT_2e67_8410;
  if (DAT_2e67_8410 < uVar5) {
    iVar2 = FUN_1eea_04a8();
    return iVar2;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (bVar6) {
    iVar2 = FUN_1eea_04a8();
    return iVar2;
  }
  return iVar2;
}



/* 1eea:04a8 FUN_1eea_04a8 */

void FUN_1eea_04a8(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  uVar4 = 0;
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  bVar5 = false;
  if (*(int *)0x840c != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar5) {
      FUN_1eea_04a8();
      return;
    }
    uVar3 = 0x8000;
    bVar5 = false;
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if (bVar5) {
      FUN_1eea_04a8();
      return;
    }
    if (uVar3 <= uVar2) {
      uVar2 = uVar4 + 0x800;
      uVar4 = uVar2;
    }
    bVar5 = CARRY2(uVar4,uVar2 + 0xf >> 4);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar5) {
      FUN_1eea_04a8();
      return;
    }
  }
  return;
}



/* 1eea:04d7 FUN_1eea_04d7 */

void __cdecl16near FUN_1eea_04d7(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint in_BX;
  undefined2 unaff_DS;
  bool bVar4;
  
  bVar4 = false;
  if (*(int *)0x840c != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar4) {
      FUN_1eea_04a8();
      return;
    }
    uVar3 = 0x8000;
    bVar4 = false;
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if (bVar4) {
      FUN_1eea_04a8();
      return;
    }
    if (uVar3 <= uVar2) {
      uVar2 = in_BX + 0x800;
      in_BX = uVar2;
    }
    bVar4 = CARRY2(in_BX,uVar2 + 0xf >> 4);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (bVar4) {
      FUN_1eea_04a8();
      return;
    }
  }
  return;
}



/* 1eea:052b FUN_1eea_052b */

void __cdecl16far FUN_1eea_052b(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  
  puVar5 = (undefined2 *)0x32;
  iVar6 = (*(uint *)0x2e & 0xff) * 7 + 0xe2;
  iVar4 = *(int *)0x30;
  uVar1 = *(undefined2 *)0x28;
  do {
    puVar3 = (undefined2 *)(iVar6 + 5);
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    *(undefined2 *)(iVar6 + 3) = *puVar2;
    iVar6 = iVar6 + 7;
    *puVar3 = uVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



/* 1eea:0574 FUN_1eea_0574 */

void __cdecl16far FUN_1eea_0574(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if ((0 < param_4) && (0 < param_5)) {
    FUN_1eea_0608();
    thunk_EXT_FUN_0000_0000(0x1eea);
    param_3 = param_3 + *(int *)(param_1 + 4);
    *(int *)0x8858 = param_3;
    param_3 = param_3 * 2;
    piVar4 = (int *)(param_3 + -0x7acc);
    iVar2 = *(int *)(param_1 + 2);
    for (iVar3 = param_5; iVar3 != 0; iVar3 = iVar3 + -1) {
      piVar1 = piVar4;
      piVar4 = piVar4 + 1;
      *piVar1 = param_2 + iVar2;
    }
    piVar4 = (int *)(param_3 + -0x793c);
    iVar2 = *(int *)(param_1 + 2);
    for (iVar3 = param_5; iVar3 != 0; iVar3 = iVar3 + -1) {
      piVar1 = piVar4;
      piVar4 = piVar4 + 1;
      *piVar1 = param_2 + iVar2 + param_4 + -1;
    }
    thunk_EXT_FUN_0000_0000(0x1eea);
    *(int *)0x885a = *(int *)0x8858 + param_5 + -1;
    thunk_EXT_FUN_0000_0000(0x1eea);
    thunk_EXT_FUN_0000_0000(0x1eea);
  }
  return;
}



/* 1eea:0608 FUN_1eea_0608 */

void __cdecl16near FUN_1eea_0608(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)0x8858;
  if (-1 < iVar2) {
    puVar5 = (undefined2 *)(iVar2 * 2 + -0x7acc);
    iVar3 = (*(int *)0x885a + 1) - iVar2;
    for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0xffff;
    }
    *(undefined2 *)0x8858 = 0xffff;
    puVar5 = (undefined2 *)(iVar2 * 2 + -0x793c);
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    *(undefined2 *)0x885a = 0;
  }
  return;
}



/* 1eea:063e FUN_1eea_063e */

void __cdecl16near FUN_1eea_063e(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_DX;
  uint uVar5;
  int unaff_SI;
  int unaff_DI;
  int iVar6;
  int *piVar7;
  undefined2 unaff_DS;
  
  iVar6 = -0x7acc;
  if (unaff_SI != 0) {
    if (unaff_SI != *(int *)0x8869) {
      return;
    }
    iVar6 = -0x793c;
  }
  iVar3 = unaff_DI;
  if (unaff_DI < in_DX) {
    iVar3 = in_DX;
    in_DX = unaff_DI;
  }
  if (in_DX < 0) {
    in_DX = 0;
  }
  if (*(int *)0x886b < iVar3) {
    iVar3 = *(int *)0x886b;
  }
  iVar2 = *(int *)0x885c;
  uVar4 = iVar3 + *(int *)0x885e;
  uVar5 = in_DX + *(int *)0x885e;
  if (*(uint *)0x885a < uVar4) {
    *(uint *)0x885a = uVar4;
  }
  if (uVar5 < *(uint *)0x8858) {
    *(uint *)0x8858 = uVar5;
  }
  piVar7 = (int *)(iVar6 + uVar5 * 2);
  for (iVar6 = (uVar4 - uVar5) + 1; iVar6 != 0; iVar6 = iVar6 + -1) {
    piVar1 = piVar7;
    piVar7 = piVar7 + 1;
    *piVar1 = unaff_SI + iVar2;
  }
  return;
}



/* 1eea:07b6 FUN_1eea_07b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1eea_07b6(void)

{
  long lVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 unaff_DS;
  undefined1 uVar14;
  ulong uVar15;
  undefined2 uVar16;
  
  uVar3 = uRam00000002;
  uVar16 = _LAB_0000_0000;
  uVar14 = 1;
  _LAB_0000_0000 = 0x963;
  uRam00000002 = 0x1eea;
  uVar6 = *(uint *)0x852c;
  uVar12 = *(uint *)0x852e;
  uVar13 = *(uint *)0x8532;
  uVar4 = FUN_1eea_0942();
  *(undefined1 *)0x8860 = uVar4;
  uVar15 = FUN_1eea_0942();
  _LAB_0000_0000 = uVar16;
  uVar2 = uVar15 >> 0x10;
  uVar7 = uVar6;
  if ((bool)uVar14) {
    if (*(char *)0x8860 == '\0') goto LAB_1eea_07d8;
    LOCK();
    bVar10 = *(byte *)0x8860;
    *(byte *)0x8860 = (byte)uVar15;
    uVar15 = CONCAT22(uVar13,(uint)bVar10);
    UNLOCK();
    *(uint *)0x852c = uVar12;
    *(uint *)0x8530 = uVar13;
    uVar7 = uVar12;
    uVar12 = uVar6;
    uVar13 = (uint)uVar2;
  }
  uVar6 = (uint)(uVar15 >> 0x10);
  if ((*(byte *)0x8860 & (byte)uVar15) != 0) {
    uRam00000002 = uVar3;
    return;
  }
  iVar8 = uVar12 - uVar7;
  if (SBORROW2(uVar12,uVar7)) {
    iVar8 = (int)(CONCAT12(uVar7 <= uVar12,iVar8) >> 1);
    *(int *)0x8861 = iVar8;
    *(int *)0x8865 = iVar8 >> 1;
    if (SBORROW2(uVar13,uVar6)) {
      iVar8 = (int)(CONCAT12(uVar6 <= uVar13,uVar13 - uVar6) >> 1);
    }
    else {
      iVar8 = (int)(uVar13 - uVar6) >> 1;
    }
  }
  else {
    *(int *)0x8861 = iVar8;
    *(int *)0x8865 = iVar8 >> 1;
    iVar8 = uVar13 - uVar6;
    if (SBORROW2(uVar13,uVar6)) {
      iVar8 = (int)(CONCAT12(uVar6 <= uVar13,iVar8) >> 1);
      *(int *)0x8861 = *(int *)0x8861 >> 1;
      *(int *)0x8865 = *(int *)0x8865 >> 1;
    }
  }
  *(int *)0x8863 = iVar8;
  *(int *)0x8867 = iVar8 >> 1;
  do {
    uVar6 = uVar7;
    uVar11 = (uint)(uVar15 >> 0x10);
    if ((uVar15 & 9) == 0) {
LAB_1eea_08df:
      iVar5 = *(int *)0x886b;
      if ((int)uVar13 <= iVar5) {
LAB_1eea_08e7:
        iVar5 = 0;
      }
      lVar1 = (long)(int)(iVar5 - uVar11) * (long)*(int *)0x8861;
      iVar8 = (int)(lVar1 / (long)*(int *)0x8863);
      iVar9 = (int)(lVar1 % (long)*(int *)0x8863);
      bVar10 = (byte)((ulong)lVar1 >> 0x18);
      if ((char)(bVar10 ^ *(byte *)0x8864) < '\0') {
        iVar9 = -iVar9;
        iVar8 = iVar8 + -1;
      }
      if (-1 < (int)((uint)(byte)((byte)((uint)(iVar9 - *(int *)0x8867) >> 8) ^ bVar10) << 8)) {
        iVar8 = iVar8 + 1;
      }
      iVar8 = iVar8 + uVar6;
      if (iVar8 < 0) {
        uRam00000002 = uVar3;
        return;
      }
      if (*(int *)0x8869 < iVar8) {
        uRam00000002 = uVar3;
        return;
      }
    }
    else {
      iVar8 = 0;
      if (-1 < (int)uVar12) {
        iVar8 = *(int *)0x8869;
      }
      lVar1 = (long)(int)(iVar8 - uVar6) * (long)*(int *)0x8863;
      iVar5 = (int)(lVar1 / (long)*(int *)0x8861);
      iVar9 = (int)(lVar1 % (long)*(int *)0x8861);
      bVar10 = (byte)((ulong)lVar1 >> 0x18);
      if ((char)(bVar10 ^ *(byte *)0x8862) < '\0') {
        iVar9 = -iVar9;
        iVar5 = iVar5 + -1;
      }
      if (-1 < (int)((uint)(byte)((byte)((uint)(iVar9 - *(int *)0x8865) >> 8) ^ bVar10) << 8)) {
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 + uVar11;
      if (iVar5 < 0) goto LAB_1eea_08e7;
      if (*(int *)0x886b < iVar5) goto LAB_1eea_08df;
    }
    if (*(char *)0x8860 == '\0') break;
    *(int *)0x8530 = iVar5;
    *(int *)0x852c = iVar8;
    uVar15 = CONCAT22(uVar13,(uint)*(byte *)0x8860);
    *(undefined1 *)0x8860 = 0;
    uVar7 = uVar12;
    uVar12 = uVar6;
    uVar13 = uVar11;
  } while( true );
  *(int *)0x8532 = iVar5;
  *(int *)0x852e = iVar8;
LAB_1eea_07d8:
  uRam00000002 = uVar3;
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* 1eea:0942 FUN_1eea_0942 */

byte __cdecl16near FUN_1eea_0942(void)

{
  byte bVar1;
  int in_BX;
  int unaff_BP;
  undefined2 unaff_DS;
  
  bVar1 = 0xf;
  if (-1 < in_BX) {
    bVar1 = 7;
  }
  if (in_BX <= *(int *)0x8869) {
    bVar1 = bVar1 & 0xfe;
  }
  if (-1 < unaff_BP) {
    bVar1 = bVar1 & 0xfb;
  }
  if (unaff_BP <= *(int *)0x886b) {
    bVar1 = bVar1 & 0xfd;
  }
  return bVar1;
}



/* 1eea:0963 FUN_1eea_0963 */

undefined2 FUN_1eea_0963(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint in_DX;
  undefined2 unaff_DS;
  int in_stack_00000000;
  
  uVar1 = *(uint *)0x8863;
  if (in_stack_00000000 != 0x8f4) {
    uVar1 = *(uint *)0x8861;
  }
  uVar2 = 0x7f00;
  if ((int)(in_DX ^ uVar1) < 0) {
    uVar2 = 0x8100;
  }
  return uVar2;
}



/* 1eea:0990 FUN_1eea_0990 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1eea_0990(void)

{
  undefined2 uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  int *piVar18;
  int iVar19;
  undefined2 unaff_DS;
  undefined1 uVar20;
  ulong uVar21;
  
  uVar5 = uRam00000002;
  uVar1 = _LAB_0000_0000;
  uVar20 = 1;
  _LAB_0000_0000 = 0xb38;
  uRam00000002 = 0x1eea;
  uVar7 = *(uint *)0x852c;
  uVar8 = *(uint *)0x852e;
  uVar9 = *(uint *)0x8532;
  uVar6 = FUN_1eea_0942();
  *(undefined1 *)0x886e = uVar6;
  uVar21 = FUN_1eea_0942();
  uVar4 = uVar21 >> 0x10;
  uVar16 = uVar7;
  if ((bool)uVar20) {
    if (*(char *)0x886e == '\0') goto LAB_1eea_06a8;
    LOCK();
    bVar17 = *(byte *)0x886e;
    *(byte *)0x886e = (byte)uVar21;
    uVar21 = CONCAT22(uVar9,(uint)bVar17);
    UNLOCK();
    *(uint *)0x852c = uVar8;
    *(uint *)0x8530 = uVar9;
    uVar16 = uVar8;
    uVar8 = uVar7;
    uVar9 = (uint)uVar4;
  }
  uVar7 = (uint)(uVar21 >> 0x10);
  if ((*(byte *)0x886e & (byte)uVar21) != 0) {
    if (((byte)uVar21 & *(byte *)0x886e & 6) != 0) {
      uRam00000002 = uVar5;
      _LAB_0000_0000 = uVar1;
      return;
    }
LAB_1eea_0afa:
    uRam00000002 = uVar5;
    _LAB_0000_0000 = uVar1;
    iVar12 = 0;
    if ((-1 < (int)uVar16) && (iVar12 = *(int *)0x8869, (int)uVar16 <= iVar12)) {
      return;
    }
    iVar13 = -0x7acc;
    if (iVar12 != 0) {
      if (iVar12 != *(int *)0x8869) {
        return;
      }
      iVar13 = -0x793c;
    }
    uVar8 = uVar9;
    if ((int)uVar9 < (int)uVar7) {
      uVar8 = uVar7;
      uVar7 = uVar9;
    }
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    if (*(int *)0x886b < (int)uVar8) {
      uVar8 = *(uint *)0x886b;
    }
    iVar14 = *(int *)0x885c;
    uVar8 = uVar8 + *(int *)0x885e;
    uVar7 = uVar7 + *(int *)0x885e;
    if (*(uint *)0x885a < uVar8) {
      *(uint *)0x885a = uVar8;
    }
    if (uVar7 < *(uint *)0x8858) {
      *(uint *)0x8858 = uVar7;
    }
    piVar18 = (int *)(iVar13 + uVar7 * 2);
    for (iVar13 = (uVar8 - uVar7) + 1; iVar13 != 0; iVar13 = iVar13 + -1) {
      piVar2 = piVar18;
      piVar18 = piVar18 + 1;
      *piVar2 = iVar12 + iVar14;
    }
    return;
  }
  iVar12 = uVar8 - uVar16;
  if (SBORROW2(uVar8,uVar16)) {
    iVar12 = (int)(CONCAT12(uVar16 <= uVar8,iVar12) >> 1);
    *(int *)0x886f = iVar12;
    *(int *)0x8873 = iVar12 >> 1;
    if (SBORROW2(uVar9,uVar7)) {
      iVar12 = (int)(CONCAT12(uVar7 <= uVar9,uVar9 - uVar7) >> 1);
    }
    else {
      iVar12 = (int)(uVar9 - uVar7) >> 1;
    }
  }
  else {
    *(int *)0x886f = iVar12;
    *(int *)0x8873 = iVar12 >> 1;
    iVar12 = uVar9 - uVar7;
    if (SBORROW2(uVar9,uVar7)) {
      iVar12 = (int)(CONCAT12(uVar7 <= uVar9,iVar12) >> 1);
      *(int *)0x886f = *(int *)0x886f >> 1;
      *(int *)0x8873 = *(int *)0x8873 >> 1;
    }
  }
  *(int *)0x8871 = iVar12;
  *(int *)0x8875 = iVar12 >> 1;
  do {
    uVar11 = uVar16;
    uVar7 = (uint)(uVar21 >> 0x10);
    if ((uVar21 & 9) == 0) {
LAB_1eea_0a9d:
      iVar12 = *(int *)0x886b;
      if ((int)uVar9 <= iVar12) {
LAB_1eea_0aa5:
        iVar12 = 0;
      }
      lVar3 = (long)(int)(iVar12 - uVar7) * (long)*(int *)0x886f;
      iVar13 = (int)(lVar3 / (long)*(int *)0x8871);
      iVar14 = (int)(lVar3 % (long)*(int *)0x8871);
      bVar17 = (byte)((ulong)lVar3 >> 0x18);
      if ((char)(bVar17 ^ *(byte *)0x8872) < '\0') {
        iVar14 = -iVar14;
        iVar13 = iVar13 + -1;
      }
      if (-1 < (int)((uint)(byte)((byte)((uint)(iVar14 - *(int *)0x8875) >> 8) ^ bVar17) << 8)) {
        iVar13 = iVar13 + 1;
      }
      uVar16 = iVar13 + uVar11;
      if (((int)uVar16 < 0) || (*(int *)0x8869 < (int)uVar16)) goto LAB_1eea_0afa;
    }
    else {
      uVar16 = 0;
      if (-1 < (int)uVar8) {
        uVar16 = *(uint *)0x8869;
      }
      lVar3 = (long)(int)(uVar16 - uVar11) * (long)*(int *)0x8871;
      iVar12 = (int)(lVar3 / (long)*(int *)0x886f);
      iVar13 = (int)(lVar3 % (long)*(int *)0x886f);
      bVar17 = (byte)((ulong)lVar3 >> 0x18);
      if ((char)(bVar17 ^ *(byte *)0x8870) < '\0') {
        iVar13 = -iVar13;
        iVar12 = iVar12 + -1;
      }
      if (-1 < (int)((uint)(byte)((byte)((uint)(iVar13 - *(int *)0x8873) >> 8) ^ bVar17) << 8)) {
        iVar12 = iVar12 + 1;
      }
      iVar12 = iVar12 + uVar7;
      if (iVar12 < 0) goto LAB_1eea_0aa5;
      if (*(int *)0x886b < iVar12) goto LAB_1eea_0a9d;
    }
    FUN_1eea_063e();
    if (*(char *)0x886e == '\0') break;
    *(int *)0x8530 = iVar12;
    *(uint *)0x852c = uVar16;
    uVar21 = CONCAT22(uVar9,(uint)*(byte *)0x886e);
    *(undefined1 *)0x886e = 0;
    uVar16 = uVar8;
    uVar8 = uVar11;
    uVar9 = uVar7;
  } while( true );
  *(int *)0x8532 = iVar12;
  *(uint *)0x852e = uVar16;
LAB_1eea_06a8:
  iVar12 = *(int *)0x885c;
  _LAB_0000_0000 = uVar1;
  uRam00000002 = uVar5;
  *(int *)0x852c = *(int *)0x852c + iVar12;
  *(int *)0x852e = *(int *)0x852e + iVar12;
  iVar12 = *(int *)0x885e;
  *(int *)0x8530 = *(int *)0x8530 + iVar12;
  *(int *)0x8532 = *(int *)0x8532 + iVar12;
  uVar7 = *(uint *)0x852e;
  if (uVar7 < *(uint *)0x852c) {
    *(undefined2 *)0x852e = *(undefined2 *)0x852c;
    *(uint *)0x852c = uVar7;
    uVar1 = *(undefined2 *)0x8532;
    *(undefined2 *)0x8532 = *(undefined2 *)0x8530;
    *(undefined2 *)0x8530 = uVar1;
  }
  iVar12 = *(int *)0x852e;
  iVar13 = *(int *)0x852c;
  *(uint *)0x8854 = iVar12 - iVar13;
  uVar7 = *(uint *)0x8532;
  uVar8 = *(uint *)0x8530;
  uVar16 = uVar7 - uVar8;
  iVar14 = 2;
  uVar9 = uVar8;
  if ((int)uVar16 < 0) {
    iVar14 = -2;
    uVar16 = -uVar16;
    uVar9 = uVar7;
    uVar7 = uVar8;
  }
  *(uint *)0x8856 = uVar16;
  if (*(uint *)0x885a < uVar7) {
    *(uint *)0x885a = uVar7;
  }
  if (uVar9 < *(uint *)0x8858) {
    *(uint *)0x8858 = uVar9;
  }
  if ((uint)(iVar12 - iVar13) <= uVar16) {
    iVar19 = *(int *)0x8530 << 1;
    uVar7 = *(uint *)0x852c;
    iVar12 = *(int *)0x8856;
    iVar15 = -(iVar12 + 1U >> 1);
    iVar13 = *(int *)0x8854;
    iVar10 = iVar12;
    while( true ) {
      if (uVar7 < *(uint *)(iVar19 + -0x7acc)) {
        *(uint *)(iVar19 + -0x7acc) = uVar7;
      }
      if (*(uint *)(iVar19 + -0x793c) < uVar7) {
        *(uint *)(iVar19 + -0x793c) = uVar7;
      }
      iVar10 = iVar10 + -1;
      if (iVar10 < 0) break;
      iVar19 = iVar19 + iVar14;
      iVar15 = iVar15 + iVar13;
      if (-1 < iVar15) {
        iVar15 = iVar15 - iVar12;
        uVar7 = uVar7 + 1;
      }
    }
    return;
  }
  iVar19 = *(int *)0x8530 << 1;
  uVar7 = *(uint *)0x852c;
  iVar12 = *(int *)0x8854;
  iVar15 = -(iVar12 + 1U >> 1);
  iVar13 = *(int *)0x8856;
  iVar10 = iVar12;
  do {
    if (uVar7 < *(uint *)(iVar19 + -0x7acc)) {
      *(uint *)(iVar19 + -0x7acc) = uVar7;
    }
    while( true ) {
      iVar10 = iVar10 + -1;
      if (iVar10 < 0) {
        if (*(uint *)(iVar19 + -0x793c) < uVar7) {
          *(uint *)(iVar19 + -0x793c) = uVar7;
        }
        return;
      }
      iVar15 = iVar15 + iVar13;
      if (-1 < iVar15) break;
      uVar7 = uVar7 + 1;
    }
    if (*(uint *)(iVar19 + -0x793c) < uVar7) {
      *(uint *)(iVar19 + -0x793c) = uVar7;
    }
    uVar7 = uVar7 + 1;
    iVar15 = iVar15 - iVar12;
    iVar19 = iVar19 + iVar14;
  } while( true );
}



/* 1eea:0b5a FUN_1eea_0b5a */

void __cdecl16far
FUN_1eea_0b5a(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x8869 = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)0x886b = *(undefined2 *)(param_1 + 8);
  thunk_EXT_FUN_0000_0000(0x1eea);
  *(undefined2 *)0x852c = param_2;
  *(undefined2 *)0x8530 = param_3;
  *(undefined2 *)0x852e = param_4;
  *(undefined2 *)0x8532 = param_5;
  thunk_EXT_FUN_0000_0000(0x1eea);
  FUN_1eea_07b6();
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* 1eea:0b9f FUN_1eea_0b9f */

void __cdecl16far FUN_1eea_0b9f(int param_1,int param_2,int param_3)

{
  undefined2 unaff_DS;
  
  if ((((-1 < param_2) && (param_2 <= *(int *)(param_1 + 6))) && (-1 < param_3)) &&
     (param_3 <= *(int *)(param_1 + 8))) {
    thunk_EXT_FUN_0000_0000(0x1eea);
    thunk_EXT_FUN_0000_0000(0x1eea);
    thunk_EXT_FUN_0000_0000(0x1eea);
    thunk_EXT_FUN_0000_0000(0x1eea);
  }
  return;
}



/* 1eea:0bde FUN_1eea_0bde */

void __cdecl16far FUN_1eea_0bde(int param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  thunk_EXT_FUN_0000_0000(0x1eea);
  thunk_EXT_FUN_0000_0000(0x1eea);
  *(undefined2 *)0x885c = *(undefined2 *)(param_1 + 2);
  *(undefined2 *)0x885e = *(undefined2 *)(param_1 + 4);
  *(undefined2 *)0x8869 = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)0x886b = *(undefined2 *)(param_1 + 8);
  FUN_1eea_0608();
  param_2 = param_2 + -1;
  uVar4 = *param_3;
  *(undefined2 *)0x852c = uVar4;
  uVar1 = param_3[1];
  *(undefined2 *)0x8530 = uVar1;
  do {
    uVar2 = param_3[2];
    *(undefined2 *)0x852e = uVar2;
    uVar3 = param_3[3];
    *(undefined2 *)0x8532 = uVar3;
    FUN_1eea_0990();
    *(undefined2 *)0x8530 = uVar3;
    *(undefined2 *)0x852c = uVar2;
    param_2 = param_2 + -1;
    param_3 = param_3 + 2;
  } while (param_2 != 0);
  *(undefined2 *)0x8532 = uVar1;
  *(undefined2 *)0x852e = uVar4;
  FUN_1eea_0990();
  thunk_EXT_FUN_0000_0000(0x1eea);
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* 1eea:0c62 FUN_1eea_0c62 */

void __cdecl16far FUN_1eea_0c62(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  int *piVar4;
  uint in_CX;
  undefined2 extraout_DX;
  undefined2 uVar5;
  undefined2 extraout_DX_00;
  undefined2 in_BX;
  uint *puVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined2 unaff_DS;
  int *piVar9;
  
  thunk_EXT_FUN_0000_0000(0x1eea,0);
  uVar5 = extraout_DX;
  while( true ) {
    piVar8 = (int *)*(undefined2 *)0xe3bb;
    if ((int *)*(undefined2 *)0x482a <= piVar8) {
      (*(code *)*(undefined2 *)0xe077)(0x1eea,uVar5,in_CX,in_BX);
      piVar8 = (int *)*(undefined2 *)0xe3bb;
    }
    iVar1 = *piVar8;
    *(int *)0xe3bb = (int)(piVar8 + 1);
    if ((char)iVar1 == 'X') break;
    piVar8 = (int *)0xc877;
    if (iVar1 == 0x304d) {
      if (param_1 == (int *)0x0) {
        piVar8 = (int *)0xc879;
      }
      else if (param_1 != (int *)0x1) {
        piVar8 = param_1;
      }
    }
    *piVar8 = iVar1;
    puVar6 = (uint *)*(undefined2 *)0xe3bb;
    piVar9 = piVar8;
    if ((uint *)*(undefined2 *)0x482a <= puVar6) {
      (*(code *)*(undefined2 *)0xe077)(0x1eea,uVar5,in_CX);
      puVar6 = (uint *)*(undefined2 *)0xe3bb;
    }
    in_CX = *puVar6;
    *(int *)0xe3bb = (int)(puVar6 + 1);
    piVar4 = piVar8 + 2;
    piVar8[1] = in_CX;
    for (in_CX = in_CX >> 1; in_CX != 0; in_CX = in_CX - 1) {
      piVar8 = (int *)*(undefined2 *)0xe3bb;
      if ((int *)*(undefined2 *)0x482a <= piVar8) {
        (*(code *)*(undefined2 *)0xe077)(0x1eea);
        piVar8 = (int *)*(undefined2 *)0xe3bb;
      }
      iVar1 = *piVar8;
      *(int *)0xe3bb = (int)(piVar8 + 1);
      piVar3 = piVar4;
      piVar4 = piVar4 + 1;
      *piVar3 = iVar1;
    }
    if (piVar9 == (int *)0xc877) {
      thunk_EXT_FUN_0000_0000(0x1eea,0xc877);
      uVar5 = extraout_DX_00;
    }
  }
  *(byte *)0x9853 = (byte)((uint)iVar1 >> 8) & 1;
  puVar7 = (undefined2 *)*(undefined2 *)0xe3bb;
  if ((undefined2 *)*(undefined2 *)0x482a <= puVar7) {
    (*(code *)*(undefined2 *)0xe077)(0x1eea,uVar5,in_CX,in_BX);
    puVar7 = (undefined2 *)*(undefined2 *)0xe3bb;
  }
  uVar2 = *puVar7;
  *(int *)0xe3bb = (int)(puVar7 + 1);
  *(undefined2 *)0x9842 = uVar2;
  puVar7 = (undefined2 *)*(undefined2 *)0xe3bb;
  if ((undefined2 *)*(undefined2 *)0x482a <= puVar7) {
    (*(code *)*(undefined2 *)0xe077)(0x1eea,uVar5,in_CX,in_BX);
    puVar7 = (undefined2 *)*(undefined2 *)0xe3bb;
  }
  uVar2 = *puVar7;
  *(int *)0xe3bb = (int)(puVar7 + 1);
  *(undefined2 *)0x983e = uVar2;
  puVar7 = (undefined2 *)*(undefined2 *)0xe3bb;
  if ((undefined2 *)*(undefined2 *)0x482a <= puVar7) {
    (*(code *)*(undefined2 *)0xe077)(0x1eea,uVar5,in_CX,in_BX);
    puVar7 = (undefined2 *)*(undefined2 *)0xe3bb;
  }
  uVar5 = *puVar7;
  *(int *)0xe3bb = (int)(puVar7 + 1);
  *(undefined2 *)0x9840 = uVar5;
  FUN_1eea_0dfb();
  return;
}



/* 1eea:0d7a FUN_1eea_0d7a */

void __cdecl16far FUN_1eea_0d7a(void)

{
  undefined2 uVar1;
  undefined2 in_CX;
  undefined2 in_DX;
  undefined2 in_BX;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  
  puVar2 = (undefined2 *)*(undefined2 *)0xe3bb;
  if ((undefined2 *)*(undefined2 *)0x482a <= puVar2) {
    (*(code *)*(undefined2 *)0xe077)(0x1eea);
    puVar2 = (undefined2 *)*(undefined2 *)0xe3bb;
  }
  uVar1 = *puVar2;
  *(int *)0xe3bb = (int)(puVar2 + 1);
  *(byte *)0x9853 = (byte)uVar1 & 1;
  puVar2 = (undefined2 *)*(undefined2 *)0xe3bb;
  if ((undefined2 *)*(undefined2 *)0x482a <= puVar2) {
    (*(code *)*(undefined2 *)0xe077)(0x1eea,in_DX,in_CX,in_BX);
    puVar2 = (undefined2 *)*(undefined2 *)0xe3bb;
  }
  uVar1 = *puVar2;
  *(int *)0xe3bb = (int)(puVar2 + 1);
  *(undefined2 *)0x9842 = uVar1;
  FUN_1eea_0dfb();
  return;
}



/* 1eea:0dc2 FUN_1eea_0dc2 */

void __cdecl16far FUN_1eea_0dc2(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0xe3bb;
  FUN_1eea_0e7a();
  *(undefined2 *)0xe3bb = uVar1;
  return;
}



/* 1eea:0ddc FUN_1eea_0ddc */

void __cdecl16far FUN_1eea_0ddc(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0xe3bb;
  FUN_1eea_0e7a();
  *(undefined2 *)0xe3bb = uVar1;
  return;
}



/* 1eea:0dfb FUN_1eea_0dfb */

void __cdecl16near FUN_1eea_0dfb(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  if (*(int *)0x983e == 0 && *(int *)0x9840 == 0) {
    return;
  }
  *(undefined1 *)0x9848 = 0;
  *(undefined1 *)0x9849 = 0;
  *(undefined2 *)0x9844 = 0x9a57;
  puVar5 = (undefined2 *)*(undefined2 *)0xe3bb;
  if ((undefined2 *)*(undefined2 *)0x482a <= puVar5) {
    (*(code *)*(undefined2 *)0xe077)(0x1eea);
    puVar5 = (undefined2 *)*(undefined2 *)0xe3bb;
  }
  uVar2 = *puVar5;
  *(int *)0xe3bb = (int)(puVar5 + 1);
  if (0xb < (byte)uVar2) {
    uVar2 = CONCAT11((char)((uint)uVar2 >> 8),0xb);
  }
  *(undefined1 *)0x984b = (char)uVar2;
  *(undefined2 *)0x9850 = uVar2;
  *(undefined1 *)0x9852 = 8;
  *(undefined1 *)0x984a = 9;
  *(undefined2 *)0x984c = 0x1ff;
  *(undefined2 *)0x984e = 0x100;
  iVar4 = 0;
  iVar3 = 0x800;
  do {
    *(undefined2 *)(iVar4 + -0x3789) = 0xffff;
    iVar4 = iVar4 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  cVar1 = '\0';
  iVar4 = 0;
  iVar3 = 0x100;
  do {
    *(char *)(iVar4 + -0x3787) = cVar1;
    cVar1 = cVar1 + '\x01';
    iVar4 = iVar4 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



/* 1eea:0e44 FUN_1eea_0e44 */

void __cdecl16near FUN_1eea_0e44(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x984a = 9;
  *(undefined2 *)0x984c = 0x1ff;
  *(undefined2 *)0x984e = 0x100;
  iVar3 = 0;
  iVar2 = 0x800;
  do {
    *(undefined2 *)(iVar3 + -0x3789) = 0xffff;
    iVar3 = iVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  cVar1 = '\0';
  iVar3 = 0;
  iVar2 = 0x100;
  do {
    *(char *)(iVar3 + -0x3787) = cVar1;
    cVar1 = cVar1 + '\x01';
    iVar3 = iVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



/* 1eea:0e7a FUN_1eea_0e7a */

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16near FUN_1eea_0e7a(void)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  uint in_CX;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar6;
  undefined2 *puVar8;
  undefined1 *puVar7;
  undefined2 *puVar9;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (*(char *)0x9853 != '\0') {
    in_CX = in_CX + 1 >> 1;
  }
  *(uint *)0x9846 = in_CX;
  uVar6 = *(undefined2 *)0x984e;
  LOCK();
  puVar7 = (undefined1 *)*(undefined2 *)0x9844;
  *(undefined2 *)0x9844 = register0x00000010;
  UNLOCK();
  do {
    if (*(char *)0x9848 == '\0') {
      puVar8 = (undefined2 *)(puVar7 + -2);
      puVar7 = puVar7 + -2;
      *puVar8 = 0xfd3a;
      cVar4 = FUN_1eea_0eec();
      if (cVar4 == -0x70) {
        puVar9 = (undefined2 *)(puVar7 + -2);
        puVar7 = puVar7 + -2;
        *puVar9 = 0xfd47;
        cVar4 = FUN_1eea_0eec();
        uVar6 = extraout_DX_00;
        if (cVar4 != '\0') {
          *(char *)0x9848 = cVar4 + -1;
          goto LAB_1eea_0eb8;
        }
        cVar4 = -0x70;
        *(undefined1 *)0x9849 = 0x90;
      }
      else {
        *(char *)0x9849 = cVar4;
        uVar6 = extraout_DX;
      }
    }
    else {
LAB_1eea_0eb8:
      cVar4 = *(char *)0x9849;
      *(char *)0x9848 = *(char *)0x9848 + -1;
    }
    if (*(char *)0x9853 == '\0') {
      pcVar3 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      *pcVar3 = cVar4;
      piVar1 = (int *)0x9846;
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
    }
    else {
      uVar5 = CONCAT11(cVar4,cVar4) & 0xff0f;
      pcVar3 = unaff_DI;
      unaff_DI = unaff_DI + 2;
      *(uint *)pcVar3 = CONCAT11((byte)(uVar5 >> 0xc),(char)uVar5);
      piVar1 = (int *)0x9846;
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
    }
    if (iVar2 == 0) {
      *(undefined2 *)0x984e = uVar6;
      LOCK();
      *(undefined1 **)0x9844 = puVar7;
      UNLOCK();
      return;
    }
  } while( true );
}



/* 1eea:0eec FUN_1eea_0eec */

void FUN_1eea_0eec(void)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  uint in_DX;
  uint uVar6;
  int *unaff_SI;
  undefined2 unaff_DS;
  undefined1 uStack0000;
  
  if (&uStack0000 == (undefined1 *)0x9a55) {
    bVar4 = *(byte *)0x9852;
    uVar6 = *(uint *)0x9850 >> (0x10 - bVar4 & 0x1f);
    for (; (char)bVar4 < *(char *)0x984a; bVar4 = bVar4 + 0x10) {
      if ((int *)*(undefined2 *)0x482a <= unaff_SI) {
        (*(code *)*(undefined2 *)0xe077)(0x1eea);
        unaff_SI = (int *)*(undefined2 *)0xe3bb;
      }
      piVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      iVar2 = *piVar1;
      *(int *)0x9850 = iVar2;
      uVar6 = uVar6 | iVar2 << (bVar4 & 0x1f);
    }
    *(char *)0x9852 = bVar4 - *(char *)0x984a;
    uVar6 = uVar6 & *(uint *)0x984c;
    uVar5 = uVar6;
    if ((int)in_DX <= (int)uVar6) {
      uVar6 = *(uint *)0x9854;
      uVar5 = in_DX;
    }
    do {
      iVar2 = uVar6 * 3;
      uVar6 = *(uint *)(iVar2 + -0x3789);
    } while (uVar6 != 0xffff);
    uVar3 = *(undefined1 *)(iVar2 + -0x3787);
    *(undefined1 *)0x9856 = uVar3;
    *(undefined1 *)(in_DX * 3 + -0x3787) = uVar3;
    *(undefined2 *)(in_DX * 3 + -0x3789) = *(undefined2 *)0x9854;
    if (*(int *)0x984c < (int)(in_DX + 1)) {
      *(char *)0x984a = *(char *)0x984a + '\x01';
      *(uint *)0x984c = *(uint *)0x984c << 1 | 1;
    }
    if (*(char *)0x984b < *(char *)0x984a) {
      FUN_1eea_0e44();
    }
    *(uint *)0x9854 = uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001fd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_uStack0000)();
  return;
}



/* 1eea:0fa0 FUN_1eea_0fa0 */

void FUN_1eea_0fa0(undefined2 param_1)

{
  undefined2 in_stack_00000000;
  
  uRam00010f9e = param_1;
  uRam00010f9c = in_stack_00000000;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4();
}



/* 1eea:0fbe FUN_1eea_0fbe */

void FUN_1eea_0fbe(undefined2 param_1)

{
  undefined2 in_stack_00000000;
  
  uRam00010f9e = param_1;
  uRam00010f9c = in_stack_00000000;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4();
}



/* 1eea:1052 FUN_1eea_1052 */

void __cdecl16far FUN_1eea_1052(undefined2 param_1,uint param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  iVar5 = (param_2 & 1) * 2;
  thunk_EXT_FUN_0000_0000(0x1eea);
  iVar2 = *(int *)(iVar5 + -0x7788);
  if (-1 < iVar2) {
    puVar6 = (undefined2 *)(iVar2 * 2 + *(int *)(iVar5 + -0x7780));
    iVar3 = (*(int *)(iVar5 + -0x7784) + 1) - iVar2;
    for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = 0xffff;
    }
    *(undefined2 *)(iVar5 + -0x7788) = 0xffff;
    puVar6 = (undefined2 *)(iVar2 * 2 + *(int *)(iVar5 + -0x777c));
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = 0;
    }
    *(undefined2 *)(iVar5 + -0x7784) = 0;
  }
  return;
}



/* 1eea:10b1 FUN_1eea_10b1 */

void __cdecl16far FUN_1eea_10b1(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  iVar2 = *(int *)0x8878;
  if (-1 < iVar2) {
    puVar5 = (undefined2 *)(iVar2 * 2 + *(int *)0x8880);
    iVar3 = (*(int *)0x887c + 1) - iVar2;
    for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0xffff;
    }
    *(undefined2 *)0x8878 = 0xffff;
    puVar5 = (undefined2 *)(iVar2 * 2 + *(int *)0x8884);
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    *(undefined2 *)0x887c = 0;
  }
  iVar2 = *(int *)0x887a;
  if (-1 < iVar2) {
    puVar5 = (undefined2 *)(iVar2 * 2 + *(int *)0x8882);
    iVar3 = (*(int *)0x887e + 1) - iVar2;
    for (iVar4 = iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0xffff;
    }
    *(undefined2 *)0x887a = 0xffff;
    puVar5 = (undefined2 *)(iVar2 * 2 + *(int *)0x8886);
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0;
    }
    *(undefined2 *)0x887e = 0;
  }
  return;
}



/* 1eea:111a FUN_1eea_111a */

void __cdecl16far FUN_1eea_111a(void)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined2 extraout_DX;
  undefined2 in_BX;
  undefined2 unaff_DS;
  
  uVar2 = 0;
  if (iRam000000cc != 0 || iRam000000ce != 0) {
    pcVar1 = (code *)swi(0x33);
    iVar3 = (*pcVar1)();
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar4 = 0x1f;
      pcVar1 = (code *)swi(0x33);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x33);
      (*pcVar1)();
      bVar5 = (byte)(uVar4 >> 8);
      *(byte *)0x8ed6 = bVar5;
      *(undefined2 *)0x8ecc = in_BX;
      *(uint *)0x8ec8 = uVar4 >> (bVar5 & 0x1f);
      *(undefined2 *)0x8eca = extraout_DX;
      uVar2 = 0xff;
    }
  }
  *(undefined1 *)0x8ed7 = uVar2;
  return;
}



/* 1eea:1163 FUN_1eea_1163 */

void __cdecl16far FUN_1eea_1163(void)

{
  char cVar1;
  code *pcVar2;
  undefined2 unaff_DS;
  
  LOCK();
  cVar1 = *(char *)0x8ed7;
  *(char *)0x8ed7 = '\0';
  UNLOCK();
  if (cVar1 != '\0') {
    pcVar2 = (code *)swi(0x33);
    (*pcVar2)();
  }
  return;
}



/* 1eea:1173 FUN_1eea_1173 */

void __cdecl16far FUN_1eea_1173(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x8ed2 = param_1;
  *(undefined2 *)0x8ed4 = param_2;
  *(undefined2 *)0x8ed0 = param_3;
  return;
}



/* 1eea:118a FUN_1eea_118a */

void __cdecl16far FUN_1eea_118a(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x8ec8 = param_1;
  *(undefined2 *)0x8eca = param_2;
  if (*(char *)0x8ed7 != '\0') {
    pcVar1 = (code *)swi(0x33);
    (*pcVar1)();
  }
  return;
}



/* 1eea:11e7 FUN_1eea_11e7 */

void __cdecl16far FUN_1eea_11e7(void)

{
  undefined2 unaff_DS;
  
  if ((*(int *)0x8ed0 != 0) && (*(char *)0x8405 != '\0')) {
    *(undefined1 *)0x8405 = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1eea_00a4(0x1eea);
  }
  return;
}



/* 1eea:1216 FUN_1eea_1216 */

undefined2 __cdecl16far FUN_1eea_1216(uint param_1,undefined2 param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  pcVar1 = (code *)swi(0x33);
  uVar2 = (*pcVar1)();
  *(undefined2 *)0x8edc = (int)uVar2;
  *(undefined2 *)0x8ede = param_2;
  *(undefined2 *)0x8ee0 = param_3;
  *(undefined2 *)0x8ee2 = (int)((ulong)uVar2 >> 0x10);
  if (param_1 < 7) {
    *(uint *)0x8ee0 = *(uint *)0x8ee0 >> (*(byte *)0x8ed6 & 0x1f);
  }
  return 0x8edc;
}



/* 1eea:127c FUN_1eea_127c */

void __cdecl16far FUN_1eea_127c(undefined4 param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x8ed8 = (int)param_1;
  *(undefined2 *)0x8eda = (int)((ulong)param_1 >> 0x10);
  return;
}



/* 201d:0008 FUN_201d_0008 */

void __cdecl16far FUN_201d_0008(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined2 unaff_DS;
  bool bVar8;
  
  iVar3 = FUN_2035_00c6(param_1,param_2,param_3);
  bVar8 = false;
  if (iVar3 == 0) {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (!bVar8) {
      uVar4 = thunk_EXT_FUN_0000_0000(0x2035);
      uVar7 = *(int *)0x475e + *(int *)0x4760 + 0xfU >> 4;
      bVar8 = uVar7 < uVar4;
      if (uVar7 <= uVar4) {
        pcVar2 = (code *)swi(0x21);
        uVar5 = (*pcVar2)();
        if (!bVar8) {
          *(undefined2 *)0x4762 = 0;
          *(undefined2 *)0x4764 = uVar5;
          iVar3 = *(int *)0x475e;
          iVar1 = *(int *)0x4760;
          pcVar2 = (code *)swi(0x21);
          iVar6 = (*pcVar2)();
          if ((bVar8) || (iVar6 != iVar3)) {
            pcVar2 = (code *)swi(0x21);
            uVar5 = (*pcVar2)();
            FUN_201d_00a5(uVar5);
          }
          else {
            pcVar2 = (code *)swi(0x21);
            (*pcVar2)();
            if (iVar1 != 0) {
              FUN_201d_00e9();
            }
          }
        }
      }
    }
  }
  FUN_1951_02ac();
  return;
}



/* 201d:00a5 FUN_201d_00a5 */

void __cdecl16far FUN_201d_00a5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



/* 201d:00b2 FUN_201d_00b2 */

undefined2 __cdecl16far FUN_201d_00b2(void)

{
  undefined2 unaff_DS;
  
  return *(undefined2 *)0x4762;
}



/* 201d:00e9 FUN_201d_00e9 */

undefined2 __cdecl16near FUN_201d_00e9(void)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint *unaff_SI;
  uint *puVar11;
  byte *unaff_DI;
  int unaff_ES;
  int unaff_DS;
  
  puVar11 = unaff_SI + 1;
  uVar9 = *unaff_SI;
  iVar6 = 0x10;
  do {
    while( true ) {
      while( true ) {
        uVar10 = uVar9 & 1;
        uVar9 = uVar9 >> 1;
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
          puVar3 = puVar11;
          puVar11 = puVar11 + 1;
          uVar9 = *puVar3;
          iVar6 = 0x10;
        }
        if (uVar10 == 0) break;
        puVar3 = puVar11;
        puVar11 = (uint *)((int)puVar11 + 1);
        *unaff_DI = (byte)*puVar3;
        unaff_DI = unaff_DI + 1;
      }
      uVar10 = uVar9 & 1;
      uVar9 = uVar9 >> 1;
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        uVar9 = *puVar3;
        iVar6 = 0x10;
      }
      if (uVar10 != 0) break;
      uVar7 = uVar9 & 1;
      uVar10 = uVar9 >> 1;
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        uVar10 = *puVar3;
        iVar6 = 0x10;
      }
      uVar9 = uVar10 >> 1;
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) {
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        uVar9 = *puVar3;
        iVar6 = 0x10;
      }
      iVar5 = ((uint)(uVar7 != 0) << 1 | (uint)((uVar10 & 1) != 0)) + 2;
      uVar7 = CONCAT11(0xff,(byte)*puVar11);
      puVar11 = (uint *)((int)puVar11 + 1);
LAB_201d_0141:
      do {
        pbVar1 = unaff_DI + uVar7;
        pbVar4 = unaff_DI;
        unaff_DI = unaff_DI + 1;
        *pbVar4 = *pbVar1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar10 = *puVar11;
    bVar8 = (byte)(uVar10 >> 8);
    uVar7 = CONCAT11(bVar8 >> 3,(char)uVar10) | 0xe000;
    if ((uVar10 & 0x700) != 0) {
      iVar5 = (bVar8 & 7) + 2;
      puVar11 = puVar11 + 1;
      goto LAB_201d_0141;
    }
    puVar2 = (uint *)((int)puVar11 + 3);
    bVar8 = (byte)puVar11[1];
    if (bVar8 == 0) {
      return 0;
    }
    if (bVar8 != 1) {
      iVar5 = bVar8 + 1;
      puVar11 = puVar2;
      goto LAB_201d_0141;
    }
    unaff_ES = unaff_ES + ((uint)unaff_DI >> 4) + -0x200;
    puVar11 = (uint *)((uint)puVar2 & 0xf);
    unaff_DS = unaff_DS + ((uint)puVar2 >> 4);
    unaff_DI = (byte *)(((uint)unaff_DI & 0xf) + 0x2000);
  } while( true );
}



/* 2035:0000 FUN_2035_0000 */

void __cdecl16far FUN_2035_0000(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 local_44;
  undefined1 local_42 [32];
  undefined1 local_22 [32];
  
  uVar2 = 0x2035;
  iVar1 = FUN_2035_00c6(param_1,0,&local_44);
  if (iVar1 == 0) {
    uVar2 = 0x19c7;
    FUN_19c7_4ec2(0x2035,local_44);
  }
  if (*(int *)0x4774 != 0) {
    FUN_19c7_480c(local_22,0x4766);
    uVar2 = 0x19c7;
    FUN_19c7_47cc(local_22,param_1);
    param_1 = local_22;
    local_22[0] = *(undefined1 *)0x4774;
  }
  if (param_2 != (undefined1 *)0x0) {
    iVar1 = FUN_2035_00c6(param_2,0,&local_44);
    if (iVar1 == 0) {
      FUN_19c7_4ec2(uVar2,local_44);
    }
  }
  if ((param_2 != (undefined1 *)0x0) && (*(int *)0x4774 != 0)) {
    FUN_19c7_480c(local_42,0x476a);
    FUN_19c7_47cc(local_42,param_2);
    param_2 = local_42;
    local_42[0] = *(undefined1 *)0x4774;
  }
  FUN_1eea_03ec(param_1,param_2);
  return;
}



/* 2035:00c6 FUN_2035_00c6 */

int __cdecl16far FUN_2035_00c6(undefined1 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 local_26 [32];
  int local_6;
  int local_4;
  
  uVar1 = 0x2035;
  if (*(int *)0x476e == 0) {
    FUN_2035_015e(param_1);
  }
  *(undefined2 *)0x4774 = 0;
  local_4 = 0;
  while( true ) {
    if (2 < local_4) {
      return local_6;
    }
    local_6 = FUN_19c7_4f18(uVar1,param_1,param_2,param_3);
    if (*(int *)0x4772 != 0) break;
    if (local_6 == 0) {
      return 0;
    }
    if (local_4 == 0) {
      FUN_19c7_480c(local_26,0x4780);
      FUN_19c7_47cc(local_26,param_1);
      param_1 = local_26;
      uVar1 = *(undefined2 *)0x4776;
      *(undefined2 *)0x4774 = uVar1;
      local_26[0] = (undefined1)uVar1;
    }
    else {
      FUN_2035_01f4(param_1 + 3);
    }
    uVar1 = 0x19c7;
    local_4 = local_4 + 1;
  }
  return local_6;
}



/* 2035:015e FUN_2035_015e */

void __cdecl16far FUN_2035_015e(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  iVar1 = FUN_209f_0006(0);
  *(int *)0x476e = iVar1;
  *(uint *)0x4772 = (uint)(iVar1 == 0xf8);
  if ((iVar1 == 0xf8) == 0) {
    iVar1 = FUN_19c7_4e68(0x209f,0x280,0x477e);
    if (iVar1 != 0) {
      FUN_1951_00b2(0x4784);
    }
    uVar2 = FUN_209f_002a();
    *(undefined2 *)0x4776 = uVar2;
    iVar1 = FUN_19c7_4f18(0x209f,param_1,0,&local_4);
    if (iVar1 == 0) {
      FUN_19c7_4ec2(0x19c7,local_4);
      return;
    }
    FUN_2035_03f2(*(undefined2 *)0x4776);
    if (*(int *)0x4776 == 0x41) {
      uVar2 = 0x42;
    }
    else {
      uVar2 = 0x41;
    }
    *(undefined2 *)0x4776 = uVar2;
  }
  return;
}



/* 2035:01f4 FUN_2035_01f4 */

void __cdecl16far FUN_2035_01f4(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  while( true ) {
    iVar1 = FUN_2035_046a(param_1);
    if (iVar1 != 0) {
      FUN_2035_0236(iVar1,iVar1);
      return;
    }
    if (*(int *)0x477a == 0) break;
    FUN_2035_0236(*(undefined2 *)0x4778,0);
    FUN_2035_03f2(*(undefined2 *)0x4778);
  }
  return;
}



/* 2035:0236 FUN_2035_0236 */

void __cdecl16far FUN_2035_0236(undefined1 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  *(undefined1 *)0x47a6 = *(undefined1 *)0x4776;
  *(undefined1 *)0x47ae = param_1;
  do {
    do {
      iVar1 = FUN_209f_0054(*(undefined2 *)0x4776);
    } while (iVar1 == 6);
    iVar1 = FUN_209f_0054(*(undefined2 *)0x4776);
    if (iVar1 == 0) {
      iVar1 = FUN_19c7_4f18(0x209f,0x47a6,0,&local_4);
      if (iVar1 == 0) {
        FUN_19c7_4ec2(0x19c7,local_4);
        return;
      }
    }
    FUN_2035_054c(0x47a9);
  } while( true );
}



/* 2035:029a FUN_2035_029a */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined2 __cdecl16far FUN_2035_029a(char *param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  FUN_19c7_4cbe(param_1);
  puVar1 = (undefined2 *)param_1;
  for (param_1 = (char *)((int)param_1 + 4); *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  return *puVar1;
}



/* 2035:02e6 FUN_2035_02e6 */

undefined2 __cdecl16far FUN_2035_02e6(undefined2 param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 in_DX;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int *piVar3;
  undefined2 local_20;
  undefined1 local_1e [20];
  undefined2 local_a;
  undefined2 local_8;
  int local_6;
  int local_4;
  
  local_a = FUN_2035_029a(param_1);
  local_8 = in_DX;
  iVar1 = FUN_2035_04fe(local_a,in_DX);
  if (iVar1 != 0) {
    iVar1 = FUN_2035_04fe(local_a,local_8);
    *(int *)0x4778 = iVar1 + 1;
    *(undefined2 *)0x965c = 0;
    FUN_19c7_480c(local_1e,0x47b0);
    FUN_19c7_47cc(local_1e,param_1);
    local_1e[0] = *(undefined1 *)0x4776;
    iVar1 = FUN_19c7_4f18(0x19c7,local_1e,0,&local_20);
    if (iVar1 == 0) {
      piVar3 = &local_6;
      iVar1 = FUN_19c7_4f30(0x19c7,local_20,local_1e);
      if (iVar1 == 0) {
        local_1e[local_6] = 0;
        local_4 = FUN_19c7_4c1a(local_1e,0x2d,piVar3);
        if (local_4 != 0) {
          *(int *)0x965c = (int)*(char *)(local_4 + 1);
          uVar2 = 1 << (*(char *)0x965c - 0x31U & 0x1f);
          if ((uVar2 & *(uint *)0x477a) == 0) {
            *(undefined2 *)0x965c = 0;
          }
          else {
            *(uint *)0x477a = *(uint *)0x477a & ~uVar2;
          }
        }
      }
      FUN_19c7_4ec2(0x19c7,local_20);
    }
  }
  if (*(int *)0x965c < 0x32) {
    return 0;
  }
  return local_a;
}



/* 2035:03f2 FUN_2035_03f2 */

void __cdecl16far FUN_2035_03f2(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  undefined1 local_2e [30];
  undefined1 local_10 [14];
  
  *(undefined2 *)0x965c = 0;
  *(undefined1 *)0x47b4 = *(undefined1 *)0x4776;
  uVar6 = FUN_19c7_4efa(0x2035,0x47b4,0,local_2e);
  while (iVar3 = (int)((ulong)uVar6 >> 0x10), (int)uVar6 == 0) {
    iVar2 = FUN_2035_02e6(local_10);
    if (iVar2 != 0 || iVar3 != 0) {
      iVar1 = *(int *)0x4770;
      uVar5 = (undefined2)((ulong)*(undefined4 *)0x477c >> 0x10);
      iVar4 = (int)*(undefined4 *)0x477c;
      *(int *)(iVar1 * 4 + iVar4) = iVar2;
      *(int *)(iVar1 * 4 + iVar4 + 2) = iVar3;
      if (*(int *)0x4770 < 0xa0) {
        *(int *)0x4770 = *(int *)0x4770 + 1;
      }
    }
    uVar6 = FUN_19c7_4ef0(0x19c7,local_2e);
  }
  return;
}



/* 2035:046a FUN_2035_046a */

undefined2 __cdecl16far FUN_2035_046a(undefined2 param_1)

{
  int iVar1;
  int in_DX;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined2 local_a;
  int local_8;
  
  local_a = 0;
  iVar1 = FUN_2035_029a(param_1);
  local_8 = 0;
  while( true ) {
    if (*(int *)0x4770 <= local_8) {
      return 0;
    }
    uVar3 = (undefined2)((ulong)*(undefined4 *)0x477c >> 0x10);
    iVar2 = (int)*(undefined4 *)0x477c;
    iVar2 = FUN_2035_04fe(*(undefined2 *)(local_8 * 4 + iVar2),
                          *(undefined2 *)(local_8 * 4 + iVar2 + 2));
    if (iVar2 != 0) {
      uVar3 = (undefined2)((ulong)*(undefined4 *)0x477c >> 0x10);
      iVar2 = (int)*(undefined4 *)0x477c;
      local_a = FUN_2035_04fe(*(undefined2 *)(local_8 * 4 + iVar2),
                              *(undefined2 *)(local_8 * 4 + iVar2 + 2));
    }
    uVar3 = (undefined2)((ulong)*(undefined4 *)0x477c >> 0x10);
    iVar2 = (int)*(undefined4 *)0x477c;
    if ((*(int *)(local_8 * 4 + iVar2) == iVar1) && (*(int *)(local_8 * 4 + iVar2 + 2) == in_DX))
    break;
    local_8 = local_8 + 1;
  }
  return local_a;
}



/* 2035:04fe FUN_2035_04fe */

int __cdecl16far FUN_2035_04fe(undefined2 param_1,undefined2 param_2)

{
  if ((((char)param_1 == 'D') && (param_1._1_1_ == 'I')) && ((char)param_2 == 'S')) {
    param_2._1_1_ = param_2._1_1_ + 'V';
    if (('@' < param_2._1_1_) && (param_2._1_1_ < 'F')) {
      return (int)param_2._1_1_;
    }
  }
  return 0;
}



/* 2035:054c FUN_2035_054c */

void __cdecl16far FUN_2035_054c(undefined2 param_1)

{
  int iVar1;
  
  iVar1 = FUN_209f_0071();
  if (iVar1 < 4) {
    FUN_2035_0584(param_1);
  }
  else {
    FUN_2035_0606(0x209f,param_1);
  }
  FUN_19c7_4c0a(7);
  do {
    iVar1 = FUN_1951_00ea();
  } while (iVar1 == 0);
  return;
}



/* 2035:0584 FUN_2035_0584 */

void __cdecl16far FUN_2035_0584(undefined2 param_1)

{
  undefined2 unaff_DS;
  undefined1 local_5c [90];
  
  FUN_19c7_4a80(local_5c,0x47bb,param_1,*(undefined2 *)0x4776);
  FUN_19c7_4c0a(10);
  FUN_19c7_4c0a(0xd);
  FUN_2120_1958(0x19c7,0xf,1);
  FUN_2120_1962(0x2120,0x47ec);
  FUN_2120_196c(0x2120,0x47f0);
  FUN_2120_196c(0x2120,local_5c);
  FUN_2120_196c(0x2120,0x47f2);
  FUN_2120_1962(0x2120,0x47f4);
  return;
}



/* 2035:0606 FUN_2035_0606 */

void FUN_2035_0606(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  puVar3 = (undefined2 *)*(undefined2 *)0x4828;
  puVar5 = (undefined2 *)*(undefined2 *)0x7922;
  puVar6 = puVar3;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  *puVar3 = 0;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_1eea_00a4(0x2035,*(undefined2 *)*(undefined2 *)0x4828);
}



/* 209f:0006 FUN_209f_0006 */

char __cdecl16far FUN_209f_0006(void)

{
  code *pcVar1;
  char cVar2;
  char *in_BX;
  undefined2 unaff_DS;
  undefined4 uVar3;
  
  pcVar1 = (code *)swi(0x21);
  uVar3 = (*pcVar1)();
  cVar2 = *in_BX;
  if ((cVar2 == -7) && (((uint)uVar3 & 0xff) * (int)((ulong)uVar3 >> 0x10) < 0x801)) {
    cVar2 = -0xf;
  }
  return cVar2;
}



/* 209f:002a FUN_209f_002a */

char __cdecl16far FUN_209f_002a(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = (code *)swi(0x21);
  cVar2 = (*pcVar1)();
  return cVar2 + 'A';
}



/* 209f:0044 FUN_209f_0044 */

undefined2 __cdecl16far FUN_209f_0044(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    uVar2 = 0;
  }
  return uVar2;
}



/* 209f:0054 FUN_209f_0054 */

undefined1 __cdecl16far FUN_209f_0054(void)

{
  code *pcVar1;
  undefined1 extraout_AH;
  
  pcVar1 = (code *)swi(0x13);
  (*pcVar1)();
  return extraout_AH;
}



/* 209f:0071 FUN_209f_0071 */

void __cdecl16far FUN_209f_0071(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}



/* 20a6:0008 FUN_20a6_0008 */

undefined2 __cdecl16far FUN_20a6_0008(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 local_1c [20];
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  iVar1 = FUN_20a6_06aa(param_1,local_1c);
  if (iVar1 == 0) {
    iVar1 = FUN_2035_00c6(param_1,param_2,&local_4);
    if (iVar1 != 0) {
      FUN_20a6_05f6(param_1);
    }
    return local_4;
  }
  iVar1 = FUN_20a6_0750(*(undefined2 *)0x482c,local_8,local_6);
  if (iVar1 != 0) {
    FUN_20a6_05f6(param_1);
  }
  return *(undefined2 *)0x482c;
}



/* 20a6:006e FUN_20a6_006e */

undefined2 __cdecl16far FUN_20a6_006e(undefined2 param_1)

{
  int iVar1;
  undefined2 local_4;
  
  iVar1 = FUN_19c7_4ed7(0x20a6,param_1,0,&local_4);
  if (iVar1 != 0) {
    FUN_20a6_05f6(param_1);
  }
  return local_4;
}



/* 20a6:009c FUN_20a6_009c */

void __cdecl16far FUN_20a6_009c(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (param_1 != *(int *)0x482c) {
    iVar1 = FUN_19c7_4ec2(0x20a6,param_1);
    if (iVar1 != 0) {
      FUN_20a6_05f6(0);
    }
  }
  return;
}



/* 20a6:00c2 FUN_20a6_00c2 */

undefined2 __cdecl16far FUN_20a6_00c2(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 local_4;
  
  uVar1 = FUN_20a6_0008(param_1,0);
  puVar3 = &local_4;
  iVar2 = FUN_19c7_4f30(0x20a6,uVar1,param_2);
  if (iVar2 != 0) {
    FUN_20a6_05f6(0,puVar3);
  }
  FUN_20a6_009c(uVar1);
  return local_4;
}



/* 20a6:010c FUN_20a6_010c */

undefined2 __cdecl16far FUN_20a6_010c(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 local_4;
  
  uVar1 = FUN_20a6_0008(param_1,0);
  iVar2 = FUN_19c7_4f30(0x20a6,uVar1,param_2,param_3,0xffff,&local_4);
  if (iVar2 != 0) {
    FUN_20a6_05f6(0);
  }
  FUN_20a6_009c(uVar1);
  return local_4;
}



/* 20a6:0158 FUN_20a6_0158 */

undefined2 __cdecl16far
FUN_20a6_0158(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = FUN_20a6_006e(param_1);
  iVar2 = FUN_19c7_4f37(0x20a6,uVar1,param_2,param_3,param_4,&param_4);
  if (iVar2 != 0) {
    FUN_20a6_05f6(0);
  }
  FUN_20a6_009c(uVar1);
  return param_4;
}



/* 20a6:01a0 FUN_20a6_01a0 */

void __cdecl16far
FUN_20a6_01a0(undefined2 param_1,undefined2 param_2,int param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int local_4;
  
  uVar1 = FUN_20a6_0008(param_4,0);
  FUN_20a6_0568(uVar1,uVar1);
  FUN_1eea_0c62(param_5);
  for (local_4 = 0; local_4 < *(int *)0x9840; local_4 = local_4 + 1) {
    FUN_1eea_0ddc(0xe07b);
    thunk_EXT_FUN_0000_0000(0x1eea,0xe07b,param_1,param_2,param_3 + local_4,*(undefined2 *)0x983e);
  }
  FUN_20a6_009c(uVar1);
  FUN_1951_02ac();
  return;
}



/* 20a6:0218 FUN_20a6_0218 */

void __cdecl16far FUN_20a6_0218(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_20a6_01a0(param_1,0,0,param_2,param_3);
  return;
}



/* 20a6:0232 FUN_20a6_0232 */

void __cdecl16far FUN_20a6_0232(undefined2 param_1,undefined2 param_2)

{
  FUN_20a6_01a0(param_1,0,0,param_2,1);
  return;
}



/* 20a6:024c FUN_20a6_024c */

void __cdecl16far FUN_20a6_024c(undefined2 param_1,undefined2 param_2)

{
  FUN_20a6_01a0(param_1,0,0,param_2,0);
  return;
}



/* 20a6:0264 FUN_20a6_0264 */

undefined2 __cdecl16far FUN_20a6_0264(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = FUN_20a6_0008(param_3,0);
  FUN_20a6_0568(uVar1,uVar1);
  FUN_1eea_0d7a();
  FUN_1eea_0dc2(param_1,param_2,*(undefined2 *)0x9842);
  FUN_20a6_009c(uVar1);
  return *(undefined2 *)0x9842;
}



/* 20a6:02a8 FUN_20a6_02a8 */

undefined2 __cdecl16far FUN_20a6_02a8(undefined2 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined2 local_18;
  undefined1 local_16 [2];
  int local_14;
  int local_12;
  undefined2 local_10;
  int local_6;
  int local_4;
  
  iVar1 = FUN_19c7_4f18(0x20a6,param_3,0,&local_18);
  if (iVar1 == 0) {
    puVar3 = local_16;
    iVar1 = FUN_19c7_4f30(0x19c7,local_18,&local_4);
    if (iVar1 == 0) {
      *(undefined2 *)0x8f55 = 2;
      if (local_4 < param_2) {
        return 2;
      }
      iVar1 = FUN_20a6_0750(local_18,param_2 << 1,(param_2 << 1) >> 0xf,puVar3);
      if (iVar1 == 0) {
        puVar3 = local_16;
        iVar1 = FUN_19c7_4f30(0x19c7,local_18,&local_4);
        if (iVar1 == 0) {
          local_4 = local_4 + -8;
          iVar1 = FUN_20a6_0750(local_18,local_4,local_4 >> 0xf,puVar3);
          if (iVar1 == 0) {
            puVar3 = local_16;
            iVar1 = FUN_19c7_4f30(0x19c7,local_18,0x9672);
            if (iVar1 == 0) {
              local_6 = ((uint)*(byte *)0x9673 - (uint)*(byte *)0x9672) + 1;
              local_14 = ((uint)*(byte *)0x9676 + (uint)*(byte *)0x9678) * local_6 *
                         (uint)*(byte *)0x9674 + 8;
              uVar2 = thunk_EXT_FUN_0000_0000(0x19c7,param_1,puVar3);
              local_10 = (undefined2)((ulong)uVar2 >> 0x10);
              local_12 = (int)uVar2 + -8;
              if (*(char *)0x9675 == '\0') {
                local_12 = local_12 - local_6;
                local_4 = local_4 - local_6;
                local_14 = local_14 + local_6;
              }
              iVar1 = FUN_20a6_0750(local_18,local_4,local_4 >> 0xf);
              if (((iVar1 == 0) &&
                  (iVar1 = FUN_19c7_4f30(0x1eea,local_18,local_12,local_10,local_14,local_16),
                  iVar1 == 0)) && (iVar1 = FUN_19c7_4ec2(0x19c7,local_18), iVar1 == 0)) {
                FUN_1951_02ac();
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return *(undefined2 *)0x8f55;
}



/* 20a6:0412 FUN_20a6_0412 */

void __cdecl16far FUN_20a6_0412(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int local_4;
  
  uVar1 = FUN_20a6_0008(param_1,0);
  FUN_20a6_0568(uVar1,uVar1);
  FUN_1eea_0c62(0);
  thunk_EXT_FUN_0000_0000(0x1eea,*(undefined2 *)0x983e,*(undefined2 *)0x9840);
  for (local_4 = 0; local_4 < *(int *)0x9840; local_4 = local_4 + 1) {
    FUN_1eea_0ddc(0xe07b);
    thunk_EXT_FUN_0000_0000(0x1eea,0xe07b);
  }
  FUN_20a6_009c(uVar1);
  thunk_EXT_FUN_0000_0000(0x1eea);
  return;
}



/* 20a6:0488 FUN_20a6_0488 */

void __cdecl16far FUN_20a6_0488(undefined2 param_1,undefined2 param_2)

{
  FUN_20a6_0232(param_2,param_1);
  return;
}



/* 20a6:049a FUN_20a6_049a */

void __cdecl16far FUN_20a6_049a(undefined2 param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int local_4;
  
  uVar1 = FUN_20a6_0008(param_1,0);
  FUN_20a6_0568(uVar1,uVar1);
  FUN_1eea_0c62(0);
  for (local_4 = 0; local_4 < *(int *)0x9840; local_4 = local_4 + 1) {
    FUN_1eea_0ddc(0xe07b);
    thunk_EXT_FUN_0000_0000(0x1eea,0xe07b,param_2,0,local_4,*(undefined2 *)0x983e);
  }
  return;
}



/* 20a6:04fe FUN_20a6_04fe */

void __cdecl16far FUN_20a6_04fe(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  int local_4;
  
  *(undefined2 *)0x967c = 0;
  *(undefined2 *)0x967e = param_1;
  *(undefined2 *)0xe3bb = *(undefined2 *)0x482a;
  *(undefined2 *)0xe077 = 0x586;
  *(undefined2 *)0xe079 = 0x20a6;
  FUN_1eea_0c62(0);
  for (local_4 = 0; local_4 < *(int *)0x9840; local_4 = local_4 + 1) {
    FUN_1eea_0ddc(0xe07b);
    thunk_EXT_FUN_0000_0000(0x1eea,0xe07b,param_2,0,local_4,*(undefined2 *)0x983e);
  }
  return;
}



/* 20a6:0568 FUN_20a6_0568 */

void __cdecl16far FUN_20a6_0568(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x967a = param_1;
  *(undefined2 *)0xe3bb = *(undefined2 *)0x482a;
  *(undefined2 *)0xe077 = 0x5cc;
  *(undefined2 *)0xe079 = 0x20a6;
  return;
}



/* 20a6:0586 FUN_20a6_0586 */

undefined2 __cdecl16far FUN_20a6_0586(void)

{
  undefined2 unaff_DS;
  
  FUN_19c7_4bde(*(undefined2 *)0x967e,*(undefined2 *)0x967c);
  *(undefined2 *)0xe3bb = 0xe1bb;
  *(char *)0x967d = *(char *)0x967d + '\x02';
  return 0x200;
}



/* 20a6:05bc FUN_20a6_05bc */

void __cdecl16far FUN_20a6_05bc(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x967a = param_1;
  FUN_20a6_05cc();
  return;
}



/* 20a6:05cc FUN_20a6_05cc */

undefined2 __cdecl16far FUN_20a6_05cc(void)

{
  undefined2 unaff_DS;
  undefined2 local_4;
  
  FUN_19c7_4f30(0x20a6,*(undefined2 *)0x967a,0xe1bb);
  *(undefined2 *)0xe3bb = 0xe1bb;
  return local_4;
}



/* 20a6:05f6 FUN_20a6_05f6 */

void __cdecl16far FUN_20a6_05f6(undefined2 param_1)

{
  FUN_20a6_061e(3);
  FUN_19c7_494a(param_1);
  FUN_19c7_29de(0x19c7,99);
  return;
}



/* 20a6:061e FUN_20a6_061e */

void __cdecl16far FUN_20a6_061e(undefined1 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  undefined1 local_10;
  undefined1 local_f;
  
  uVar1 = *(undefined2 *)0x8f55;
  local_f = 0;
  local_10 = param_1;
  FUN_19c7_4a00(0x10,&local_10,&local_10);
  *(undefined2 *)0x8f55 = uVar1;
  return;
}



/* 20a6:0650 FUN_20a6_0650 */

undefined2 __cdecl16far FUN_20a6_0650(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  iVar1 = FUN_19c7_4f18(0x20a6,param_1,0x8000,&local_4);
  if (iVar1 == 0) {
    *(undefined2 *)0x482c = local_4;
    return 1;
  }
  return 0;
}



/* 20a6:06aa FUN_20a6_06aa */

undefined2 __cdecl16far FUN_20a6_06aa(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined1 *puVar2;
  int local_6;
  undefined1 local_4 [2];
  
  if (*(int *)0x482c != -1) {
    iVar1 = FUN_20a6_0750(*(undefined2 *)0x482c,0,0);
    if (iVar1 != 0) {
      FUN_20a6_05f6(0);
    }
    puVar2 = local_4;
    iVar1 = FUN_19c7_4f30(0x20a6,*(undefined2 *)0x482c,&local_6);
    if (iVar1 != 0) {
      FUN_20a6_05f6(0,puVar2);
    }
    while (local_6 != 0) {
      puVar2 = local_4;
      local_6 = local_6 + -1;
      iVar1 = FUN_19c7_4f30(0x19c7,*(undefined2 *)0x482c,param_2);
      if (iVar1 != 0) {
        FUN_20a6_05f6(0,puVar2);
      }
      iVar1 = FUN_19c7_4c44(param_2,param_1,0xc);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* 20a6:0750 FUN_20a6_0750 */

undefined2 __cdecl16far FUN_20a6_0750(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  int local_4;
  
  local_10 = 0x4200;
  local_e = param_1;
  local_c = param_3;
  local_a = param_2;
  FUN_19c7_4b94(&local_10,&local_10);
  if (local_4 == 0) {
    return 0;
  }
  return local_10;
}



/* 20a6:07a0 FUN_20a6_07a0 */

void __cdecl16far FUN_20a6_07a0(void)

{
  return;
}



/* 2120:0002 FUN_2120_0002 */

undefined2 __cdecl16far FUN_2120_0002(void)

{
  undefined2 in_AX;
  int unaff_SI;
  undefined2 unaff_DS;
  
  if ((*(byte *)(unaff_SI + 7) & 0x10) != 0) {
    return in_AX;
  }
  if ((*(char *)0xaa4 != '\0') && ((*(byte *)(unaff_SI + 7) & 0xc) != 0)) {
    FUN_2120_1b88();
  }
  *(byte *)(unaff_SI + 7) = *(byte *)(unaff_SI + 7) & 0xfd;
  return in_AX;
}



/* 2120:0035 FUN_2120_0035 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

int __cdecl16far FUN_2120_0035(void)

{
  byte bVar1;
  byte *pbVar2;
  code *pcVar3;
  int in_AX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *extraout_DX;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  bool bVar16;
  uint *puVar17;
  undefined4 uVar18;
  
  if (in_AX == -1) {
    return -1;
  }
  uVar14 = 0x2120;
  iVar7 = in_AX * 0x10;
  puVar8 = (uint *)(iVar7 + 0xc2c);
  DAT_2120_0aa8 = puVar8;
  if ((*(int *)(iVar7 + 0xc34) == 0) || ((*(byte *)(iVar7 + 0xc33) & 2) != 0)) {
    uVar15 = false;
LAB_2120_032e:
    if ((!(bool)uVar15) && (DAT_2120_0aa8[6] != 0xffff)) {
      FUN_2120_0035();
    }
    return in_AX;
  }
  puVar9 = (uint *)0xc2c;
  iVar7 = DAT_2120_0c24;
  do {
    bVar16 = false;
    if ((*(byte *)((int)puVar9 + 7) & 2) != 0) {
      uVar4 = *puVar9 - *puVar8;
      if (*puVar9 < *puVar8) {
        bVar16 = -uVar4 < puVar9[4];
      }
      else {
        bVar16 = uVar4 < puVar8[4];
      }
    }
    if (bVar16) {
      bVar16 = iVar7 != DAT_2120_0c24;
      FUN_2120_0002();
      if (bVar16) {
        FUN_22d8_000a();
        FUN_22d8_000a();
        iVar7 = FUN_2120_05d7();
        return iVar7;
      }
    }
    puVar9 = puVar9 + 8;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (((DAT_2120_0aa4 != '\0') && (bVar16 = false, (*(byte *)((int)puVar8 + 7) & 0xc) != 0)) &&
     (FUN_2120_1b88(), !bVar16)) {
LAB_2120_0320:
    *(byte *)((int)DAT_2120_0aa8 + 7) = *(byte *)((int)DAT_2120_0aa8 + 7) | 2;
    uVar15 = 0;
    FUN_20a6_07a0();
    goto LAB_2120_032e;
  }
  pbVar11 = (byte *)puVar8[1];
  if ((*(byte *)((int)puVar8 + 7) & 8) != 0) {
    pbVar11 = *(byte **)pbVar11;
  }
  pbVar10 = pbVar11 + 1;
  if (DAT_2120_0aaa != (byte *)0x0) {
    puVar9 = DAT_2120_0aac;
    if (pbVar10 == DAT_2120_0aaa) goto LAB_2120_0203;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
  }
  bVar16 = false;
  uVar4 = uVar14;
  DAT_2120_0aaa = pbVar10;
  if ((*pbVar11 & 1) == 0) goto LAB_2120_0139;
  pcVar3 = (code *)swi(0x21);
  puVar9 = (uint *)(*pcVar3)();
  if (bVar16) {
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    FUN_2120_05bb();
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    goto LAB_2120_0134;
  }
LAB_2120_0203:
  uVar14 = puVar8[5];
  uVar13 = puVar8[2];
  pcVar3 = (code *)swi(0x21);
  DAT_2120_0aac = puVar9;
  (*pcVar3)();
  uVar6 = DAT_2120_0aa8[4];
  uVar4 = *DAT_2120_0aa8;
  if ((*(byte *)((int)DAT_2120_0aa8 + 7) & 8) != 0) {
    uVar6 = uVar6 - *(int *)(DAT_2120_0aa8[1] + 0x1c);
  }
  uVar13 = -((((uVar14 + 3 >> 2) + uVar13) - 1 & 0x7f) - 0xfff);
  puVar8 = puVar9;
  for (; uVar14 = 0x2120, uVar6 != 0; uVar6 = uVar6 - uVar5) {
    uVar5 = uVar6;
    if (uVar13 < uVar6) {
      uVar5 = uVar13;
    }
    bVar16 = false;
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    uVar14 = uVar4;
    if (bVar16) goto LAB_2120_0290;
    uVar4 = uVar4 + uVar5;
    uVar13 = 0xf80;
  }
  uVar4 = DAT_2120_0aa8[5];
  pcVar3 = (code *)swi(0x21);
  puVar8 = DAT_2120_0aac;
  (*pcVar3)();
  iVar7 = (uVar4 - 1 & 0x1f) + 1;
  pbVar11 = (byte *)(uVar4 + 0x1f >> 5);
  pbVar10 = pbVar11;
  if (pbVar11 != (byte *)0x0) {
    while( true ) {
      bVar16 = false;
      uVar4 = iVar7 << 2;
      pcVar3 = (code *)swi(0x21);
      uVar18 = (*pcVar3)();
      pbVar12 = (byte *)((ulong)uVar18 >> 0x10);
      if ((bVar16) || ((uint)uVar18 < uVar4)) break;
      uVar4 = DAT_2120_0aa6 + 0x10;
      do {
        if (!CARRY2(uVar4,*(uint *)(pbVar12 + 2))) {
          **(int **)pbVar12 = **(int **)pbVar12 + uVar4;
        }
        pbVar12 = pbVar12 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar7 = 0x20;
      pbVar11 = pbVar11 + -1;
      pbVar10 = pbVar12;
      if (pbVar11 == (byte *)0x0) goto LAB_2120_0320;
    }
LAB_2120_0290:
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    FUN_2120_05bb();
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
LAB_2120_0134:
    do {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar4 = uVar14;
LAB_2120_0139:
      iVar7 = 0x80;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pbVar2 = pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (*pbVar2 != 0);
      if ((((*(uint *)(pbVar10 + -3) | 0x2020) == 0x6578) &&
          (bVar16 = (*(uint *)(pbVar10 + -5) | 0x2000) < 0x652e,
          (*(uint *)(pbVar10 + -5) | 0x2000) == 0x652e)) && (FUN_2120_0784(), !bVar16)) {
        bVar16 = puVar8 != (uint *)0xffff;
        if (puVar8 == (uint *)0xffff) {
          pbVar11 = extraout_DX;
          pbVar10 = DAT_2120_0aaa;
          do {
            pbVar2 = pbVar11;
            pbVar11 = pbVar11 + 1;
            bVar1 = *pbVar2;
            pbVar2 = pbVar10;
            pbVar10 = pbVar10 + 1;
            *pbVar2 = bVar1;
          } while (bVar1 != 0);
        }
        else {
          pcVar3 = (code *)swi(0x21);
          puVar17 = (uint *)(*pcVar3)();
          if (!bVar16) goto LAB_2120_01e2;
        }
      }
      pbVar10 = DAT_2120_0aaa;
      uVar14 = 0x2120;
      bVar16 = false;
      uVar4 = 0x21cb;
      puVar8 = (uint *)(uint)DAT_2120_0aa5;
      uVar13 = FUN_2120_0641();
      if (!bVar16) goto LAB_2120_01de;
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      while (pbVar2 = pbVar10, pbVar10 = pbVar10 + 1, *pbVar2 != 0) {
        pcVar3 = (code *)swi(0x21);
        (*pcVar3)();
      }
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
    } while( true );
  }
  goto LAB_2120_0320;
LAB_2120_01de:
  puVar17 = (uint *)(ulong)uVar13;
LAB_2120_01e2:
  pbVar11 = DAT_2120_0aaa;
  pbVar10 = (byte *)((ulong)puVar17 >> 0x10);
  DAT_2120_0aaa[-1] = DAT_2120_0aaa[-1] | 1;
  do {
    pbVar2 = pbVar10;
    pbVar10 = pbVar10 + 1;
    bVar1 = *pbVar2;
    pbVar2 = pbVar11;
    pbVar11 = pbVar11 + 1;
    *pbVar2 = bVar1;
  } while (bVar1 != 0);
  puVar9 = (uint *)puVar17;
  puVar8 = DAT_2120_0aa8;
  goto LAB_2120_0203;
}



/* 2120:034c FUN_2120_034c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl16near FUN_2120_034c(undefined2 param_1,undefined2 param_2)

{
  undefined2 in_AX;
  undefined2 uVar1;
  undefined2 in_DX;
  undefined2 uVar2;
  undefined2 *puVar3;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  int in_stack_00000000;
  
  puVar3 = (undefined2 *)(DAT_2120_0a96 + ram0x00021c94);
  register0x00000000 = ram0x00021c94 + 6;
  if (DAT_2120_0c2a <= register0x00000000) {
    uVar2 = 0x9f3;
    uVar1 = FUN_2120_05d7();
    return CONCAT22(uVar2,uVar1);
  }
  *puVar3 = *(undefined2 *)(in_stack_00000000 + 5);
  if ((DAT_2120_0c20 & 1) == 0) {
    param_2 = 0x2120;
  }
  puVar3[2] = param_2;
  puVar3[1] = param_1;
  FUN_2120_0035((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  return CONCAT22(in_DX,in_AX);
}



/* 2120:0414 entry */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void entry(void)

{
  int iVar1;
  undefined2 in_CX;
  undefined2 in_DX;
  undefined1 *puVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar1 = DAT_2120_0c22;
  puVar2 = (undefined1 *)0x800;
  iVar3 = 0x3d75;
  if (DAT_2120_0c22 != 0) {
    in_CX = 0x3d75;
    in_DX = 0x800;
    puVar2 = (undefined1 *)0x200;
    iVar3 = DAT_2120_0c22;
  }
  *(undefined2 *)(puVar2 + -2) = unaff_DS;
  *(int *)(puVar2 + -4) = iVar1;
  *(undefined2 *)(puVar2 + -6) = in_CX;
  *(undefined2 *)(puVar2 + -8) = in_DX;
  DAT_2120_0aa6 = unaff_DS;
  *(undefined2 *)(puVar2 + -10) = 0x1638;
  FUN_2120_044f();
  FUN_19c7_2854();
  return;
}



/* 2120:044f FUN_2120_044f */

int __cdecl16near FUN_2120_044f(void)

{
  undefined2 *puVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 unaff_DS;
  bool bVar12;
  
  pcVar2 = (code *)swi(0x21);
  bVar3 = (*pcVar2)();
  if (2 < bVar3) {
    *(undefined1 *)0xaa5 = 0x20;
  }
  *(int *)0xaae = *(int *)0xc24 * 0x10 + 0xc2c;
  iVar8 = *(int *)0xc26 * 0x20 + iRam00020aae;
  *(undefined2 *)0xa94 = 0;
  *(int *)0xa96 = iVar8;
  bVar12 = false;
  iVar8 = FUN_2120_1b88();
  if ((!bVar12) || (*(int *)0xc26 != 0)) {
    *(undefined1 *)0xaa4 = 0xff;
  }
  puVar9 = (uint *)0xc2c;
  if ((*(uint *)0xc20 & 2) != 0) {
    uVar4 = 0xffff;
    uVar6 = 0;
    do {
      uVar7 = *puVar9;
      if (uVar7 != 0) {
        if (uVar7 < uVar4) {
          uVar4 = uVar7;
        }
        if (uVar6 < uVar7 + puVar9[4]) {
          uVar6 = uVar7 + puVar9[4];
        }
      }
      puVar9 = puVar9 + 8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    uVar6 = uVar6 - uVar4;
    do {
      uVar7 = 0x1000;
      if (uVar6 < 0x1000) {
        uVar7 = uVar6;
      }
      puVar11 = (undefined2 *)0x0;
      for (iVar8 = uVar7 << 3; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar1 = puVar11;
        puVar11 = puVar11 + 1;
        *puVar1 = 0;
      }
      uVar4 = uVar4 + uVar7;
      uVar6 = uVar6 - uVar7;
    } while (uVar6 != 0);
  }
  iVar5 = 0;
  iVar10 = 0xc2c;
  iVar8 = iRam00020c24;
  do {
    if ((*(byte *)(iVar10 + 7) & 1) != 0) {
      iVar5 = FUN_2120_0035();
    }
    iVar10 = iVar10 + 0x10;
    iVar5 = iVar5 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return iVar5;
}



/* 2120:05bb FUN_2120_05bb */

void __cdecl16near FUN_2120_05bb(void)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  
  pcVar4 = (char *)*(undefined2 *)0xaaa;
  iVar3 = -0x8000;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  pcVar4[-1] = '$';
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  return;
}



/* 2120:05d7 FUN_2120_05d7 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined2 __cdecl16far FUN_2120_05d7(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *extraout_DX;
  uint in_BX;
  char *pcVar8;
  char *pcVar9;
  char *unaff_SI;
  uint uVar10;
  int iVar11;
  bool bVar12;
  ulong uVar13;
  undefined4 uVar14;
  int iStack000a;
  undefined2 in_stack_0000001a;
  
  iVar11 = 0x2120;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
LAB_2120_0134:
  do {
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    iVar7 = 0x80;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar2 = unaff_SI;
      unaff_SI = unaff_SI + 1;
    } while (*pcVar2 != '\0');
    if ((((*(uint *)(unaff_SI + -3) | 0x2020) != 0x6578) ||
        (bVar12 = (*(uint *)(unaff_SI + -5) | 0x2000) < 0x652e,
        (*(uint *)(unaff_SI + -5) | 0x2000) != 0x652e)) || (FUN_2120_0784(), bVar12)) {
LAB_2120_0194:
      unaff_SI = DAT_2120_0aaa;
      iVar11 = 0x2120;
      bVar12 = false;
      iVar7 = 0x21cb;
      in_BX = (uint)DAT_2120_0aa5;
      uVar5 = FUN_2120_0641();
      if (bVar12) {
        pcVar4 = (code *)swi(0x21);
        (*pcVar4)();
        while (pcVar2 = unaff_SI, unaff_SI = unaff_SI + 1, *pcVar2 != '\0') {
          pcVar4 = (code *)swi(0x21);
          (*pcVar4)();
        }
        pcVar4 = (code *)swi(0x21);
        (*pcVar4)();
        goto LAB_2120_0134;
      }
      uVar13 = (ulong)uVar5;
    }
    else {
      bVar12 = in_BX != 0xffff;
      if (in_BX == 0xffff) {
        pcVar8 = extraout_DX;
        pcVar9 = DAT_2120_0aaa;
        do {
          pcVar2 = pcVar8;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar2;
          pcVar2 = pcVar9;
          pcVar9 = pcVar9 + 1;
          *pcVar2 = cVar1;
        } while (cVar1 != '\0');
        goto LAB_2120_0194;
      }
      pcVar4 = (code *)swi(0x21);
      uVar13 = (*pcVar4)();
      iVar7 = iVar11;
      if (bVar12) goto LAB_2120_0194;
    }
    pcVar8 = DAT_2120_0aaa;
    unaff_SI = (char *)(uVar13 >> 0x10);
    in_BX = (uint)uVar13;
    DAT_2120_0aaa[-1] = DAT_2120_0aaa[-1] | 1;
    do {
      pcVar2 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
      *pcVar2 = cVar1;
    } while (cVar1 != '\0');
    iVar7 = DAT_2120_0aa8[5];
    iVar3 = DAT_2120_0aa8[2];
    pcVar4 = (code *)swi(0x21);
    DAT_2120_0aac = in_BX;
    (*pcVar4)();
    iStack000a = 0x2120;
    uVar5 = DAT_2120_0aa8[4];
    iVar11 = *DAT_2120_0aa8;
    if ((*(byte *)((int)DAT_2120_0aa8 + 7) & 8) != 0) {
      uVar5 = uVar5 - *(int *)(DAT_2120_0aa8[1] + 0x1c);
    }
    uVar10 = -((((iVar7 + 3U >> 2) + iVar3) - 1 & 0x7f) - 0xfff);
    for (; uVar5 != 0; uVar5 = uVar5 - uVar6) {
      uVar6 = uVar5;
      if (uVar10 < uVar5) {
        uVar6 = uVar10;
      }
      bVar12 = false;
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      if (bVar12) goto LAB_2120_0290;
      iVar11 = iVar11 + uVar6;
      uVar10 = 0xf80;
    }
    iVar11 = DAT_2120_0aa8[5];
    pcVar4 = (code *)swi(0x21);
    in_BX = DAT_2120_0aac;
    (*pcVar4)();
    iVar7 = (iVar11 - 1U & 0x1f) + 1;
    pcVar8 = (char *)(iVar11 + 0x1fU >> 5);
    unaff_SI = pcVar8;
    while( true ) {
      if (pcVar8 == (char *)0x0) {
        *(byte *)((int)DAT_2120_0aa8 + 7) = *(byte *)((int)DAT_2120_0aa8 + 7) | 2;
        bVar12 = false;
        FUN_20a6_07a0();
        if ((!bVar12) && (DAT_2120_0aa8[6] != -1)) {
          FUN_2120_0035();
        }
        return in_stack_0000001a;
      }
      bVar12 = false;
      uVar5 = iVar7 << 2;
      pcVar4 = (code *)swi(0x21);
      uVar14 = (*pcVar4)();
      pcVar9 = (char *)((ulong)uVar14 >> 0x10);
      iVar11 = iStack000a;
      if ((bVar12) || ((uint)uVar14 < uVar5)) break;
      uVar5 = DAT_2120_0aa6 + 0x10;
      do {
        if (!CARRY2(uVar5,*(uint *)(pcVar9 + 2))) {
          **(int **)pcVar9 = **(int **)pcVar9 + uVar5;
        }
        pcVar9 = pcVar9 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar7 = 0x20;
      pcVar8 = pcVar8 + -1;
      unaff_SI = pcVar9;
    }
LAB_2120_0290:
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    FUN_2120_05bb();
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
  } while( true );
}



/* 2120:05e3 FUN_2120_05e3 */

undefined2 __cdecl16far FUN_2120_05e3(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined2 in_AX;
  int iVar5;
  char *unaff_SI;
  char *pcVar6;
  char *unaff_DI;
  char *pcVar7;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  iVar4 = *(int *)0x2c;
  if (iVar4 != 0) {
    pcVar7 = (char *)0x0;
LAB_2120_05f9:
    if (*pcVar7 != '\0') {
      pcVar6 = unaff_SI;
      do {
        pcVar2 = pcVar6;
        pcVar6 = pcVar6 + 1;
        if (*pcVar2 == '\0') {
          if (*pcVar7 == '=') {
            do {
              pcVar7 = pcVar7 + 1;
              cVar3 = *pcVar7;
              pcVar2 = unaff_DI;
              unaff_DI = unaff_DI + 1;
              *pcVar2 = cVar3;
            } while (cVar3 != '\0');
            return in_AX;
          }
          break;
        }
        pcVar1 = pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar2 == *pcVar1);
      iVar5 = -1;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar2 = pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar2 != '\0');
      goto LAB_2120_05f9;
    }
  }
  return in_AX;
}



/* 2120:0641 FUN_2120_0641 */

uint __cdecl16far FUN_2120_0641(void)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 *puVar4;
  code *pcVar5;
  uint uVar6;
  byte bVar7;
  uint in_CX;
  byte bVar8;
  int iVar9;
  byte *unaff_SI;
  byte *pbVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined2 unaff_DS;
  bool bVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined2 uVar17;
  
  while( true ) {
    pbVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    bVar8 = *pbVar1;
    iVar9 = 0x678;
    uVar17 = 0x678;
    if (bVar8 == 0) {
      return in_CX;
    }
    if (bVar8 == 0x43) {
      FUN_2120_0746();
      uVar6 = FUN_2120_07e9();
      return uVar6;
    }
    if (bVar8 == 0x45) break;
    if (bVar8 == 0x50) {
      pcVar5 = (code *)swi(0x21);
      uVar6 = (*pcVar5)();
      bVar14 = (byte)uVar6 < 3;
      if (!bVar14) {
        uVar16 = FUN_2120_0784();
        puVar11 = (undefined1 *)((ulong)uVar16 >> 0x10);
        uVar6 = (uint)uVar16;
        if ((!bVar14) && (iVar9 != -1)) {
          puVar13 = (undefined1 *)0x0;
          for (iVar9 = iVar9 - (int)puVar11; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar4 = puVar13;
            puVar13 = puVar13 + 1;
            puVar2 = puVar11;
            puVar11 = puVar11 + 1;
            *puVar4 = *puVar2;
          }
          uVar6 = FUN_2120_07e9();
          return uVar6;
        }
      }
      return uVar6;
    }
    if (bVar8 == 0x41) {
      bVar14 = false;
      do {
        bVar15 = bVar14;
        uVar6 = FUN_2120_0815(uVar17);
        if (bVar15) {
          return uVar6;
        }
        uVar6 = FUN_2120_07e9();
        bVar14 = true;
      } while (bVar15);
      return uVar6;
    }
  }
  do {
    pbVar12 = unaff_SI;
    bVar8 = *pbVar12;
    bVar14 = false;
    if (bVar8 == 0) break;
    bVar14 = bVar8 < 0x2c;
    unaff_SI = pbVar12 + 1;
  } while (bVar8 != 0x2c);
  *pbVar12 = 0;
  FUN_2120_05e3();
  *pbVar12 = bVar8;
  if (bVar14) {
    return (uint)bVar8;
  }
  pbVar10 = (byte *)0x50;
  uVar6 = in_CX;
  do {
    bVar8 = (byte)pbVar12;
    pbVar12 = (byte *)0x0;
    while( true ) {
      pbVar1 = pbVar10;
      pbVar10 = pbVar10 + 1;
      bVar3 = *pbVar1;
      bVar7 = (byte)(uVar6 >> 8);
      uVar6 = CONCAT11(bVar7,bVar3);
      if ((bVar3 == 0) || (bVar3 == 0x3b)) break;
      pbVar1 = pbVar12;
      pbVar12 = pbVar12 + 1;
      *pbVar1 = bVar3;
      uVar6 = (uint)bVar3 << 8;
    }
    if (pbVar12 != (byte *)0x0) {
      bVar14 = bVar7 < 0x5c;
      if ((bVar7 != 0x5c) && (bVar14 = bVar7 < 0x3a, bVar7 != 0x3a)) {
        *pbVar12 = 0x5c;
      }
      bVar8 = bVar3;
      uVar6 = FUN_2120_07e9();
      if (!bVar14) {
        return uVar6;
      }
    }
    pbVar12 = (byte *)(uint)bVar8;
    if (bVar8 == 0) {
      return uVar6;
    }
  } while( true );
}



/* 2120:0746 FUN_2120_0746 */

undefined4 __cdecl16near FUN_2120_0746(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 in_AX;
  int iVar4;
  char *unaff_DI;
  char *pcVar5;
  char *pcVar6;
  undefined2 unaff_ES;
  
  cVar3 = (char)in_AX;
  if (cVar3 == '\0') {
    pcVar2 = (code *)swi(0x21);
    cVar3 = (*pcVar2)();
    cVar3 = cVar3 + '\x01';
  }
  *unaff_DI = cVar3 + '@';
  pcVar5 = unaff_DI + 3;
  (unaff_DI + 1)[0] = ':';
  (unaff_DI + 1)[1] = '\\';
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  iVar4 = 0x40;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  pcVar6 = pcVar5 + -1;
  if (pcVar5[-2] != '\\') {
    pcVar5[-1] = '\\';
    pcVar6 = pcVar5;
  }
  *pcVar6 = '\0';
  return CONCAT22(in_AX,param_1);
}



/* 2120:0784 FUN_2120_0784 */

undefined4 __cdecl16near FUN_2120_0784(undefined2 param_1)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  undefined2 in_AX;
  int iVar5;
  char *in_BX;
  char *pcVar6;
  char *local_4;
  
  pcVar3 = (code *)swi(0x21);
  bVar4 = (*pcVar3)();
  local_4 = in_BX;
  if ((2 < bVar4) && (iVar2 = *(int *)0x2c, iVar2 != 0)) {
    iVar5 = -0x8000;
    pcVar6 = (char *)0x0;
LAB_2120_07b3:
    if (*pcVar6 != '\0') {
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
      goto LAB_2120_07b3;
    }
    if (*(int *)(pcVar6 + 1) == 1) {
      pcVar6 = pcVar6 + 3;
      local_4 = (char *)0xffff;
      while( true ) {
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
        if (*pcVar1 == '\0') break;
        if (*pcVar1 == '\\') {
          local_4 = pcVar6;
        }
      }
    }
  }
  return CONCAT22(local_4,param_1);
}



/* 2120:07e9 FUN_2120_07e9 */

void __cdecl16near FUN_2120_07e9(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  
  FUN_2120_07fd();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)(extraout_DX);
  return;
}



/* 2120:07fd FUN_2120_07fd */

undefined2 __cdecl16near FUN_2120_07fd(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char *pcVar3;
  char cVar4;
  undefined2 in_AX;
  undefined2 *unaff_BP;
  char *pcVar5;
  char *unaff_DI;
  undefined2 unaff_SS;
  
  uVar1 = unaff_BP[6];
  uVar2 = *unaff_BP;
  pcVar5 = (char *)unaff_BP[4];
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar5 + 1;
    cVar4 = *pcVar3;
    pcVar3 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar3 = cVar4;
  } while (cVar4 != '\0');
  return in_AX;
}



/* 2120:0815 FUN_2120_0815 */

undefined2 __cdecl16near FUN_2120_0815(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  undefined2 extraout_DX;
  int unaff_BP;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined2 unaff_SS;
  
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  FUN_2120_07fd();
  *(undefined1 *)0x0 = 0x24;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  uVar1 = *(undefined2 *)(unaff_BP + 0xc);
  *(undefined1 *)0x50 = 0xfe;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  uVar7 = (uint)*(byte *)0x51;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  uVar7 = uVar7 & 0xff;
  if (uVar7 == 0) goto LAB_2120_08ce;
  uVar1 = *(undefined2 *)(unaff_BP + 0xc);
  puVar8 = (undefined1 *)0x52;
  uVar2 = *(undefined2 *)(unaff_BP + 0xc);
  puVar9 = (undefined1 *)0x0;
  if (*(char *)0x53 == ':') {
    if (*(char *)0x54 != '\\') {
      puVar8 = (undefined1 *)0x54;
      uVar7 = uVar7 - 2;
LAB_2120_08b9:
      FUN_2120_0746();
    }
  }
  else {
    if (*(char *)0x52 != '\\') goto LAB_2120_08b9;
    pcVar5 = (code *)swi(0x21);
    cVar6 = (*pcVar5)();
    puVar9 = (undefined1 *)0x2;
    *(undefined2 *)0x0 = CONCAT11(0x3a,cVar6 + 'A');
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    puVar4 = puVar9;
    puVar9 = puVar9 + 1;
    puVar3 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar4 = *puVar3;
  }
  if ((puVar9[-1] != '\\') && (puVar9[-1] != ':')) {
    *puVar9 = 0x5c;
  }
LAB_2120_08ce:
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  return extraout_DX;
}



/* 2120:167e FUN_2120_167e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_167e(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1688 FUN_2120_1688 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1688(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1692 FUN_2120_1692 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1692(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:169c FUN_2120_169c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_169c(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:16a6 FUN_2120_16a6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_16a6(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:16b0 FUN_2120_16b0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_16b0(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:16ba FUN_2120_16ba */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_16ba(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:16c4 FUN_2120_16c4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_16c4(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:16ce FUN_2120_16ce */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_16ce(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:16d8 FUN_2120_16d8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_16d8(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:16e2 FUN_2120_16e2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_16e2(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:16ec FUN_2120_16ec */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_16ec(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:16f6 FUN_2120_16f6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_16f6(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1700 FUN_2120_1700 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1700(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:170a FUN_2120_170a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_170a(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1714 FUN_2120_1714 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1714(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:171e FUN_2120_171e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_171e(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1728 FUN_2120_1728 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1728(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1732 FUN_2120_1732 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1732(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:173c FUN_2120_173c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_173c(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1746 FUN_2120_1746 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1746(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1750 FUN_2120_1750 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1750(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:175a FUN_2120_175a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_175a(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1764 FUN_2120_1764 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1764(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:176e FUN_2120_176e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_176e(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1778 FUN_2120_1778 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1778(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1782 FUN_2120_1782 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1782(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:178c FUN_2120_178c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_178c(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1796 FUN_2120_1796 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1796(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:17aa FUN_2120_17aa */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_17aa(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:17be FUN_2120_17be */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_17be(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:17d2 FUN_2120_17d2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_17d2(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:17e6 FUN_2120_17e6 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_17e6(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:17fa FUN_2120_17fa */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_17fa(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:180e FUN_2120_180e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_180e(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1926 FUN_2120_1926 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1926(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:193a FUN_2120_193a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_193a(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:194e FUN_2120_194e */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_194e(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1958 FUN_2120_1958 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1958(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1962 FUN_2120_1962 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_1962(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:196c FUN_2120_196c */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2120_196c(void)

{
  FUN_2120_034c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* 2120:1b88 FUN_2120_1b88 */

void __cdecl16far FUN_2120_1b88(void)

{
  return;
}



/* 22d8:000a FUN_22d8_000a */

undefined2 __cdecl16far FUN_22d8_000a(void)

{
  undefined2 in_stack_00000000;
  
  FUN_22d8_001c();
  return in_stack_00000000;
}



/* 22d8:001c FUN_22d8_001c */

void FUN_22d8_001c(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  byte in_stack_00000000;
  
  FUN_22d8_0023();
  FUN_22d8_0030();
  bVar2 = (in_stack_00000000 & 0xf) + 0x90;
  in_AF = 9 < (bVar2 & 0xf) | in_AF;
  bVar1 = 0x99 < bVar2 || 0x6f < (in_stack_00000000 & 0xf);
  bVar3 = bVar2 + in_AF * '\x06' + bVar1 * '`';
  bVar2 = bVar3 + 0x40;
  bVar4 = bVar2 + bVar1;
  *unaff_DI = bVar4 + (9 < (bVar4 & 0xf) | in_AF) * '\x06' +
              (0x99 < bVar4 || (0xbf < bVar3 || CARRY1(bVar2,bVar1))) * '`';
  return;
}



/* 22d8:0023 FUN_22d8_0023 */

void FUN_22d8_0023(void)

{
  bool bVar1;
  byte in_AL;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  
  FUN_22d8_0030();
  bVar2 = (in_AL & 0xf) + 0x90;
  in_AF = 9 < (bVar2 & 0xf) | in_AF;
  bVar1 = 0x99 < bVar2 || 0x6f < (in_AL & 0xf);
  bVar3 = bVar2 + in_AF * '\x06' + bVar1 * '`';
  bVar2 = bVar3 + 0x40;
  bVar4 = bVar2 + bVar1;
  *unaff_DI = bVar4 + (9 < (bVar4 & 0xf) | in_AF) * '\x06' +
              (0x99 < bVar4 || (0xbf < bVar3 || CARRY1(bVar2,bVar1))) * '`';
  return;
}



/* 22d8:0030 FUN_22d8_0030 */

void __cdecl16near FUN_22d8_0030(void)

{
  bool bVar2;
  byte bVar1;
  byte in_AL;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  
  bVar3 = (in_AL & 0xf) + 0x90;
  bVar1 = 9 < (bVar3 & 0xf) | in_AF;
  bVar2 = 0x99 < bVar3 || 0x6f < (in_AL & 0xf);
  bVar4 = bVar3 + bVar1 * '\x06' + bVar2 * '`';
  bVar3 = bVar4 + 0x40;
  bVar5 = bVar3 + bVar2;
  *unaff_DI = bVar5 + (9 < (bVar5 & 0xf) | bVar1) * '\x06' +
              (0x99 < bVar5 || (0xbf < bVar4 || CARRY1(bVar3,bVar2))) * '`';
  return;
}


