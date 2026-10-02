
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void Bookkeeping_Record1PGameEnd(uint human_player_index)

{
  DOA1_NAME_ID DVar1;
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar2 [64];
  undefined1 auVar4 [64];
  uint uVar5;
  uint uVar6;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar3 [64];
  
  auVar2._8_56_ = in_register_00000008;
  auVar2._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar3._20_44_ = in_register_00000008._12_44_;
  auVar3._0_16_ = auVar2._0_16_;
  auVar3._16_4_ = &BYTE_01d00008;
  DVar1 = (&g_player1)[human_player_index].character_id;
  auVar4._12_52_ = auVar3._12_52_;
  auVar4._8_4_ = 0x4674;
  auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar4;
  uVar5 = FUN_000870d0((uint)DVar1);
  (&Bookkeeping_CharData_ZackSEL_01d000f4)[(uVar5 & 0xff) * 0x14] =
       (&Bookkeeping_CharData_ZackSEL_01d000f4)[(uVar5 & 0xff) * 0x14] + 1;
  Bookkeeping_GameCount1P_01d0002c = Bookkeeping_GameCount1P_01d0002c + 1;
  DAT_01d00024 = DAT_01d00024 + gametime___0054fd90;
  Bookkeeping_TotalTime_0054fd98 = gametime___0054fd90 + Bookkeeping_TotalTime_01d00000;
  uVar5 = (uint)DAT_0054fceb;
  Bookkeeping_TotalTime_01d00000 = Bookkeeping_TotalTime_0054fd98;
  (&Bookkeeping_RoundData1stTotal_01d00088)[uVar5 * 6] =
       (&Bookkeeping_RoundData1stTotal_01d00088)[uVar5 * 6] + 1;
  (&Bookkeeping_RoundData1stAvgTime_01d00090)[uVar5 * 3] =
       (&Bookkeeping_RoundData1stAvgTime_01d00090)[uVar5 * 3] + gametime___0054fd90;
  (&Bookkeeping_RoundData1stDead_01d0008a)[uVar5 * 6] =
       (&Bookkeeping_RoundData1stDead_01d0008a)[uVar5 * 6] + 1;
  (&Bookkeeping_RoundData1stContinue_01d0008c)[uVar5 * 6] =
       (&Bookkeeping_RoundData1stContinue_01d0008c)[uVar5 * 6] + 1;
  uVar6 = gametime___0054fd90 / 0x1e;
  uVar5 = ac & 0xfffffff8 | (uint)(0x14 < uVar6) << 2 | (uint)(uVar6 == 0x14) << 1;
  ac = uVar5 | uVar6 < 0x14;
  if (((byte)ac & 1 | (byte)(uVar5 >> 1) & 1) != 1) {
    uVar6 = 0x14;
  }
  (&Bookkeeping_GameCount1P_00m00s_Count_01d00034)[uVar6] =
       (&Bookkeeping_GameCount1P_00m00s_Count_01d00034)[uVar6] + 1;
  gametime___0054fd90 = g14;
  DAT_0054fd9c = 1;
  return;
}

