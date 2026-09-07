# Porting the Saturn action-system evidence into DOA Model 2 Ghidra projects

## Immediate result

The Saturn material is genuinely useful in the arcade project, but at three
different confidence levels:

| Material | Arcade use | Confidence |
|---|---|---|
| `COMACT { per, actreq, para, lvl }` | Apply directly to the validated arcade CPU-decision groups | High; byte-exact structure and sentinel behavior |
| Character IDs and character-selected table topology | Apply directly to five arcade table families | High; repeated independently across both arcade revisions |
| Combo-command enum and `COMDAT` relationships | Use to name readers and reconstruct logic | Strong semantic bridge; i960 readers still need tracing |
| `COMCTRL` member names | Use as a candidate field checklist | Provisional offsets because SH-2/i960 compiler padding may differ |
| Saturn function names | Use as names for matched behaviors, not automatic labels | Requires an i960 code match or runtime evidence |
| Saturn addresses and SH-2 machine code | Do not import | Platform-specific |

The header that was missing from the previous handoff is
`doa_saturn_action_types.h`. Importing it adds types to Ghidra; it does not
apply them to addresses by itself.

## What the new arcade files establish

`doa_maincpu_section.bin` is byte-for-byte identical to the existing
`1996_doa.zip.bytes` one-megabyte Ghidra backing image:

```text
SHA-256 dde147b3b581b4038b385cfbbe3f297ba941fc2b7a18056d5fdd317581eb77f0
```

Therefore all labels already generated for the `doa` project address the
correct bytes.

`doaa_maincpu_section.bin` is a distinct one-megabyte revision:

```text
SHA-256 9024717e2445f2f25186a704d6deef1df16bebbf1149fde04a237c2b207fae82
```

The two cheat XML files are MAME cheat definitions, not Ghidra XML exports.
The Cheat Engine table contains emulator-process addresses such as
`0x0DD07C20`; these must not be applied to the ROM program. Its consistent host
mapping nevertheless confirms the guest-side `doa` player record:

| Field | P1 | P2 | Record offset |
|---|---:|---:|---:|
| Record base / controller | `0x0054FC00` | `0x0054FC58` | `+0x00` |
| Character | `0x0054FC01` | `0x0054FC59` | `+0x01` |
| Costume | `0x0054FC02` | `0x0054FC5A` | `+0x02` |
| Rounds won | `0x0054FC03` | `0x0054FC5B` | `+0x03` |
| Health | `0x0054FC20` | `0x0054FC78` | `+0x20` |
| Animation selector | `0x0054FC28` | `0x0054FC80` | `+0x28` |

The stride is `0x58`. The header supplies both a sparse
`DOA_ARCADE_PLAYER_KNOWN` view and a full `DOA_ARCADE_PLAYER` view based on the
project's long-term cross-build field map.  The full view is the useful Ghidra
type; its field names remain hypotheses wherever runtime behavior has not yet
been isolated.

The first correct work-RAM capture independently confirms human P1 Gen Fu and
CPU P2 Zack at these bases.  It also proves that position and animation speed
at `+04/+08/+0C/+10` are IEEE-754 floats, and that animation selector `+28`
and auxiliary byte `+29` are separate fields.

The `doaa` cheats place the health fields at `0x0054FC00` and `0x0054FC58`,
exactly `-0x20` from `doa`. If the common `0x58` layout is retained, the
candidate `doaa` player bases are `0x0054FBE0` and `0x0054FC38`. Those bases
remain provisional until the character/controller bytes are observed there.

## Confirmed `doa` to `doaa` translations

The revisions are not related by one global delta. At least two static-data
regions have different translations:

| Data family | `doa` example | `doaa` example | Delta |
|---|---:|---:|---:|
| Menu/settings tables | `0x00090C90` stage order | `0x00089220` | `-0x7A70` |
| Character/action families | `0x000B3AE0` character-to-COMACT selector | `0x000A8630` | `-0xB4B0` |
| Live player/round globals | `0x0054FC20` P1 health | `0x0054FC00` | `-0x20` |

Code should not be translated by any of these constants. Early functions are
near a `+0x10` displacement in `doaa`, but embedded globals and call targets
have changed. Code labels require function matching, xrefs, or runtime
confirmation.

All 298 generated character-data labels—including 99 conditional-table
starts—translate from `doa` to `doaa` by `-0xB4B0`. More importantly, the
entire validated COMACT corpus survives:

```text
doa  root: 0x000B3AE0
doaa root: 0x000A8630
149 groups
all COMACT records byte-identical after pointer rebasing
```

The per-character group-pointer-table addresses are:

| Character | `doa` | `doaa` | Groups |
|---|---:|---:|---:|
| Zack | `0x000B2BB0` | `0x000A7700` | 7 |
| Tina | `0x000B2DB0` | `0x000A7900` | 18 |
| Jann Lee | `0x000B2F30` | `0x000A7A80` | 14 |
| Hayabusa | `0x000B3140` | `0x000A7C90` | 18 |
| Kasumi | `0x000B3430` | `0x000A7F80` | 31 |
| Gen Fu | `0x000B3690` | `0x000A81E0` | 23 |
| Bayman | `0x000B37B0` | `0x000A8300` | 9 |
| Raidou | `0x000B3A80` | `0x000A85D0` | 21 |
| Leifang | `0x000B3870` | `0x000A83C0` | 8 |

Each address in the table above points to an array of pointers, and each of
those pointers selects a `DOA_COMACT` record group.  This means the Saturn
`COMACT` definition is not merely suggestive: it can be applied to actual
arcade data now.

