# DOA Model 2 runtime findings: COMACT and `cond_act_set`

## Outcome

The debugger captures prove the first live link between the arcade AI code and
the Saturn-derived `COMACT` topology.  The follow-up one-MiB work-RAM capture
also validates the player bases, current/opponent pointers, the live COMACT
cursor, and several AI globals.  The complete disassembly identifies
`FUN_0002D560` as the arcade implementation of Saturn's `cond_act_set` with
high confidence.  The two requested follow-up disassemblies also identify
`FUN_0002D4E0` as `per_act_set` and `FUN_0002D7C0` as `order_act_set`.

## Why the seven binary saves are identical

Every supplied `.bin` is `0x200000` bytes and has SHA-256:

```text
d816f00aeed5ec0ded8ff30933719a2a08af8aa3d78e1212a578b12d88e83734
```

Their layout is:

| File range | CPU address | Contents |
|---:|---:|---|
| `0x000000–0x0FFFFF` | `0x00000000–0x000FFFFF` | Exact `doa` one-MiB program ROM |
| `0x100000–0x1FFFFF` | `0x00100000–0x001FFFFF` | Zero-filled remainder of the two-MiB ROM window |

The command visible in the screenshots was `save ...,0,200000`, so MAME did
exactly what was requested.  Model 2 work RAM is a separate one-MiB region at
`0x00500000–0x005FFFFF`.

Use this command while `maincpu` is selected:

```text
save doa_workram_<state>.bin,500000:maincpu,100000
```

The player records will then occur in the file at offsets:

```text
P1: 0x4FC00  (CPU address 0x0054FC00)
P2: 0x4FC58  (CPU address 0x0054FC58)
```

## Valid work-RAM capture: `doa_workram_25s05ms.bin`

The follow-up file is a correct `0x100000`-byte work-RAM image with SHA-256:

```text
3816a322536a468fb97d8a9d7031080510b4e15571889537270f45d8e6f88182
```

It matches the accompanying neutral gameplay frame:

| Field | P1 | P2 |
|---|---|---|
| Base | `0x0054FC00` | `0x0054FC58` |
| Control | Human (`1`) | CPU (`0`) |
| Character | Gen Fu (`06`) | Zack (`00`) |
| Costume | `0` | `1` |
| Health | `160` | `160` |
| Animation selector `+28` | `00` | `00` |
| Action request `+2C` | `FF` | `FF` |
| Action state `+2D` | Neutral (`00`) | Neutral (`00`) |

The coordinate and animation-speed fields at `+04/+08/+0C/+10` are IEEE-754
floats on Model 2, not Saturn-style 16.16 fixed point.  In this frame:

```text
P1 position = (-3.292887, 1.0, -0.180852), animation speed = 1.0
P2 position = (-1.437704, 1.0, -0.190838), animation speed = 1.0
```

`+0x28` and `+0x29` are also separate bytes: Gen Fu has `00 0C` while Zack
has `00 00`.  The cheat-observed animation selector is specifically `+0x28`;
the semantic name for `+0x29` remains open.

## Attack-state captures

The new punch and throw snapshots validate the action-state map against live
gameplay and separate several damage fields:

| Capture | Gen Fu (P1) | Zack (P2) |
|---|---|---|
| `16s38ms`, throw in progress | HP `60`, animation `AD`, action `C2`, state `0B` being held, `+24=40` | HP `160`, animation `AC`, action `C1`, state `06` hold success |
| `14s63ms`, punch impact | HP `45`, animation `7D`, action `0A`, state `09` hit stun, `+24=15`, `+26=15` | HP `160`, animation `79`, action `A8`, state `03` attack |
| `05s61ms`, punch blocked | Kasumi: HP `40`, animation `24`, action `02`, state `07` block stun, guard `+3A=1` | HP `140`, animation `C6`, action `AB`, state `03` attack, attack phase `+33=2` |
| `10s38ms`, wake-up kick connects | Kasumi: HP `48`, animation `92`, action `77`, state `03` attack, attack phase `+33=2` | HP `140`, animation `0E`, action `20`, state `08` critical stun, `+24=20`, `+26=20` |

Together these prove that `+0x24` holds the last damage received and persists
after the impact: in the block capture both fighters retain unrelated earlier
damage values (`8` and `20`). `+0x26` holds `15` for the ordinary punch and
`20` for the wake-up kick, but remains zero during the captured throw and
block. The narrower evidence-based name is therefore
`damage_display_or_combo_amount`; it should not be treated as a second
universal damage field.

The paired throw action codes are especially useful: `C1` is Zack's successful
grapple/throw action and `C2` is Gen Fu's synchronized victim action in this
specific sequence.  State `06` is therefore the successful-grapple side of the
existing state map even though the historical label says “hold success.”

The block snapshot independently confirms state `07` and `guard_state (+3A)`:
the blocker has `state=07, guard_state=1`, while the attacker has
`state=03, attack_state (+33)=2`. The wake-up kick does **not** use action
state `0E`; once Kasumi is kicking she is an ordinary state-`03` attacker.
State `0E` therefore remains a candidate for attacks directed at a grounded
opponent rather than wake-up attacks performed by the grounded fighter.

