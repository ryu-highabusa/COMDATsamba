#!/usr/bin/env python3
"""Export original DOA2 file-table paths and a unique, flat-name dd table.

Usage: python read_file_table.py MAIN_DECRYPTED.bin OUTPUT_PREFIX
Standard library only; applies to the three recovered arcade builds.
"""
import csv
import struct
import sys
from pathlib import Path

BASE = 0x0C020000


def read_entries(data):
    name = data.index(b"c:/doa2/bin/anime_cm.bin\0")
    marker = struct.pack("<II", BASE + name, 0x1E0000)
    # Locate the pointer/ROM-offset pair; length is verified below.
    candidates = []
    pos = 0
    while (pos := data.find(marker, pos)) >= 0:
        if pos % 4 == 0:
            candidates.append(pos)
        pos += 1
    if len(candidates) != 1:
        raise ValueError(f"Expected one file table, found {len(candidates)}")
    start = candidates[0]
    rows = []
    pos = start
    while pos + 12 <= len(data):
        pointer, offset, length = struct.unpack_from("<III", data, pos)
        if not BASE <= pointer < BASE + len(data):
            break
        at = pointer - BASE
        path = data[at:data.index(0, at)].decode("ascii")
        if not path.startswith("c:/doa2/"):
            break
        if not length or offset + length > 0x0B000000:
            raise ValueError(f"Invalid asset entry at {BASE+pos:08X}")
        rows.append((BASE+pos, pointer, offset, length, path))
        pos += 12
    return BASE + start, rows


def main():
    if len(sys.argv) != 3:
        raise SystemExit(__doc__)
    data = Path(sys.argv[1]).read_bytes()
    prefix = Path(sys.argv[2])
    prefix.parent.mkdir(parents=True, exist_ok=True)
    address, entries = read_entries(data)
    with prefix.with_suffix(".csv").open("w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow(["entry_ram_address", "name_ram_address", "rom_offset",
                         "size_decimal", "size_hex", "original_path"])
        for entry, pointer, offset, length, path in entries:
            writer.writerow([f"0x{entry:08X}", f"0x{pointer:08X}", f"0x{offset:08X}",
                             length, f"0x{length:X}", path])
    seen = set()
    with prefix.with_suffix(".tdt").open("w", encoding="ascii", newline="\n") as f:
        for _, _, offset, length, path in entries:
            name = path.removeprefix("c:/doa2/").replace("/", "_")
            if name in seen:
                name += f"_at_{offset:08X}"
            seen.add(name)
            f.write(f"{offset:08X}\t{length}\t{name}\n")
    print(f"Table 0x{address:08X}: {len(entries)} entries")


if __name__ == "__main__":
    main()
