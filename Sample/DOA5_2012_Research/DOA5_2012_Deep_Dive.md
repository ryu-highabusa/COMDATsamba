# Dead or Alive 5: three-build executable archaeology

**Compared:** supplied Xbox 360 exports labeled 2012-02-19 (demo), 2012-06-02 (E3), and 2012-08-19 (final).  
**Research date:** October 21, 2026.  
**Scope:** static examination of the three XML/byte pairs, with the supplied DOA1 research export as a semantic reference. No game was executed. No original file was changed.

There is enough here for a substantial prototype-comparison article and several focused restoration projects. The strongest findings are a larger title-stage rotation in the final build, surviving legacy character-specific combat logic, development-facing character-selection messages in the early build, test-stage resource references, and a final-build catalog entry for `debug_patch0.bin`.

The function matches also give us practical starting addresses. They are navigation aids, not a claim that every matched function has identical behavior. The especially useful matches are reviewed below; the accompanying archive contains the broader machine-generated maps and evidence.

## How to read the evidence

- **Confirmed bytes:** the string, data, or instruction is present in the supplied export.
- **Reviewed interpretation:** instructions were inspected to establish what the relevant block does; the higher-level name can still be provisional.
- **Candidate match:** an automated similarity result requiring independent review before labels or patches are transferred.
- **Runtime question:** needs an emulator or console test, or game assets absent from these exports.

A filename proves a reference exists. It does not prove that its file is on the disc, that a model is complete, or that the normal game can reach the code. Likewise, a surviving character check does not establish an unlockable character.

Dates are taken from the supplied filenames. These exports do not independently authenticate the original XEX build dates, disc region, title-update level, or retail provenance. “Final” below means **the supplied August build**. This is not a binary comparison of Plus, Ultimate, Last Round, PS3, Vita, arcade, or later title updates.

## 1. The builds and their analysis state

| Supplied build | Exported bytes | `.text` virtual address | `.text` bytes | `.pdata` function records |
| --- | ---: | --- | ---: | ---: |
| February demo | 32,831,976 | `82150000` | 5,597,716 | 12,101 |
| June E3 | 33,619,524 | `82190000` | 7,998,268 | 19,724 |
| August final | 34,925,724 | `821E0000` | 10,502,412 | 27,030 |

Code-section growth is approximately 43% from February to June and 31% from June to August. This describes section size, not the percentage of gameplay completed. Compiler output, libraries, modes, and engine code all contribute.

The `.bytes` files are **Ghidra memory-export payloads**, not intact XEX files and not flat images based at `82000000`. Sections are concatenated according to the XML. To translate a virtual address:

`payload offset = section FILE_OFFSET + (virtual address − section START_ADDR)`

For example, final address `82406BD4` maps through `.text`, whose payload offset is `001DD714` and virtual start is `821E0000`. Patching that address into a retail XEX using this payload offset would be incorrect.

### Why I did not trust the exported function counts

The XML contains 9,023 / 39,098 / 17,054 function definitions. Those are inconsistent measures of program size. Respectively 5,135 / 13,775 / 9,190 have bodies of eight bytes or less. Some small functions are legitimate, but several inspected definitions stop after the initial `mflr` and branch to a register-save helper, well before the function's actual end.

The February and June exports advertise `PowerPC:BE:64:VLE-32addr:default`; August advertises `PowerPC:BE:64:A2ALT-32addr:default`. This difference deserves attention when rebuilding analysis, but the exports alone do not establish that it caused every bad boundary. The final export has truncated definitions too.

I instead used the executable's eight-byte `.pdata` records: a big-endian start address and packed function length, with size `((word >> 8) & 0x3FFFFF) * 4`. The inspected records line up with real function bodies. I supplemented those with nonoverlapping XML bodies containing a return, at least 16 bytes long. These supplemental boundaries remain less trustworthy. The resulting comparison inventories contain 13,050 / 21,090 / 28,694 regions.

Microsoft's PE documentation describes the matching packed PowerPC record layout; this does not mean the supplied payloads are ordinary Windows CE executables. [1]

