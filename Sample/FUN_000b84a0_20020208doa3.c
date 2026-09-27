
uint __cdecl FUN_000b84a0(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_1;
  
  uVar5 = param_1 ^ 1;
  iVar6 = param_1 * 0x68;
  iVar4 = uVar5 * 0x68;
  bVar1 = (&ACT_STATE_P1)[iVar6];
  local_1 = 0;
  uVar3 = param_1;
  if ((((((bVar1 != 0xa) && (bVar1 != 0xb)) || ((&BYTE_0059cfa3)[iVar6] != 0x1)) &&
       ((bVar1 != 0xc && (bVar1 != 0xf)))) &&
      (((&DAT_009b2844)[param_1 * 2] != 1 && ((&DAT_009b2730)[param_1] == 0)))) &&
     ((((*(char *)((int)&DAT_009b2750 + param_1) != 1 || ((&DAT_009b26bc)[param_1] != 0x1)) &&
       ((bVar1 != 0xd ||
        (((&ACT_CODE_P1)[param_1 * 0x34] < 0x46 || (0x6d < (&ACT_CODE_P1)[param_1 * 0x34])))))) &&
      ((bVar1 != 0x10 || (((&DAT_009b289c)[param_1] != 0x1 || ((&BYTE_0059cf91)[iVar6] != 0x0)))))))
     ) {
    if ((bVar1 == 0x3) && (((&DAT_009b289c)[param_1] == 0x1 && ((&BYTE_0059cf91)[iVar6] == 0x0)))) {
LAB_000b85d7:
      (&DAT_005a28e4)[param_1] = 0;
      return param_1 & 0xffffff00;
    }
    if (((bVar1 != 0x1) && (bVar1 != 0x2)) ||
       (((&BYTE_0059cf9a)[iVar6] != 0x1 || ((&WORD_0059cfa4)[uVar5 * 0x34] != 3)))) {
      if (bVar1 == 0xd) {
        uVar2 = (&ACT_CODE_P1)[param_1 * 0x34];
        uVar3 = CONCAT22((short)(param_1 >> 0x10),uVar2);
        if ((0xb6 < uVar2) && (uVar2 < 0xc1)) goto LAB_000b863b;
      }
      uVar3 = FUN_000b1ef0();
      if (((char)uVar3 != 1) && (ULONG_009b2718 != 1)) {
        if (((((&CHARACTER_P1)[iVar6] == 0x7) && (bVar1 == 0xd)) &&
            ((&ACT_CODE_P1)[param_1 * 0x34] == 0x107)) && ((&WORD_0059cfa4)[uVar5 * 0x34] == 2))
        goto LAB_000b85d7;
        if (((&CHARACTER_P1)[iVar4] == 0x11) && ((&ACT_STATE_P1)[iVar4] == 0x3)) {
          uVar2 = (&ACT_CODE_P1)[uVar5 * 0x34];
          uVar3 = CONCAT22((short)(uVar3 >> 0x10),uVar2);
          if ((((0xf6 < uVar2) && (uVar2 < 0x101)) || ((0x11f < uVar2 && (uVar2 < 0x12a)))) &&
             (bVar1 == 0x9)) {
            (&DAT_005a28e4)[param_1] = 0;
            return uVar3 & 0xffffff00;
          }
        }
        if (((&blow_hit_P1__)[iVar4] != 1) || ((&Combo_Counter_P1)[iVar4] < 30)) {
          local_1 = 1;
        }
      }
    }
  }
LAB_000b863b:
  return CONCAT31((int3)(uVar3 >> 8),local_1);
}

