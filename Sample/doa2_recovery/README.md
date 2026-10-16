# DOA2 arcade: reproducible extraction and clean main programs

Recovered from the three supplied original 4 MiB IC22 images. The binaries in
`decoded/` were decrypted and decompressed directly from ROM, not copied from
live RAM. Original uploads are unchanged.

## Use the clean programs in Ghidra

Import as raw binary, select **SuperH SH-4, little endian, 32 bit**, and set the
load address to **0x0C020000**. Start disassembly at **0x0C020000**.
These are decoded main-program images for analysis; they are not replacement
IC22 images that can be dropped into a ROM set unchanged.

| Build | Input IC22 | Decoded file | Decoded length | File table |
| --- | --- | --- | --- | --- |
| doa2 | epr-22207.ic22 | decoded/doa2_main_decrypted.bin | 0x1F2800 | 0x0C138760 |
| doa2a | epr-22121a.ic22 | decoded/doa2a_main_decrypted.bin | 0x1F3E00 | 0x0C139AE8 |
| doa2m | doa2verm.ic22 | decoded/doa2m_main_decrypted.bin | 0x1F7E00 | 0x0C13C4E0 |

The expanded files are longer than the encrypted slices because some protected
streams also use compression.

## Recover the Linux extraction command

Your attachment suffix is `.tdt`. Its rows are plain text:

```text
HEX_ROM_OFFSET    DECIMAL_BYTE_LENGTH    OUTPUT_FILENAME
00000500          1838624                MainROM.bin
001C1320          77314                  BootROM.bin
```

This is enough for GNU `dd`. For example, this reproduces your original DOA2
encrypted `MainROM.bin` exactly:

```bash
dd if=epr-22207.ic22 of=MainROM.bin \
  iflag=skip_bytes,count_bytes skip=$((0x500)) count=1838624 status=none
```

This extracts its unencrypted boot loader:

```bash
dd if=epr-22207.ic22 of=BootROM.bin \
  iflag=skip_bytes,count_bytes skip=$((0x1C1320)) count=77314 status=none
```

I cannot establish the exact historical command you typed, but this equivalent
Bash loop performs the whole table extraction without a separate extractor
application or saved script. Run it in a directory containing the original ROM
and TDT. The address prefix prevents duplicate filenames from overwriting one
another; out-of-range entries are skipped rather than emitted as partial files.

```bash
rom=epr-22207.ic22
table=doa2_extraction.tdt
mkdir -p unpacked
total=$(stat -c %s -- "$rom")
while read -r offset length name rest; do
  [[ -z $offset ]] && continue
  (( 16#$offset + length <= total )) || continue
  dd if="$rom" of="unpacked/${offset}_${name}" \
    iflag=skip_bytes,count_bytes skip=$((16#$offset)) count="$length" status=none
done < <(tr -d '\r' < "$table")
```

The included reusable equivalent preserves the original names, adding an
address suffix to repeated names:

```bash
bash tools/extract_tdt.sh epr-22207.ic22 original_tables/doa2_extraction.tdt out/doa2
bash tools/extract_tdt.sh epr-22121a.ic22 original_tables/doa2a_extraction.tdt out/doa2a
bash tools/extract_tdt.sh doa2verm.ic22 original_tables/doa2m_extraction.tdt out/doa2m
```

GNU `dd` flags are used here; the commands are intended for Linux or WSL.
The supplied IC22 chips contain 63, 63, and 65 complete listed slices,
respectively, counting header, main program, loader, and padding. Each original
TDT has another 362 entries outside the supplied 4 MiB chip. The missing
`mpr-*` chip contents cannot be reconstructed from these attachments.

For extraction from a complete board image, preserve the cartridge address
layout: IC22 at 0x0000000, a 4 MiB unmapped gap at 0x0400000, and IC1 at
0x0800000, with successive 8 MiB chips following. Simply joining IC22 directly
to IC1 shifts every later file by 4 MiB. The blank gap is represented as FF
in MAME's ROM-board region. This mapping was checked against MAME's
`src/mame/sega/naomi.cpp` and `naomim2.cpp`.

## Why the main program looks encrypted

The plain boot loader configures the Sega 315-5881 protected stream reader,
reads 16 protected blocks, writes decoded bytes beginning at 0xAC020000
(the uncached alias of the same RAM), and jumps to 0x0C020000.

All three builds use MAME game key **0x0008AD01**. This is not a whole-file XOR
key. Each stream also needs its own sequence key and source word address.
MAME's implementation handles both decryption and optional decompression.

| Item | Location |
| --- | --- |
| Boot-loader ROM offset | little-endian uint32 at IC22 + 0x360 |
| Boot-loader load address | 0x0DE00000 |
| Boot-loader length | 0x12E02 |
| Protected-block table | boot-loader + 0x10460 = RAM 0x0DE10460 |
| Protected-read routine | boot-loader + 0x3310 = RAM 0x0DE03310 |
| Number of table rows | 16 |
| Row layout | stored length, ROM byte offset, decoded length, sequence key; four little-endian uint32 values |

