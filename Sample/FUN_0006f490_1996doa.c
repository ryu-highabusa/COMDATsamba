
/* WARNING: Removing unreachable block (ram,0x0006f540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0006f490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined8 uVar1;
  DOA1_STAGE_ID DVar2;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  int iVar22;
  uint uVar23;
  undefined2 *puVar24;
  uint uVar25;
  uint uVar26;
  undefined2 *puVar27;
  uint uVar28;
  undefined2 *puVar29;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [64];
  undefined1 auStack_140 [999680];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar14 [64];
  
  uVar28 = ac;
  DVar2 = StageNumber;
  uVar1 = CONCAT44(auStackX_0,unaff_pfp);
  auVar3._8_4_ = unaff_retaddr;
  auVar3._0_8_ = uVar1;
  auVar3._12_52_ = in_register_0000000c;
  uVar26 = (uint)StageNumber;
  auVar4._24_40_ = in_register_0000000c._12_40_;
  auVar4._0_20_ = auVar3._0_20_;
  auVar4._20_4_ = 0xff;
  auVar8._20_44_ = auVar4._20_44_;
  auVar8._0_16_ = auVar3._0_16_;
  auVar8[0x10] = StageNumber;
  auVar8._17_3_ = 0;
  ac = ac & 0xfffffff8 | (uint)(uVar26 < 0xff) << 2 | (uint)(uVar26 == 0xff) << 1 |
       (uint)(0xff < uVar26);
  auVar5._12_52_ = auVar8._12_52_;
  if (((byte)ac & 1 | uVar26 < 0xff) != 1) {
    auVar5._8_4_ = 0x6f4b0;
    auVar5._0_8_ = uVar1;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
    Tilemap_Clear64x64(&DAT_01004000);
    DAT_005a769e = DVar2;
    return;
  }
  uVar23 = uVar26 + 0xfc & 0xff;
  uVar25 = uVar28 & 0xfffffff8 | (uint)(1 < uVar23) << 2 | (uint)(uVar23 == 1) << 1;
  ac = uVar25 | uVar23 == 0;
  if (((((byte)ac & 1 | (byte)(uVar25 >> 1) & 1) != 1) &&
      (uVar25 = uVar28 & 0xfffffff8 | (uint)(7 < uVar26) << 2 | (uint)(uVar26 == 7) << 1,
      ac = uVar25 | uVar26 < 7, ((byte)(uVar25 >> 1) & 1) != 1)) &&
     (ac = uVar28 & 0xfffffff8 | (uint)(9 < uVar26) << 2 | (uint)(uVar26 == 9) << 1 |
           (uint)(uVar26 < 9), ((byte)ac & 1 | 9 < uVar26) == 1)) {
    if (((uVar26 == 6) || ((uVar26 + 0xf4 & 0xff) < 2)) || ((uVar26 + 0xf2 & 0xff) < 2)) {
      ac = uVar28 & 0xfffffff8;
      uVar28 = ac;
      iVar22 = 0;
      puVar29 = &DAT_005a76a0;
      do {
        puVar24 = puVar29;
        puVar27 = puVar29;
        do {
          puVar27 = puVar27 + 2;
          *puVar24 = 0x4080;
          puVar24[1] = 0x4080;
          puVar24 = puVar24 + 2;
        } while ((int)puVar27 <= (int)(puVar29 + 0xff));
        iVar22 = iVar22 + 1;
        puVar29 = puVar29 + 0x100;
      } while (iVar22 < 0x30);
      ac = ac | (uint)(STAGE_SCREENRED < StageNumber) << 2 |
           (uint)(StageNumber == STAGE_SCREENRED) << 1 | (uint)(StageNumber < STAGE_SCREENRED);
      if (((byte)ac & 1 | STAGE_SCREENRED < StageNumber) == 1) {
        ac = uVar28 | (uint)(STAGE_SCREENGREEN < StageNumber) << 2 |
             (uint)(StageNumber == STAGE_SCREENGREEN) << 1 | (uint)(StageNumber < STAGE_SCREENGREEN)
        ;
        if (((byte)ac & 1 | STAGE_SCREENGREEN < StageNumber) == 1) {
          ac = uVar28 | (uint)(STAGE_SCREENBLUE < StageNumber) << 2 |
               (uint)(StageNumber == STAGE_SCREENBLUE) << 1 | (uint)(StageNumber < STAGE_SCREENBLUE)
          ;
          if (((byte)ac & 1 | STAGE_SCREENBLUE < StageNumber) == 1) {
            ac = uVar28 | (uint)(STAGE_SCREENBLACK < StageNumber) << 2 |
                 (uint)(StageNumber == STAGE_SCREENBLACK) << 1 |
                 (uint)(StageNumber < STAGE_SCREENBLACK);
            if (((byte)ac & 1 | STAGE_SCREENBLACK < StageNumber) != 1) {
              auVar12._8_4_ = 0x6f604;
              auVar12._0_8_ = uVar1;
              auVar12._12_52_ = auVar5._12_52_;
              *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
              auVar8._8_56_ = auVar12._8_56_;
              auVar8._4_4_ = 0;
              auVar8._0_4_ = fp;
              FUN_00035900(0x10,&DAT_01801020,&DAT_000b7170);
            }
          }
          else {
            auVar11._8_4_ = 0x6f5e4;
            auVar11._0_8_ = uVar1;
            auVar11._12_52_ = auVar5._12_52_;
            *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar11;
            auVar8._8_56_ = auVar11._8_56_;
            auVar8._4_4_ = 0;
            auVar8._0_4_ = fp;
            FUN_00035900(0x10,&DAT_01801020,(undefined2 *)&DAT_000b71d0);
          }
        }
        else {
          auVar10._8_4_ = 0x6f5c4;
          auVar10._0_8_ = uVar1;
          auVar10._12_52_ = auVar5._12_52_;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
          auVar8._8_56_ = auVar10._8_56_;
          auVar8._4_4_ = 0;
          auVar8._0_4_ = fp;
          FUN_00035900(0x10,&DAT_01801020,(undefined2 *)&DAT_000b71b0);
        }
      }
      else {
        auVar9._8_4_ = 0x6f5a4;
        auVar9._0_8_ = uVar1;
        auVar9._12_52_ = auVar5._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
        auVar8._8_56_ = auVar9._8_56_;
        auVar8._4_4_ = 0;
        auVar8._0_4_ = fp;
        FUN_00035900(0x10,&DAT_01801020,(undefined2 *)&DAT_000b7190);
      }
    }
    else {
      uVar25 = (uint)DAT_005a769e;
      ac = uVar28 & 0xfffffff8 | (uint)(uVar25 < uVar26) << 2 | (uint)(uVar25 == uVar26) << 1 |
           (uint)(uVar26 < uVar25);
      if (((byte)ac & 1 | uVar25 < uVar26) != 1) {
        DAT_005af6a0 = 1;
        fp = (undefined1 *)unaff_pfp;
        return;
      }
      auVar14._8_4_ = 0x6f628;
      auVar14._0_8_ = uVar1;
      auVar14._12_52_ = auVar5._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
      auVar13._8_56_ = auVar14._8_56_;
      auVar13._4_4_ = auStackX_0;
      auVar13._0_4_ = fp;
      FUN_0006f770();
      DAT_005af6a4 = g14;
      auStackX_0._12_52_ = auVar13._12_52_;
      auStackX_0._0_8_ = auVar13._0_8_;
      auStackX_0._8_4_ = 0x6f64c;
      auVar15._8_56_ = auStackX_0._8_56_;
      auVar15._4_4_ = auStack_40;
      auVar15._0_4_ = auStackX_0;
      FUN_0006f880(&DAT_005af6b0,(int)(short)(&WORD_000cb150)[(uint)StageNumber * 4],param_3,param_4
                   ,(uint)StageNumber,uVar26,param_7,param_8,param_9,param_10,param_11,param_12);
      uVar28 = (uint)StageNumber;
      auVar16._20_44_ = auVar15._20_44_;
      auVar16._0_16_ = auVar15._0_16_;
      auVar16._16_4_ = &WORD_000cb150;
      DAT_005af700 = PTR_ARRAY_020c0008[(short)(&WORD_000cb150)[uVar28 * 4] * 3];
      auStack_40._12_52_ = auVar16._12_52_;
      auStack_40._0_8_ = auVar15._0_8_;
      auStack_40._8_4_ = 0x6f694;
      auVar17._8_56_ = auStack_40._8_56_;
      auVar17._4_4_ = auStack_80;
      auVar17._0_4_ = auStack_40;
      FUN_0006f880(&DAT_005af6bc,(int)(short)(&WORD_000cb152)[uVar28 * 4],param_3,param_4,
                   DAT_005af700,uVar28 * 8,param_7,param_8,param_9,param_10,param_11,param_12);
      uVar28 = (uint)StageNumber;
      DAT_005af704 = PTR_ARRAY_020c0008[(short)(&WORD_000cb152)[uVar28 * 4] * 3];
      auStack_80._12_52_ = auVar17._12_52_;
      auStack_80._0_8_ = auVar17._0_8_;
      auStack_80._8_4_ = 0x6f6d4;
      auVar18._8_56_ = auStack_80._8_56_;
      auVar18._4_4_ = auStack_c0;
      auVar18._0_4_ = auStack_80;
      FUN_0006f880(&DAT_005af6c8,(int)(short)(&WORD_000cb154)[uVar28 * 4],param_3,param_4,
                   DAT_005af704,uVar28 * 8,param_7,param_8,param_9,param_10,param_11,param_12);
      uVar28 = (uint)StageNumber;
      DAT_005af708 = PTR_ARRAY_020c0008[(short)(&WORD_000cb154)[uVar28 * 4] * 3];
      auStack_c0._12_52_ = auVar18._12_52_;
      auStack_c0._0_8_ = auVar18._0_8_;
      auStack_c0._8_4_ = 0x6f714;
      auVar19._8_56_ = auStack_c0._8_56_;
      auVar19._4_4_ = auStack_100;
      auVar19._0_4_ = auStack_c0;
      FUN_0006f880(&DAT_005af6d4,(int)(short)(&WORD_000cb156)[uVar28 * 4],param_3,param_4,
                   DAT_005af708,uVar28 * 8,param_7,param_8,param_9,param_10,param_11,param_12);
      DAT_005af70c = PTR_ARRAY_020c0008[(short)(&WORD_000cb156)[(uint)StageNumber * 4] * 3];
      auStack_100._12_52_ = auVar19._12_52_;
      auStack_100._0_8_ = auVar19._0_8_;
      auStack_100._8_4_ = 0x6f740;
      auVar20._8_56_ = auStack_100._8_56_;
      auVar20._4_4_ = auStack_140;
      auVar20._0_4_ = auStack_100;
      FUN_00008250(1);
      auVar21._12_52_ = auVar20._12_52_;
      auVar21._0_8_ = auVar20._0_8_;
      auVar21._8_4_ = 0x6f744;
      auVar8._8_56_ = auVar21._8_56_;
      auVar8._4_4_ = 0;
      auVar8._0_4_ = auStack_140;
      FUN_0006fa60();
    }
    DAT_005af710 = 1;
    DAT_005a769e = StageNumber;
    fp = (undefined1 *)auVar8._0_4_;
    return;
  }
  auVar7._8_4_ = 0x6f4dc;
  auVar7._0_8_ = uVar1;
  auVar7._12_52_ = auVar5._12_52_;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
  auVar6._8_56_ = auVar7._8_56_;
  auVar6._4_4_ = auStackX_0;
  auVar6._0_4_ = fp;
  Tilemap_Clear64x64(&DAT_01004000);
  auStackX_0._12_52_ = auVar6._12_52_;
  auStackX_0._0_8_ = auVar6._0_8_;
  auStackX_0._8_4_ = 0x6f4e4;
  fp = auStack_40;
  FUN_00008250(1);
  DAT_005a769e = StageNumber;
  FUN_0006f770();
  return;
}

