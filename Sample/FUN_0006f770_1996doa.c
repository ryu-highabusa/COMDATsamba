
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0006f770(void)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  
  auVar4._8_4_ = unaff_retaddr;
  auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar4._12_52_ = in_register_0000000c;
  auVar5._0_16_ = auVar4._0_16_;
  auVar5._16_4_ = &DAT_005af6b0;
  auVar5._20_4_ = &DAT_005af6b0;
  uVar3 = ac & 0xfffffff8 | (uint)(DAT_005af6b0 < 0) << 2;
  uVar1 = uVar3 | (uint)(DAT_005af6b0 == 0) << 1;
  ac = uVar1 | 0 < DAT_005af6b0;
  auVar5._28_36_ = in_register_0000000c._16_36_;
  auVar5._24_4_ = &DAT_005af6d4;
  if (((byte)(uVar1 >> 1) & 1 | (byte)(uVar3 >> 2) & 1) != 1) {
    auVar6._12_52_ = auVar5._12_52_;
    auVar6._8_4_ = 0x6f798;
    auVar6._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
    auVar5._8_56_ = auVar6._8_56_;
    auVar5._4_4_ = auStack_40;
    auVar5._0_4_ = fp;
    FUN_00008eb0(&DAT_005af6b0);
    fp = (undefined1 *)register0x00000004;
  }
  uVar1 = ac & 0xfffffff8 | (uint)(0 < DAT_005af6bc) << 2 | (uint)(DAT_005af6bc == 0) << 1;
  ac = uVar1 | DAT_005af6bc < 0;
  auVar7._20_44_ = auVar5._20_44_;
  auVar7._0_16_ = auVar5._0_16_;
  auVar7._16_4_ = &DAT_005af6bc;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    puVar2 = (undefined1 *)(auVar5._4_4_ + 0x3fU & 0xffffffc0);
    auVar8._12_52_ = auVar7._12_52_;
    auVar8._0_8_ = auVar5._0_8_;
    auVar8._8_4_ = 0x6f7b4;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
    auVar7._8_56_ = auVar8._8_56_;
    auVar7._4_4_ = puVar2 + 0x40;
    auVar7._0_4_ = fp;
    FUN_00008eb0(&DAT_005af6bc);
    fp = puVar2;
  }
  uVar1 = ac & 0xfffffff8 | (uint)(0 < DAT_005af6c8) << 2 | (uint)(DAT_005af6c8 == 0) << 1;
  ac = uVar1 | DAT_005af6c8 < 0;
  auVar9._20_44_ = auVar7._20_44_;
  auVar9._0_16_ = auVar7._0_16_;
  auVar9._16_4_ = &DAT_005af6c8;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    auVar10._12_52_ = auVar9._12_52_;
    auVar10._0_8_ = auVar7._0_8_;
    auVar10._8_4_ = 0x6f7d0;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
    auVar9._8_56_ = auVar10._8_56_;
    auVar9._4_4_ = 0;
    auVar9._0_4_ = fp;
    FUN_00008eb0(&DAT_005af6c8);
    fp = (undefined1 *)(auVar7._4_4_ + 0x3fU & 0xffffffc0);
  }
  uVar1 = ac & 0xfffffff8 | (uint)(0 < DAT_005af6d4) << 2 | (uint)(DAT_005af6d4 == 0) << 1;
  ac = uVar1 | DAT_005af6d4 < 0;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    FUN_00008eb0(&DAT_005af6d4);
    return;
  }
  fp = (undefined1 *)auVar9._0_4_;
  return;
}

