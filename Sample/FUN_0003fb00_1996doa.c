
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0003fb00(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined4 unaff_pfp;
  undefined1 auVar3 [20];
  undefined4 unaff_retaddr;
  int iVar25;
  undefined1 in_register_0000000c [52];
  undefined1 auVar4 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  undefined1 auStackX_0 [16];
  undefined1 auStack_10 [48];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar5 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar16 [64];
  
  uVar26 = ac;
  auVar4._4_4_ = auStackX_0;
  auVar4._0_4_ = unaff_pfp;
  auVar4._8_4_ = unaff_retaddr;
  auVar4._12_52_ = in_register_0000000c;
  auVar5._8_56_ = auVar4._8_56_;
  auVar5._0_8_ = CONCAT44(auStack_10,unaff_pfp);
  auVar6._48_16_ = in_register_0000000c._36_16_;
  auVar6._0_44_ = auVar5._0_44_;
  auVar6._44_4_ = param_4;
  uVar27 = ac & 0xfffffff8 | (uint)(0 < param_4) << 2;
  ac = uVar27 | param_4 < 0;
  auVar7._32_32_ = auVar6._32_32_;
  auVar7._0_28_ = auVar5._0_28_;
  auVar7._28_4_ = param_1;
  auVar8._28_36_ = auVar7._28_36_;
  auVar8._0_24_ = auVar5._0_24_;
  auVar8._24_4_ = param_2;
  auVar9._20_44_ = auVar8._20_44_;
  auVar9._0_16_ = auVar5._0_16_;
  auVar9._16_4_ = param_3;
  auVar10._44_20_ = auVar6._44_20_;
  auVar10._0_40_ = auVar9._0_40_;
  auVar10._40_4_ = *(int *)(param_1 + 0x10);
  auVar11._40_24_ = auVar10._40_24_;
  auVar11._0_36_ = auVar9._0_36_;
  auVar11._36_4_ = param_5;
  if (((byte)ac & 1 | (byte)(uVar27 >> 2) & 1) != 1) {
    uVar27 = (uint)*(byte *)(param_1 + 5);
    ac = uVar26 & 0xfffffff8 | (uint)(0xff < uVar27);
    if (((byte)ac & 1 | uVar27 < 0xff) == 1) {
      iVar28 = param_5 * 0x2360 + uVar27 * 0x46c;
      *(undefined *)(param_1 + 9) = (&DAT_00566140)[iVar28 + 9];
      *(undefined *)(param_1 + 10) = (&DAT_00566140)[iVar28 + 10];
      *(undefined *)(param_1 + 0xb) = (&DAT_00566140)[iVar28 + 0xb];
    }
    else {
      iVar28 = *(int *)(param_1 + 0x4c);
      g13 = (undefined1 *)0xffff;
      uVar27 = uVar26 & 0xfffffff8 | (uint)(iVar28 < 0xffff) << 2 | (uint)(iVar28 == 0xffff) << 1;
      ac = uVar27 | 0xffff < iVar28;
      if (((byte)(uVar27 >> 1) & 1) != 1) {
        auVar12._12_52_ = auVar11._12_52_;
        auVar12._8_4_ = 0x3fb4c;
        auVar12._0_8_ = auVar5._0_8_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
        auVar11._8_56_ = auVar12._8_56_;
        auVar11._4_4_ = auStack_80;
        auVar11._0_4_ = fp;
        FUN_000407a0(param_1,auVar10._40_4_,param_5);
        fp = auStack_40;
      }
      uVar27 = auVar11._4_4_ + 0x3f;
      auVar14._12_52_ = auVar11._12_52_;
      auVar14._0_8_ = auVar11._0_8_;
      auVar14._8_4_ = 0x3fb5c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
      auVar13._8_56_ = auVar14._8_56_;
      auVar13._0_8_ = CONCAT44(uVar27,fp) & 0xffffffc0ffffffff;
      FUN_00040010(param_1,param_5,auVar10._40_4_);
      fp = (undefined1 *)((uVar27 & 0xffffffc0) + 0x40);
      auVar15._12_52_ = auVar13._12_52_;
      auVar15._0_8_ = auVar13._0_8_;
      auVar15._8_4_ = 0x3fb6c;
      *(undefined1 (*) [64])(uVar27 & 0xffffffc0) = auVar15;
      auVar11._8_56_ = auVar15._8_56_;
      auVar11._0_8_ = CONCAT44((uVar27 & 0xffffffc0) + 0x80,uVar27) & 0xffffffffffffffc0;
      FUN_00040160(param_1,param_5,auVar10._40_4_);
    }
    uVar27 = ac & 0xfffffff8 | (uint)(param_3 < 0) << 2;
    ac = uVar27 | 0 < param_3;
    *(byte *)(param_1 + 7) = (&DAT_005657e0)[param_5 * 4] - *(char *)(param_1 + 3) & 7;
    if (((byte)ac & 1 | (byte)(uVar27 >> 2) & 1) != 1) {
      *(uint *)(&DAT_005657e0 + param_5 * 4) = *(uint *)(&DAT_005657e0 + param_5 * 4) + 1 & 7;
    }
  }
  auVar16._20_44_ = auVar11._20_44_;
  auVar3._0_16_ = auVar11._0_16_;
  auVar3._16_4_ = 1;
  auVar16._0_20_ = auVar3;
  auVar17._52_12_ = auVar11._52_12_;
  auVar17._0_48_ = auVar16._0_48_;
  auVar17._48_4_ = 0xff;
  puVar1 = (uint *)(fp + 0x40);
  auVar18._24_40_ = auVar17._24_40_;
  auVar18._20_4_ = puVar1;
  auVar18._0_20_ = auVar3;
  g13 = &LAB_00002360;
  auVar19._56_8_ = auVar11._56_8_;
  auVar19._0_52_ = auVar18._0_52_;
  auVar19._52_4_ = param_5 * 0x2360;
  auVar20._36_28_ = auVar19._36_28_;
  auVar20._0_32_ = auVar18._0_32_;
  auVar20._32_4_ = 4;
  puVar2 = fp;
  do {
    fp = puVar2;
    iVar25 = auVar20._32_4_;
    iVar28 = auVar20._16_4_;
    if (param_4 == 0) {
      uVar27 = (uint)*(byte *)(param_1 + 5);
      ac = ac & 0xfffffff8 | (uint)(uVar27 < 0xff) << 2 | (uint)(uVar27 == 0xff) << 1 |
           (uint)(0xff < uVar27);
      if (((byte)ac & 1 | uVar27 < 0xff) == 1) {
        g13 = (undefined1 *)0x46c;
        *(undefined4 *)(fp + 0x40) =
             *(undefined4 *)
              (&DAT_005661d0 +
              iVar25 + ((byte)(&DAT_005657e0)[param_5 * 4] - 4 & 7) * 8 +
              auVar19._52_4_ + uVar27 * 0x46c);
      }
      else {
        puVar2 = (undefined1 *)(auVar20._4_4_ + 0x3fU & 0xffffffc0);
        auVar21._12_52_ = auVar20._12_52_;
        auVar21._0_8_ = auVar20._0_8_;
        auVar21._8_4_ = 0x3fc14;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar21;
        auVar20._8_56_ = auVar21._8_56_;
        auVar20._4_4_ = puVar2 + 0x40;
        auVar20._0_4_ = fp;
        uVar27 = FUN_000405f0(param_1,param_2,iVar28);
        *(uint *)(puVar2 + 0x40) = uVar27;
        fp = puVar2;
      }
    }
    else {
      uVar27 = ac & 0xfffffff8 | (uint)(iVar28 < 1) << 2;
      ac = uVar27 | 1 < iVar28;
      *(undefined4 *)(fp + 0x40) =
           *(undefined4 *)(param_2 + -0x78 + iVar25 + (uint)*(byte *)(param_1 + 7) * 8);
      if (((byte)ac & 1 | (byte)(uVar27 >> 2) & 1) != 1) {
        *puVar1 = *puVar1 - ((int)*puVar1 >> (uint)*(byte *)(param_1 + 4));
      }
    }
    uVar29 = *puVar1;
    *(uint *)(param_2 + 4 + iVar25 + *(int *)(&DAT_005657e0 + param_5 * 4) * 8) = uVar29;
    *(uint *)(param_2 + 0x44 + iVar28 * 4) = uVar29;
    uVar26 = (uint)*(byte *)(iVar28 + param_2);
    uVar27 = ac & 0xfffffff8 | (uint)(uVar26 < 0xff) << 2 | (uint)(uVar26 == 0xff) << 1;
    ac = uVar27 | 0xff < uVar26;
    if (((byte)(uVar27 >> 1) & 1) != 1) {
      uVar29 = uVar29 - ((int)uVar29 >> uVar26);
    }
    *puVar1 = uVar29;
    puVar2 = (undefined1 *)(auVar20._4_4_ + 0x3fU & 0xffffffc0);
    auVar23._12_52_ = auVar20._12_52_;
    auVar23._0_8_ = auVar20._0_8_;
    auVar23._8_4_ = 0x3fcdc;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar23;
    auVar22._8_56_ = auVar23._8_56_;
    auVar22._4_4_ = puVar2 + 0x40;
    auVar22._0_4_ = fp;
    FUN_0003fd50(puVar1,param_1,param_2,auVar10._40_4_,param_5,param_4,iVar28);
    uVar27 = *puVar1;
    *(uint *)(param_2 + 0x4c + iVar28 * 4) = uVar27;
    if (*(char *)(param_1 + 8) == '\x01') {
      if (iVar28 == 0) {
        uVar27 = uVar27 + 0x8000 & 0xffff;
        g13 = (undefined1 *)0x7fff;
        if (0x7fff < uVar27) {
          g13 = (undefined1 *)0xffff0000;
          uVar27 = uVar27 | 0xffff0000;
        }
      }
      else {
        uVar27 = -uVar27;
      }
    }
    *(uint *)(param_2 + 0x5c + iVar28 * 4) = uVar27;
    auVar24._20_44_ = auVar22._20_44_;
    auVar24._0_16_ = auVar22._0_16_;
    auVar24._16_4_ = iVar28 + -1;
    uVar29 = ac & 0xfffffff8 | (uint)(0 < auVar24._16_4_) << 2;
    uVar26 = uVar29 | (uint)(auVar24._16_4_ == 0) << 1;
    ac = uVar26 | auVar24._16_4_ < 0;
    *puVar1 = uVar27;
    auVar20._36_28_ = auVar22._36_28_;
    auVar20._0_32_ = auVar24._0_32_;
    auVar20._32_4_ = iVar25 + -4;
  } while (((byte)(uVar26 >> 1) & 1 | (byte)(uVar29 >> 2) & 1) == 1);
  return;
}

