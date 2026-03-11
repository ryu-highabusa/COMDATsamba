#!/usr/bin/env python3
"""
Extractor for Team Ninja-style .lnk/.bin pairs seen in Ninja Gaiden / Nioh-era archives.

Supported here:
- .lnk data archives with magic b'MSSG' and 32-byte file entries
- companion .bin name tables with magic b'LFMO'
- automatic endianness detection (big or little endian)
- single-file extraction and batch mode over a directory / glob
- optional decompression attempts when compressed_size != size or a flag is set

This script intentionally keeps some fields named conservatively because the exact
semantics may vary between games / builds.
"""

from __future__ import annotations

import argparse
import csv
import gzip
import json
import os
import re
import struct
import sys
import zlib
from dataclasses import dataclass
from pathlib import Path
from typing import Iterable, Iterator, Optional


# -----------------------------
# Helpers
# -----------------------------

INVALID_FS_CHARS = '<>:"\\|?*\x00'


def eprint(*args, **kwargs):
    print(*args, file=sys.stderr, **kwargs)


def read_cstring(buf: bytes, offset: int, encoding: str = 'latin1') -> str:
    if offset < 0 or offset >= len(buf):
        raise ValueError(f"CString offset out of range: 0x{offset:X}")
    end = buf.find(b'\x00', offset)
    if end < 0:
        end = len(buf)
    return buf[offset:end].decode(encoding, errors='replace')


def u32(buf: bytes, offset: int, endian: str) -> int:
    return struct.unpack_from(endian + 'I', buf, offset)[0]


def u64(buf: bytes, offset: int, endian: str) -> int:
    return struct.unpack_from(endian + 'Q', buf, offset)[0]


def sanitize_relpath(name: str, fallback: str) -> Path:
    # Strip root-ish prefixes so archive names do not escape output directory.
    name = name.replace('\\', '/').lstrip('/')
    parts = []
    for part in name.split('/'):
        if not part or part == '.':
            continue
        if part == '..':
            parts.append('_')
            continue
        safe = ''.join('_' if ch in INVALID_FS_CHARS else ch for ch in part)
        parts.append(safe)
    if not parts:
        parts = [fallback]
    return Path(*parts)


def ensure_unique_path(path: Path) -> Path:
    if not path.exists():
        return path
    stem = path.stem
    suffix = path.suffix
    parent = path.parent
    i = 1
    while True:
        candidate = parent / f"{stem}_{i}{suffix}"
        if not candidate.exists():
            return candidate
        i += 1


def try_decompress(blob: bytes, expected_size: int) -> tuple[bytes, str]:
    """
    Best-effort decompression for variants where the archive stores compressed data.
    Tries the most likely zlib/deflate/gzip forms first. Raises ValueError if all fail.
    """
    errors = []

    attempts = [
        ('zlib', lambda b: zlib.decompress(b)),
        ('raw-deflate', lambda b: zlib.decompress(b, -zlib.MAX_WBITS)),
        ('gzip', lambda b: gzip.decompress(b)),
    ]

    # Some Team Ninja samples appear to have a 4-byte prefix before compressed data.
    if len(blob) > 4:
        attempts.extend([
            ('zlib+4', lambda b: zlib.decompress(b[4:])),
            ('raw-deflate+4', lambda b: zlib.decompress(b[4:], -zlib.MAX_WBITS)),
            ('gzip+4', lambda b: gzip.decompress(b[4:])),
        ])

    for label, fn in attempts:
        try:
            out = fn(blob)
            if expected_size and len(out) != expected_size:
                # Still accept it; keep the note for the manifest.
                return out, f'{label} (size mismatch: got {len(out)}, expected {expected_size})'
            return out, label
        except Exception as ex:  # noqa: BLE001
            errors.append(f'{label}: {ex}')

    raise ValueError('; '.join(errors))


# -----------------------------
# Parsed structures
# -----------------------------

@dataclass
class NameEntry:
    flags_or_zero: int
    index: int
    name_offset: int
    name: str


@dataclass
class ArchiveEntry:
    offset: int
    size: int
    packed_size: int
    flags: int

    @property
    def is_compressed(self) -> bool:
        return self.size != self.packed_size or self.flags != 0


@dataclass
class NameTable:
    path: Path
    endian: str
    version: int
    file_count: int
    unknown_0c: int
    entry_table_offset: int
    strings_offset: int
    order_name_offset: int
    unknown_1c: int
    unknown_20: int
    order_name: str
    entries: list[NameEntry]