These captures also exercise `hit_grasp (+4D)`, the byte tested by condition
cases 8 and 9. The blocked punch has Kasumi/Zack values `5/6`; the wake-up
kick has Kasumi/Zack values `5/7`. This confirms that the odd/even condition
families occur during real contact states, but the exact semantic distinction
between `4/6/8` and `5/7/9` is still unresolved.

The three `25s` captures form a smaller AI sequence. `25s05ms` and `25s03ms`
are byte-identical neutral saves. At `25s01ms`, Zack has entered action `53`,
animation `30`, state `03`, while the COMACT pointer has advanced from
`0xB2B20` to `0xB2B24`.

At the later punch impact Zack is still executing action `A8`, but the AI has
already selected group `5` and its cursor is at `0xB2B78`, whose candidates
are `AB/AC`. AI planning can therefore run ahead of the visible action. A
single impact-frame cursor must not be assumed to be the source of the action
currently animating; the controlled neutral-to-startup sequence is the clean
causal observation.

## What the watchpoint proves

The watchpoint was:

```text
wpset b3ae0,4,r
```

MAME repeatedly reported:

```text
reading 000B2BB0 from 000B3AE0 (PC=0002D66C)
```

At the stop, the relevant instructions and registers are:

```text
0002D65C  lda   0xff,g2
0002D660  and   r4,g2,g5
0002D664  ld    0xb3ae0[g4*4],g4
0002D66C  ld    (g4)[g5*4],g4
0002D670  st    g4,0x564648[g6*4]

g4 = 0x000B2BB0  after the first load
g5 = 1           observed selector
g6 = 1           observed player slot
```

The matchup screenshots show human P1 Hayabusa versus CPU P2 Zack.  The
values line up exactly:

1. Character slot `0` (Zack) indexes the root at `0xB3AE0`.
2. `*(u32 *)(0xB3AE0 + 0*4) == 0xB2BB0`, Zack's group-pointer table.
3. Selector `1` indexes `0xB2BB0 + 1*4`.
4. That word is `0xB2B20`, the second Zack `DOA_COMACT` group.
5. Player slot `1` is P2, so the selected group pointer is written to the P2
   entry of the array based at `0x564648`.

This also explains why forcing different **P1** animation values did not
change the root watchpoint result: the breakpoint was observing the **P2 Zack
CPU** decision path, not the P1 animation field.

## Live AI globals

The new RAM capture freezes the exact state left by the watched path:

| Address | Value | Meaning |
|---:|---:|---|
| `0x005645B6` | `01` | AI player-loop index: P2 while evaluation is active |
| `0x005645BE` | `FF` | Current conditional-action result/failure sentinel |
| `0x005645C0` | `0x0054FC58` | Current player pointer: P2 Zack |
| `0x005645C4` | `0x0054FC00` | Opponent pointer: P1 Gen Fu |
| `0x00564648` | `0` | P1 COMACT cursor |
| `0x0056464C` | `0x000B2B20` | P2 COMACT cursor |
| `0x00564776` | `00` | P1 selected group number |
| `0x00564777` | `01` | P2 selected group number |

This confirms that `g6` in the watched code is the player index and that the
store at `0x2D670` installs the chosen group for that player. Later snapshots
show the pointer advancing through `0xB2B24` and eventually `0xB2B2C`, so
`0x564648` is a live COMACT cursor, not merely an immutable selected-group base.
The throw snapshot also leaves `0x5645B6 == 2`: the current/opponent pointers
still name P2/P1, meaning `2` is the completed two-player loop value, not P3.

The selected Zack group contains:

| `per` | `actreq` | `para` | `lvl` | Interpretation |
|---:|---:|---:|---:|---|
| `01` | `00` | `53` | `00` | direct-action candidate `53` |
| `02` | `00` | `A8` | `00` | direct-action candidate `A8` |
| `02` | `00` | `B1` | `00` | direct-action candidate `B1` |
| `FF` | `00` | `00` | `00` | sentinel |

Condition `0` in the function returns `para` directly, explaining how these
records become candidate action codes.

## Identified function: `cond_act_set`

The full disassembly shows that `FUN_0002D560` preserves `g0` as a set/action
parameter, masks `g1` to a byte, switches on `g1` from `0` through `9`, and
returns `0xFF` when a condition fails.  The recovered Saturn declaration is:

```c
extern UINT8 cond_act_set(UINT8 set_num, UINT8 chk_cond);
```

That argument order and return contract match the i960 function precisely.
Recommended naming:

| Arcade symbol | Name | Confidence |
|---|---|---|
| `FUN_0002D560` | `cond_act_set` | High; exact signature, dispatch order, recursion and role |
| `FUN_0002D4E0` | `per_act_set` | High; weighted random selection followed by `cond_act_set`, matching the Saturn prototype and role |
| `FUN_0002D7C0` | `order_act_set` | High; exact two-argument role, per-player cursor/repeat state, and ordered control records |
| `FUN_0002AEF0` | unresolved COMACT-cursor evaluator | Called after case 3 installs the selected group; exact Saturn name remains open |
| `0x000B3AE0` | `g_comact_group_table_by_character` | Proven |
| `0x000B52C0` | `g_cond_branch_table_by_character` | High structural confidence |
| `0x00564648` | `g_comact_cursor_by_player` | Proven for `doa` |

