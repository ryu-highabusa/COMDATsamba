
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void name_entry_field_update(void)

{
  byte bVar1;
  undefined1 *unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar2 [64];
  undefined1 auStackX_0 [1000000];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  ac = ac & 0xfffffff8 | (uint)(1 < DAT_0054fd14) << 2 | (uint)(DAT_0054fd14 == 1) << 1 |
       (uint)(DAT_0054fd14 == 0);
  if (((byte)ac & 1 | 1 < DAT_0054fd14) != 1) {
    DAT_0054fd14 = (byte)g14;
    GameMode_0054fcb3 = 2;
    auVar2._8_4_ = 0x3f38;
    auVar2._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar2;
    FUN_00008290(2);
    bVar1 = (&DAT_0054fcfa)[DAT_0054fd13];
    ac = ac & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1 | (uint)(bVar1 == 0);
    if (((byte)ac & 1 | 1 < bVar1) == 1) {
      DAT_0054f3b0 = g14;
    }
    else {
      DAT_0054f3b0 = 1;
    }
    GameMode_0054fcb3 = 2;
    DAT_0054fcfa = (byte)g14;
    DAT_0054fcfb = (byte)g14;
    unaff_pfp = (undefined1 *)register0x00000004;
    FUN_00008cd0();
  }
  fp = unaff_pfp;
  return;
}

