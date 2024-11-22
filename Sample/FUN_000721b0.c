
void ConfigureGameSettings_FUN_000721b0(void)

{
  undefined uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  DAT_005998a9 = 1;
  DAT_00598c70 = 0;
  DAT_005b134a = 0;
  DAT_005a0ec8 = 0;
  DAT_0059d065 = 0;
  DAT_00598b26 = 0;
  DAT_005964ff = 0;
  switch(DAT_005a2858) {
  case '\0':
    DAT_00596ad4 = 0;
    DAT_00596ad5 = 0;
    HitPoint_P1_005a27e0 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c4];
    HitPoint_P2_005a27e2 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c4];
    DAT_00591fa4 = 3;
    DAT_00588837 = 1;
    return;
  default:
    DAT_005964ff = 0;
    return;
  case '\x02':
    DAT_00596ad4 = 1;
    DAT_00596ad5 = 1;
    if (DAT_00596a74 != '\0') {
      DAT_00596aa4 = Settings_Game_RoundTime_0059d092;
      DAT_0059c5c8 = (&RoundTime_Values_00302f28)[Settings_Game_RoundTime_0059d092];
      HitPoint_P1_005a27e0 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c4];
      HitPoint_P2_005a27e2 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c4];
      DAT_00596ad5 = Settings_Game_LifeGauge_0059d0c4 != 5;
      DAT_00596ad4 = Settings_Game_LifeGauge_0059d0c4 != 5;
      DAT_005b1d6c = 0;
      DAT_00588837 = (&DAT_00302f30)[Settings_Game_MatchPoint_0059d0ca];
      return;
    }
    DAT_00591fa4 = Settings_Game_Difficulty_0059d088;
    DAT_0059c5c8 = RoundTime_Values_00302f2d;
    HitPoint_P1_005a27e0 = HitPoint_Values_00302f10;
    HitPoint_P2_005a27e2 = HitPoint_Values_00302f10;
    DAT_00596aa4 = 5;
    DAT_00588837 = 1;
    DAT_005b1d6c = 1;
    DAT_005b1468 = (&DAT_00588838)[(uint)(WATCHMODE_FLAG__ != '\x01') * 5];
    DAT_005b1469 = (&DAT_005a26f8)[(uint)(WATCHMODE_FLAG__ != '\x01') * 5];
    return;
  case '\x03':
    DAT_00596ad4 = 1;
    DAT_00596ad5 = true;
    if (DAT_00596a74 != '\0') {
      DAT_00596aa4 = Settings_Game_RoundTime_0059d092;
      DAT_0059c5c8 = (&RoundTime_Values_00302f28)[Settings_Game_RoundTime_0059d092];
      HitPoint_P1_005a27e0 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c4];
      HitPoint_P2_005a27e2 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c4];
      DAT_00596ad5 = Settings_Game_LifeGauge_0059d0c4 != 5;
      DAT_00596ad4 = Settings_Game_LifeGauge_0059d0c4 != 5;
      DAT_005b1d6c = 0;
      DAT_00588837 = (&DAT_00302f30)[Settings_Game_MatchPoint_0059d0ca];
      return;
    }
    DAT_00591fa4 = 1;
    if (DAT_00c59866 == '\0') {
      DAT_0059c5c8 = RoundTime_Values_00302f2b;
      DAT_00588837 = DAT_00302f31;
      HitPoint_P1_005a27e0 = HitPoint_Values_00302f0c;
      HitPoint_P2_005a27e2 = HitPoint_Values_00302f0c;
      DAT_005b146a = WATCHMODE_FLAG__ != '\x01';
      DAT_005b1d6c = 0;
      DAT_00596aa4 = 3;
      DAT_005b1468 = (&DAT_00588838)[(uint)DAT_005b146a * 5];
      DAT_005b1469 = (&DAT_005a26f8)[(uint)DAT_005b146a * 5];
      puVar7 = &ULONG_0059ff04;
      puVar8 = &ULONG_0059c5d0;
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      return;
    }
    DAT_0059c5c8 = RoundTime_Values_00302f2c;
    HitPoint_P2_005a27e2 = HitPoint_Values_00302f0c;
    DAT_00588837 = DAT_00302f30;
    uVar6 = (uint)(WATCHMODE_FLAG__ != '\x01');
    DAT_00596aa4 = 4;
    puVar2 = &WATCHMODE_FLAG__ + uVar6 * 0x68;
    break;
  case '\x04':
    DAT_00588837 = (&DAT_00302f30)[Settings_Game_MatchPoint_0059d0ca];
    DAT_005964ff = 1;
    DAT_00596aa4 = Settings_Game_RoundTime_0059d092;
    DAT_00596ad4 = Settings_Game_LifeGauge_0059d0c4 != 5;
    DAT_00596ad5 = Settings_Game_LifeGauge_0059d0c4 != 5;
    DAT_00598b26 = 0;
    DAT_00598c70 = 0;
    DAT_005998a9 = 1;
    DAT_0059c5c8 = (&RoundTime_Values_00302f28)[Settings_Game_RoundTime_0059d092];
    DAT_0059d065 = 0;
    DAT_005a0ec8 = 0;
    HitPoint_P1_005a27e0 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c4];
    HitPoint_P2_005a27e2 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c4];
    DAT_005b134a = 0;
    DAT_005b1d6c = 0;
    return;
  case '\x05':
    DAT_00596ad4 = 1;
    DAT_00596ad5 = 1;
    if (DAT_00596a74 != '\0') {
      DAT_00596aa4 = Settings_Game_RoundTime_0059d092;
      DAT_0059c5c8 = (&RoundTime_Values_00302f28)[Settings_Game_RoundTime_0059d092];
      HitPoint_P1_005a27e0 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c4];
      HitPoint_P2_005a27e2 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c4];
      DAT_00596ad5 = Settings_Game_LifeGauge_0059d0c4 != 5;
      DAT_00596ad4 = Settings_Game_LifeGauge_0059d0c4 != 5;
      DAT_005b1d6c = 0;
      DAT_00588837 = (&DAT_00302f30)[Settings_Game_MatchPoint_0059d0ca];
      DAT_005b1340 = (DAT_00c59866 == '\0') * '\x02' + '\x0e';
      return;
    }
    DAT_00591fa4 = Settings_Game_Difficulty_0059d08b;
    DAT_00588837 = 1;
    DAT_005b1d6c = 0;
    DAT_00596aa4 = (DAT_00c59866 != '\0') * '\x02' + 1;
    DAT_0059c5c8 = (&RoundTime_Values_00302f28)[DAT_00596aa4];
    HitPoint_P1_005a27e0 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c2];
    HitPoint_P2_005a27e2 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c2];
    uVar6 = (uint)(WATCHMODE_FLAG__ != '\x01');
    DAT_005b146a = WATCHMODE_FLAG__ != '\x01';
    DAT_005b1468 = (&DAT_00588838)[uVar6 * 5];
    DAT_005b1469 = (&DAT_005a26f8)[uVar6 * 5];
    DAT_005b1340 = (DAT_00c59866 == '\0') * '\x02' + '\x0e';
    return;
  case '\a':
  case '\v':
    HitPoint_P1_005a27e0 = HitPoint_Values_00302f10;
    HitPoint_P2_005a27e2 = HitPoint_Values_00302f10;
    DAT_00591fa4 = 1;
    DAT_00588837 = 1;
    DAT_00596ad4 = 0;
    DAT_00596ad5 = 0;
    DAT_00596aa4 = 0;
    DAT_005b1d6c = 0;
    DAT_0059c5c8 = 99;
    DAT_005b1468 = (&DAT_00588838)[(uint)DAT_005a0cd7 * 5];
    DAT_005b1469 = (&DAT_005a26f8)[(uint)DAT_005a0cd7 * 5];
    DAT_005b146a = DAT_005a0cd7;
    return;
  case '\t':
    DAT_00596aa4 = Settings_Game_RoundTime_0059d08e;
    if (DAT_00596a74 != '\0') {
      DAT_0059c5c8 = (&RoundTime_Values_00302f28)[Settings_Game_RoundTime_0059d08e];
      HitPoint_P1_005a27e0 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c1];
      HitPoint_P2_005a27e2 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c1];
      DAT_00596ad5 = Settings_Game_LifeGauge_0059d0c1 != 5;
      DAT_00596ad4 = Settings_Game_LifeGauge_0059d0c1 != 5;
      DAT_005b1d6c = 0;
      DAT_00588837 = (&DAT_00302f30)[Settings_Game_MatchPoint_0059d0c6];
      return;
    }
    DAT_00591fa4 = Settings_Game_Difficulty_0059d08a;
    DAT_0059c5c8 = (&RoundTime_Values_00302f28)[Settings_Game_RoundTime_0059d08e];
    DAT_00596ad5 = Settings_Game_LifeGauge_0059d0c1 != 5;
    HitPoint_P2_005a27e2 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c1];
    DAT_00588837 = (&DAT_00302f30)[Settings_Game_MatchPoint_0059d0c6];
    if (WATCHMODE_FLAG__ == '\x01') {
      puVar2 = &WATCHMODE_FLAG__;
      uVar6 = 0;
    }
    else {
      puVar2 = &WATCHMODE_FLAG_P2____;
      uVar6 = 1;
    }
    break;
  case '\n':
    DAT_00588837 = 1;
    DAT_00596adc = 0;
    puVar3 = &DAT_0059988b;
    do {
      puVar4 = puVar3 + 4;
      *puVar3 = 0;
      *(undefined *)(puVar3 + 1) = 0;
      puVar3 = puVar4;
    } while ((int)puVar4 < 0x5998ab);
    DAT_00591fa4 = Settings_Game_Difficulty_0059d08c;
    DAT_00596aa4 = Settings_Game_RoundTime_0059d091;
    DAT_0059c5c8 = (&RoundTime_Values_00302f28)[Settings_Game_RoundTime_0059d091];
    HitPoint_P1_005a27e0 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c3];
    HitPoint_P2_005a27e2 = (&HitPoint_Values_00302f08)[Settings_Game_LifeGauge_0059d0c3];
    DAT_00596ad5 = Settings_Game_LifeGauge_0059d0c3 != 5;
    DAT_00596ad4 = Settings_Game_LifeGauge_0059d0c3 != 5;
    DAT_0059cf44 = DAT_00599881;
    DAT_005a2620 = DAT_00599886;
    DAT_005b1d6c = 0;
    DAT_0059cf49 = DAT_00599891;
    DAT_005a2625 = DAT_00599896;
    DAT_005964ff = 1;
    return;
  case '\f':
  case '\r':
    HitPoint_P1_005a27e0 = 0xf0;
    HitPoint_P2_005a27e2 = 0xf0;
    DAT_00596aa4 = 0;
    DAT_005b1d6c = 0;
    DAT_00596ad4 = 1;
    DAT_00596ad5 = 1;
    DAT_0059c5c8 = 99;
    DAT_00591fa4 = 3;
    DAT_00588837 = 1;
    DAT_00596adc = ((DAT_005a2858 != '\f') - 1U & 3) + 4;
    return;
  }
  DAT_00596ad4 = DAT_00596ad5;
  HitPoint_P1_005a27e0 = HitPoint_P2_005a27e2;
  puVar2[3] = puVar2[3] & 1;
  puVar2[0x66] = puVar2[3];
  uVar1 = (&DAT_005a2620)[uVar6 * 5];
  puVar2[1] = (&DAT_0059cf44)[uVar6 * 5];
  DAT_005b1d6c = 0;
  puVar2[2] = uVar1;
  return;
}