`FUN_0002D4E0` draws an eight-bit random value, accumulates adjusted 16-bit
weights from eight-byte records, and calls `cond_act_set` with bytes `+2/+3`
from the selected record. This confirms the functional identity of
`per_act_set`; the arcade entry layout is wider than Saturn's four-byte
`COMACT`, so the pointer's concrete type remains a cross-build difference.

### Condition cases

| `chk_cond` | Behavior in `cond_act_set(set_num, chk_cond)` |
|---:|---|
| `0` | Return `set_num` directly |
| `1` | Call `FUN_0002A040(set_num)`, then select one of two bytes in four-byte records at `0xA7900` |
| `2` | Return `set_num` only if current player `action_state (+2D) == 1` (air) |
| `3` | Select `COMACT` group `[character][set_num]`, initialize per-player AI fields, call `FUN_0002AEF0`, return `0x5645BE` |
| `4` | Return `set_num` only if per-player flag `0x5645E4[index] == 1` |
| `5` | Return `set_num` only if opponent `down_attack_state (+43) == 1` |
| `6` | Select a weighted conditional branch through `0xB52C0`, then recursively call `cond_act_set` |
| `7` | Select an ordered-action table through `0xB5B70` and call `order_act_set` |
| `8` | Return `set_num` if opponent byte `+4D` is `4`, `6`, or `8` |
| `9` | Return `set_num` if opponent byte `+4D` is `5`, `7`, or `9` |

All other condition values return `0xFF`.

Case 6 exposes an additional eight-byte arcade structure:

```c
typedef struct {
    uint16_t weight;
    uint8_t  set_num;
    uint8_t  check_condition;
    uint16_t weight_adjustment;
    uint16_t reserved;
} DOA_COND_BRANCH;
```

The last two fields are zero in every known record, so their names are
provisional.  The important part is proven: bytes `+2/+3` are passed back to
`cond_act_set`.  There are 99 unique tables and 646 records including
sentinels, and all are byte-identical between `doa` and `doaa` after the
validated `-0xB4B0` rebase.

### Ordered-action records

`FUN_0002D7C0` matches the recovered Saturn declaration:

```c
UINT8 order_act_set(UINT8 odr_dat_num, COMACT *odr_adrs);
```

It uses `odr_dat_num` to index two 32-byte-per-player state arrays at
`0x564660` (cursor) and `0x5646A0` (repeat counter). The arcade records are:

```c
typedef struct {
    int16_t repeat_count_or_opcode;
    uint8_t set_num;
    uint8_t check_condition;
    uint16_t unknown_04;
    uint16_t unknown_06;
} DOA_ORDERACT;
```

Positive first fields repeat an entry before advancing. `-1` returns `0xFF`,
`-2` resets the cursor to entry zero, and `-3` jumps to the entry index stored
in `set_num`. Normal entries call `cond_act_set(set_num, check_condition)`.
The `0xB5B70` family contains 37 tables and 236 records including terminators;
all are byte-identical in DOA and DOAA after the `-0xB4B0` rebase.

## Next debugger pass

First save real work RAM in several controlled states:

```text
save doa_workram_neutral.bin,500000:maincpu,100000
save doa_workram_p2_guard.bin,500000:maincpu,100000
save doa_workram_p2_attack.bin,500000:maincpu,100000
save doa_workram_p2_hit.bin,500000:maincpu,100000
```

For a direct read of Zack's actual `COMACT` records rather than the outer
character selector:

```text
wpclear
wpset b2b10,98,r
g
```

`0xB2B10–0xB2BA7` is the complete Zack record range.  On a stop, capture the
debugger window and note the gameplay situation.  For a CPU Hayabusa, use:

```text
wpclear
wpset b2f70,1c8,r
g
```

The ordinary guard and critical-stun captures are now complete. The
highest-value remaining capture is an explicit attack against an opponent who
is still grounded, ideally frozen on the connecting frame. That should exercise
`down_attack_state (+43)` and distinguish state `0E` from the wake-up-kick path.

`doa_cond_act_set_reconstruction.c` contains an annotated C-like
reconstruction suitable for comparing against Ghidra's decompiler output.

## Inspector

`doa_arcade_workram.py` rejects the accidental ROM-window saves, decodes both
`0x58` player records from correct work-RAM files, and reports byte-level
player changes when given two or more captures.

```text
python doa_arcade_workram.py doa_workram_*.bin
python doa_arcade_workram.py --rom doa_maincpu_section.bin --json doa_workram_*.bin
```

## External references

- [MAME Model 2 memory map](https://github.com/mamedev/mame/blob/master/src/mame/sega/model2.cpp#L962-L968)
- [MAME debugger `save` command](https://docs.mamedev.org/debugger/memory.html#save)
- [MAME debugger watchpoint commands](https://docs.mamedev.org/debugger/watchpoint.html)
