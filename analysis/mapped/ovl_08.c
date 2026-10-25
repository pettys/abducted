/* Analysis pseudocode; not original or rebuildable source. See manifest and unresolved-instructions.tsv. */

/* ovl_08::022dc0 ovl_08_entry */

void __cdecl16far ovl_08_entry(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int *local_14;
  int local_c;
  int local_8;
  int local_6;
  uint local_4;
  
  if ((*(char *)0x29f == '\0') || (iVar1 = thunk_EXT_FUN_0000_0000(), iVar1 == 0)) {
    iVar1 = 7;
  }
  else {
    iVar1 = 0x12;
  }
  *(undefined2 *)(*(int *)0xc432 * 0x3c + -0x42ba) = 100;
  local_6 = 2000;
  FUN_1951_017a(2);
  *(undefined2 *)0xbd28 = 0;
  *(undefined2 *)0xbd26 = 0;
  *(undefined2 *)0xbd24 = 0;
  local_8 = 0;
  do {
    if (iVar1 <= local_8) {
      *(undefined2 *)(*(int *)0xc432 * 0x3c + -0x42ba) = 0;
      FUN_1951_017a(1);
      return;
    }
    *(undefined2 *)0x9ee1 = 0;
    *(int *)0x9edc = local_8 + 1;
    dispatch_ovl_14_252a_14c6();
    *(undefined2 *)0xc861 = *(undefined2 *)0xc863;
    *(char *)0x16df = (*(char *)0x9ed6 == *(char *)0x2a4) + '\x01';
    dispatch_ovl_14_252a_0000();
    *(undefined2 *)0x7912 = 0;
    *(undefined2 *)0x7914 = 0;
    *(undefined2 *)0x7916 = 0x13f;
    *(undefined2 *)0x7918 = 199;
    uVar6 = 0x12db;
    FUN_11e1_0faa();
    for (local_14 = (int *)*(undefined2 *)(local_8 * 2 + 0x527e); *local_14 != -1;
        local_14 = local_14 + 2) {
      do {
        iVar4 = FUN_1090_147c();
      } while (iVar4 != 0);
      iVar4 = local_14[1];
      if (local_8 == 1) {
        if (*local_14 == 3) {
          local_4 = 0x3f;
        }
        else {
          local_4 = 3;
        }
      }
      else if (local_8 == 3) {
        local_4 = 1;
      }
      else if (local_8 == 5) {
        local_4 = 0;
      }
      else {
        local_4 = 0xff;
      }
      do {
        uVar6 = FUN_1ed2_007e(*(undefined2 *)0x52a2);
        iVar2 = FUN_1ed2_0008(local_6,uVar6);
        uVar6 = FUN_1ed2_006e(*(undefined2 *)0x52a2);
        uVar6 = FUN_1ed2_0008(local_6,uVar6);
        local_c = 1;
        uVar5 = local_4;
        do {
          *(uint *)(local_c * 2 + -0x3b8b) = uVar5 & 1;
          uVar5 = (int)uVar5 >> 1;
          local_c = local_c + 1;
        } while (local_c < 9);
        FUN_1897_01ac(*(undefined2 *)0x790e,0,-*(int *)0x52a2,0,0,0,0,0);
        FUN_11e1_1052();
        if (local_8 == 10) {
          uVar3 = 0x2000;
        }
        else {
          uVar3 = 0;
        }
        FUN_1897_03b6(*local_14,*(undefined2 *)0x628,uVar3,0,0,uVar6,-iVar2);
        FUN_1897_01ee();
        local_6 = local_6 + (iVar4 * 2 - local_6) / *(int *)0xb686;
        FUN_1090_1428(0x1897);
        FUN_1090_0002();
        *(int *)0x628 = *(int *)0x628 + *(int *)0xb67e * 0x80;
        iVar2 = FUN_19c7_49d4();
      } while ((iVar2 == 0) && (iVar2 = FUN_1090_147c(), iVar2 == 0));
      FUN_1951_017a(0x1a);
      uVar6 = 0x1951;
      iVar4 = FUN_1951_00ea();
      if (iVar4 == 0x1b) {
        local_8 = iVar1;
        break;
      }
    }
    *(undefined1 *)0x16df = 0;
    FUN_19c7_4f54(uVar6,*(undefined2 *)0xc861);
    local_8 = local_8 + 1;
  } while( true );
}