@dataclass
class ArchiveTable:
    path: Path
    endian: str
    file_count: int
    archive_size: int
    alignment: int
    entries: list[ArchiveEntry]


# -----------------------------
# Detection / parsing
# -----------------------------


def score_lfmo(buf: bytes, endian: str) -> int:
    if len(buf) < 0x28 or buf[:4] != b'LFMO':
        return -1
    score = 0
    try:
        version = u32(buf, 4, endian)
        count = u32(buf, 8, endian)
        entry_table = u32(buf, 0x10, endian)
        strings_offset = u32(buf, 0x14, endian)
        order_name_offset = u32(buf, 0x18, endian)

        if version in (0, 1, 2):
            score += 2
        if 0 < count < 10_000_000:
            score += 2
        if 0x20 <= entry_table < len(buf):
            score += 2
        if 0 <= strings_offset < len(buf):
            score += 2
        if 0 <= order_name_offset < len(buf):
            score += 2
        if entry_table + count * 12 <= len(buf):
            score += 4
        if strings_offset <= len(buf) and order_name_offset <= len(buf):
            score += 1
    except Exception:
        return -1
    return score



def score_mssg(buf: bytes, endian: str) -> int:
    if len(buf) < 0x20 or buf[:4] != b'MSSG':
        return -1
    score = 0
    try:
        count = u64(buf, 8, endian)
        archive_size = u64(buf, 0x10, endian)
        align = u64(buf, 0x18, endian)

        if 0 < count < 10_000_000:
            score += 3
        if archive_size == len(buf):
            score += 4
        elif 0 < archive_size <= len(buf):
            score += 2
        if align != 0 and (align & (align - 1)) == 0:
            score += 2
        if 0x20 + count * 0x20 <= len(buf):
            score += 4
    except Exception:
        return -1
    return score



def detect_endian(buf: bytes, kind: str) -> str:
    if kind == 'LFMO':
        be = score_lfmo(buf, '>')
        le = score_lfmo(buf, '<')
    elif kind == 'MSSG':
        be = score_mssg(buf, '>')
        le = score_mssg(buf, '<')
    else:
        raise ValueError(f'Unsupported kind for detection: {kind}')

    if be < 0 and le < 0:
        raise ValueError(f'Could not detect endianness for {kind}')
    return '>' if be >= le else '<'



def parse_name_table(path: Path, forced_endian: Optional[str] = None) -> NameTable:
    buf = path.read_bytes()
    if buf[:4] != b'LFMO':
        raise ValueError(f'{path} is not an LFMO name table')

    endian = forced_endian or detect_endian(buf, 'LFMO')
    version = u32(buf, 4, endian)
    file_count = u32(buf, 8, endian)
    unknown_0c = u32(buf, 0x0C, endian)
    entry_table_offset = u32(buf, 0x10, endian)
    strings_offset = u32(buf, 0x14, endian)
    order_name_offset = u32(buf, 0x18, endian)
    unknown_1c = u32(buf, 0x1C, endian)
    unknown_20 = u32(buf, 0x20, endian)

    entries: list[NameEntry] = []
    for i in range(file_count):
        off = entry_table_offset + i * 12
        if off + 12 > len(buf):
            raise ValueError(f'LFMO entry {i} exceeds file size')
        a, b, c = struct.unpack_from(endian + 'III', buf, off)
        name = read_cstring(buf, c)
        entries.append(NameEntry(a, b, c, name))

    order_name = read_cstring(buf, order_name_offset)

    return NameTable(
        path=path,
        endian=endian,
        version=version,
        file_count=file_count,
        unknown_0c=unknown_0c,
        entry_table_offset=entry_table_offset,
        strings_offset=strings_offset,
        order_name_offset=order_name_offset,
        unknown_1c=unknown_1c,
        unknown_20=unknown_20,
        order_name=order_name,
        entries=entries,
    )



