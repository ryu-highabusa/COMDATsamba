
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00077250(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint32_t uVar2;
  undefined4 uVar3;
  uint32_t uVar4;
  undefined4 uVar5;
  uint32_t uVar6;
  undefined *puVar7;
  dword dVar8;
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  DOA_MODEL_ENTRY *pDVar13;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar12 [64];
  undefined1 auVar10 [64];
  
  auVar9._8_56_ = in_register_00000008;
  auVar9._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar10._20_44_ = in_register_00000008._12_44_;
  auVar10._0_16_ = auVar9._0_16_;
  auVar10._16_4_ = param_1;
  auVar12._12_52_ = auVar10._12_52_;
  auVar12._8_4_ = 0x77270;
  auVar12._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar12;
  auVar11._8_56_ = auVar12._8_56_;
  auVar11._4_4_ = 0;
  auVar11._0_4_ = fp;
  FUN_00073960((int)(&DAT_005a01c0 + param_2 * 0x1d),param_2,param_3);
  dVar8 = DWORD_000006a8;
  puVar7 = PTR_DAT_000006a0;
  ac = ac & 0xfffffff8 | (uint)(1 < param_1) << 2 | (uint)(param_1 == 1) << 1 | (uint)(param_1 < 1);
  if (((byte)ac & 1 | 1 < param_1) == 1) {
    pDVar13 = g_model_table + DAT_005a6f10 + 0x47f9;
  }
  else {
    pDVar13 = g_model_table + DAT_005a6f10 + 0x3d3f;
  }
  DAT_00880110 = &DAT_00001111;
  DAT_008000b0 = 0xb0b;
  uVar1 = *(undefined4 *)(PTR_DAT_000006a0 + 4);
  uVar3 = *(undefined4 *)(PTR_DAT_000006a0 + 8);
  uVar5 = *(undefined4 *)(PTR_DAT_000006a0 + 0xc);
  *(undefined4 *)DWORD_000006a8 = *(undefined4 *)PTR_DAT_000006a0;
  *(undefined4 *)(dVar8 + 4) = uVar1;
  *(undefined4 *)(dVar8 + 8) = uVar3;
  *(undefined4 *)(dVar8 + 0xc) = uVar5;
  uVar1 = *(undefined4 *)(puVar7 + 4);
  uVar3 = *(undefined4 *)(puVar7 + 8);
  uVar5 = *(undefined4 *)(puVar7 + 0xc);
  *(undefined4 *)dVar8 = *(undefined4 *)puVar7;
  *(undefined4 *)(dVar8 + 4) = uVar1;
  *(undefined4 *)(dVar8 + 8) = uVar3;
  *(undefined4 *)(dVar8 + 0xc) = uVar5;
  uVar1 = *(undefined4 *)(puVar7 + 4);
  uVar3 = *(undefined4 *)(puVar7 + 8);
  uVar5 = *(undefined4 *)(puVar7 + 0xc);
  *(undefined4 *)dVar8 = *(undefined4 *)puVar7;
  *(undefined4 *)(dVar8 + 4) = uVar1;
  *(undefined4 *)(dVar8 + 8) = uVar3;
  *(undefined4 *)(dVar8 + 0xc) = uVar5;
  g13 = 0x101;
  DAT_00800010 = 0x101;
  uVar2 = pDVar13->material_header_word_index;
  uVar4 = pDVar13->polygon_word_address;
  uVar6 = pDVar13->polygon_count;
  *(uint32_t *)dVar8 = pDVar13->texture_point_word_index;
  *(uint32_t *)(dVar8 + 4) = uVar2;
  *(uint32_t *)(dVar8 + 8) = uVar4;
  *(uint32_t *)(dVar8 + 0xc) = uVar6;
  fp = auVar11._0_4_;
  return;
}

