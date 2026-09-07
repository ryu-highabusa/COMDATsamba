# DOA1 Saturn: Hayabusa handstand infinite, September 1997

## Result

The September 12 `KM_DAT` is a surgical correction to the September 9
Hayabusa/Kamui data, not a regenerated or broadly retuned moveset. Every byte
of the revision is accounted for by five content edits plus the necessary
relocation of 2,738 absolute pointers.

The strongest candidate for the infinite's cause is one eight-byte hit/reaction
rule at file offset `0x1D7C`:

| Build | Bytes |
|---|---|
| 1997-09-09 | `2E 2F 05 09 FF 06 09 00` |
| 1997-09-12 | `CE CF 05 09 FF 06 11 00` |

The first two changed bytes are especially significant. Recovered Saturn
source defines action codes `0x1A` through `0x31` as get-up actions:

```c
if ((0x1A <= chk_actcode) && (chk_actcode <= 0x31))
    chk_flg = ON;
```

Thus the original `2E/2F` pair is unambiguously inside the engine's get-up
class, whereas the replacement `CE/CF` pair is outside it. The same source
shows that this distinction affects control flow: for action state `0x0D`, a
blow derivation on a get-up code calls `man_act_set_getup_derive()`, while a
non-get-up code goes through the normal `sta_cmd_chk(0x11)` path.

This gives a coherent explanation of the observed infinite. The buggy
handstand hit routes the grounded opponent into get-up-class reactions. That
causes the engine to treat the victim as recovering from the floor rather than
as a distinct post-relaunch reaction, making the grounded relaunch condition
available again. The fix redirects those reactions to `CE/CF` and changes the
nearby selector from `09` to `11`, breaking that state cycle.

The classification of `2E/2F` is proven. The precise names of every byte in
the eight-byte record, and which reader consumes the `09/11` selector, remain
provisional until that reader is traced or the bytes are patched independently
at runtime.

## Complete semantic diff

| Old file offset | Change | Structural owner | Interpretation |
|---:|---|---|---|
| `0x1D7C` | `2E 2F 05 09 FF 06 09 00` → `CE CF 05 09 FF 06 11 00` | Root slot 6 | Leading causal candidate: get-up reactions become non-get-up reactions |
| `0x22E0` | Insert 24 bytes | Appended to root slot 12 | Two new 12-byte reaction/transition records |
| `0x25F0` | `0A 03 1C 04` → `0A 03 21 04` | Root slot 13 | One compact lookup tuple retargeted |
| `0x53C0` | Insert 10 bytes | Slot-19 entry `E5` | Five big-endian words added to one action script |
| `0x674E` | Delete `00 00` | Script-pool boundary | Alignment/padding removal after `FF FF` |

The inserted root-slot-12 records are:

```text
20 EA 0E 09 FF 06 06 00 00 00 38 00
20 EA 11 09 FF 06 06 00 00 00 38 00
```

They mirror two records already present immediately before them, but their
terminal value is `0x3800` instead of `0x3500`. Their exact field names are not
yet recovered.

The locally expanded slot-19 per-action script is entry `E5` (later table
aliases make some raw adjacent-pointer spans non-monotonic):

| Build | Start | End | Length |
|---|---:|---:|---:|
| 1997-09-09 | `0x534A` | `0x53C8` | 126 bytes |
| 1997-09-12 | `0x5362` | `0x53EA` | 136 bytes |

The fixed script inserts these five 16-bit words before its existing tail:

```text
0008 0009 0000 00C7 0028
```

That makes action `E5` the leading candidate for the handstand action or its
immediate transition. The script opcode meanings are not yet established.

The slot-13 tuple changes its third byte from `0x1C` to `0x21`. The supplied
animation-bank list labels bank `0x21` as `COMMON` and leaves `0x1C` unnamed.
If this tuple member is an animation-bank selector, the fix moves the reaction
to the common animation bank. That is a useful hypothesis, not yet a proven
field interpretation.

## Exhaustive verification

Starting with the September 9 file, the analyzer:

1. applies the five content edits above;
2. accounts for the net `+0x20` file growth;
3. validates all remaining changed aligned words as relocated big-endian
   pointers.

The remainder consists of exactly 2,738 pointer words:

| Pointer delta | Count | Cause |
|---:|---:|---|
| `+0x18` | 435 | 24-byte slot-12 append |
| `+0x22` | 80 | 24-byte append plus 10-byte action-script insertion |
| `+0x20` | 2,223 | Net growth after the two-byte padding deletion |

There are zero unexplained byte differences. This is important: the files do
not hide another balance change elsewhere in the animation payload.

## Runtime location in the supplied September 9 savestate

The savestate contains the buggy `KM_DAT` loaded at:

```text
KM_DAT runtime base       0x0022DB8C
eight-byte rule           0x0022F908
slot-13 tuple             0x0023017C
```

The safest isolating experiment is to patch only the eight-byte runtime rule
at `0x0022F908` from:

```text
2E 2F 05 09 FF 06 09 00
```

to:

```text
CE CF 05 09 FF 06 11 00
```

and replay the handstand relaunch. If the loop stops, the core causal rule is
confirmed. A second pass can split the experiment: first change only `2E/2F`
to `CE/CF`, then restore those and change only the selector `09` to `11`. This
will show whether the action-code reclassification is sufficient or whether
the adjacent selector is also required.

Because the later file adds records and grows the bank, copying the whole
September 12 bank over the live September 9 allocation is not the clean first
test. The same-size eight-byte patch is isolated and reversible.

## Cross-character control

Zack/Kelly's `KL_DAT` contains the same record prefix in its own data:

```text
2E 2F 05 09 FF 06 ...
```

Only Hayabusa's September 12 bank changes that pattern to `CE/CF`. This shows
that the record format is shared between characters while the correction is
specific to Hayabusa's move data—exactly what should be expected for a
character-specific handstand infinite.

## Reproduction

Run:

```bash
python doa_km_handstand_diff.py KM_DAT.BIN 'KM_DAT(1).BIN' \
  --yss-bytes '1997-09-09 DOA1 Saturn_arcademode_p1manryu_vs_p2cpuzack.yss.bytes' \
  --yss-xml '1997-09-09 DOA1 Saturn_arcademode_p1manryu_vs_p2cpuzack.yss.xml' \
  --output km_handstand_fix_manifest.json
```

The generated manifest records hashes, root pointers, every semantic edit,
slot-19 action boundaries, pointer-relocation counts, and the savestate runtime
addresses.