The conditional-action family used by condition case 6 is equally stable:

```text
doa  root: 0x000B52C0
doaa root: 0x000A9E10
99 unique tables
646 eight-byte records including sentinels
all records byte-identical after pointer rebasing
```

Its record type is `DOA_COND_BRANCH`. Bytes `+2/+3` are recursively forwarded
to `cond_act_set` as `set_num/check_condition`.  The trailing two 16-bit
fields are zero throughout the corpus and remain provisionally named.

## Ghidra workflow

### 1. Import the header

In CodeBrowser, use **File → Parse C Source…**, add
`doa_saturn_action_types.h`, select the current program's data-type manager as
the destination, and parse it.

Confirm that these types appear in Data Type Manager:

```text
DOA_COMACT             size 4
DOA_DERVACT            size 3
DOA_DOWNACT            size 2
DOA_COMTRW             size 2
DOA_COMBODAT           size 2
DOA_COND_BRANCH        size 8
DOA_ARCADE_PLAYER_KNOWN size 0x58
DOA_ARCADE_PLAYER       size 0x58
```

Do not apply `DOA_COMCTRL` as a complete memory layout yet.

### 2. Apply the correct label CSV

- `doa`: use `doa_arcade_labels.csv`
- `doaa`: use `doaa_arcade_labels.csv`

Run `ApplyDOAArcadeLabels.py` from Script Manager. It replaces only generic
`DAT_…`/`PTR_…` user labels and preserves meaningful existing names.

### 3. Apply the proven type

Run `ApplyDOAArcadeTypes.py`. It detects `doa` versus `doaa` from the
character-selector root, refuses an unknown revision, follows both pointer
layers, and applies `DOA_COMACT` to every record in all 149 unique groups
through each `per == 0xFF` sentinel. It also applies `DOA_COND_BRANCH` to all
99 conditional tables and renames a still-generic `FUN_0002D560` to
`cond_act_set`.

If a `doa` project has RAM mapped, it applies the full player type at
`0x0054FC00` and `0x0054FC58` (falling back to the sparse view if only that
type was imported). It deliberately does not apply the provisional `doaa`
player bases.

## Best next arcade target

After the types and labels are installed, find all i960 references to:

```text
doa:  g_comact_group_table_by_character @ 0x000B3AE0
doaa: g_comact_group_table_by_character @ 0x000A8630
```

The supplied `doa` Ghidra export and raw images already reveal the first
reader:

```text
FUN_0002D560
  0x0002D668 embeds 0x000B3AE0  character-to-COMACT selector
  0x0002D6D0 embeds 0x000B52C0  related character family
  0x0002D760 embeds 0x000B5B70  related character family
```

Runtime watchpoints now prove the first two loads in that path: with CPU P2
Zack, `0xB3AE0[0]` yields `0xB2BB0`, selector `1` then yields group
`0xB2B20`, and player index `1` identifies P2.  The full disassembly shows two
byte-like arguments, a `0..9` switch on the second, `0xFF` failure returns,
and recursive dispatch through bytes `+2/+3` of the `0xB52C0` record family.
This matches the recovered declaration
`cond_act_set(UINT8 set_num, UINT8 chk_cond)` with high confidence.

Its `doaa` counterpart begins near `0x00026080`; the corresponding literals
occur at `0x00026188`, `0x000261F0`, and `0x00026280`. The aligned function
body is about 90% byte-identical after the revision displacement.  That
counterpart remains a static match until the same watchpoint is reproduced in
`doaa`.

`FUN_0002D4E0` is the stronger `per_act_set(COMACT *)` candidate: Ghidra
recovers one pointer argument and it directly calls `cond_act_set` at
`0x2D54C`. `FUN_0002AEF0` is called after condition case 3 installs a COMACT
group, but its exact role remains unresolved.  It also references the latter
two families. Its likely `doaa` counterpart is near
`0x00023A10`. An additional
literal reference to the character selector at `0x0002AE24` lies in a region the
current Ghidra analysis has not assigned to a function and deserves
disassembly.

These readers are the direct candidates for Saturn routines such as
`order_act_set`, `per_act_set`, `cond_act_set`, and the broader `com_*think*`
family. That is where original Saturn names can begin moving onto arcade
functions based on behavior and field access—not merely resemblance.

The fastest proof loop is to break on reads of one Hayabusa or Kasumi COMACT
group while the CPU is active, record which four-byte entries are selected,
and correlate `actreq` against the live player's action/animation field. That
will give the first verified bridge from an arcade `COMACT` record to an
observable move choice.

## Generated files

- `doa_saturn_action_types.h`: recovered types plus sparse and full arcade player views
- `doa_arcade_labels.csv`: labels for the `doa` data addresses
- `doaa_arcade_labels.csv`: validated translated labels for `doaa`
- `ApplyDOAArcadeLabels.py`: conservative label importer
- `ApplyDOAArcadeTypes.py`: variant-aware COMACT type applicator
- `doa_doaa_bridge.py`: reproducible binary validator/translator
- `output/doa_doaa_bridge.json`: hashes, anchors, table map, and runtime notes
- `DOA_ARCADE_RUNTIME_FINDINGS.md`: first watchpoint proof and corrected dump workflow
- `doa_arcade_workram.py`: capture classifier and player-record inspector
- `doa_cond_act_set_reconstruction.c`: case-by-case C-like reconstruction of `cond_act_set`
