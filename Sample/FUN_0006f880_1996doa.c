
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0006f880(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined4 uVar11;
  int iVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [999808];
  undefined1 auVar5 [64];
  undefined1 auVar9 [64];
  
  auVar2._8_4_ = unaff_retaddr;
  auVar2._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar2._12_52_ = in_register_0000000c;
  iVar12 = *param_1;
  auVar3._24_40_ = in_register_0000000c._12_40_;
  auVar3._0_20_ = auVar2._0_20_;
  auVar3._20_4_ = param_1;
  uVar1 = ac & 0xfffffff8 | (uint)(iVar12 < 0) << 2 | (uint)(iVar12 == 0) << 1;
  ac = uVar1 | 0 < iVar12;
  auVar7._20_44_ = auVar3._20_44_;
  auVar7._0_16_ = auVar2._0_16_;
  auVar7._16_4_ = param_2;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    auVar5._12_52_ = auVar7._12_52_;
    auVar5._8_4_ = 0x6f898;
    auVar5._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
    auVar4._8_56_ = auVar5._8_56_;
    auVar4._4_4_ = auStackX_0;
    auVar4._0_4_ = fp;
    FUN_00008dc0(param_1,param_2,param_3,param_4);
    auStackX_0._12_52_ = auVar4._12_52_;
    auStackX_0._0_8_ = auVar4._0_8_;
    auStackX_0._8_4_ = 0x6f8a4;
    auVar6._8_56_ = auStackX_0._8_56_;
    auVar6._4_4_ = auStack_40;
    auVar6._0_4_ = auStackX_0;
    FUN_0006f8f0(param_1,param_2);
    fp = auStack_80;
    auStack_40._12_52_ = auVar6._12_52_;
    auStack_40._0_8_ = auVar6._0_8_;
    auStack_40._8_4_ = 0x6f8b0;
    auVar7._8_56_ = auStack_40._8_56_;
    auVar7._4_4_ = auStack_c0;
    auVar7._0_4_ = auStack_40;
    FUN_0006f9d0(param_1,param_2);
  }
  puVar14 = (undefined *)param_1[2];
  puVar13 = (&PTR_WORD_ARRAY_020c0000)[param_2 * 3];
  uVar1 = ac & 0xfffffff8 | (uint)((int)puVar14 < (int)puVar13) << 2 |
          (uint)(puVar14 == puVar13) << 1;
  ac = uVar1 | (int)puVar13 < (int)puVar14;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    uVar11 = 0x14;
    uVar1 = auVar7._4_4_ + 0x3f;
    auVar9._12_52_ = auVar7._12_52_;
    auVar9._0_8_ = auVar7._0_8_;
    auVar9._8_4_ = 0x6f8d4;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
    auVar8._8_56_ = auVar9._8_56_;
    auVar8._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
    Debug_SetTextPosition(0x14,0x14);
    auVar10._12_52_ = auVar8._12_52_;
    auVar10._0_8_ = auVar8._0_8_;
    auVar10._8_4_ = 0x6f8e0;
    *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar10;
    FUN_0008e740(s_SCROLL_GROUP_ERROR2___0006f860,uVar11,param_3,param_4,puVar13,puVar14,param_7,
                 param_8,param_9,param_10,param_11,param_12);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  fp = (undefined1 *)auVar7._0_4_;
  return;
}

