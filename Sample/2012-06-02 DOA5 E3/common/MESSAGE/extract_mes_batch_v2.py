#!/usr/bin/env python3
import argparse
import csv
import glob
import hashlib
import json
import os
import sys
from typing import Dict, List

LANG_NAMES = ["JP", "EN", "FR", "DE", "IT", "ES"]


def be32(b: bytes, off: int) -> int:
    return int.from_bytes(b[off:off + 4], "big")


def read_cstr(b: bytes) -> str:
    i = b.find(0)
    raw = b[:i] if i != -1 else b
    return raw.decode("ascii", errors="ignore")


def decode_utf16be_z(raw: bytes) -> str:
    return raw.rstrip(b"\x00").decode("utf-16-be", errors="replace")


def parse_common(data: bytes, base: int) -> Dict[str, int]:
    return {
        "signature": read_cstr(data[base:base + 8]),
        "version_flags": be32(data, base + 8),
        "header_0c": be32(data, base + 0x0C),
        "size": be32(data, base + 0x10),
        "count1": be32(data, base + 0x14),
        "count2": be32(data, base + 0x18),
        "zero1": be32(data, base + 0x1C),
        "table1_rel": be32(data, base + 0x20),
        "table2_rel": be32(data, base + 0x24),
        "zero2": be32(data, base + 0x28),
        "zero3": be32(data, base + 0x2C),
        "name": read_cstr(data[base + 0x30:base + 0x40]),
        "field_40": be32(data, base + 0x40),
        "field_44": be32(data, base + 0x44),
    }


def parse_mes(path: str) -> Dict:
    with open(path, "rb") as fh:
        data = fh.read()

    top = parse_common(data, 0)
    if top["signature"] != "LANG":
        raise ValueError(f"{os.path.basename(path)}: unsupported top-level signature {top['signature']!r}")

    ptrs = [be32(data, top["table1_rel"] + i * 4) for i in range(top["count1"])]
    sizes = [be32(data, top["table2_rel"] + i * 4) for i in range(top["count1"])]

    out = {
        "file": os.path.basename(path),
        "path": os.path.abspath(path),
        "file_size": len(data),
        "sha256": hashlib.sha256(data).hexdigest(),
        "top_header": top,
        "languages": [],
    }

    for lang_index, (ctg_off, ctg_size) in enumerate(zip(ptrs, sizes)):
        ctg = parse_common(data, ctg_off)
        ctg_ptrs = [be32(data, ctg_off + ctg["table1_rel"] + i * 4) for i in range(ctg["count1"])]
        ctg_sizes = [be32(data, ctg_off + ctg["table2_rel"] + i * 4) for i in range(ctg["count1"])]

        children = []
        for child_index, (rel_off, child_size) in enumerate(zip(ctg_ptrs, ctg_sizes)):
            sp_base = ctg_off + rel_off
            sp = parse_common(data, sp_base)
            if sp["signature"] != "STRPACK":
                raise ValueError(
                    f"{os.path.basename(path)}: expected STRPACK at 0x{sp_base:X}, got {sp['signature']!r}"
                )

            s_ptrs = [be32(data, sp_base + sp["table1_rel"] + i * 4) for i in range(sp["count1"])]
            s_lens = [be32(data, sp_base + sp["table2_rel"] + i * 4) for i in range(sp["count1"])]
            strings = [
                decode_utf16be_z(data[sp_base + so:sp_base + so + sl])
                for so, sl in zip(s_ptrs, s_lens)
            ]
            children.append(
                {
                    "index": child_index,
                    "offset": sp_base,
                    "size": child_size,
                    "header": sp,
                    "offsets": s_ptrs,
                    "lengths": s_lens,
                    "strings": strings,
                }
            )

        out["languages"].append(
            {
                "index": lang_index,
                "name_guess": LANG_NAMES[lang_index] if lang_index < len(LANG_NAMES) else f"LANG_{lang_index}",
                "offset": ctg_off,
                "size": ctg_size,
                "header": ctg,
                "children": children,
            }
        )

    return out


def write_side_by_side_csv(parsed: Dict, out_csv: str) -> None:
    langs = parsed.get("languages", [])
    max_child_count = max((len(lang.get("children", [])) for lang in langs), default=0)

    with open(out_csv, "w", newline="", encoding="utf-8-sig") as f:
        w = csv.writer(f)
        w.writerow(["file", "child_index", "child_name", "index", *LANG_NAMES])

        for child_index in range(max_child_count):
            max_string_count = 0
            child_name = ""
            lang_children = []

            for lang in langs:
                children = lang.get("children", [])
                child = children[child_index] if child_index < len(children) else None
                lang_children.append(child)
                if child is not None:
                    max_string_count = max(max_string_count, len(child.get("strings", [])))
                    child_name = child_name or child.get("header", {}).get("name", "")

            for string_index in range(max_string_count):
                row = [parsed["file"], child_index, child_name, string_index]
                for child in lang_children:
                    if child is None:
                        row.append("")
                    else:
                        strings = child.get("strings", [])
                        row.append(strings[string_index] if string_index < len(strings) else "")
                w.writerow(row)


def expand_targets(args: List[str]) -> List[str]:
    targets: List[str] = []
    seen = set()

    for arg in args:
        matched: List[str] = []

        if os.path.isdir(arg):
            matched = sorted(glob.glob(os.path.join(arg, "*.BIN")))
        elif glob.has_magic(arg):
            matched = sorted(glob.glob(arg))
        else:
            matched = [arg]

        for path in matched:
            if os.path.isdir(path):
                nested = sorted(glob.glob(os.path.join(path, "*.BIN")))
                for n in nested:
                    ap = os.path.abspath(n)
                    if ap not in seen:
                        seen.add(ap)
                        targets.append(ap)
                continue

            ap = os.path.abspath(path)
            if ap not in seen:
                seen.add(ap)
                targets.append(ap)

    return [t for t in targets if os.path.isfile(t)]


def output_paths(path: str, output_dir: str = None):
    base = os.path.basename(path)
    stem, _ext = os.path.splitext(base)
    out_dir = output_dir or os.path.dirname(os.path.abspath(path)) or os.getcwd()
    return os.path.join(out_dir, stem + ".json"), os.path.join(out_dir, stem + ".csv")


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Extract DOA5 MES_*.BIN text packs to JSON and side-by-side CSV."
    )
    parser.add_argument(
        "inputs",
        nargs="+",
        help="One or more BIN files, directories, or glob patterns such as 'MES_*.BIN' or '*.BIN'.",
    )
    parser.add_argument(
        "-o",
        "--output-dir",
        help="Write JSON/CSV files to this directory instead of next to each input file.",
    )
    args = parser.parse_args()

    targets = expand_targets(args.inputs)
    if not targets:
        print("No input files matched.", file=sys.stderr)
        return 1

    failures = 0
    for path in targets:
        try:
            parsed = parse_mes(path)
            out_json, out_csv = output_paths(path, args.output_dir)
            with open(out_json, "w", encoding="utf-8") as f:
                json.dump(parsed, f, ensure_ascii=False, indent=2)
            write_side_by_side_csv(parsed, out_csv)
            print(f"wrote {out_json}")
            print(f"wrote {out_csv}")
        except Exception as exc:
            failures += 1
            print(f"error: {path}: {exc}", file=sys.stderr)

    return 1 if failures else 0


if __name__ == "__main__":
    raise SystemExit(main())