**Ghidra implication:** work on a copy, verify Xbox 360 PowerPC/VMX support, and repair boundaries around the interesting routines before decompiling them. A generic PowerPC disassembler can also misdecode Xbox 360 VMX128 instructions; the reviewed scalar blocks here avoid relying on those interpretations.

## 2. Function matching results

| Comparison | Unique normalized fingerprints | Additional fuzzy candidates | Total proposed pairs |
| --- | ---: | ---: | ---: |
| February → June | 4,149 | 629 | 4,778 |
| June → August | 9,239 | 2,564 | 11,803 |
| February → August | 4,150 | 636 | 4,786 |

These are **pair counts**, not unique functions across the whole project. The totals include runtime/library code. They do not measure the number of gameplay changes.

Normalization preserves ordinary constants, register choices, structure offsets, and internal branch distances. It masks external branch destinations and recognized address-building immediates. “Unique normalized fingerprint” means the normalized word sequence occurs once in each eligible inventory. It does **not** verify that the relocated call targets or referenced data have equivalent meanings.

Fuzzy matching uses five-instruction shingles, instruction-sequence similarity, a size filter, and, for lower-scoring cases, support from already-matched direct callees. The score is sequence similarity, not a probability of correctness. The candidate margin compares only the short candidate list considered by this matcher.

A three-way consistency check found **4,548 agreeing chains and one conflict** among chains for which all three pairwise results exist. Consistency is useful corroboration, not semantic proof. The conflicting chain is marked in the match tables and must not be used for automatic label transfer:

- February `82318758` → June `8237E310` → August `82516F30`.
- Direct February → August instead proposes `82585980`.

Unmatched functions are not automatically added or removed features: inlining, register allocation, layout changes, and incomplete boundary recovery can all prevent a match.

### Best reviewed anchors

| Purpose | June E3 | August final | Evidence |
| --- | --- | --- | --- |
| Combat eligibility, including the 30-hit test | `8228B6D8` | `824068E0` | 86.9% candidate; inspected structure and special cases |
| Multi-player combat-state predicate | `82248580` | `823BB298` | 97.1%; inspected state comparisons |
| Round parameters / health-setting candidate | `822494C8` | `823BC768` | 97.4%; inspected paired writes and clamp |
| Current title-stage comparison helper | `8224D060` | `823C1150` | Unique normalized fingerprint; inspected |
| Title-stage transition update | `8224D1D8` | `823C12C8` | Unique normalized fingerprint; inspected table references |
| Casual/pro settings event handler | `821D6578` | `822F41D8` | 96.0%; inspected paired 0/1 settings writes |
| General list cleanup | `8224C278` | `824C8760` | Unique normalized fingerprint; inspected linked-list traversal |
| Per-context reset candidate | `8224C540` | `823C0618` | 77.2%; inspected reset fields and cleanup call |

The last two entries deliberately correct the strength of existing stage-select hypotheses. Their proximity to stage-management code does not make their operations stage-specific. `8224C278` resets a list sentinel, traverses nodes, conditionally destroys node data, and releases nodes. It is a reusable container-cleanup routine. It is a poor first target for a stage unlock.

## 3. A concrete presentation difference: title-stage rotation

**Confirmed bytes and reviewed control flow.**

| Build | Playlist address | Entries used by inspected advance code | Advance routine |
| --- | --- | ---: | --- |
| February | `820DAB30` | 3 | `822288E0` |
| June | `820F2870` | 3 | `8224C808` |
| August | `82105910` | 23 (`0x17`) | `823C0930` |

The early sequences are:

- February: `01 09 0F`.
- June: `01 0B 12`.

Your existing comments identify both as SCRAMBLE (TOP), HOME, and HOT ZONE. The bytes establish the ID changes; those human-readable identifications come from the project annotations rather than a newly decoded stage-name table. The different HOME/HOT ZONE IDs are a warning against copying stage numbers between builds.

The final advance code uses this 23-byte sequence:

```text
01 08 0C 02 0F 09 13 16 10 0B 1D 0A 03 11 04 1E 14 1F 18 1A 0D 19 0E
```

