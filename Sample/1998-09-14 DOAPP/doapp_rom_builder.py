#!/usr/bin/env python3
"""Build the MAME DOA++ banked-ROM image from the chip ZIP files.

This does not perform cryptographic decryption.  DOA++'s CPU-visible ROM bytes
match the dumped chip bytes.  The only transformation is interleaving the two
8-bit program ROMs into the even and odd lanes of a 16-bit image.
"""

from __future__ import annotations

import argparse
import hashlib
from pathlib import Path
import sys
import zipfile


REGION_SIZE = 0x02800000
PROGRAM_SIZE = 0x00200000

COMMON_ROMS = (
    ("doapp-0.216", 0x00400000, 0x00400000, "a744567a3d75634098b1749103307981be9acbdd"),
    ("doapp-1.217", 0x00800000, 0x00400000, "3fae1fcb4665ba8bad391881b26c2d087718d42f"),
    ("doapp-2.218", 0x00C00000, 0x00400000, "6422972cf5d30a0f09f0c20f042691d5969207b4"),
    ("doapp-3.219", 0x01000000, 0x00400000, "8631fde93a1da6325d7b31c7edf12c964f0ac4fc"),
    ("doapp-4.220", 0x01400000, 0x00400000, "5bd66da993f0db966581dde80dd7e5b377754412"),
    ("doapp-5.221", 0x01800000, 0x00400000, "b1d1b9532b5f074ce216a603436d5674d136865d"),
)

PROGRAM_ROMS = {
    "doapp": (
        ("doapp120.bin", 0, "373756d9b88b45c677e987ee1e5cb2d5446ecfe8"),
        ("doapp119.bin", 1, "f2dae4810ca78075fc3007a6001531a455235a2e"),
    ),
    "doappk": (
        ("doapp_u0120.120", 0, "d38783110440ffa00036b86f97bff5edb6a5673f"),
        ("doapp_u0119.119", 1, "616b3e65a32768767209ae77c48ad34d11b31754"),
    ),
}

EXPECTED_OUTPUT_SHA256 = {
    "doapp": "5825f83cbb826e0cd5cb53c5029b905c862c7d153cd093347288322917921418",
    "doappk": "57ce44b80b83609600b9875ba79f35cf0ddfdeb71ce162fd55abc66a9c080a00",
}


def digest(data: bytes, algorithm: str = "sha1") -> str:
    return hashlib.new(algorithm, data).hexdigest()


def read_archives(paths: list[Path]) -> dict[str, bytes]:
    members: dict[str, bytes] = {}
    for archive in paths:
        with zipfile.ZipFile(archive) as zf:
            for info in zf.infolist():
                if not info.is_dir():
                    members[Path(info.filename).name] = zf.read(info)
    return members


def checked_member(
    members: dict[str, bytes], name: str, expected_size: int, expected_sha1: str
) -> bytes:
    try:
        data = members[name]
    except KeyError:
        raise SystemExit(f"missing required ROM member: {name}") from None
    if len(data) != expected_size:
        raise SystemExit(
            f"wrong size for {name}: got 0x{len(data):x}, expected 0x{expected_size:x}"
        )
    actual_sha1 = digest(data)
    if actual_sha1 != expected_sha1:
        raise SystemExit(
            f"wrong SHA-1 for {name}: got {actual_sha1}, expected {expected_sha1}"
        )
    return data


def build_image(set_name: str, members: dict[str, bytes]) -> bytes:
    image = bytearray(REGION_SIZE)

    # ROM 120 supplies the even byte lane and ROM 119 supplies the odd lane.
    for name, lane, sha1 in PROGRAM_ROMS[set_name]:
        data = checked_member(members, name, 0x00100000, sha1)
        image[lane:PROGRAM_SIZE:2] = data

    for name, offset, size, sha1 in COMMON_ROMS:
        data = checked_member(members, name, size, sha1)
        image[offset : offset + size] = data

    return bytes(image)


def first_difference(left: bytes, right: bytes) -> int | None:
    limit = min(len(left), len(right))
    for offset in range(limit):
        if left[offset] != right[offset]:
            return offset
    return None if len(left) == len(right) else limit


def write_new(path: Path, data: bytes, force: bool) -> None:
    if path.exists() and not force:
        raise SystemExit(f"refusing to overwrite {path}; pass --force to replace it")
    path.write_bytes(data)


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Reconstruct a flat DOA++ MAME bankedroms image from its ROM ZIP(s)."
    )
    parser.add_argument("parent_zip", type=Path, help="path to doapp.zip")
    parser.add_argument(
        "--clone-zip",
        type=Path,
        help="path to doappk.zip (required when building the Korean set)",
    )
    parser.add_argument(
        "--set",
        choices=sorted(PROGRAM_ROMS),
        help="set to build; defaults to doappk when --clone-zip is present",
    )
    parser.add_argument("-o", "--output", type=Path, help="40 MiB output filename")
    parser.add_argument(
        "--program-output",
        type=Path,
        help="also write the first 2 MiB as a convenient Ghidra import",
    )
    parser.add_argument(
        "--verify",
        type=Path,
        help="compare the reconstructed image to an existing 40 MiB dump",
    )
    parser.add_argument("--force", action="store_true", help="overwrite output files")
    return parser.parse_args()


def main() -> int:
    args = parse_args()
    set_name = args.set or ("doappk" if args.clone_zip else "doapp")
    if set_name == "doappk" and not args.clone_zip:
        raise SystemExit("the doappk set requires --clone-zip doappk.zip")

    archives = [args.parent_zip]
    if args.clone_zip:
        archives.append(args.clone_zip)
    members = read_archives(archives)
    image = build_image(set_name, members)

    output = args.output or Path(f"{set_name}_bankedroms.bin")
    write_new(output, image, args.force)
    output_sha256 = digest(image, "sha256")
    expected = EXPECTED_OUTPUT_SHA256[set_name]
    print(f"wrote {output} ({len(image)} bytes)")
    print(f"SHA-256 {output_sha256}")
    print(f"known-dump match: {'yes' if output_sha256 == expected else 'NO'}")

    if args.program_output:
        write_new(args.program_output, image[:PROGRAM_SIZE], args.force)
        print(f"wrote {args.program_output} ({PROGRAM_SIZE} bytes)")
        print(f"program SHA-256 {digest(image[:PROGRAM_SIZE], 'sha256')}")

    if args.verify:
        reference = args.verify.read_bytes()
        difference = first_difference(image, reference)
        if difference is not None:
            print(
                f"verification FAILED: first difference at 0x{difference:08x} "
                f"(built size 0x{len(image):x}, reference size 0x{len(reference):x})",
                file=sys.stderr,
            )
            return 1
        print(f"verification passed: output is byte-for-byte identical to {args.verify}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
