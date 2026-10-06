
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00003df0(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined4 uVar3;
  undefined1 in_register_0000000c [52];
  undefined1 auVar5 [64];
  undefined1 auVar4 [64];
  undefined1 auVar7 [64];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  byte bVar11;
  undefined3 extraout_var;
  int iVar12;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  
  if (DWORD_0054f3bc != 0) {
    DWORD_0054f3bc = DWORD_0054f3bc - 1;
    uVar2 = ac & 0xfffffff8 | (uint)(0 < (int)DWORD_0054f3bc) << 2;
    ac = uVar2 | (uint)(DWORD_0054f3bc == 0) << 1 | (uint)((int)DWORD_0054f3bc < 0);
    if (((byte)ac & 1 | (byte)(uVar2 >> 2) & 1) != 1) {
      DWORD_0054f3b0 = g14;
      GameMode = MODE_CHARSEL;
      SplashScreen = BYTE_00_SplashScreen_0008fda0;
      auVar5._8_4_ = 0x3e34;
      auVar5._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
      auVar5._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar5;
      auVar4._8_56_ = auVar5._8_56_;
      auVar4._4_4_ = 0;
      auVar4._0_4_ = fp;
      FUN_00008cd0();
      unaff_pfp = auVar4._0_4_;
    }
    fp = unaff_pfp;
    return;
  }
  bVar1 = SplashScreenFlag == 0;
  uVar2 = ac & 0xfffffff8 | (uint)(SplashScreenFlag != 0) << 2;
  if (((byte)(uVar2 >> 2) & 1) != 1) {
    auVar7._8_4_ = 0x3e48;
    auVar7._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    auVar7._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar7;
    auVar6._8_56_ = auVar7._8_56_;
    auVar6._4_4_ = auStackX_0;
    auVar6._0_4_ = fp;
    ac = uVar2 | (uint)bVar1 << 1;
    bVar11 = FUN_00003f90();
    iVar12 = CONCAT31(extraout_var,bVar11);
    uVar2 = ac & 0xfffffff8 | (uint)(9 < iVar12) << 2;
    ac = uVar2 | (uint)(iVar12 == 9) << 1 | (uint)(iVar12 < 9);
    auStackX_0._0_8_ = auVar6._0_8_;
    auStackX_0._12_52_ = auVar6._12_52_;
    if (((byte)(uVar2 >> 2) & 1) == 1) {
      DWORD_0054f3bc = 0xb4;
      SPRT_DAT = gameover;
      auStackX_0._8_4_ = 0x3e90;
      auVar9._8_56_ = auStackX_0._8_56_;
      auVar9._4_4_ = auStack_40;
      auVar9._0_4_ = auStackX_0;
      Sound_Request(0xa00350);
      auStack_40._12_52_ = auVar9._12_52_;
      auStack_40._0_8_ = auVar9._0_8_;
      auStack_40._8_4_ = 0x3e9c;
      auVar10._8_56_ = auStack_40._8_56_;
      auVar10._4_4_ = 0;
      auVar10._0_4_ = auStack_40;
      Sound_Request(SE_GAMEOVER);
      uVar3 = auVar10._0_4_;
      BYTE_0054fcfa = (byte)g14;
      BYTE_0054fcfb = (byte)g14;
    }
    else {
      GameMode = MODE_NAMEFIELD;
      auStackX_0._8_4_ = 0x3e68;
      auVar8._8_56_ = auStackX_0._8_56_;
      auVar8._4_4_ = 0;
      auVar8._0_4_ = auStackX_0;
      Task_RegisterOrReplace(&LAB_0001c580,2);
      uVar3 = auVar8._0_4_;
    }
    FLOAT_0054fd08 = 10.0;
    FLOAT_0054fd0c = 10.0;
    fp = uVar3;
    return;
  }
  if (BYTE_0054fd13 == 0) {
    uVar2 = ac & 0xfffffff8;
    ac = uVar2 | 2;
    if ((ButtonCoinTestServiceStart_0054fcd4 & START_P1) == off) {
      SplashScreen = ~DistributedByAcclaim;
      ac = uVar2;
    }
    fp = unaff_pfp;
    return;
  }
  uVar2 = ac & 0xfffffff8;
  ac = uVar2 | 2;
  if ((ButtonCoinTestServiceStart_0054fcd4 & START_P2) == off) {
    SplashScreen = ~DistributedByAcclaim;
    ac = uVar2;
  }
  fp = unaff_pfp;
  return;
}