def parse_archive(path: Path, forced_endian: Optional[str] = None) -> ArchiveTable:
    buf = path.read_bytes()
    if buf[:4] != b'MSSG':
        raise ValueError(f'{path} is not an MSSG archive')

    endian = forced_endian or detect_endian(buf, 'MSSG')
    file_count = u64(buf, 8, endian)
    archive_size = u64(buf, 0x10, endian)
    alignment = u64(buf, 0x18, endian)

    entries: list[ArchiveEntry] = []
    for i in range(file_count):
        off = 0x20 + i * 0x20
        if off + 0x20 > len(buf):
            raise ValueError(f'MSSG entry {i} exceeds file size')
        offset, size, packed_size, flags = struct.unpack_from(endian + 'QQQQ', buf, off)
        entries.append(ArchiveEntry(offset, size, packed_size, flags))

    return ArchiveTable(
        path=path,
        endian=endian,
        file_count=file_count,
        archive_size=archive_size,
        alignment=alignment,
        entries=entries,
    )


# -----------------------------
# Pairing / extraction
# -----------------------------


def guess_paired_bin(lnk_path: Path) -> Optional[Path]:
    candidate = lnk_path.with_suffix('.bin')
    return candidate if candidate.exists() else None



def iter_targets(inputs: list[str], recurse: bool) -> Iterator[Path]:
    seen: set[Path] = set()
    for raw in inputs:
        p = Path(raw)

        if any(ch in raw for ch in '*?[]'):
            for hit in sorted(Path().glob(raw)):
                if hit.is_file() and hit.suffix.lower() == '.lnk' and hit not in seen:
                    seen.add(hit)
                    yield hit
            continue

        if p.is_dir():
            it = p.rglob('*.lnk') if recurse else p.glob('*.lnk')
            for hit in sorted(it):
                if hit.is_file() and hit not in seen:
                    seen.add(hit)
                    yield hit
            continue

        if p.is_file() and p.suffix.lower() == '.lnk' and p not in seen:
            seen.add(p)
            yield p



def extract_one(
    lnk_path: Path,
    bin_path: Optional[Path],
    out_root: Path,
    force_endian: Optional[str],
    add_index_prefix: bool,
    dry_run: bool,
    keep_raw_on_decompress_fail: bool,
) -> dict:
    archive = parse_archive(lnk_path, force_endian)
    names = parse_name_table(bin_path, force_endian) if bin_path else None

    if names and names.file_count != archive.file_count:
        eprint(
            f'[warn] Count mismatch for {lnk_path.name}: '
            f'archive={archive.file_count}, names={names.file_count}'
        )

    out_dir = out_root / lnk_path.stem
    manifest_rows = []
    buf = lnk_path.read_bytes()

    if not dry_run:
        out_dir.mkdir(parents=True, exist_ok=True)

    for i, entry in enumerate(archive.entries):
        raw_name = names.entries[i].name if names and i < len(names.entries) else f'file_{i:05d}.bin'
        rel = sanitize_relpath(raw_name, f'file_{i:05d}.bin')
        if add_index_prefix:
            rel = rel.with_name(f'{i:05d}_{rel.name}')
        out_path = out_dir / rel

        if entry.offset + entry.packed_size > len(buf):
            raise ValueError(
                f'Entry {i} exceeds archive size: offset=0x{entry.offset:X}, '
                f'packed=0x{entry.packed_size:X}, file=0x{len(buf):X}'
            )

        blob = buf[entry.offset: entry.offset + entry.packed_size]
        stored = blob
        stored_note = 'stored'
        failed_to_decompress = False

        if entry.is_compressed:
            try:
                stored, stored_note = try_decompress(blob, entry.size)
            except Exception as ex:  # noqa: BLE001
                failed_to_decompress = True
                stored_note = f'compressed-but-unknown ({ex})'
                if not keep_raw_on_decompress_fail:
                    raise

        if not dry_run:
            out_path.parent.mkdir(parents=True, exist_ok=True)
            out_path = ensure_unique_path(out_path)
            out_path.write_bytes(stored)

        manifest_rows.append({
            'index': i,
            'name': raw_name,
            'output_path': str(out_path if not dry_run else out_dir / rel),
            'offset': entry.offset,
            'offset_hex': f'0x{entry.offset:X}',
            'size': entry.size,
            'packed_size': entry.packed_size,
            'flags': entry.flags,
            'flags_hex': f'0x{entry.flags:X}',
            'was_compressed': entry.is_compressed,
            'stored_note': stored_note,
            'decompress_failed': failed_to_decompress,
        })

    summary = {
        'archive': str(lnk_path),
        'archive_magic': 'MSSG',
        'archive_endian': 'big' if archive.endian == '>' else 'little',
        'archive_file_count': archive.file_count,
        'archive_size': archive.archive_size,
        'archive_alignment': archive.alignment,
        'names_path': str(bin_path) if bin_path else None,
        'names_magic': 'LFMO' if names else None,
        'names_endian': ('big' if names and names.endian == '>' else 'little') if names else None,
        'names_file_count': names.file_count if names else None,
        'order_name': names.order_name if names else None,
        'output_dir': str(out_dir),
        'entries': manifest_rows,
    }

    if not dry_run:
        (out_dir / '_manifest.json').write_text(json.dumps(summary, indent=2), encoding='utf-8')
        with (out_dir / '_manifest.csv').open('w', newline='', encoding='utf-8') as fh:
            writer = csv.DictWriter(fh, fieldnames=list(manifest_rows[0].keys()) if manifest_rows else ['index'])
            writer.writeheader()
            writer.writerows(manifest_rows)

    return summary


