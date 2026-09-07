# DOA1 Saturn ↔ Model 2 cross-version bridge

## Result

The recovered Saturn material is a major semantic foothold for the existing
Model 2 project. It is not merely rendering source. The cleanest fragment is a
large portion of `act/act.c`, the player input/action interpreter and character
data relocation layer. It preserves 69 function bodies, original identifiers,
AI structures, command enums, input-history buffers, and the meanings of key
character-data pointer slots.

The companion `.bytes` files restore the actual contents behind both Ghidra XML
exports. With them, the Saturn executable can be tied to the live savestate and
the first anonymous Model 2 character-data family can be named from evidence.

## What each Saturn artifact is

### `00DOA.c`

This is a mixed padding recovery rather than a clean source checkout. Its main
continuous section is preprocessed source centered on `act/act.c`, with line
markers naming:

- `act/comthink.h`
- `act/act.c`
- `act/enmlevel.dat`
- `act/training.h`
- `act/act_def.h`
- `act/act_dat.h`
- `act/act_com.h`
- `act/act_work.h`
- `act/cmd_std.dat`

Near the end of `pointer_move_tnk`, the text merges into an assembler/debug
fragment. Conclusions must therefore be made per recovered region, not by
assuming the file is globally intact.

### `secondsource.c`

This is another mixed padding recovery. It contains source-like animation and
model tables, compiler/debug text, and a NUL-separated symbol-name cluster. The
cluster preserves useful `PLAYER`-related identifiers, but not enough type
records to assign offsets directly:

`animespd`, `bodydrct`, `lastdamage`, `damagedisp`, `actcodeflg`,
`posestatus`, `downstatus`, `updownhead`, `downdrct`, `attackpoint`,
`attacksta`, `animeflip`, `animeflg`, `animereq`, `hitattack`, `hitstage`,
`guardsta`, `actcancel`, `graspsta`, `mountsta`, `ringoutsta`, `atkheight`,
`plyrdispflg`, `dangerflg`, `drctajstflg`, `damagenum`, `sidespin`,
`hitgrasp`, `grplslip`, `beathitsta`, `ukemi_flg`, `dangersetflg`,
`comboflg`, `combocnt`, `combostart`, and `actcanceluse`.

These names are a hypothesis list for the Saturn and arcade player structures;
they are not yet an offset map.

### `00DOA.BIN` and `00DOA(1).BIN`

`00DOA(1).BIN` preserves an `SLSTART` section directory:

| Section | Runtime address | Size |
|---|---:|---:|
| `SLSTART` | `0x06004000` | `0x28` |
| `.bss` | `0x06004030` | `0x31A10` |
| `.text` | `0x06035A40` | `0x5FC90` |
| `SLPROG` | `0x060956E0` | `0xDE18` |
| `.tors` | `0x060A3500` | `0` |
| `.data` | `0x060A3500` | `0x13998` |
| `SLPROGsp` | `0x060B6E98` | `0x82C` |

`00DOA.BIN` aligns to the savestate at runtime base `0x06004000`. Across the
linked `.text` section, only 58 of 392,336 bytes differ: a **99.9852168%**
match. That is strong evidence that the savestate is running this executable or
an extremely close build. The initial range differs because it is live BSS and
working state in the savestate.

The two BIN files should not be treated as automatically interchangeable. One
preserves the section directory and padding material; the other is the image
that matches the live address layout. The corpus records hashes for both.

### Ghidra `.bytes`

The `.bytes` file is the external backing store for a Ghidra XML export. The
XML holds the address map, symbols, comments, code blocks, and data definitions;
the `.bytes` file holds the bytes assigned to those mapped regions.

For the Saturn export, `Work_RAM_High` starts at XML companion-file offset
`0x05FFFFE8`. Therefore Saturn address `0x06004000` is at companion offset
`0x06003FE8`. For the arcade export, the one-megabyte companion maps directly
at address zero.

## Recovered action-system architecture

`ActSel` performs the high-level binding of player-specific action data. It
loads or relocates the two players' character banks, then assigns named views
into the root pointer tables.

Known `act_play_adr` slots are:

