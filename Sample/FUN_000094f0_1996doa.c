
/* Candidate central sound-command submitter */

void Sound_Request(DOA_SOUND_COMMAND sound_id)

{
  undefined4 unaff_pfp;
  
  ac = ac & 0xfffffff8 | (uint)(0x1f < DAT_0054fa40) << 2 | (uint)(DAT_0054fa40 == 0x1f) << 1 |
       (uint)(DAT_0054fa40 < 0x1f);
  if (0x1f >= DAT_0054fa40) {
    (&DAT_0054fa50)[DAT_0054fa48] = sound_id;
    DAT_0054fa48 = DAT_0054fa48 + 1 & 0x1f;
    DAT_0054fa40 = DAT_0054fa40 + 1;
    DAT_0054fa4c = g14;
  }
  fp = unaff_pfp;
  return;
}

