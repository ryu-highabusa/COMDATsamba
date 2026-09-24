
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00055a20(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar2 [64];
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStackX_0 [1000000];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._12_52_ = in_register_00000008._4_52_;
  auVar2._8_4_ = 0x55a24;
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar2;
  FUN_00055c60();
  DAT_00588700 = 1;
  DAT_0058bab4 = (undefined1)g14;
  DAT_0058baa8 = 0xffff;
  DAT_0058ba94 = g14;
  DAT_0058ba96 = g14;
  DAT_0058ba9a = g14;
  DAT_0058ba9c = g14;
  DAT_0058ba9e = 0xffff;
  DAT_0058baaa = (undefined1)g14;
  DAT_00588744 = (undefined1)g14;
  puVar4 = &DAT_00588310;
  DAT_0058baa0 = 0xffff;
  puVar3 = &DAT_00588310;
  DAT_0058bb80 = (undefined1)g14;
  DAT_0058bb50 = (undefined1)g14;
  DAT_0058bb00 = g14;
  do {
    puVar4 = puVar4 + 2;
    *puVar3 = 1;
    puVar3[1] = 1;
    uVar1 = ac & 0xfffffff8 | (uint)((int)puVar4 < 0x58849e) << 2;
    ac = uVar1 | (uint)(puVar4 == (undefined2 *)0x58849e) << 1;
    puVar3 = puVar3 + 2;
  } while (((byte)(ac >> 1) & 1 | (byte)(uVar1 >> 2) & 1) == 1);
  DAT_0058ba88 = g14;
  DAT_0058ba86 = g14;
  DAT_0058ba84 = g14;
  DAT_0058ba82 = g14;
  puVar6 = &DAT_0058bb60;
  DAT_0058ba80 = g14;
  puVar5 = &DAT_0058bb60;
  puVar3 = &DAT_0058bb10;
  DAT_00589dd4 = g14;
  DAT_00589dd2 = g14;
  DAT_00589dd0 = g14;
  do {
    *puVar3 = g14;
    *puVar5 = (undefined1)g14;
    puVar3[1] = g14;
    puVar5[1] = (undefined1)g14;
    puVar3[2] = g14;
    puVar5[2] = (undefined1)g14;
    puVar3[3] = g14;
    puVar5[3] = (undefined1)g14;
    puVar3[4] = g14;
    puVar5[4] = (undefined1)g14;
    puVar3[5] = g14;
    puVar5[5] = (undefined1)g14;
    puVar3[6] = g14;
    puVar5[6] = (undefined1)g14;
    puVar3[7] = g14;
    puVar5[7] = (undefined1)g14;
    puVar3[8] = g14;
    puVar5[8] = (undefined1)g14;
    puVar3[9] = g14;
    puVar5[9] = (undefined1)g14;
    puVar3[10] = g14;
    puVar5[10] = (undefined1)g14;
    puVar3[0xb] = g14;
    puVar5[0xb] = (undefined1)g14;
    puVar3[0xc] = g14;
    puVar5[0xc] = (undefined1)g14;
    puVar3[0xd] = g14;
    puVar6 = puVar6 + 0xf;
    uVar1 = ac & 0xfffffff8 | (uint)(0x58bb7d < (int)puVar6) << 2 |
            (uint)(puVar6 == &DAT_0058bb7d) << 1;
    ac = uVar1 | (int)puVar6 < 0x58bb7d;
    puVar5[0xd] = (undefined1)g14;
    puVar5[0xe] = (undefined1)g14;
    puVar3[0xe] = g14;
    puVar5 = puVar5 + 0xf;
    puVar3 = puVar3 + 0xf;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
  DAT_0058bac0 = 0xfff;
  DAT_0058bae0 = g14;
  DAT_0058bac2 = 0xfff;
  DAT_0058bae2 = g14;
  DAT_0058bac4 = 0xfff;
  DAT_0058bae4 = g14;
  DAT_0058bac6 = 0xfff;
  DAT_0058bae6 = g14;
  DAT_0058bac8 = 0xfff;
  DAT_0058bae8 = g14;
  DAT_0058baca = 0xfff;
  DAT_0058baea = g14;
  DAT_0058bacc = 0xfff;
  DAT_0058baec = g14;
  DAT_0058bace = 0xfff;
  DAT_0058baee = g14;
  DAT_0058bad0 = 0xfff;
  DAT_0058baf0 = g14;
  DAT_0058bad2 = 0xfff;
  DAT_0058baf2 = g14;
  return;
}

