
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00003580(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [999744];
  undefined1 auVar5 [64];
  undefined1 auVar9 [64];
  
  uVar1 = ac;
  auVar3._8_4_ = unaff_retaddr;
  auVar3._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar3._12_52_ = in_register_0000000c;
  ac = ac & 0xfffffff8 | (uint)(0x78 < (int)DWORD_0054f3b4);
  if (((byte)ac & 1 | (int)DWORD_0054f3b4 < 0x78) != 1) {
    uVar2 = uVar1 & 0xfffffff8 | (uint)(1 < BYTE_0054fcfa) << 2;
    ac = uVar2 | (uint)(BYTE_0054fcfa == 1) << 1 | (uint)(BYTE_0054fcfa == 0);
    SPRT_DAT = challenger;
    if (((byte)ac & 1 | (byte)(uVar2 >> 2) & 1) != 1) {
      ac = uVar1 & 0xfffffff8 | (uint)(1 < BYTE_0054fcfb) << 2 | (uint)(BYTE_0054fcfb == 1) << 1 |
           (uint)(BYTE_0054fcfb == 0);
      if (((byte)ac & 1 | 1 < BYTE_0054fcfb) != 1) {
        SPRT_DAT = burstchallengerscroll;
      }
    }
    auVar5._8_4_ = 0x35c8;
    auVar5._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    auVar5._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
    auVar4._8_56_ = auVar5._8_56_;
    auVar4._4_4_ = auStackX_0;
    auVar4._0_4_ = fp;
    Sound_Request(SE_CHALLENG);
    uVar1 = ac;
    ac = ac & 0xfffffff8 | (uint)(5 < BYTE_0054fcfd) << 2 | (uint)(BYTE_0054fcfd == 5) << 1 |
         (uint)(BYTE_0054fcfd < 5);
    auStackX_0._0_8_ = auVar4._0_8_;
    auStackX_0._12_52_ = auVar4._12_52_;
    if (((byte)ac & 1 | 5 < BYTE_0054fcfd) == 1) {
      ac = uVar1 & 0xfffffff8 | (uint)(3 < BYTE_0054fcfd) << 2 | (uint)(BYTE_0054fcfd == 3) << 1 |
           (uint)(BYTE_0054fcfd < 3);
      if (((byte)ac & 1 | 3 < BYTE_0054fcfd) == 1) {
        auStackX_0._8_4_ = 0x3604;
        auVar6._8_56_ = auStackX_0._8_56_;
        auVar6._4_4_ = auStack_40;
        auVar6._0_4_ = auStackX_0;
        FUN_000082f0(5);
        auStack_40._12_52_ = auVar6._12_52_;
        auStack_40._0_8_ = auVar6._0_8_;
        auStack_40._8_4_ = 0x360c;
        auVar7._8_56_ = auStack_40._8_56_;
        auVar7._4_4_ = auStack_80;
        auVar7._0_4_ = auStack_40;
        FUN_000082f0(4);
        fp = auStack_c0;
        auStack_80._12_52_ = auVar7._12_52_;
        auStack_80._0_8_ = auVar7._0_8_;
        auStack_80._8_4_ = 0x3614;
        auVar3._8_56_ = auStack_80._8_56_;
        auVar3._4_4_ = auStack_100;
        auVar3._0_4_ = auStack_80;
        FUN_000082f0(2);
      }
      else {
        fp = auStack_40;
        auStackX_0._8_4_ = 0x35ec;
        auVar3._8_56_ = auStackX_0._8_56_;
        auVar3._4_4_ = auStack_80;
        auVar3._0_4_ = auStackX_0;
        FUN_00004c30();
        DWORD_0054f3c8 = 1;
      }
    }
    else {
      fp = auStack_40;
      auStackX_0._8_4_ = 0x35d8;
      auVar3._8_56_ = auStackX_0._8_56_;
      auVar3._4_4_ = auStack_80;
      auVar3._0_4_ = auStackX_0;
      FUN_00004790();
    }
  }
  DWORD_0054f3b4 = DWORD_0054f3b4 - 1;
  ac = ac & 0xfffffff8 | (uint)(0 < (int)DWORD_0054f3b4) << 2 | (uint)(DWORD_0054f3b4 == 0) << 1 |
       (uint)((int)DWORD_0054f3b4 < 0);
  if (((byte)ac & 1 | 0 < (int)DWORD_0054f3b4) != 1) {
    BYTE_0054fcfe = (DOA_GameMode)g14;
    DWORD_0054f3c0 = g14;
    DWORD_0054f3c8 = g14;
    GameMode = (DOA_GameMode)g14;
    uVar1 = auVar3._4_4_ + 0x3f;
    auVar9._12_52_ = auVar3._12_52_;
    auVar9._0_8_ = auVar3._0_8_;
    auVar9._8_4_ = 0x3650;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
    auVar8._8_56_ = auVar9._8_56_;
    auVar8._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
    FUN_00004790();
    auVar10._12_52_ = auVar8._12_52_;
    auVar10._0_8_ = auVar8._0_8_;
    auVar10._8_4_ = 0x3660;
    *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar10;
    auVar3._8_56_ = auVar10._8_56_;
    auVar3._4_4_ = (undefined1 *)0x0;
    auVar3._0_4_ = uVar1 & 0xffffffc0;
    Task_RegisterOrReplace(&LAB_00013770,2);
  }
  fp = (undefined1 *)auVar3._0_4_;
  return;
}

