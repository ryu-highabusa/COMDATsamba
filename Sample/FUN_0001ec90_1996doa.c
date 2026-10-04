
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FixDisp_ResetDamageAndComboTracking(void)

{
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar1 [64];
  undefined1 auStackX_0 [1000000];
  
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  BYTE_ARRAY_00557ec0[0] = (byte)g14;
  auVar1._12_52_ = in_register_00000008._4_52_;
  auVar1._8_4_ = 0x1ec9c;
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar1;
  FUN_0001ece0();
  g_damageDisplayRedBarActiveP1 = g14;
  g_damageDisplayRedBarActiveP2 = g14;
  g_damageDisplayRedBarDecayP1 = g14;
  g_damageDisplayRedBarDecayP2 = g14;
  g_damageDisplayComboCountCacheP1 = g14;
  g_damageDisplayComboFlagCacheP1 = g14;
  g_damageDisplayComboCountCacheP2 = g14;
  g_damageDisplayComboFlagCacheP2 = g14;
  return;
}

