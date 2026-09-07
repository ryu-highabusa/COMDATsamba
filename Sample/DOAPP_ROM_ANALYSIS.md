# Dead or Alive++ ROM reconstruction findings

## Result

The supplied `doapp` and `doappk` ROMs are not encrypted relative to the two
files described as decrypted memory dumps. Reconstructing MAME's `bankedroms`
region produces each 40 MiB dump byte-for-byte.

The apparent transformation is only bus-lane interleaving:

- ROM 120 supplies offsets `0, 2, 4, ...` (the even byte lane).
- ROM 119 supplies offsets `1, 3, 5, ...` (the odd byte lane).
- The six 4 MiB mask ROMs are copied directly, without byte swapping, address
  scrambling, XOR, or cryptographic transformation.

The Korean clone changes only the two program ROMs. Its six large data ROMs
come from the parent `doapp` archive.

## Proven layout

| Backing offset | Size | `doapp` source | `doappk` source | Operation |
|---:|---:|---|---|---|
| `0x0000000` | `0x200000` | `doapp120.bin` + `doapp119.bin` | `doapp_u0120.120` + `doapp_u0119.119` | Even/odd interleave |
| `0x0200000` | `0x200000` | zero-filled | zero-filled | Gap |
| `0x0400000` | `0x400000` | `doapp-0.216` | parent ROM | Direct copy |
| `0x0800000` | `0x400000` | `doapp-1.217` | parent ROM | Direct copy |
| `0x0c00000` | `0x400000` | `doapp-2.218` | parent ROM | Direct copy |
| `0x1000000` | `0x400000` | `doapp-3.219` | parent ROM | Direct copy |
| `0x1400000` | `0x400000` | `doapp-4.220` | parent ROM | Direct copy |
| `0x1800000` | `0x400000` | `doapp-5.221` | parent ROM | Direct copy |
| `0x1c00000` | `0xc00000` | zero-filled | zero-filled | Unpopulated region |

Output SHA-256 values:

- `doapp`: `5825f83cbb826e0cd5cb53c5029b905c862c7d153cd093347288322917921418`
- `doappk`: `57ce44b80b83609600b9875ba79f35cf0ddfdeb71ce162fd55abc66a9c080a00`

These are also the SHA-256 values of the supplied memory dumps.

`mg05` is the eight-byte data for the game-board CAT702 protection device. It
is not part of the 40 MiB `bankedroms` image and is not used to transform the
ROM contents.

## Hardware and runtime mapping relevant to Ghidra

MAME maps an 8 MiB bank window at CPU addresses `0x1f000000` through
`0x1f7fffff`. A write to `0x1fb00006` selects an 8 MiB chunk of the backing
region. This 40 MiB backing region has five bank-sized slots: populated bytes
end partway through bank 3, and bank 4 is entirely unpopulated/zero-filled. The
MAME driver attaches no ROM decryption initializer; the game uses `empty_init`.

The optional 2 MiB `program-output` is an exact reconstruction of the two
interleaved program ROMs, but it is **not** a flat executable image and should
not be imported wholesale at `0x80000000`.

Runtime comparison establishes a relocated segment:

| Program-ROM file range | Runtime RAM range | Relationship |
|---|---|---|
| `0x000a0000..0x0013092f` | `0x80097e18..0x80128747` | Byte-for-byte identical |

Thus the copied segment obeys:

```text
runtime address = 0x7fff7e18 + program-ROM file offset
```

For example, the word at program-ROM file offset `0x000ff000` appears at
runtime `0x800f6e18` and jumps to nearby address `0x800f6e2c`. This resolves
the internal control flow correctly; treating file offset `0x000ff000` as
runtime `0x800ff000` does not.

The simplest and most accurate Ghidra corpus is therefore a live 4 MiB RAM
dump, imported as:

- Processor: MIPS R3000 / 32-bit little-endian
- Image base: `0x80000000`
- File offset: `0`

This preserves the game's actual copied code, BSS/global addresses, runtime
player records, and internal jump targets. A neutral-match dump makes a useful
baseline. Start analysis around the populated code segment rather than forcing
disassembly across the entire RAM image.

Do not map the complete 40 MiB file contiguously at `0x1f000000`: only one
8 MiB bank is CPU-visible there at a time. If the large data ROMs become
important, represent each 8 MiB chunk as a Ghidra overlay at the bank window,
or retain the complete file as a separate backing-store block.

## Rebuilding and checking the images

Parent set:

```sh
python doapp_rom_builder.py doapp.zip \
  -o doapp_bankedroms.bin \
  --program-output doapp_program.bin \
  --verify doapp_decryptedrom_dumpedfrommemory.bin
```

Korean clone:

```sh
python doapp_rom_builder.py doapp.zip \
  --clone-zip doappk.zip --set doappk \
  -o doappk_bankedroms.bin \
  --program-output doappk_program.bin \
  --verify doappK_decryptedrom_dumpedfrommemory.bin
```