| Slot | Saturn source type/name | Meaning |
|---:|---|---|
| `0` | `ACT_TYPE *act_code_data` | Per-action records |
| `1` | `UINT16 ***cmd_data_chr` | Command/input programs by action state |
| `2` | `DOWNTIME *down_time_dat` | Down-duration table |
| `3` | `DOWNTIME *dwna_down_time_dat` | Alternate/down-attack duration table |
| `4` | `FIXED *chr_range_rev_dat` | Character throw/range adjustment |
| `5` | `TRWDAT *throw` | Throw definitions |
| `18` | `COMTRW *com_throw` | CPU throw success/failure choices |
| `31` | `DOWNTIME *throw_down_time_rev_dat` | Throw-specific down/recovery data |

The input interpreter keeps 128-frame histories for each player:

- `newsw_buf[2][0x80]`
- `onsw_buf[2][0x80]`
- `lonsw_buf[2][0x80]`
- `actreq_buf[2][0x80]`
- `actcode_buf[2][0x80]`
- `pose_buf[2][0x80]`

This explains why action requests, command checks, holds, throws, derivations,
recovery, and buffered transitions are tightly connected in the binary.

The recovered source also defines the CPU-action layer:

- `COMACT { per, actreq, para, lvl }`
- `COMBODAT { cmb_cmd, cmb_act }`
- `COMLVL` difficulty/reaction parameters
- `COMPSNL` range and offense/defense tendencies
- `COMDAT { act_dat, group_dat, combo_dat, psnl_dat }`
- `COMCTRL` live CPU-decision state

`pointer_init_tnk` establishes an especially useful invariant: `group_dat` is a
character-data pointer family leading to arrays of four-byte `COMACT` records.

## Confirmed arcade character slot map

Five independent Model 2 table families use the same 15-slot mapping:

| Character/ID | `0x95750` family | `0x9CBE0` family | `COMACT` pointer table | COMACT groups | Conditional pointer table | Ordered pointer table | Ordered tables |
|---|---:|---:|---:|---:|---:|---:|---:|
| Zack `00` | `0x95790` | `0x9CC20` | `0xB2BB0` | 7 | `0xB3CF0` | `0xB53A0` | 3 |
| Tina `01` | `0x95DD0` | `0x9CC50` | `0xB2DB0` | 18 | `0xB3FF0` | `0xB54A0` | 5 |
| Jann Lee `02` | `0x96540` | `0x9CC90` | `0xB2F30` | 14 | `0xB4280` | `0xB5580` | 4 |
| Hayabusa `04` | `0x96BF0` | `0x9CCD0` | `0xB3140` | 18 | `0xB4540` | `0xB5670` | 4 |
| Kasumi `05` | `0x97250` | `0x9CD00` | `0xB3430` | 31 | `0xB47F0` | `0xB5760` | 5 |
| Gen Fu `06` | `0x97900` | `0x9CD30` | `0xB3690` | 23 | `0xB4B30` | `0xB5890` | 4 |
| Bayman `08` | `0x97F10` | `0x9CD60` | `0xB37B0` | 9 | `0xB4CE0` | `0xB59B0` | 5 |
| Raidou `0B` | `0x98630` | `0x9CD90` | `0xB3A80` | 21 | `0xB5280` | `0xB5B60` | 4 |
| Leifang `0C` | `0x98DB0` | `0x9CDC0` | `0xB3870` | 8 | `0xB4F40` | `0xB5A70` | 3 |

Slots `03`, `07`, `09`, `0A`, `0D`, and `0E` consistently reuse Tina's
pointer and appear to be unused/fallback entries. This independently confirms
Hayabusa `04` and Kasumi `05`.

## First high-confidence arcade rename

The root at `0x000B3AE0` is a 15-slot character selector. Each implemented
character entry points to a table of group pointers; each group leads to
four-byte records. Across all nine characters there are 149 such groups, and
every decoded group ends in a record whose first byte is `0xFF`.

The record layout fits the Saturn source exactly:

```c
typedef struct {
    uint8_t per;
    uint8_t actreq;
    uint8_t para;
    uint8_t lvl;
} COMACT;
```

This supports the following names at high confidence:

- `0x000B3AE0` → `g_comact_group_table_by_character`
- `0x000B2BB0` → `comact_groups_Zack`
- `0x000B2DB0` → `comact_groups_Tina`
- `0x000B2F30` → `comact_groups_JannLee`
- `0x000B3140` → `comact_groups_Hayabusa`
- `0x000B3430` → `comact_groups_Kasumi`
- `0x000B3690` → `comact_groups_GenFu`
- `0x000B37B0` → `comact_groups_Bayman`
- `0x000B3A80` → `comact_groups_Raidou`
- `0x000B3870` → `comact_groups_Leifang`

