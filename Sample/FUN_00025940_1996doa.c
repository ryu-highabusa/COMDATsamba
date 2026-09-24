
/* WARNING: Removing unreachable block (ram,0x0002596c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void Character_PrecomputeActionMotionMetadata(uint32_t character_id)

{
  uint uVar1;
  uint16_t anime_id;
  undefined1 auVar2 [20];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined1 in_register_00000014 [44];
  undefined1 auVar3 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  uint uVar11;
  byte bVar12;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar9 [64];
  undefined1 auVar4 [64];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._8_4_ = unaff_retaddr;
  auVar2._12_4_ = unaff_r3;
  auVar2._16_4_ = unaff_r4;
  auVar3._20_44_ = in_register_00000014;
  auVar3._0_20_ = auVar2;
  auVar4._32_32_ = in_register_00000014._12_32_;
  auVar4._0_28_ = auVar3._0_28_;
  auVar4._28_4_ = character_id;
  auVar5._28_36_ = auVar4._28_36_;
  auVar5._0_24_ = auVar3._0_24_;
  auVar5._24_4_ = g_character_act_record_tables[character_id & 0xff];
  auVar6._24_40_ = auVar5._24_40_;
  auVar6._20_4_ = 0;
  auVar6._0_20_ = auVar2;
  bVar12 = auVar5._24_4_[3];
  uVar1 = ac & 0xfffffff8;
  do {
    ac = uVar1;
    uVar11 = ac;
    uVar1 = ac & 0xfffffff8 | (uint)(1 < (byte)(bVar12 - 2)) << 2 |
            (uint)((byte)(bVar12 - 2) == 1) << 1;
    ac = uVar1 | bVar12 == 2;
    if ((((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1) ||
       (ac = uVar11 & 0xfffffff8 | (uint)(5 < bVar12) << 2 | (uint)(bVar12 == 5) << 1 |
             (uint)(bVar12 < 5), auVar10 = auVar6, ((byte)ac & 1 | 5 < bVar12) != 1)) {
      auVar7._20_44_ = auVar6._20_44_;
      auVar7._0_16_ = auVar6._0_16_;
      auVar7._16_4_ = auVar6._20_4_ & 0xff;
      anime_id = *(uint16_t *)(auVar5._24_4_ + auVar7._16_4_ * 8);
      uVar1 = auVar6._4_4_ + 0x3fU & 0xffffffc0;
      auVar9._12_52_ = auVar7._12_52_;
      auVar9._0_8_ = auVar6._0_8_;
      auVar9._8_4_ = 0x25998;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar9;
      auVar8._8_56_ = auVar9._8_56_;
      auVar8._4_4_ = uVar1 + 0x40;
      auVar8._0_4_ = fp;
      Motion_Initialize(anime_id);
      auVar10._20_44_ = auVar8._20_44_;
      auVar10._0_16_ = auVar8._0_16_;
      auVar10._16_4_ = (character_id & 0xff) * 0xc00 + auVar7._16_4_ * 0xc;
      *(undefined2 *)(&g_action_motion_metadata + auVar10._16_4_) = DAT_005555ee;
      *(undefined2 *)(&DAT_00557f92 + auVar10._16_4_) = DAT_005555f0;
      *(undefined2 *)(&DAT_00557f94 + auVar10._16_4_) = DAT_005555f2;
      *(undefined2 *)(&DAT_00557f96 + auVar10._16_4_) = DAT_005555f4;
      *(undefined4 *)(&DAT_00557f98 + auVar10._16_4_) = DAT_005555f8;
      fp = uVar1;
    }
    uVar11 = auVar6._20_4_ + 1;
    auVar6._24_40_ = auVar10._24_40_;
    auVar6._0_20_ = auVar10._0_20_;
    auVar6._20_4_ = uVar11;
    uVar11 = uVar11 & 0xff;
    bVar12 = auVar5._24_4_[uVar11 * 8 + 3];
    uVar1 = ac & 0xfffffff8 | (uint)(uVar11 == 0x9a) << 1;
  } while ((((byte)(uVar1 >> 1) & 1 | uVar11 < 0x9a) == 1) ||
          (ac = ac & 0xfffffff8 | (uint)(6 < bVar12) << 2 | (uint)(bVar12 == 6) << 1 |
                (uint)(bVar12 < 6), uVar1 = ac, ((byte)ac & 1 | 6 < bVar12) == 1));
  fp = auVar10._0_4_;
  return;
}

