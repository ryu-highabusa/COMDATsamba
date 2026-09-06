/*
 * Evidence-backed pseudocode for doa FUN_0002D560.
 * This is an analysis artifact, not directly compilable replacement source.
 * Names marked unknown remain provisional.
 */

typedef unsigned char  u8;
typedef signed short   s16;
typedef unsigned short u16;
typedef unsigned int   u32;

typedef struct {
    u8 controller_type;
    u8 character_id;
    u8 costume_id;
    u8 rounds_won;
    u8 unknown_04[0x29];
    u8 action_state;             /* +0x2D */
    u8 unknown_2E[0x15];
    u8 down_attack_state;        /* +0x43 */
    u8 unknown_44[0x09];
    u8 hit_grasp;                /* +0x4D */
} PLAYER_COND_VIEW;

typedef struct {
    u16 weight;                  /* +0x00 */
    u8 set_num;                  /* +0x02: recursive g0 */
    u8 check_condition;          /* +0x03: recursive g1 */
    u16 weight_adjustment;       /* +0x04: zero in known corpus */
    u16 reserved;                /* +0x06: zero in known corpus */
} DOA_COND_BRANCH;

typedef struct {
    s16 repeat_count_or_opcode;  /* +0x00: >0 count; -1 end; -2 reset; -3 jump */
    u8 set_num;                  /* +0x02: action/condition arg, or -3 target */
    u8 check_condition;          /* +0x03 */
    u16 unknown_04;              /* +0x04: not read by order_act_set */
    u16 unknown_06;              /* +0x06: not read by order_act_set */
} DOA_ORDERACT;

typedef struct {
    u8 when_helper_returns_one;  /* +0x00 */
    u8 otherwise;                /* +0x01 */
    u8 unknown_02[2];
} COND1_MAP;

extern PLAYER_COND_VIEW *g_current_player;       /* 0x005645C0 */
extern PLAYER_COND_VIEW *g_opponent_player;      /* 0x005645C4 */
extern u8 g_ai_player_loop_index;                /* 0x005645B6; becomes 2 after loop */
extern u8 g_cond_act_result;                     /* 0x005645BE */
extern u8 g_ai_group_active[2];                  /* 0x00564638 */
extern u16 g_ai_group_halfword[2];               /* 0x0056463C */
extern void *g_comact_cursor_by_player[2];       /* 0x00564648; installed then advanced */
extern u8 g_ai_byte_564650[2];
extern u8 g_ai_flag_5645E4[2];
extern u8 g_comact_group_number[2];              /* 0x00564776 */
extern u8 g_ai_byte_564778[2];
extern u8 g_order_cursor[2][32];                 /* 0x00564660 */
extern u8 g_order_repeat_count[2][32];           /* 0x005646A0 */

extern void **g_comact_group_table_by_character[15]; /* 0x000B3AE0 */
extern DOA_COND_BRANCH **g_cond_branch_table_by_character[15]; /* 0x000B52C0 */
extern DOA_ORDERACT **g_order_action_table_by_character[15]; /* 0x000B5B70 */
extern COND1_MAP g_condition1_map[];             /* 0x000A7900 */

extern u8 FUN_0002A040(u8 set_num);
extern void FUN_0002AEF0(void);
extern u8 FUN_00024360(u8 action, u8 player);
extern u16 FUN_0002DB50(u16 weight, u16 adjustment);
extern u32 FUN_0008E6F0(void);

u8 cond_act_set(u8 set_num, u8 check_condition);

/* FUN_0002D4E0. The Saturn declaration calls its argument COMACT *. */
u8 per_act_set(DOA_COND_BRANCH *entry)
{
    u16 cumulative;
    u8 roll = (u8)FUN_0008E6F0();

    cumulative = FUN_0002DB50(entry->weight, entry->weight_adjustment);
    while (cumulative <= roll) {
        entry++;
        cumulative += FUN_0002DB50(entry->weight, entry->weight_adjustment);
    }
    return cond_act_set(entry->set_num, entry->check_condition);
}

/* FUN_0002D7C0. odr_dat_num selects one of 32 state slots per player. */
u8 order_act_set(u8 odr_dat_num, DOA_ORDERACT *table)
{
    u8 player = g_ai_player_loop_index;
    DOA_ORDERACT *entry = &table[g_order_cursor[player][odr_dat_num]];
    u8 result;

    if (entry->repeat_count_or_opcode == -1)
        return 0xFF;
    if (entry->repeat_count_or_opcode == -3) {
        g_order_cursor[player][odr_dat_num] = entry->set_num;
        entry = &table[g_order_cursor[player][odr_dat_num]];
    } else if (entry->repeat_count_or_opcode == -2) {
        g_order_cursor[player][odr_dat_num] = 0;
        entry = table;
    }

    result = cond_act_set(entry->set_num, entry->check_condition);

    if (entry->check_condition == 1 && FUN_00024360(result, player) != 4)
        return result;

    g_order_repeat_count[player][odr_dat_num]++;
    if (g_order_repeat_count[player][odr_dat_num] >=
        (u16)entry->repeat_count_or_opcode) {
        g_order_repeat_count[player][odr_dat_num] = 0;
        g_order_cursor[player][odr_dat_num]++;
    }
    return result;
}

u8 cond_act_set(u8 set_num, u8 check_condition)
{
    u8 player;
    u8 character;

    switch (check_condition) {
    case 0:
        return set_num;

    case 1:
        if (FUN_0002A040(set_num) == 1)
            return g_condition1_map[set_num].when_helper_returns_one;
        return g_condition1_map[set_num].otherwise;

    case 2:
        if (g_current_player->action_state == 1)
            return set_num;
        return 0xFF;

    case 3:
        player = g_ai_player_loop_index;
        g_ai_group_active[player] = 1;
        g_ai_group_halfword[player] = 0;

        character = g_current_player->character_id;
        g_comact_cursor_by_player[player] =
            g_comact_group_table_by_character[character][set_num];
        g_comact_group_number[player] = set_num;
        g_ai_byte_564778[player] = 0;
        g_ai_byte_564650[player] = 0;

        FUN_0002AEF0();
        return g_cond_act_result;

    case 4:
        if (g_ai_flag_5645E4[g_ai_player_loop_index] == 1)
            return set_num;
        return 0xFF;

    case 5:
        if (g_opponent_player->down_attack_state == 1)
            return set_num;
        return 0xFF;

    case 6: {
        DOA_COND_BRANCH *entry;
        u16 cumulative;
        u8 roll;

        character = g_current_player->character_id;
        entry = g_cond_branch_table_by_character[character][set_num];
        roll = (u8)FUN_0008E6F0();

        cumulative = FUN_0002DB50(entry->weight,
                                  entry->weight_adjustment);
        while (cumulative <= roll) {
            entry++;
            cumulative += FUN_0002DB50(entry->weight,
                                       entry->weight_adjustment);
        }
        return cond_act_set(entry->set_num, entry->check_condition);
    }

    case 7:
        character = g_current_player->character_id;
        return order_act_set(
            set_num,
            g_order_action_table_by_character[character][set_num]
        );

    case 8:
        if (g_opponent_player->hit_grasp == 4 ||
            g_opponent_player->hit_grasp == 6 ||
            g_opponent_player->hit_grasp == 8)
            return set_num;
        return 0xFF;

    case 9:
        if (g_opponent_player->hit_grasp == 5 ||
            g_opponent_player->hit_grasp == 7 ||
            g_opponent_player->hit_grasp == 9)
            return set_num;
        return 0xFF;

    default:
        return 0xFF;
    }
}