The boot loader uses the ROM offset, decoded length, and sequence key in each
row. The runner also checks stored lengths for layout consistency. The first
row is `0x20004, 0x500, 0x20000, 0x7EA6`. Later rows include compressed data.
The recovered per-build rows are in `tables/*_decrypt_blocks.csv`.

The standalone runner adapts MAME's existing cipher code. It reads the boot
offset and block table from the selected ROM, applies the required word/byte
ordering, and concatenates the 16 decoded blocks.

### Rebuild and run on Linux / WSL

```bash
g++ -std=c++17 -O2 tools/decrypt_main.cpp -o decrypt_main
./decrypt_main epr-22207.ic22 decoded/doa2_main_decrypted.bin
./decrypt_main epr-22121a.ic22 decoded/doa2a_main_decrypted.bin
./decrypt_main doa2verm.ic22 decoded/doa2m_main_decrypted.bin
```

### Build on Windows with Visual Studio

In an **x64 Native Tools Command Prompt for VS 2022**, from this package's root:

```bat
cl /nologo /std:c++17 /EHsc /O2 tools\decrypt_main.cpp /Fe:decrypt_main.exe
decrypt_main.exe epr-22207.ic22 decoded\doa2_main_decrypted.bin
decrypt_main.exe epr-22121a.ic22 decoded\doa2a_main_decrypted.bin
decrypt_main.exe doa2verm.ic22 decoded\doa2m_main_decrypted.bin
```

The Linux build and all three decryptions were run here. The Windows command
is provided for your environment; it has not been executed on Windows here.

## Verification against your RAM dumps

The decoded entry point appears at file offset 0xC00 in each named
`doa2*_ramdump.bin`. Aligning there gives:

| Build | Matching bytes | Total decoded bytes | Match |
| --- | --- | --- | --- |
| doa2 | 2,039,751 | 2,041,856 | 99.89691% |
| doa2a | 2,045,293 | 2,047,488 | 99.89280% |
| doa2m | 2,061,909 | 2,063,872 | 99.90489% |

The program prefix matches exactly except for one byte at **0x0C0202B4**,
up to the following first larger difference regions:

- doa2: 0x0C0FFE80
- doa2a: 0x0C100780
- doa2m: 0x0C103380

0x0C0202B4 is a data slot between routines: ROM-decoded value 0x00; dump
values 0x12, 0x0E, and 0x0D respectively. The remaining mismatches occur later
in the images and are consistent with runtime-modified data. Their individual
meanings have not all been established; they were not copied back into the
clean ROM-derived outputs. This is a byte-level and structural validation;
replacement-ROM boot testing was not performed.

The recovered tables contain 418 / 418 / 420 asset rows. The filename strings,
ROM offsets, lengths, and table addresses were independently checked in the
decoded outputs. `verification.json` records the input/output hashes and
comparison counts; `SHA256SUMS` covers the package files.

## File-table structure and corrected extraction lists

Your observed 12-byte entries have this layout:

```c
struct Doa2FileEntry {
    uint32_t name_ptr;    // RAM pointer to original C:/doa2/... path
    uint32_t rom_offset;  // byte offset in cartridge layout, not a RAM pointer
    uint32_t byte_length;
};
```

`tables/*_assets.csv` preserves every original path and its entry address.
`tables/*_assets.tdt` contains the same verified asset offsets and lengths,
with unique flat output names. These regenerated TDTs contain asset rows only;
use `original_tables/` when you also want header/main/loader/padding slices.

Reproduce the verified tables with Python 3.9 or later:

```bash
python tools/read_file_table.py decoded/doa2_main_decrypted.bin tables/doa2_assets
python tools/read_file_table.py decoded/doa2a_main_decrypted.bin tables/doa2a_assets
python tools/read_file_table.py decoded/doa2m_main_decrypted.bin tables/doa2m_assets
```

Findings in the original TDTs:

- `bas00.apv` at 0x04AC5820 is listed as 478983 bytes; the game tables specify
  **478980 (0x74F04)** in all three builds. Regenerated lists use the game value.
- `lor00.bin` appears twice at different ROM offsets. The original game table
  also repeats that path, so both entries are preserved and disambiguated.
- `padding` appears twice. The shell extractor disambiguates the second output.
- Millennium's original TDT calls a file `wakabass.bin`; its game path says
  `c:/doa2/bin/wakabs.bin`. Regenerated lists preserve the game spelling.
- The shared MPR assets may remain identical while IC22-resident assets change:
  `anime_cm.bin` is 0x73EC bytes in doa2/doa2a and 0x76C0 in doa2m.

## Source and license

Cipher implementation and tables are adapted from MAME:

- https://github.com/mamedev/mame/blob/master/src/mame/sega/315-5881_crypt.cpp
- https://github.com/mamedev/mame/blob/master/src/mame/sega/315-5881_crypt.h
- https://github.com/mamedev/mame/blob/master/src/mame/sega/naomim2.cpp
- https://github.com/mamedev/mame/blob/master/src/mame/sega/naomi.cpp

Cipher credits: Andreas Naive, Olivier Galibert, David Haywood. See
`tools/LICENSE-BSD-3-Clause.txt` for source redistribution terms. The code
license does not apply to the game's binary data.
