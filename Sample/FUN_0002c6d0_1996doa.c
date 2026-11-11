
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

bool FUN_0002c6d0(uint param_1)

{
  undefined4 unaff_pfp;
  undefined1 auVar1 [20];
  undefined1 in_register_00000008 [56];
  undefined1 auVar2 [64];
  undefined1 auVar4 [64];
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar3 [64];
  uint uVar5;
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._8_56_ = in_register_00000008;
  uVar8 = 0;
  switch(pwrk_rival[0x2d]) {
  case 2:
  case 3:
  case 5:
    iVar7 = 0;
    do {
      if ((byte)pwrk_rival[0x2a] <= (byte)(&DAT_005646f0)[iVar7 + (uint)plyr * 0x10] &&
          (byte)(&DAT_005646f0)[iVar7 + (uint)plyr * 0x10] <= (byte)pwrk_rival[0x2a]) {
        uVar8 = uVar8 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x10);
    break;
  case 4:
    uVar8 = (uint)(byte)(&DAT_00564712)[plyr];
    break;
  case 6:
    uVar8 = (uint)(byte)(&DAT_00564714)[plyr];
  }
  if (0xf < (int)uVar8) {
    uVar8 = 0xf;
  }
  auVar3._20_44_ = in_register_00000008._12_44_;
  auVar1._0_16_ = auVar2._0_16_;
  auVar1._16_4_ = (param_1 & 0xffff) - (uint)(&WORD_000a1010)[uVar8] * (uint)DAT_00564734;
  uVar8 = ac & 0xfffffff8 | (uint)(0 < auVar1._16_4_) << 2 | (uint)(auVar1._16_4_ == 0) << 1;
  ac = uVar8 | auVar1._16_4_ < 0;
  if (((byte)(uVar8 >> 1) & 1 | 0 < auVar1._16_4_) != 1) {
    auVar1._16_4_ = 0;
  }
  auVar3._0_20_ = auVar1;
  uVar5 = auVar1._16_4_;
  auVar4._12_52_ = auVar3._12_52_;
  auVar4._0_8_ = auVar1._0_8_;
  auVar4._8_4_ = 0x2c79c;
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar4;
  uVar6 = FUN_0008e6f0();
  uVar6 = uVar6 & 0xffff;
  uVar8 = ac & 0xfffffff8 | (uint)((int)uVar5 < (int)uVar6) << 2;
  ac = uVar8 | (uint)(uVar5 == uVar6) << 1 | (uint)((int)uVar6 < (int)uVar5);
  return ((byte)(uVar8 >> 2) & 1) != 1;
}

