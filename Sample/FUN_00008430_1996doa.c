
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00008430(void)

{
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar1 [64];
  undefined1 auStackX_0 [1000000];
  
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  DAT_0054f960 = FUN_000084e0;
  DAT_0054f980 = &PTR_WORD_ARRAY_020c0000;
  DAT_01040000 = 0xffa4;
  g13 = &DAT_0000ffd8;
  DAT_01060000 = 0xffd8;
  DAT_01070000 = (undefined2)g14;
  auVar1._12_52_ = in_register_00000008._4_52_;
  auVar1._8_4_ = 0x84a0;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar1;
  Video_Copy128KAndInstallDebugTextPalette((undefined *)&DATAROMBASE_02000000,&TMAPGFXBASE_01080000)
  ;
  FUN_00008530();
  DAT_0054f984 = g14;
  DAT_0054f988 = g14;
  DAT_0054f98c = g14;
  DAT_0054f956 = (undefined2)g14;
  DAT_0054f954 = (undefined2)g14;
  DAT_0054f952 = (undefined2)g14;
  DAT_0054f950 = (undefined2)g14;
  fp = auStackX_0;
  return;
}