At `823C0958`, the advance routine loads `0x17` as the wrap bound. A second path at `823C0B1C` uses the same bound. There are more bytes after the active sequence; I have not treated adjacent `00 05` as additional active entries.

This is an especially good TCRF-style comparison because it has both a data change and code establishing how much of the data is consumed. It is stronger evidence than a speculative filename list.

**Next test:** record the idle title-screen stage transitions in each build, correlate the playlist index with the loaded stage, and capture matching screenshots. The actual display can still skip or delay entries depending on load/state conditions.

## 4. The 30-hit threshold survives, but its surrounding logic evolves

**Confirmed instructions and reviewed interpretation.**

| Build | Containing function | Counter load | Compare with 30 | Eligibility return |
| --- | --- | --- | --- | --- |
| February | `8225A030` | `8225A274`, player-relative `+88` | `8225A278` | false path at `8225A29C` |
| June | `8228B6D8` | `8228B978`, player-relative `+B0` | `8228B97C` | false path at `8228B9A0` |
| August | `824068E0` | `82406BD0`, player-relative `+B0` | `82406BD4` | false path at `82406BF8` |

The final instruction is `2B0B001E` (`cmplwi cr6,r11,0x1E`), followed by `40980020` (`bge`) at `82406BD8`. The comparison is unsigned. When the preceding combo flag qualifies, a count of 30 or greater takes the path returning false.

One actual change in this small block is the flag condition. February requires the byte at `+87` to equal 1. June and August require the byte at `+AF` to be nonzero. With ordinary flag values 0 and 1 these agree; a value such as 2 would behave differently. Whether the game ever produces such a value is untested.

The containing function checks far more than the counter: player states, action IDs, special character cases, move/property queries, and global flags. Calling it simply `COMBO_LIMIT` hides most of its role. A better provisional label is `CombatEligibility_WithComboLimit_candidate` until callers establish the exact decision being made.

### A changed character-specific exception

The E3 function contains a case involving character byte 7, state `0D`, action `1F68`, and an opponent halfword equal to 2. In final, the corresponding path at `82406ACC` onward adds four checks of returned-record words at `+40`, `+44`, `+48`, and `+4C`, each against `FFFF`, before taking the exceptional false path.

The existing character mapping associates 7 with Helena. The added checks are real; their gameplay meaning is unresolved. They could relate to move/input availability or another record's slots. This is a promising targeted behavioral comparison, not yet a proven balance change.

**Next test:** identify the move/action `1F68`, log those four words, and compare the same interaction in E3 and final. For the combo threshold itself, trace the caller's reaction to the return value at counts 29, 30, and 31. Removing a comparison is not yet a validated universal combo-cap patch.

## 5. Player layout changes: useful for porting your structures

The matched combat routines calculate these bases and strides directly:

| Field or calculation | February | June | August |
| --- | --- | --- | --- |
| Main player-record base | `83CBF720` | `83E72D30` | `83F823B0` |
| Main player-record stride | `620` | `640` | `690` |
| Character-byte access | `+04` | `+04` | `+04` |
| Action-code word access | `+3C` | `+64` | `+64` |
| Action-state byte access | `+40` | `+68` | `+68` |
| Combo-flag byte access | `+87` | `+AF` | `+AF` |
| Combo-counter byte access | `+88` | `+B0` | `+B0` |

The field meanings agree with the existing E3/final player labels and the inspected comparisons. Some labels elsewhere refer to copies or presentation buffers, so they should not all be collapsed into this record.

For example, the final main-record action-state address is `83F82418` (`base +68`); the final counterpart for player two is `83F82AA8` (`base +690 +68`). The E3 counterparts are `83E72D98` and `83E733D8`. Several exported E3 labels instead name state-like fields much farther into the record. Those may be additional state/copy fields; this code specifically reads `+68`.

**Practical consequence:** a uniform address delta is insufficient. Port the record by fields supported by matching reads and writes, keeping unknown gaps explicit. Do not copy the entire DOA1 or DOA4 structure just because the state numbers look familiar.

