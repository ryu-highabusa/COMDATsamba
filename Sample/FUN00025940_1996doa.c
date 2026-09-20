
/* WARNING: Removing unreachable block (ram,0x0002596c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void Character_PrecomputeActionMotionMetadata(uint32_t character_id)

{
  uint uVar1;
  uint16_t anime_id;
  undefined1 auVar2 [20];
  uint uVar3;
  undefined4 unaff_pfp;
  undefined4 uVar4;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined1 in_register_00000014 [44];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  uint uVar12;
  byte bVar13;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar10 [64];
  undefined1 auVar6 [64];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._8_4_ = unaff_retaddr;
  auVar2._12_4_ = unaff_r3;
  auVar2._16_4_ = unaff_r4;
  auVar5._20_44_ = in_register_00000014;
  auVar5._0_20_ = auVar2;
  auVar6._32_32_ = in_register_00000014._12_32_;
  auVar6._0_28_ = auVar5._0_28_;
  auVar6._28_4_ = character_id;
  auVar7._28_36_ = auVar6._28_36_;
  auVar7._0_24_ = auVar5._0_24_;
  auVar7._24_4_ = (&g_character_act_record_table_candidate)[character_id & 0xff];
  auVar11._24_40_ = auVar7._24_40_;
  auVar11._20_4_ = 0;
  auVar11._0_20_ = auVar2;
  bVar13 = auVar7._24_4_[3];
  uVar1 = ac & 0xfffffff8;
  do {
    do {
      ac = uVar1;
      uVar3 = ac;
      uVar12 = auVar11._20_4_;
      uVar1 = ac & 0xfffffff8 | (uint)(1 < (byte)(bVar13 - 2)) << 2 |
              (uint)((byte)(bVar13 - 2) == 1) << 1;
      ac = uVar1 | bVar13 == 2;
      if ((((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1) ||
         (ac = uVar3 & 0xfffffff8 | (uint)(5 < bVar13) << 2 | (uint)(bVar13 == 5) << 1 |
               (uint)(bVar13 < 5), ((byte)ac & 1 | 5 < bVar13) != 1)) {
        auVar8._20_44_ = auVar11._20_44_;
        auVar8._0_16_ = auVar11._0_16_;
        auVar8._16_4_ = uVar12 & 0xff;
        anime_id = *(uint16_t *)(auVar7._24_4_ + auVar8._16_4_ * 8);
        uVar1 = auVar11._4_4_ + 0x3fU & 0xffffffc0;
        auVar10._12_52_ = auVar8._12_52_;
        auVar10._0_8_ = auVar11._0_8_;
        auVar10._8_4_ = 0x25998;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar10;
        auVar9._8_56_ = auVar10._8_56_;
        auVar9._4_4_ = uVar1 + 0x40;
        auVar9._0_4_ = fp;
        Motion_Initialize(anime_id);
        auVar11._20_44_ = auVar9._20_44_;
        auVar11._0_16_ = auVar9._0_16_;
        auVar11._16_4_ = (character_id & 0xff) * 0xc00 + auVar8._16_4_ * 0xc;
        *(undefined2 *)(&DAT_00557f90 + auVar11._16_4_) = DAT_005555ee;
        *(undefined2 *)(&DAT_00557f92 + auVar11._16_4_) = DAT_005555f0;
        *(undefined2 *)(&DAT_00557f94 + auVar11._16_4_) = DAT_005555f2;
        *(undefined2 *)(&DAT_00557f96 + auVar11._16_4_) = DAT_005555f4;
        *(undefined4 *)(&DAT_00557f98 + auVar11._16_4_) = DAT_005555f8;
        fp = uVar1;
      }
      uVar4 = auVar11._0_4_;
      uVar12 = uVar12 + 1;
      auVar11._20_4_ = uVar12;
      uVar12 = uVar12 & 0xff;
      bVar13 = auVar7._24_4_[uVar12 * 8 + 3];
      uVar1 = ac & 0xfffffff8 | (uint)(uVar12 == 0x9a) << 1;
    } while (((byte)(uVar1 >> 1) & 1 | uVar12 < 0x9a) == 1);
    ac = ac & 0xfffffff8 | (uint)(6 < bVar13) << 2 | (uint)(bVar13 == 6) << 1 | (uint)(bVar13 < 6);
    uVar1 = ac;
  } while (((byte)ac & 1 | 6 < bVar13) != 1);
  fp = uVar4;
  return;
}

