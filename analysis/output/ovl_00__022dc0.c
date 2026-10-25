
void __cdecl16far ovl_00_entry_22dc_0000(char param_1,char param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int local_c;
  
  iVar1 = *(int *)(((((undefined2 *)&DAT_3000_a3b6)[DAT_3000_aaa2 * 0x1e] + 9) / 10) * 2 + 0x4ac6);
  uVar2 = FUN_1ed2_007e(DAT_3000_a398);
  uVar3 = FUN_1ed2_006e(DAT_3000_a398);
  iVar4 = (*(int *)&DAT_2a22_ccbb * 0x40) / 2;
  iVar5 = (*(int *)&DAT_2a22_ccb9 * 0x40) / 2;
  local_c = 0;
  do {
    if (DAT_3000_a38e <= local_c) {
      return;
    }
    if ((local_c % 2 != 0) || (param_1 != '\0')) {
      if (iVar1 != 0) {
        iVar6 = local_c * 2;
        iVar11 = ((iVar1 << (*(byte *)(iVar6 + -0x431e) & 0x1f)) * DAT_2a22_fad6) / 0xc + 1;
        *(int *)(iVar6 + -0x43d2) = *(int *)(iVar6 + -0x43d2) + *(int *)(iVar6 + -0x43d2) / iVar11;
        *(int *)(iVar6 + -0x4396) = *(int *)(iVar6 + -0x4396) + *(int *)(iVar6 + -0x4396) / iVar11;
        iVar11 = local_c * 2;
        if ((((iVar5 < *(int *)(iVar11 + -0x43d2)) ||
             (-*(int *)(iVar11 + -0x43d2) != iVar5 && *(int *)(iVar11 + -0x43d2) <= -iVar5)) ||
            (iVar4 < *(int *)(iVar11 + -0x4396))) ||
           (-*(int *)(iVar11 + -0x4396) != iVar4 && *(int *)(iVar11 + -0x4396) <= -iVar4)) {
          uVar8 = FUN_11e1_1488(DAT_2a22_bd66 + 1 >> 1);
          *(undefined2 *)(local_c * 2 + -0x43d2) = uVar8;
          uVar8 = FUN_11e1_1488(DAT_2a22_bd68 + 1 >> 1);
          *(undefined2 *)(local_c * 2 + -0x4396) = uVar8;
        }
      }
      iVar11 = local_c * 2;
      *(int *)(iVar11 + -0x4396) = *(int *)(iVar11 + -0x4396) + DAT_3000_a396;
      *(int *)(iVar11 + -0x43d2) = *(int *)(iVar11 + -0x43d2) - DAT_3000_a394;
      if (DAT_3000_a398 != 0) {
        uVar8 = *(undefined2 *)(iVar11 + -0x4396);
        iVar6 = FUN_1ed2_0008(uVar8,uVar3);
        iVar7 = FUN_1ed2_0008(*(undefined2 *)(iVar11 + -0x43d2),uVar2);
        *(int *)(iVar11 + -0x4396) = iVar7 + iVar6;
        iVar11 = FUN_1ed2_0008(*(undefined2 *)(local_c * 2 + -0x43d2),uVar3);
        iVar6 = FUN_1ed2_0008(uVar8,uVar2);
        *(int *)(local_c * 2 + -0x43d2) = iVar11 - iVar6;
      }
      piVar12 = (int *)(local_c * 2 + -0x4396);
      if (iVar4 < *piVar12) {
        iVar11 = *(int *)&DAT_2a22_ccbb;
LAB_ovl_00__022e6a:
        *piVar12 = *piVar12 + iVar11 * -0x40;
      }
      else {
        piVar12 = (int *)(local_c * 2 + -0x4396);
        if (-*piVar12 == iVar4 || -iVar4 < *piVar12) {
          piVar12 = (int *)(local_c * 2 + -0x43d2);
          if (iVar5 < *piVar12) {
            iVar11 = *(int *)&DAT_2a22_ccb9;
            goto LAB_ovl_00__022e6a;
          }
          piVar12 = (int *)(local_c * 2 + -0x43d2);
          if (-*piVar12 == iVar5 || -iVar5 < *piVar12) goto LAB_ovl_00__022e92;
          iVar11 = *(int *)&DAT_2a22_ccb9;
        }
        else {
          iVar11 = *(int *)&DAT_2a22_ccbb;
        }
        *piVar12 = *piVar12 + iVar11 * 0x40;
      }
    }
LAB_ovl_00__022e92:
    iVar11 = local_c * 2;
    if (param_2 == '\0') {
      uVar9 = *(uint *)(local_c * 2 + -0x4396);
      uVar10 = (int)uVar9 >> 0xf;
      iVar6 = ((int)((uVar9 ^ uVar10) - uVar10) >> 6 ^ uVar10) - uVar10;
      uVar9 = *(uint *)(local_c * 2 + -0x43d2);
      uVar10 = (int)uVar9 >> 0xf;
      iVar7 = ((int)((uVar9 ^ uVar10) - uVar10) >> 6 ^ uVar10) - uVar10;
      uVar8 = DAT_2a22_bd72;
    }
    else {
      uVar9 = (int)*(uint *)(iVar11 + -0x4396) >> 0xf;
      iVar6 = ((int)((*(uint *)(iVar11 + -0x4396) ^ uVar9) - uVar9) >> 6 ^ uVar9) - uVar9;
      uVar9 = (int)*(uint *)(iVar11 + -0x43d2) >> 0xf;
      iVar7 = ((int)((*(uint *)(iVar11 + -0x43d2) ^ uVar9) - uVar9) >> 6 ^ uVar9) - uVar9;
      uVar8 = DAT_2a22_48d6;
    }
    FUN_1eea_0b9f(uVar8,iVar7 + DAT_3000_a390,iVar6 + DAT_3000_a392,
                  *(undefined2 *)(iVar11 + -0x435a));
    local_c = local_c + 1;
  } while( true );
}

