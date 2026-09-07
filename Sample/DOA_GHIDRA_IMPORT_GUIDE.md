# Installing the DOA arcade analysis into Ghidra

This procedure is for the Model 2 `doa` program shown as `1996_doa.zip` in
Ghidra. The scripts also support `doaa`, but its matching CSV must be used.

## What the two errors mean

Neither error in the screenshot was operator error.

- `Unterminated conditional-action table at 0x010E00A0` came from an overly
  permissive boundary check in the old `ApplyDOAArcadeTypes.py`. `0x010E00A0`
  is the aligned value immediately after Tina's real pointer list, not a table.
  The corrected script constrains all static pointers to the validated
  `0x00000000–0x000FFFFF` main-CPU ROM.
- The `ImportSymbolsScript.py` `IndexError` came from giving Ghidra's generic
  symbol importer our comma-separated file. That importer does not implement
  this CSV schema. Use `ApplyDOAArcadeLabels.py` instead.

The failed runs did not damage the project. The old type script applied some
valid records before stopping; the corrected script can simply be rerun.

## 1. Verify the program layout

Open **Window → Memory Map** and confirm that the block containing
`0x000B3AE0` exists. In the Bytes window at `0x000B3AE0`, the first little-endian
32-bit value should be `0x000B2BB0`. That identifies the supported `doa`
revision and proves that the main-CPU image is based at zero.

For `doaa`, the corresponding test is:

```text
address 0x000A8630 -> little-endian value 0x000A7700
```

Do not apply these files to a Saturn or PlayStation program.

## 2. Parse the type header

In CodeBrowser:

1. Choose **File → Parse C Source…**.
2. Add `doa_saturn_action_types.h` to the source-file list.
3. Parse it into the current program's data-type manager.
4. In **Data Type Manager**, confirm these sizes:

| Type | Size |
|---|---:|
| `DOA_COMACT` | `4` |
| `DOA_COND_BRANCH` | `8` |
| `DOA_ORDERACT` | `8` |
| `DOA_ARCADE_PLAYER` | `0x58` |

The `(1)` in `doa_saturn_action_types(1).h` only means the header was parsed
more than once. It is untidy but harmless; the script searches by type name
and exact size.

## 3. Add the scripts to Script Manager

1. Open **Window → Script Manager**.
2. Open **Manage Script Directories** from the Script Manager toolbar.
3. Add the directory containing:
   - `ApplyDOAArcadeLabels.py`
   - `ApplyDOAArcadeTypes.py`
4. Refresh Script Manager and expand the **DOA** category.

Do not run Ghidra's built-in `ImportSymbolsScript.py` for these CSVs.

## 4. Apply labels

Run `ApplyDOAArcadeLabels.py`. When its file chooser opens, select:

| Current program | CSV |
|---|---|
| `doa` / `1996_doa.zip` | `doa_arcade_labels.csv` |
| `doaa` | `doaa_arcade_labels.csv` |

The corrected importer detects the current revision, validates the CSV against
it, preserves meaningful user-created symbols, and skips addresses that are not
mapped. A clean project has 335 CSV label rows. On this existing project, many
will be reported as preserved because they are already installed.

## 5. Apply types and function names

Run `ApplyDOAArcadeTypes.py`. For the supported `doa` image, a complete run
ends with these counts:

```text
Detected doa
Applied DOA_COMACT to 623 records in 149 unique groups
Applied DOA_COND_BRANCH to 646 records in 99 unique tables
Applied DOA_ORDERACT to 236 records in 37 unique tables
```

It also names the matched functions `per_act_set`, `cond_act_set`, and
`order_act_set` if they still have generic `FUN_…` names.

If the current program maps work RAM at `0x00500000–0x005FFFFF`, the script
also applies `DOA_ARCADE_PLAYER` at `0x0054FC00` and `0x0054FC58`. If the
program is ROM-only, the message saying player RAM was not mapped is expected;
all static labels and types were still applied.

## 6. Refresh the decompiler

No full re-import is necessary. Reopen or refresh the decompiler for the three
named functions. The labels and data types take effect immediately.

## Safe reruns

Both corrected scripts are designed to be rerun:

- The label importer preserves an existing meaningful user symbol.
- The type importer clears and recreates only the validated record-sized data
  units it owns.
- Existing unrelated analysis is left alone.

If a popup still occurs, copy the entire popup text plus the last 20 console
lines. The new errors identify whether the problem is the program revision,
base address, CSV mismatch, missing type, or an invalid table boundary.