### A matched settings preset with changed event IDs

E3 `821D6578` handles event IDs `2C5` and `2C6`. Its final counterpart `822F41D8` handles `2DB` and `2DC`. Both branches set a pair of settings to either `(0,0)` or `(1,1)`, then set a returned object's `+20` word to the opposite value.

The E3 pair is `82B11874` / `82B11878`, currently labeled camera type and hit-effect setting in the project. The corresponding final pair is `82DADBA0` / `82DADBA4`. The paired writes and changed IDs are confirmed. The casual/pro menu interpretation comes from the older annotation and still needs its UI strings checked; do not infer which visible preset is which from the branch order alone.

## 6. Legacy character remnants: more than strings, less than restored fighters

### Command-menu descriptors

The February and E3 binaries contain character command-menu descriptor/count tables, including entries labeled in the project as Ein, Leon, Tengu, and, in E3, SPARTAN-458.

| Existing project identification | February count bytes | E3 descriptor | E3 count bytes |
| --- | --- | --- | --- |
| Ein | `820DBB80` | `820EDF18` | `820EDF3C` |
| Leon | `820DD0B8` | `820EF850` | `820EF874` |
| Tengu | `820DE07C` | `820EC718` | `820EC73C` |
| SPARTAN-458 | Not established here | `820EFE0C` | `820EFE30` |

The main tables are February `820E0F30` / `820E0FB0` and E3 `820F1E80` / `820F1F18`. Their ordering is not identical. For example, the February Tengu descriptor is at physical table index `0C`, whereas E3's is at `11`. These are table positions, not a license to renumber character IDs globally.

E3 consumer `8229AB80` demonstrates the relationship: remap the supplied character byte through `829B6F5C`, retrieve a category count through the count-pointer array, and retrieve the corresponding category data through the descriptor array. `8229B7A0` loops through nine categories and advances through records in `0x38`-byte steps in one processing path.

I exported the raw nine category-count bytes rather than describing them as complete move counts. A listed command can involve variants or chains; a descriptor can be inherited or incomplete. The older and newer category layouts also need separate interpretation.

### Tengu-related resource names

February contains `character/m_tengu.mot` at `8211EA88` and multiple Tengu sound-bank paths. E3 retains `character/m_tengu.mot` at `8212C8D4` and Tengu sound paths, including `8210F028` (`sound_k/char/tengu_stream_us.xws`). These references do not establish that the corresponding assets are supplied or loadable.

### A legacy character-0x11 combat check remains even in final

The combo eligibility routine contains a character-byte comparison with `11`, checks attack state 3, and tests action ranges `1F62–1F6B` and `1FC2–1FCB`. The corresponding final block starts at `82406B4C`; an analogous block exists at February `8225A1F8` and E3 `8228B8F4`.

This is surviving executable logic, not just a text remnant. Its association with Tengu is an inference from the project's legacy character mapping and E3 command table. Reachability with a valid final-build character record is untested.

**Safe article wording:** “The executable retains command-menu data and resource references associated with legacy characters, and a legacy character-specific combat exception survives into the final build.”

**Not established:** a hidden playable Tengu or Spartan, a complete character model/skeleton, or evidence that either was intended for release in this version.

## 7. Early development-facing character-selection code

**Confirmed strings with direct instruction references.**

The February build contains:

| Address | Message |
| --- | --- |
| `82124B7C` | `DebugCharacterSelect::initialize()` |
| `82124BA0` | `DebugCharacterSelect::finalize()` |
| `82124DA8` | `DebugCharacterSelect::receive_challenger_data_send() slot: %d` |
| `82124E2C` | `DebugCharacterSelect::receive_champion_data_recv() slot: %d` |
| `82124F34` | `DebugCharacterSelect::receive_collection_data_recv() slot: %d` |
| `82124FC0` | `DebugCharacterSelect::receive_champion_data_recv_ack() slot: %d` |

Function `82360668` references the initialization message at instruction `82360828`, followed by a call at `8236082C`. It also clears and initializes a small selection-related object. `8235A9B8` references the finalization message, while the surrounding `82355440–823608xx` region references the communication messages.

