
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000393d0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
                 undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [20];
  undefined1 auVar6 [28];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  uint uVar22;
  undefined8 in_register_00000014;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined1 in_register_00000028 [24];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  int iVar23;
  undefined4 uVar24;
  ushort *puVar25;
  ushort *puVar26;
  undefined4 uVar27;
  int iVar28;
  undefined4 uVar29;
  uint uVar30;
  int iVar31;
  undefined *puVar32;
  undefined *puVar33;
  int iVar34;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [999808];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar7 [64];
  
  auVar4._8_4_ = unaff_retaddr;
  auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar4._12_4_ = unaff_r3;
  auVar5._16_4_ = unaff_r4;
  auVar5._0_16_ = auVar4;
  auVar6._20_8_ = in_register_00000014;
  auVar6._0_20_ = auVar5;
  auVar7._28_4_ = unaff_r7;
  auVar7._0_28_ = auVar6;
  auVar7._32_4_ = unaff_r8;
  auVar7._36_4_ = unaff_r9;
  auVar7._40_24_ = in_register_00000028;
  auVar8._28_36_ = auVar7._28_36_;
  auVar8._0_24_ = auVar6._0_24_;
  auVar8._24_4_ = param_1;
  auVar9._44_20_ = in_register_00000028._4_20_;
  auVar9._0_40_ = auVar8._0_40_;
  auVar9._40_4_ = param_5;
  iVar31 = *param_1;
  auVar10._24_40_ = auVar9._24_40_;
  auVar10._20_4_ = param_2;
  auVar10._0_20_ = auVar5;
  auVar11._0_32_ = auVar10._0_32_;
  auVar11._32_4_ = param_3;
  auVar11._40_24_ = auVar9._40_24_;
  auVar11._36_4_ = param_4;
  auVar12._32_32_ = auVar11._32_32_;
  auVar12._0_28_ = auVar10._0_28_;
  auVar12._28_4_ = param_6;
  uVar22 = ac & 0xfffffff8 | (uint)(iVar31 < 0) << 2 | (uint)(iVar31 == 0) << 1;
  ac = uVar22 | 0 < iVar31;
  auVar17._20_44_ = auVar12._20_44_;
  auVar17._16_4_ = param_7;
  auVar17._0_16_ = auVar4;
  uVar27 = param_3;
  uVar29 = param_4;
  iVar31 = param_7;
  if (((byte)ac & 1 | (byte)(uVar22 >> 1) & 1) != 1) {
    auVar14._12_52_ = auVar17._12_52_;
    auVar14._8_4_ = 0x393fc;
    auVar14._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
    auVar13._8_56_ = auVar14._8_56_;
    auVar13._4_4_ = auStackX_0;
    auVar13._0_4_ = fp;
    FUN_00008dc0(param_1,param_7,param_3,param_4);
    auVar16._12_52_ = auVar13._12_52_;
    auVar16._0_8_ = auVar13._0_8_;
    auVar16._8_4_ = 0x39408;
    auVar15._4_56_ = auVar16._8_56_;
    auVar15._0_4_ = auStack_40;
    auVar15._60_4_ = 0;
    auVar15 = auVar15 << 0x20;
    FUN_00008f70(param_1,param_7);
    fp = auStack_80;
    auVar18._12_52_ = auVar15._12_52_;
    auVar18._0_8_ = auVar15._0_8_;
    auVar18._8_4_ = 0x39414;
    auVar17._8_56_ = auVar18._8_56_;
    auVar17._4_4_ = auStack_c0;
    auVar17._0_4_ = auStack_40;
    FUN_0006f9d0(param_1,param_7);
  }
  uVar1 = ac;
  puVar33 = (undefined *)param_1[2];
  puVar32 = (&PTR_WORD_ARRAY_020c0000)[param_7 * 3];
  uVar22 = ac & 0xfffffff8 | (uint)((int)puVar33 < (int)puVar32) << 2 |
           (uint)(puVar33 == puVar32) << 1;
  ac = uVar22 | (int)puVar32 < (int)puVar33;
  if (((byte)(uVar22 >> 1) & 1) == 1) {
    puVar25 = (ushort *)PTR_ARRAY_020c0008[param_7 * 3];
    uVar30 = (uint)*puVar25;
    uVar22 = (uint)puVar25[1];
    g13 = 0;
    sVar3 = (short)param_3 * -0x8000 + (short)param_4 * 0x4000 + (short)*param_1 * 0x80;
    ac = uVar1 & 0xfffffff8 | (uint)(uVar22 != 0) << 2 | (uint)(uVar22 == 0) << 1;
    puVar26 = puVar25 + 2;
    if (((byte)(ac >> 1) & 1) != 1) {
      iVar31 = param_5 * 2;
      if (uVar30 != 0) {
        iVar28 = iVar31 + param_6 * 0x80;
        iVar23 = 1;
        uVar2 = *puVar26;
        puVar26 = puVar25 + 3;
        iVar34 = param_2 + 2;
        *(ushort *)(param_2 + iVar28) = uVar2 + sVar3;
        if (1 < uVar30) {
          do {
            iVar23 = iVar23 + 2;
            *(ushort *)(iVar34 + iVar28) = *puVar26 + sVar3;
            puVar25 = puVar26 + 1;
            puVar26 = puVar26 + 2;
            *(ushort *)(iVar34 + 2 + iVar28) = *puVar25 + sVar3;
            iVar34 = iVar34 + 4;
          } while (iVar23 < (int)uVar30);
        }
      }
      g13 = 1;
      uVar1 = uVar1 & 0xfffffff8 | (uint)(1 < uVar22) << 2 | (uint)(uVar22 == 1) << 1;
      ac = uVar1 | uVar22 == 0;
      if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
        do {
          if (uVar30 != 0) {
            iVar28 = iVar31 + (g13 + param_6) * 0x80;
            iVar23 = 1;
            uVar2 = *puVar26;
            puVar26 = puVar26 + 1;
            iVar34 = param_2 + 2;
            *(ushort *)(param_2 + iVar28) = uVar2 + sVar3;
            if (1 < uVar30) {
              do {
                iVar23 = iVar23 + 2;
                *(ushort *)(iVar34 + iVar28) = *puVar26 + sVar3;
                puVar25 = puVar26 + 1;
                puVar26 = puVar26 + 2;
                *(ushort *)(iVar34 + 2 + iVar28) = *puVar25 + sVar3;
                iVar34 = iVar34 + 4;
              } while (iVar23 < (int)uVar30);
            }
          }
          ac = ac & 0xfffffff8;
          if (uVar30 != 0) {
            iVar28 = iVar31 + (g13 + 1 + param_6) * 0x80;
            iVar23 = 1;
            uVar2 = *puVar26;
            puVar26 = puVar26 + 1;
            iVar34 = param_2 + 2;
            *(ushort *)(param_2 + iVar28) = uVar2 + sVar3;
            if (1 < uVar30) {
              do {
                iVar23 = iVar23 + 2;
                *(ushort *)(iVar34 + iVar28) = *puVar26 + sVar3;
                puVar25 = puVar26 + 1;
                puVar26 = puVar26 + 2;
                *(ushort *)(iVar34 + 2 + iVar28) = *puVar25 + sVar3;
                iVar34 = iVar34 + 4;
              } while (iVar23 < (int)uVar30);
            }
          }
          g13 = g13 + 2;
          ac = ac | (uint)((int)g13 < (int)uVar22) << 2 | (uint)(g13 == uVar22) << 1 |
               (uint)((int)uVar22 < (int)g13);
        } while ((int)g13 < (int)uVar22);
      }
    }
    fp = (undefined1 *)auVar17._0_4_;
    return;
  }
  uVar24 = 0x14;
  uVar22 = auVar17._4_4_ + 0x3f;
  auVar20._12_52_ = auVar17._12_52_;
  auVar20._0_8_ = auVar17._0_8_;
  auVar20._8_4_ = 0x39438;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar20;
  auVar19._8_56_ = auVar20._8_56_;
  auVar19._0_8_ = CONCAT44(uVar22,fp) & 0xffffffc0ffffffff;
  Debug_SetTextPosition(0x14,0x14);
  auVar21._12_52_ = auVar19._12_52_;
  auVar21._0_8_ = auVar19._0_8_;
  auVar21._8_4_ = 0x39444;
  *(undefined1 (*) [64])(uVar22 & 0xffffffc0) = auVar21;
  FUN_0008e740(s_SCROLL_GROUP_ERROR_Message___000391b0,uVar24,uVar27,uVar29,puVar32,puVar33,iVar31,
               param_8,param_9,param_10,param_11,param_12);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

