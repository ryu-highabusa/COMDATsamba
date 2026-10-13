
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void UndefinedFunction_00013770
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 (*pauVar1) [64];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined4 unaff_pfp;
  undefined1 (*pauVar5) [64];
  undefined1 (*pauVar6) [64];
  undefined1 in_register_0000000c [52];
  undefined8 uVar7;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._8_4_ = 0x13774;
  auVar2._12_52_ = in_register_0000000c;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar2;
  CharacterSelect_RunScene();
  pauVar5 = fp;
  pauVar6 = (undefined1 (*) [64])auStack_40;
  fp = (undefined1 (*) [64])register0x00000004;
  do {
    auVar3._4_4_ = pauVar6;
    auVar3._0_4_ = pauVar5;
    auVar3._8_4_ = 0x1377c;
    auVar3._12_52_ = in_register_0000000c;
    *fp = auVar3;
    uVar7 = FUN_00008250(1);
    pauVar1 = pauVar6 + 1;
    auVar4._4_4_ = pauVar6;
    auVar4._0_4_ = fp;
    auVar4._8_4_ = 0x13780;
    auVar4._12_52_ = in_register_0000000c;
    *pauVar6 = auVar4;
    FUN_000153d0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),param_3,param_4);
    pauVar5 = pauVar6;
    pauVar6 = pauVar6 + 2;
    fp = pauVar1;
  } while( true );
}

