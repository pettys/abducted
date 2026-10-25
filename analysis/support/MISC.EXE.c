/* Decompiled pseudocode; not original source or guaranteed compilable C. */

/* 1000:0010 entry */

void __cdecl16far entry(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  int in_CX;
  byte bVar6;
  undefined2 in_DX;
  byte bVar7;
  int in_BX;
  int iVar8;
  int unaff_BP;
  char *pcVar9;
  int unaff_SI;
  char *pcVar10;
  int unaff_DI;
  undefined2 unaff_DS;
  
  iVar8 = in_BX + 1;
  pcVar9 = (char *)(unaff_BP + 1);
  bVar7 = (byte)((uint)in_DX >> 8);
  DAT_1015_009a = in_DX;
  DAT_1015_009c = unaff_SI;
  DAT_1015_009e = in_BX;
  *(byte *)(iVar8 + unaff_SI) = *(byte *)(iVar8 + unaff_SI) & bVar7;
  bVar3 = *(byte *)(unaff_DI + -1);
  bVar4 = *(byte *)(iVar8 + unaff_SI);
  bVar6 = (byte)in_DX;
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + (bVar6 - 0x38);
  *(char *)(iVar8 + unaff_SI) = *(char *)(iVar8 + unaff_SI) + (bVar6 - 0x38);
  pbVar1 = (byte *)(iVar8 + unaff_SI);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  pcVar9[unaff_SI] = pcVar9[unaff_SI] + (char)iVar8;
  *(byte *)(iVar8 + unaff_SI) = *(byte *)(iVar8 + unaff_SI) | (bVar6 - 0x28) + CARRY1(bVar2,bVar6);
  pcVar10 = (char *)(unaff_SI + -1);
  pbVar1 = (byte *)(unaff_DI + -1) + iVar8;
  *pbVar1 = *pbVar1 + (char)(in_CX + -1);
  *pcVar10 = *pcVar10 + (char)iVar8;
  *pcVar9 = *pcVar9 + ((byte)((uint)(in_CX + -1) >> 8) ^ bVar3);
  pcVar10[iVar8] = pcVar10[iVar8] + -0x54;
  *(char *)(unaff_SI + -0x3300) =
       *(char *)(unaff_SI + -0x3300) + (char)((uint)(CONCAT11(bVar7 ^ bVar4,bVar6) + 1) >> 8);
  *(uint *)(pcVar9 + (int)pcVar10) = *(uint *)(pcVar9 + (int)pcVar10) & (uint)pcVar10;
  in(0xcb);
  pcVar5 = (code *)swi(0x16);
  (*pcVar5)();
  return;
}


