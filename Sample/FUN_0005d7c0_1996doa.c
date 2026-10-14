
/* WARNING: Removing unreachable block (ram,0x0005d8d4) */
/* WARNING: Removing unreachable block (ram,0x0005d984) */
/* WARNING: Removing unreachable block (ram,0x0005d9b0) */
/* WARNING: Removing unreachable block (ram,0x0005d9bc) */
/* WARNING: Removing unreachable block (ram,0x0005d9fc) */
/* WARNING: Removing unreachable block (ram,0x0005da10) */
/* WARNING: Removing unreachable block (ram,0x0005d904) */
/* WARNING: Removing unreachable block (ram,0x0005d910) */
/* WARNING: Removing unreachable block (ram,0x0005d950) */
/* WARNING: Removing unreachable block (ram,0x0005d964) */

void ColorXlat_ProcessPendingUploads_candidate(void)

{
  undefined4 unaff_pfp;
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  ushort *puVar6;
  
  g_current_p1_colorxlat_selector =
       costume_0[(uint)g_player1.character_id + (uint)g_player1.costume_id * 0xd];
  puVar3 = &DAT_01800200;
  bVar2 = 0;
  pbVar4 = g_character_colorxlat_sources
           [(g_current_p1_colorxlat_selector / 0x80) * 0xf + (g_current_p1_colorxlat_selector & 0xf)
           ];
  do {
    bVar1 = 0;
    puVar6 = (ushort *)(puVar3 + 0x18000);
    do {
      puVar6[-0x4000] = (ushort)*pbVar4;
      bVar1 = bVar1 + 1;
      puVar6[-0x2000] = (ushort)pbVar4[1];
      pbVar5 = pbVar4 + 2;
      pbVar4 = pbVar4 + 3;
      *puVar6 = (ushort)*pbVar5;
      puVar6 = puVar6 + 1;
    } while (bVar1 < 0x40);
    bVar2 = bVar2 + 1;
    puVar3 = puVar3 + 0x400;
  } while (bVar2 < 5);
  g_colorxlat_pending_mask = g_colorxlat_pending_mask ^ COLORXLAT_PENDING_P1;
  g13 = 0x3f;
  if (g_colorxlat_pending_mask == 0) {
    g_colorxlat_update_active_candidate = g14;
  }
  fp = unaff_pfp;
  ac = ac & 0xfffffff8 | (uint)(g_colorxlat_pending_mask != 0) << 2 |
       (uint)(g_colorxlat_pending_mask == 0) << 1;
  return;
}