This looks like a development-named selection/network subsystem. The class name alone does not prove a separate user-accessible debug menu. It might underlie an ordinary selection path despite its name. There is no verified button sequence or enabling flag yet.

The exact `DebugCharacterSelect` text was not found in the later ASCII inventories. That establishes text removal or replacement, not that all equivalent logic was removed.

**Next test:** break at `82360668` during ordinary character selection and relevant menu transitions. If it runs normally, inspect the code that chooses its mode rather than assuming it is hidden. If it does not, trace callers and registration records before forcing entry.

## 8. Debug-like menu text survives in later builds

E3 and final contain fixed-width text including `TEST2`, `Win Point`, `Lose Point`, `Dummy Calc`, `Drop Point`, `GP From Point`, `GP Backup`, and `GP Debug`.

| Text | E3 | Final |
| --- | --- | --- |
| `TEST2` | `820CB7B0` | `820CF768` |
| `Dummy Calc` | `820CB810` | `820CF7C8` |
| `GP Debug` | `820CB890` | `820CF848` |

Nearby final text includes `RANKING`, `Clear User Storage`, `INITIALIZE`, `SOCIAL POST`, `GRAPH API`, and `HTTP GET`. E3 nearby text includes `ENTRY LIST GENERATE` and `SPECTATOR MAKE TREE`. The context is consistent with online/grade-point test or diagnostic UI, but its purpose and reachability remain unproven.

The labels are spaced in `0x20`-byte slots. Direct code references to the individual labels were not recovered by the simple address scanner. That scanner does not model arbitrary pointer arithmetic, indexed tables, indirect calls, or control-flow data propagation. Absence of such a recovered reference is not evidence of dead code.

**Next test:** locate references to the text-table base and nearby pointer tables in Ghidra, then find the caller that supplies the selected row index. Do not assume DOA1's HOLD+START hook applies to DOA5.

## 9. Test stages, AQUARIUM, and a change in resource naming

### Early/E3 readable resource references

February contains 51 distinct `stage/<directory>/...` directory names; E3 contains 90. These counts describe readable executable path references, including story/cutscene and test resources, not selectable arenas.

Examples:

| Reference group | February first reference | E3 first reference |
| --- | --- | --- |
| AQUARIUM | `8211679C` | `8211BFF4` |
| AQUARIUM2 | Not found as a readable path | `8211BEF4` |
| CHECK | `821178AC` | `8211D794` |
| T001 | `8211573C` | `82119B04` |
| T030 | Not found as a readable path | `82118C80` |

E3 lists `T001–T030`. February's readable numbered directories are `T001–T014` and `T020`. The `RS_*` paths are kept separate in the evidence table; their names alone do not identify independent playable stages.

AQUARIUM/AQUARIUM2 references include several complementary resource types such as `.tmc`, `.tmcl`, `.scn`, `.phyd`, and `.undd`. That is more suggestive than a lone name, but does not prove complete files are available. Nor does the suffix “2” alone establish whether it is a second arena, alternate state, or another asset grouping.

### Why searching final for `stage/AQUARIUM` is insufficient

Final contains many opaque printable resource-name strings where the earlier catalogs contain readable paths. The pattern suggests a transformed or encoded naming scheme; its algorithm was not decoded in this pass. The executable still has clear catalog/group names such as `stage_debug` and `common`.

The final resource metadata around `820E44E4` has twelve-byte records interpreted as a name pointer, a numeric type field, and a link/group pointer. The `debug_patch0.bin` record is:

```text
820E44E4 -> 82165894  "debug_patch0.bin"
820E44E8 = 00000001
820E44EC -> 8216588C  "NO_LINK"
```

The following record points to an opaque name, type 0, and `common`; another clear record names `shader/model_shader_pack.sdat`, type 2, and `NO_LINK`. The exact meaning of each numeric type remains provisional.

The twelve-byte stride is independently supported by `824CD790`, which subtracts catalog base `820E15F8`, divides by `0C`, and looks up associated resource-size metadata. It is a useful catalog investigation anchor, not an identified filename decoder.

