# DOA5 2012 research package

Read `DOA5_2012_Deep_Dive.md` first. This package compares the supplied February, June, and August Xbox 360 Ghidra exports. It contains no game binaries and no game patches.

## Navigating the results

- `reviewed_function_matches.tsv`: the eight inspected E3/final anchors.
- `matches_*.tsv`: the broader automatically proposed counterparts. Filter by source/target address. Do not bulk-transfer labels based on these alone.
- `evidence/review_*.md`: inspected pairs, with scalar assembly listings.
- `evidence/normalized_diff_*.txt`: diffs after address and external-branch masking. An empty diff does not prove unchanged call targets or data.
- `evidence/build_manifest.json`: hashes and XML section mappings.
- `evidence/functions.tsv`: `.pdata` plus supplemental XML boundary inventory.
- `evidence/strings.tsv`: printable ASCII runs plus ASCII subsets of UTF-16 strings. These are search aids, not an exhaustive multilingual text decoder.
- `evidence/stage_resources.tsv`: readable early/E3 paths. Final opaque names are not evidence of missing assets.
- `evidence/command_category_counts.tsv`: raw count bytes with physical table positions and existing project annotations. These are not total unique moves.
- `evidence/approx_code_references.tsv`: heuristic local address reconstruction. Confirm references in disassembly before relying on them.
- `evidence/doa1_reference_annotations.json`: selected investigator labels from the supplied DOA1 project, used as semantic reference only.

All addresses are hexadecimal virtual addresses unless the field says otherwise. TSV scores are similarities, not probabilities. Strings and names prefixed with “candidate” or carrying question marks remain provisional. The report identifies a three-way conflict; its rows are also marked in the pairwise maps.

## Optional Ghidra notes

Keep `ImportDOA5Research.py` and `doa5_bookmarks.json` together in a Ghidra script directory. Open the correct existing DOA5 program, run the script, and choose the matching build. It checks expected bytes at each target and appends research comments/bookmarks where they match. It does not patch bytes, rename labels, alter types, or redefine functions. Existing comments are preserved. Undo is available through Ghidra's normal transaction history.

The importer was checked syntactically here, but could not be run inside Ghidra in this environment. The report's findings do not depend on it.

## Reproducing the mechanical analysis

Requires Python 3.10+ and Capstone 5.0.9. The supplied output was generated with the same normalization and matching implementation included here. Ghidra itself is not required to reproduce these tables. No network access is needed after dependencies are installed.

1. Put the three original XML/bytes pairs in one folder, retaining their supplied names.
2. Install the dependency: `python -m pip install -r tools/requirements.txt`.
3. Run:

```sh
python tools/reproduce.py --input-dir /path/to/exports --output-dir /path/to/new-results
```

On Windows, use quoted Windows paths in those arguments. Choose a fresh output directory on each run. The tool refuses to reuse a cached analysis; caches are local pickle files and should never be loaded from untrusted sources.

The optional `--include-doa1` flag indexes the supplied `1996*.xml` / matching `1996*.bytes` pair too. DOA1 is not used by the cross-build matcher. Without it, the DOA1 annotation output is empty.

The runner regenerates inventories, match tables, and mechanical evidence. It does not rewrite the authored report, perform runtime tests, or reproduce the manually added Ghidra notes and conflict annotations. Those review additions are included in this package.

## Matching limitations

Boundary recovery is based mainly on `.pdata`. Supplemental XML bodies can still be imperfect. Address reconstruction is intentionally local and incomplete; it is not full control-flow or register-liveness analysis. Some address-building immediates are masked; all external branch destinations are masked. Equivalent fingerprints can therefore hide a semantically different callee or resource. Register/stack/layout changes can also prevent valid matches. Fuzzy candidates need manual checking, especially short helpers and template-generated containers.

Capstone is used for readable scalar disassembly. It does not decode all Xbox 360 VMX128 instructions correctly. Raw instruction words remain the matcher input, but specialized vector functions need a console-aware disassembler for semantic review.

## Validation performed

All three complete payloads were mapped through their XML section records, function matching completed for every pair, and the reviewed scalar routines were inspected at their actual virtual addresses. The three-way consistency audit and focused word/address assertions are included in the report and evidence. The package contains no tested runtime unlock or enabling patch.