The generated CSV also names every individual group array.  The `0xB52C0`
family is now decoded as eight-byte conditional branches recursively consumed
by `cond_act_set`; 99 unique tables and 646 records survive identically in
`doaa`. The `0xB5B70` family is now identified as 37 ordered-action tables
containing 236 records consumed by `order_act_set`; those records also survive
identically. The remaining `0x95750` and `0x9CBE0` families stay `medium` where
record semantics are not yet proven.

## How to use this in the long-term project

1. Import `doa_saturn_action_types.h` into both Ghidra projects.
2. Run `ApplyDOAArcadeLabels.py` against `doa_arcade_labels.csv` in the arcade
   project. It preserves meaningful existing user labels and replaces only
   generic `PTR_…`/`DAT_…` names.
3. Begin with the now-identified reader `FUN_0002D560`. Its two byte-like
   parameters, ten-way condition switch, direct/failure returns, and recursive
   table dispatch match `cond_act_set(UINT8 set_num, UINT8 chk_cond)`.
4. Break on those table reads in MAME and log the chosen character slot, group
   pointer, `per`, `actreq`, `para`, and `lvl`. Controlled neutral/attack/hit/
   recovery captures will attach observable meanings to the remaining fields.
5. On Saturn, use the verified runtime base and savestate to locate references
   to `PlayerWrk`, then apply the recovered member-name cluster provisionally.
   Offsets should only be committed when an instruction or runtime experiment
   proves them.

The useful unit of work is now a shared subsystem—action selection and CPU
decision data—rather than isolated functions. The Saturn source supplies names
and invariants; the arcade binary supplies the actual i960 implementation; the
two emulators supply runtime tests.

## Confidence boundaries

- **Proven:** Saturn image/runtime mapping; section addresses; recovered source
  identifiers; character IDs and five repeated character table families; the
  four-byte `COMACT` shape of the `0xB3AE0` family.
- **Proven:** the arcade selector is read by live CPU decision code, and the
  observed Zack/P2 indices resolve through both pointer layers to a concrete
  `COMACT` group.
- **Proven at runtime:** state `07` is block stun with `guard_state (+3A)=1`;
  state `08` is critical stun; state `03` covers a connecting wake-up kick;
  and `player+24` retains the last damage received.
- **High confidence:** `FUN_0002D560` is the arcade counterpart of Saturn
  `cond_act_set(UINT8 set_num, UINT8 chk_cond)`.
- **High confidence:** `FUN_0002D4E0` is `per_act_set`; its weighted random
  selection ends by passing record bytes `+2/+3` to `cond_act_set`.
- **High confidence:** `FUN_0002D7C0` is `order_act_set`; it maintains
  per-player cursor/repeat arrays and implements `-1/-2/-3` end/reset/jump
  records from the `0xB5B70` family.
- **Unresolved:** `FUN_0002AEF0` is an AI action/group evaluator called after
  condition case 3 installs a COMACT cursor.
- **Unresolved:** semantic types for the `0x95750` and `0x9CBE0` families;
  Saturn `PLAYER` member offsets; remaining one-to-one function matches
  between SH-2 and i960 code.

The JSON corpus retains all input hashes, 69 recovered function names, the
Saturn memory map, runtime match statistics, the original 130 arcade user
symbols, all five character-family maps, and all decoded `COMACT` groups.

The concrete Ghidra import procedure, `doa`/`doaa` address translations,
`0x58` arcade player types, and first i960 character-data reader are now
documented in `DOA_DOAA_GHIDRA_PORT.md`.

The first live arcade `COMACT` watchpoint and corrected Model 2 work-RAM
capture workflow are documented in `DOA_ARCADE_RUNTIME_FINDINGS.md`.

## September 1997 Hayabusa handstand fix

The paired `KM_DAT` revisions provide a rare controlled experiment on the
action-data format. The complete, pointer-normalized analysis is recorded in
`DOA1_HAYABUSA_HANDSTAND_BUG.md` and
`output/km_handstand_fix_manifest.json`. The leading causal change replaces
get-up-class action codes `2E/2F` with non-get-up codes `CE/CF` in one
Hayabusa-specific hit/reaction rule. The fixed bank also extends slot-19 action
script `E5`, giving the project a concrete route from a known gameplay behavior
to one character-data script and its engine-side state classifier.