`stage_debug` at `8214EF5C` is used as a group pointer by numerous catalog entries, for example the field at `820EA9F0`. This establishes surviving grouped metadata. The group name does not by itself mean that a debug mode is active.

**Research priority:** recover the final name transformation or log the resolved names at runtime, then compare the catalogs by decoded path. Until that is done, an absent plaintext AQUARIUM/Tengu path cannot be called a deleted resource.

## 10. Build paths and packaging changes

Confirmed embedded PDB paths:

| Build | Path |
| --- | --- |
| February | `c:\DOA5\game\output\Xbox 360\Release_TRIAL_ALL\game.pdb` at `821329D8` |
| June | `C:\DOA5_root\DOA5\game\output\Xbox 360\Release\game.pdb` at `82159614` |
| August | `C:\DOA5\game\output\Xbox 360\Release\game.pdb` at `821A8734` |

These are development-path remnants, not included symbol files. `Release_TRIAL_ALL` is a useful configuration clue, not proof that every character or mode is complete.

February references `trial.lnk` at `8210ED40`. June references `common.lnk` at `820FDBA0`. Final lists multiple named bundles including `common.lnk`, `stage_common.lnk`, `chara_common.lnk`, `sprite_common.lnk`, and `message.lnk` around `82123304` onward. This is a concrete catalog/packaging difference, although the actual archive contents are unavailable here.

The final functions labeled `OpenResolvedLnkAndRegister` (`824C5EB8`) and `ResolveLnkNameInKnownList` (`824C6158`) are useful starting points. The inspected latter searches nine name-table records at `82CA1630` with an eight-byte stride and then queries a registered object. It does not itself decode the opaque per-resource names, and its precise return semantics should be established through callers.

### Existing loader labels that deserve revision

