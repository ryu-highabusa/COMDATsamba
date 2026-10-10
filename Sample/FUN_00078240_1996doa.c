
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00078240(void)

{
  undefined4 unaff_pfp;
  uint uVar1;
  
  DAT_005a6ec8 = g14;
  DAT_005a6ee0 = g14;
  uVar1 = (uint)DAT_005a6f1e;
  g_runtime_animated_model_descriptor_candidate.texture_point_word_index =
       DOA_ANIMATED_MODEL_VARIANTS_ARRAY_02099d90[10].field0_0x0[uVar1].texture_point_word_index;
  g_runtime_animated_model_descriptor_candidate.material_header_word_index =
       DOA_ANIMATED_MODEL_VARIANTS_ARRAY_02099d90[10].field0_0x0[uVar1].material_header_word_index;
  g_runtime_animated_model_descriptor_candidate.polygon_word_address =
       DOA_ANIMATED_MODEL_VARIANTS_ARRAY_02099d90[10].field0_0x0[uVar1].polygon_word_address;
  g_runtime_animated_model_descriptor_candidate.polygon_count =
       DOA_ANIMATED_MODEL_VARIANTS_ARRAY_02099d90[10].field0_0x0[uVar1].polygon_count;
  DAT_005a6ee4 = g14;
  DAT_005a6eec = g14;
  DAT_005a6ee8 = g14;
  fp = unaff_pfp;
  return;
}

