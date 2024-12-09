
void FUN_822f51c0(void)

{
  byte bVar1;
  byte bVar2;
  dword dVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  ushort uVar11;
  ushort *puVar10;
  uint uVar12;
  
  bVar7 = DAT_83022eda;
  bVar6 = DAT_82fb8d67;
  uVar12 = (uint)DAT_82fb8d67;
  uVar5 = (uint)DAT_82fb8d67;
  iVar8 = 0;
  (&DAT_82fb9014)[uVar5] = 0xffffffff;
  (&DAT_82fb8ff8)[bVar6] = 0;
  bVar4 = false;
  (&FreeStepFlag_P1_82fb8fbc)[bVar6] = 1;
  (&DAT_82fb8e70)[uVar5] = 0;
  (&ButtonInputFreeStep_P1_82fb8e90)[bVar6] = 0;
  bVar1 = (&DAT_830edef9)[(uint)bVar6 * 0x250];
  bVar2 = (&LeadingFoot_P1_830201c6)[(uint)bVar6 * 0x9c];
  uVar11 = *(ushort *)(PlayerDataStartP2_82fb8ec0 + 0x34);
  uVar9 = (uint)uVar11;
  if ((uVar9 < 0x1d) || (0x24 < uVar9)) {
    if (uVar11 == 0x32) {
      iVar8 = 2;
    }
    else if (uVar11 == 0x33) {
      iVar8 = 3;
    }
    bVar4 = true;
  }
  else {
    iVar8 = uVar9 - 0x1d;
  }
  uVar11 = (&Button_NumpadNotationHex_82e2dcf4)[iVar8];
  dVar3 = (&Button_NumpadNotationDirection_82e2dcd4)[iVar8];
  if ((&Button_InvertInputsFlagP1_82fb8ffc)[bVar6] == 1) {
    uVar11 = (ushort)(((ulonglong)uVar11 << 0x20) >> 0x21) & 0x40 | (uVar11 & 0x40) << 1 |
             uVar11 & 0xff3f;
  }
  (&ButtonInputFreeStep_P1_82fb8e90)[bVar6] = uVar11;
  if (((uint)(bVar1 ^ bVar7) ^ (int)(char)bVar2) == (uint)bVar6) {
    DAT_82fb902c = (&WORD_82e2da8c)[dVar3];
  }
  else {
    DAT_82fb902c = (&WORD_82e2dc98)[dVar3];
  }
  if (DAT_82fb902c == 0) {
    DAT_82fb902c = 0xffff;
    (&FreeStepFlag_P1_82fb8fbc)[bVar6] = 0;
  }
  else if (bVar4) {
    if (DAT_82fb902c == 0x1f) {
      DAT_82fb902c = 0x32;
    }
    else if (DAT_82fb902c == 0x20) {
      DAT_82fb902c = 0x33;
    }
  }
  (&DAT_82fb9014)[uVar5] = dVar3;
  iVar8 = (char)(&DAT_82fb8fd0)[bVar6] + -1;
  if (-1 < iVar8) {
    puVar10 = &DAT_82fb8ea0 + uVar12 * 4 + iVar8;
    do {
      uVar11 = *puVar10;
      if ((((0x1c < uVar11) && (uVar11 < 0x25)) || (uVar11 == 0x32)) || (uVar11 == 0x33)) {
        *puVar10 = 0xffff;
      }
      iVar8 = iVar8 + -1;
      puVar10 = puVar10 + -1;
    } while (-1 < iVar8);
  }
  return;
}