- E3 `82336DF0`, currently `ProcessDataBlock`, walks entries at stride `104`, releases pointers at `+100`, then releases and clears the container. **Resource-list cleanup/destruction candidate** is more informative than a generic processing name.
- E3 `826052D0`, currently `ValidateFileIntegrity`, copies a path, converts `/` to `\`, allocates/initializes an object, and stores it. The inspected body provides no checksum or signature validation. Keep an initialization/path-oriented candidate name until its callers and allocation routine are fully typed.
- E3 `826E5AE0`, currently `CheckFileAvailability`, computes a rounded-up page count from an input size using a `0x1000` boundary and calls another routine. The body does not inspect a filename. It should not be treated as a file-existence check without further evidence.

These corrections matter because a misleading name can make a platform helper look like a content lock or integrity gate.

## 11. How the DOA1 project helps

The supplied DOA1 export includes concrete research labels such as:

- `00004A20 RetailDisabledDebugHook`.
- `00005100 Debug_DrawPlayerStateOverlay`.
- `0002AE70 comact_start_common_group`.
- `0002F2A0 act_punch_chk`, `0002F2F0 act_kick_chk`, `0002F340 act_psbl_chk`.
- `0004DE70 MotionDebug_SnapshotPlayersAndDrawAnimeId`.

Those are investigator-applied labels, not recovered DOA5 symbols. I used them to organize the investigation around debug gates, state overlays, action requests, and motion inspection. There is no defensible direct byte-signature match between the i960 DOA1 binary and these PowerPC DOA5 binaries.

The state-number map is useful as a hypothesis generator. Final `823BB298` tests state pairs such as 4/6 against opponent A/B, and E against opponent C, consistent with throw/hold and down-attack relationships in the established DOA vocabulary. That supports investigating continuity of these meanings. It does not validate the entire state enumeration in every build.

The most productive shared method is: identify an observed field, find its reads/writes, understand the containing function, then compare the equivalent path. That method has already produced the player-layout and combo findings above.

## 12. Prioritized experiments

| Priority | Goal | First target | What would establish the result |
| --- | --- | --- | --- |
| 1 | Confirm title-stage expansion visually | Final `823C0930`; index `83F5A110` | Logged index/stage transitions and screenshots |
| 2 | Identify early selection subsystem reachability | February `82360668` and callers | Breakpoint during ordinary and hidden menu paths |
| 3 | Recover final resource names | Catalog base `820E15F8`; size helper `824CD790` | Decoded names checked against known clear resources |
| 4 | Locate real debug UI gate | Fixed-slot diagnostic labels and table base | Call path into a rendered diagnostic screen |
| 5 | Compare Helena-related exception | E3 `8228B6D8`; final `824068E0` | Same action `1F68`, logged slots, distinct outcome |
| 6 | Validate 30-hit rule's effect | E3 compare `8228B97C`; final `82406BD4` | Counter/flag/return/caller logs at 29–31 hits |
| 7 | Test legacy character remnants | E3 descriptor tables; final `82406B4C` | Valid resource and initialization chain, not merely a forced ID |
| 8 | Compare Power Blow / stun-system evolution | Player health/action/state consumers | Matched request/property checks and reproducible input tests |

For a newcomer-friendly breakpoint session: put an execution breakpoint at a function's first instruction, reproduce one relevant event, and inspect the arguments and caller when it stops. To inspect the result, break at the instruction immediately after the caller's call instruction; on these PowerPC paths the scalar return is normally in `r3`. Use the debugger's step-out command if available. Do not assume MAME's i960 register names or command syntax apply to an Xbox 360 debugger.

Record build, player, action ID, state, opponent state, relevant flag/counter, and return value. A screenshot or save state should be paired with those exact values so we avoid the screenshot/RAM-dump synchronization problem from the DOA1 animation investigation.

## 13. Boundaries of this pass

This work establishes executable/data differences and useful addresses. It does not establish complete character balance tables, visual/costume differences, restored menus, or successful game patches. Character/stage assets, archives, title updates, runtime captures, and intact XEX metadata were not supplied. Much gameplay behavior may be driven by those external assets.

Power Blow availability, Critical Burst behavior, move changes, and stage transitions are strong topics for a later gameplay comparison, but I have not substituted general recollections or press coverage for binary evidence from these builds. Official later DOA5 update documentation exists; it should be treated as a separate comparison track once matching updated executables/assets are available. [3]

The public Hidden Palace entry identifies a June 2, 2012 Xbox 360 prototype as “E3 Demo,” supporting the filename context. It supplies no hash against which to authenticate these exported payloads. [2] TCRF's relevant pages could not be retrieved reliably in this session, so none of the binary findings here should be presented as already verified against its current article or as a guaranteed first discovery.

## 14. What is in the research package

- Three pairwise function maps, with normalized/fuzzy method, sizes, scores, and annotations kept separate.
- Eight reviewed match pairs with side-by-side instruction listings and normalized-word diffs.
- Function, string, stage-resource, command-category, and approximate code-reference inventories.
- Input section maps and SHA-256 hashes for reproducibility.
- Focused assembly evidence for the early selection routine, three playlist advance routines, combo routine, and resource helpers.
- An optional Ghidra bookmark/comment importer for the curated targets. It verifies bytes and adds notes; it does not patch bytes or replace function labels.
- Python reproduction tools and their limitations.

The broad maps are best used to jump to candidate counterparts. The report and reviewed listings are the starting points for decisions.

## Sources and provenance

[1] Microsoft, [PE Format, “The .pdata Section”](https://learn.microsoft.com/en-us/windows/win32/debug/pe-format#the-pdata-section). Used for packed-record layout context; the actual fields were checked against the supplied data and instructions.

[2] Hidden Palace, [Dead or Alive 5 (Jun 2, 2012 prototype)](https://hiddenpalace.org/Dead_or_Alive_5_(Jun_2,_2012_prototype)). Used only for public prototype-identification context.

[3] Team NINJA, [DOA5 official site archive](https://teamninja-studio.com/doa5/au/top.html). Used only to distinguish later documented updates from the three supplied builds.

All addresses, quoted executable strings, code comparisons, and hashes otherwise derive from the user's supplied files. The package manifest identifies the DOA5 inputs. Existing research annotations are treated as annotations, with question marks and candidate status preserved.