# -----------------------------
# CLI
# -----------------------------


def build_argparser() -> argparse.ArgumentParser:
    ap = argparse.ArgumentParser(
        description='Extract Team Ninja-style MSSG/LFMO .lnk/.bin archives.'
    )
    ap.add_argument(
        'inputs',
        nargs='+',
        help='One or more .lnk files, directories, or globs (for example: message.lnk or "*.lnk")',
    )
    ap.add_argument(
        '-b', '--bin',
        dest='bin_path',
        help='Explicit companion .bin name table. Only valid when extracting a single .lnk.',
    )
    ap.add_argument(
        '-o', '--out',
        default='extracted_lnk',
        help='Output root directory. Default: extracted_lnk',
    )
    ap.add_argument(
        '--endian',
        choices=('auto', 'big', 'little'),
        default='auto',
        help='Force integer endianness instead of auto-detecting.',
    )
    ap.add_argument(
        '--recurse',
        action='store_true',
        help='When an input is a directory, search recursively for .lnk files.',
    )
    ap.add_argument(
        '--index-prefix',
        action='store_true',
        help='Prefix each extracted filename with its numeric archive index.',
    )
    ap.add_argument(
        '--dry-run',
        action='store_true',
        help='Parse and validate, but do not write extracted files.',
    )
    ap.add_argument(
        '--strict-compression',
        action='store_true',
        help='Fail instead of writing raw data when a compressed entry cannot be decompressed.',
    )
    ap.add_argument(
        '--dump-names-only',
        action='store_true',
        help='Read the companion .bin and print the name list without extracting the .lnk.',
    )
    return ap



def main(argv: Optional[list[str]] = None) -> int:
    ap = build_argparser()
    args = ap.parse_args(argv)

    force_endian = None
    if args.endian == 'big':
        force_endian = '>'
    elif args.endian == 'little':
        force_endian = '<'

    targets = list(iter_targets(args.inputs, recurse=args.recurse))
    if not targets:
        ap.error('No .lnk files matched the supplied input(s).')

    if args.bin_path and len(targets) != 1:
        ap.error('--bin can only be used when exactly one .lnk target is supplied.')

    out_root = Path(args.out)
    extracted = 0

    for lnk_path in targets:
        lnk_path = lnk_path.resolve()
        bin_path = Path(args.bin_path).resolve() if args.bin_path else guess_paired_bin(lnk_path)

        if args.dump_names_only:
            if not bin_path or not bin_path.exists():
                raise SystemExit(f'No companion .bin found for {lnk_path}')
            table = parse_name_table(bin_path, force_endian)
            print(f'# {bin_path}')
            print(f'# endian={"big" if table.endian == ">" else "little"} count={table.file_count} order={table.order_name!r}')
            for i, entry in enumerate(table.entries):
                print(f'{i:05d}  {entry.name}')
            continue

        summary = extract_one(
            lnk_path=lnk_path,
            bin_path=bin_path,
            out_root=out_root,
            force_endian=force_endian,
            add_index_prefix=args.index_prefix,
            dry_run=args.dry_run,
            keep_raw_on_decompress_fail=not args.strict_compression,
        )
        extracted += 1
        print(
            f"[ok] {lnk_path.name}: {summary['archive_file_count']} entries -> {summary['output_dir']} "
            f"(archive {summary['archive_endian']}-endian"
            + (f", names {summary['names_endian']}-endian" if summary['names_path'] else '')
            + ')' 
        )

    if extracted == 0 and not args.dump_names_only:
        eprint('[info] Nothing extracted.')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
