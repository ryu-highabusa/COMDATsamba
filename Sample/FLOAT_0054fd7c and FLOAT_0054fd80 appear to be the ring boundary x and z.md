Upon further testing, FLOAT\_0054fd7c and FLOAT\_0054fd80 appear to be the ring boundary x and z. I changed FLOAT\_0054fd7c to 3.0f from 10.0f and the characters fell off the edge sooner.

Worked for 11s

That confirms the more precise interpretation: these are ring-out boundary half-extents, not floor collision dimensions.

Use:

`0054FD08 g\_dangerBoundaryHalfExtentX 0054FD0C g\_dangerBoundaryHalfExtentZ 0054FD7C g\_ringBoundaryHalfExtentX 0054FD80 g\_ringBoundaryHalfExtentZ`

Short assembly-friendly alternatives:

`DANGER\_BOUND\_X DANGER\_BOUND\_Z RING\_BOUND\_X RING\_BOUND\_Z`

The stage is therefore divided into three regions:

`if (abs(x) \> g\_ringBoundaryHalfExtentX || abs(z) \> g\_ringBoundaryHalfExtentZ) \{ // ring out \} else if (abs(x) \> g\_dangerBoundaryHalfExtentX || abs(z) \> g\_dangerBoundaryHalfExtentZ) \{ // danger-zone floor \} else \{ // ordinary safe floor \}`

Changing only 0x0054FD7C to 3.0f collapses the ring boundary along X while leaving Z unchanged. That explains the earlier fall: the visual floor remains present, but the gameplay code declares the character outside the ring and initiates the ring-out fall.

Accordingly, revise these function names:

`FUN\_0002CEE0 Stage\_IsPlayerOffsetBeyondRingBoundary FUN\_0002CFF0 Stage\_IsPointBeyondDangerBoundary FUN\_00072500 Stage\_IsPointInDangerZone FUN\_00022FC0 Battle\_ProcessDangerZoneHits`

One potentially important detail: initialization writes 24.0f to 0x54FD7C/80, but you report seeing 10.0f at runtime. If that was not just shorthand, the stage loader may update these values indirectly, which would not appear among ordinary Ghidra XREFs. This should catch it:

`wpset 54fd7c,8,w`

Set that before stage loading. If it first writes 24.0, then later writes the stage-specific boundary, the second writing PC should lead directly to the ring-dimension loader.

setting 54fd80 to 0.0 and jumping causes a ring-out... not sure if it's the Z... I wonder since the stages are square, a single float could suffice for the borders. Need to test each float individually. Any fun tests we can do together?

Worked for 31s

The assembly already strongly identifies them as separate X and Z bounds:

- 0x2CF3C loads XPOS\_P1, adds an X offset, then compares it against 0x54FD7C.

- 0x2CF80 loads ZPOS\_P1, adds a Z offset, then compares it against 0x54FD80.

So the likely labels remain:

`0054FD7C g\_ringBoundaryHalfExtentX 0054FD80 g\_ringBoundaryHalfExtentZ`

The fact that the normal arena is square explains why both ordinarily contain the same value, but the engine supports rectangular boundaries.

Why did Z = 0.0 wait until jumping? A zero-width boundary is extremely sensitive. While standing, the tested Z coordinates may be exactly zero. Jump animation/root motion may introduce a tiny Z displacement, immediately satisfying abs(z) \> 0.

## Let’s do the rectangular “hallway” test

This should settle the axes visibly.

### Test A: narrow X, enormous Z

`0054FD7C = 3.0f 0054FD80 = 100.0f`

Expected:

- Ring-out when abs(X) exceeds roughly 3.

- Effectively no Z ring boundary.

- The playable region becomes a long narrow corridor along Z.

### Test B: enormous X, narrow Z

`0054FD7C = 100.0f 0054FD80 = 3.0f`

Expected:

- Effectively no X ring boundary.

- Ring-out when abs(Z) exceeds roughly 3.

- The corridor rotates 90 degrees.

Use the debug overlay’s XPOS and ZPOS rather than screen direction, because the camera can make world X/Z visually confusing.

## Catch the exact failed coordinate

Set:

`bpset 2cfd8`

0x2CFD8 is the common “outside ring boundary” result in FUN\_0002CEE0.

When it stops, the function should still have approximately:

`g7 = tested world X g5 = tested world Z`

The preceding path tells us which comparison failed:

`2CFA4 X \< -g\_ringBoundaryHalfExtentX 2CFB0 X \> +g\_ringBoundaryHalfExtentX 2CFC8 Z \< -g\_ringBoundaryHalfExtentZ 2CFD4 Z \<= +g\_ringBoundaryHalfExtentZ; otherwise outside`

That breakpoint may be especially revealing during the Z = 0 jump test: we can see whether the animation produces a tiny nonzero g5.

## Other fun combinations

| **Danger X/Z** | **Ring X/Z** | **Expected result** |
| :-: | :-: | :-: |
| 0, 0 | 24, 24 | Almost the entire floor is explosive |
| 24, 24 | 24, 24 | No reachable danger band |
| 30, 30 | 24, 24 | Ring-out occurs before danger activation |
| 3, 20 | 24, 24 | Wide explosive strips along the X sides |
| 20, 3 | 24, 24 | Explosive strips along the Z sides |
| 10, 10 | 100, 100 | Huge invisible logical arena beyond the visible floor, if rendering permits |

The funniest useful test is probably:

`DANGER X = 3 DANGER Z = 20 RING X = 8 RING Z = 24`

That should produce a deliberately rectangular stage with thick explosive side lanes, narrow X ring-outs, and ordinary Z depth. If it behaves that way, we have effectively reconstructed the whole two-rectangle stage-boundary system.

FUN\_00004320\_1996doa(3).cCode

this is the only write to g\_ringBoundaryHalfExtentZ

That makes the picture cleaner. The attached function initializes both ring bounds once:

`g\_ringBoundaryHalfExtentX = 24.0f; g\_ringBoundaryHalfExtentZ = 24.0f; g\_dangerBoundaryHalfExtentX = 10.0f; g\_dangerBoundaryHalfExtentZ = 10.0f;`

So the defaults are:

`0054FD7C ring X = 24.0 0054FD80 ring Z = 24.0 0054FD08 danger X = 10.0 0054FD0C danger Z = 10.0`

The adjacent 24 and 10 pairs are understandably easy to mix up.

If 0x54FD80 has no other direct writer, DOA1 probably uses one common 48 × 48 logical arena across its stages. The different stages change the visuals, but not the fundamental ring dimensions. Separate X/Z variables still let the engine support rectangular arenas, even if the shipped configuration never uses that capability.

I’d annotate them:

`0054FD7C g\_ringBoundaryHalfExtentX Positive X magnitude of the logical ring-out boundary. Initialized to 24.0; no other direct writer identified. 0054FD80 g\_ringBoundaryHalfExtentZ Positive Z magnitude of the logical ring-out boundary. Initialized to 24.0; no other direct writer identified.`

And the function can provisionally become:

`FUN\_00004320 GameConfig\_InitializeRuntime`

It copies validated operator settings into runtime settings, unlocks Raidou based on bookkeeping time, then initializes timer frequency, match time, stage bounds, and miscellaneous runtime flags.

One distinction remains important: Ghidra showing one XREF write proves only one directly addressed write. An indirect pointer write would not appear. The decisive runtime check is:

`wpset 54fd80,4,w`

Run it from boot through several stage loads. If it stops only in FUN\_00004320, we can confidently document the ring boundary as global and stage-independent.




