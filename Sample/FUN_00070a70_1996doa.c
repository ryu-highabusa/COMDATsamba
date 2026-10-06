
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00070a70(void)

{
  float10 fVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined1 in_register_00000018 [40];
  undefined1 auVar4 [64];
  undefined1 auVar3 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  uint uVar11;
  undefined4 in_g8;
  undefined4 in_g9;
  undefined4 in_g10;
  undefined4 in_g11;
  undefined1 auStackX_0 [16];
  undefined1 auStack_10 [48];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  
  uVar2 = ac;
  auVar3._4_4_ = auStackX_0;
  auVar3._0_4_ = unaff_pfp;
  auVar3._8_4_ = unaff_retaddr;
  auVar3._12_4_ = unaff_r3;
  auVar3._16_4_ = unaff_r4;
  auVar3._20_4_ = unaff_r5;
  auVar3._24_40_ = in_register_00000018;
  auVar4._8_56_ = auVar3._8_56_;
  auVar4._0_8_ = CONCAT44(auStack_10,unaff_pfp);
  *(undefined4 *)(fp + 0x40) = in_g8;
  *(undefined4 *)(fp + 0x44) = in_g9;
  *(undefined4 *)(fp + 0x48) = in_g10;
  *(undefined4 *)(fp + 0x4c) = in_g11;
  uVar11 = ac & 0xfffffff8 | (uint)(5 < (int)DAT_005b9770) << 2;
  ac = uVar11 | (uint)(DAT_005b9770 == 5) << 1 | (uint)((int)DAT_005b9770 < 5);
  if (((byte)ac & 1 | (byte)(uVar11 >> 2) & 1) != 1) {
    fp = unaff_pfp;
    return;
  }
  uVar11 = uVar2 & 0xfffffff8 | (uint)(6 < DAT_005b9770) << 2;
  ac = uVar11 | (uint)(DAT_005b9770 == 6) << 1 | (uint)(DAT_005b9770 < 6);
  if (((byte)(uVar11 >> 2) & 1) == 1) {
    fp = unaff_pfp;
    return;
  }
  auVar6._0_16_ = auVar4._0_16_;
  switch((&switchD_00070a98::switchdataD_00070a9c)[DAT_005b9770]) {
  case (undefined *)0x70ab8:
    fVar1 = (float10)(int)FLOAT_0054fd08;
    uVar2 = uVar2 & 0xfffffff8;
    if (fVar1 < (float10)0x4028000000000000) {
      if (fVar1 < (float10)0x4026000000000000) {
        DAT_005a7624 = 3;
        if ((float10)0x4024000000000000 <= fVar1) {
          DAT_005a7624 = 2;
        }
      }
      else {
        DAT_005a7624 = 1;
      }
    }
    else {
      DAT_005a7624 = 0;
    }
    DAT_005a6f22 = g14;
    DAT_005a6f24 = 0;
    DAT_005a6f28 = 0;
    DAT_005b9784 = g14;
    DAT_005b9786 = (undefined1)g14;
    uVar11 = uVar2 | (uint)(GameMode == MODE_LOAD) << 2;
    ac = uVar11 | MODE_FIGHT < GameMode;
    if (((((byte)ac & 1 | (byte)(uVar11 >> 2) & 1) != 1) &&
        (uVar2 = uVar2 | (uint)(StageNumber != STAGE_SCREENSPLASH) << 2,
        ac = uVar2 | (uint)(StageNumber == STAGE_SCREENSPLASH) << 1, ((byte)(uVar2 >> 2) & 1) == 1))
       || ((uVar2 = ac, uVar11 = ac & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2,
           ac = uVar11 | (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(GameMode < MODE_CHARSEL),
           ((byte)ac & 1 | (byte)(uVar11 >> 2) & 1) != 1 &&
           (uVar11 = uVar2 & 0xfffffff8 | (uint)(3 < DAT_005555eb) << 2,
           ac = uVar11 | (uint)(DAT_005555eb == 3) << 1 | (uint)(DAT_005555eb < 3),
           ((byte)ac & 1 | (byte)(uVar11 >> 2) & 1) != 1)))) {
      uVar11 = (uint)StageNumber;
      DAT_005555d0 = (&FLOAT_000cb6d0)[uVar11 * 3];
      DAT_005555d4 = (&FLOAT_000cb6d4)[uVar11 * 3];
      DAT_005555d8 = (&FLOAT_000cb6d8)[uVar11 * 3];
    }
    DAT_005b9778 = 0;
    DAT_005b977c = 0;
    DAT_005b9780 = 0;
    DAT_005b9790 = g14;
    DAT_005b97a8 = g14;
    DAT_005b97c0 = g14;
    DAT_005b97d8 = g14;
    DAT_005b97f0 = g14;
    DAT_005b9808 = g14;
    DAT_005b9820 = g14;
    DAT_005b9838 = g14;
    break;
  case (undefined *)0x70c2c:
    auVar5._0_20_ = auVar4._0_20_;
    auVar5._20_4_ = 0xffffffff;
    auVar5._24_40_ = in_register_00000018;
    DAT_005b9850 = 0xffff;
    DAT_005b9856 = g14;
    auVar6._20_44_ = auVar5._20_44_;
    auVar6._16_4_ = &DAT_005b9850;
    DAT_005b9852 = g14;
    auVar8._12_52_ = auVar6._12_52_;
    auVar8._8_4_ = 0x70c58;
    auVar8._0_8_ = auVar4._0_8_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar8;
    auVar7._8_56_ = auVar8._8_56_;
    auVar7._4_4_ = auStack_40;
    auVar7._0_4_ = fp;
    FUN_0005da50(&DAT_005b9850);
    DAT_005b9866 = 1;
    DAT_005b9860 = 0xffff;
    DAT_005b9862 = g14;
    auStack_40._12_52_ = auVar7._12_52_;
    auStack_40._0_8_ = auVar7._0_8_;
    auStack_40._8_4_ = 0x70c7c;
    auVar9._8_56_ = auStack_40._8_56_;
    auVar9._4_4_ = auStack_80;
    auVar9._0_4_ = auStack_40;
    FUN_0005da50(&DAT_005b9860);
    DAT_005b9876 = 2;
    DAT_005b9870 = 0xffff;
    DAT_005b9872 = g14;
    auStack_80._12_52_ = auVar9._12_52_;
    auStack_80._0_8_ = auVar9._0_8_;
    auStack_80._8_4_ = 0x70ca0;
    auVar10._8_56_ = auStack_80._8_56_;
    auVar10._4_4_ = auStack_c0;
    auVar10._0_4_ = auStack_80;
    FUN_0005da50(&DAT_005b9870);
    DAT_005b9886 = 3;
    DAT_005b9880 = 0xffff;
    DAT_005b9882 = g14;
    auStack_c0._12_52_ = auVar10._12_52_;
    auStack_c0._0_8_ = auVar10._0_8_;
    auStack_c0._8_4_ = 0x70cc4;
    auVar4._8_56_ = auStack_c0._8_56_;
    auVar4._4_4_ = 0;
    auVar4._0_4_ = auStack_c0;
    FUN_0005da50(&DAT_005b9880);
  case (undefined *)0x70cc4:
    break;
  case (undefined *)0x70ce0:
    _DAT_0054fb30 = DWORD_000cb610;
    _DAT_0054fb34 = FLOAT_000cb614;
    _DAT_0054fb38 = DWORD_000cb618;
    _DAT_0054fb3c = FLOAT_000cb61c;
    _DAT_0054faf0 = DWORD_000cb5d0;
    DAT_0054faf4 = FLOAT_000cb5d4;
    _DAT_0054faf8 = DWORD_000cb5d8;
    DAT_0054fafc = FLOAT_000cb5dc;
    _DAT_0054fb00 = DWORD_000cb5e0;
    _DAT_0054fb04 = FLOAT_000cb5e4;
    _DAT_0054fb08 = DWORD_000cb5e8;
    _DAT_0054fb0c = FLOAT_000cb5ec;
    _DAT_0054fb40 = DWORD_000cb620;
    _DAT_0054fb44 = FLOAT_000cb624;
    _DAT_0054fb48 = DWORD_000cb628;
    _DAT_0054fb4c = FLOAT_000cb62c;
    _DAT_0054fb10 = DWORD_000cb5f0;
    _DAT_0054fb14 = FLOAT_000cb5f4;
    _DAT_0054fb18 = DWORD_000cb5f8;
    _DAT_0054fb1c = FLOAT_000cb5fc;
    _DAT_0054fb50 = DWORD_000cb630;
    _DAT_0054fb54 = FLOAT_000cb634;
    _DAT_0054fb58 = DWORD_000cb638;
    _DAT_0054fb5c = FLOAT_000cb63c;
    _DAT_0054fb20 = DWORD_000cb600;
    _DAT_0054fb24 = FLOAT_000cb604;
    _DAT_0054fb28 = DWORD_000cb608;
    _DAT_0054fb2c = FLOAT_000cb60c;
    DAT_005b9770 = DAT_005b9770 + 1;
    _DAT_0054fb60 = DWORD_000cb640;
    _DAT_0054fb64 = FLOAT_000cb644;
    _DAT_0054fb68 = DWORD_000cb648;
    _DAT_0054fb6c = FLOAT_000cb64c;
    fp = unaff_pfp;
    return;
  case (undefined *)0x70d7c:
    _DAT_0054fbb0 = DWORD_000cb690;
    _DAT_0054fbb4 = FLOAT_000cb694;
    _DAT_0054fbb8 = DWORD_000cb698;
    _DAT_0054fbbc = FLOAT_000cb69c;
    _DAT_0054fb70 = DWORD_000cb650;
    _DAT_0054fb74 = FLOAT_000cb654;
    _DAT_0054fb78 = DWORD_000cb658;
    _DAT_0054fb7c = FLOAT_000cb65c;
    _DAT_0054fb80 = DWORD_000cb660;
    _DAT_0054fb84 = FLOAT_000cb664;
    _DAT_0054fb88 = DWORD_000cb668;
    _DAT_0054fb8c = FLOAT_000cb66c;
    _DAT_0054fbc0 = DWORD_000cb6a0;
    _DAT_0054fbc4 = FLOAT_000cb6a4;
    _DAT_0054fbc8 = DWORD_000cb6a8;
    _DAT_0054fbcc = FLOAT_000cb6ac;
    _DAT_0054fb90 = DWORD_000cb670;
    _DAT_0054fb94 = FLOAT_000cb674;
    _DAT_0054fb98 = DWORD_000cb678;
    _DAT_0054fb9c = FLOAT_000cb67c;
    _DAT_0054fbd0 = DWORD_000cb6b0;
    _DAT_0054fbd4 = FLOAT_000cb6b4;
    _DAT_0054fbd8 = DWORD_000cb6b8;
    _DAT_0054fbdc = FLOAT_000cb6bc;
    _DAT_0054fba0 = DWORD_000cb680;
    _DAT_0054fba4 = FLOAT_000cb684;
    _DAT_0054fba8 = DWORD_000cb688;
    _DAT_0054fbac = FLOAT_000cb68c;
    DAT_005b9770 = DAT_005b9770 + 1;
    _DAT_0054fbe0 = DWORD_000cb6c0;
    _DAT_0054fbe4 = FLOAT_000cb6c4;
    _DAT_0054fbe8 = DWORD_000cb6c8;
    _DAT_0054fbec = FLOAT_000cb6cc;
    fp = unaff_pfp;
    return;
  case (undefined *)0x70e18:
    fp = unaff_pfp;
    return;
  case (undefined *)0x70e20:
    fp = unaff_pfp;
    return;
  }
  DAT_005b9770 = DAT_005b9770 + 1;
  fp = auVar4._0_4_;
  return;
}

