
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0008e740(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._8_56_ = in_register_00000008;
  auVar3._0_20_ = auVar2._0_20_;
  auVar3._20_4_ = param_9;
  auVar3._24_4_ = param_10;
  auVar3._28_4_ = param_11;
  auVar3._36_28_ = in_register_00000008._28_28_;
  auVar3._32_4_ = param_12;
  auVar4._8_56_ = auVar3._8_56_;
  auVar4._0_8_ = CONCAT44(auStack_40,unaff_pfp);
  g13 = g14;
  uVar1 = ac & 0xfffffff8 | (uint)((int)g14 < 0) << 2;
  ac = uVar1 | (uint)(g14 == (undefined4 *)0x0) << 1 | (uint)(0 < (int)g14);
  g14 = (undefined4 *)0x0;
  if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
    g13 = (undefined4 *)(fp + 0x40);
  }
  *g13 = param_1;
  g13[1] = param_2;
  g13[2] = param_3;
  g13[3] = param_4;
  g13[4] = param_5;
  g13[5] = param_6;
  g13[6] = param_7;
  g13[7] = param_8;
  g13[8] = param_9;
  g13[9] = param_10;
  g13[10] = param_11;
  g13[0xb] = param_12;
  auVar5._20_44_ = auVar3._20_44_;
  auVar5._0_16_ = auVar4._0_16_;
  auVar5._16_4_ = 4;
  *(undefined4 *)(fp + 0x74) = 4;
  *(undefined4 **)(fp + 0x70) = g13;
  auVar6._12_52_ = auVar5._12_52_;
  auVar6._8_4_ = 0x8e788;
  auVar6._0_8_ = auVar4._0_8_;
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar6;
  FUN_0008e7e0(param_1,fp + 0x70);
  return;
}

