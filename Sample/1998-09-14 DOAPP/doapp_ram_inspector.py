#!/usr/bin/env python3
"""Print the verified DOA++ P1/P2 core state from 4 MiB MAME RAM dumps."""

from __future__ import annotations

import argparse
from pathlib import Path
import struct


RAM_SIZE = 0x00400000
VIRTUAL_BASE = 0x80000000
PLAYER_BASE = 0x00096340
PLAYER_STRIDE = 0x60
MAX_HP_P1 = 0x000951A4
MAX_HP_P2 = 0x000951A6

ACTION_STATES = {
    0x00: "Neutral",
    0x01: "Air",
    0x02: "Air Attack",
    0x03: "Attack",
    0x04: "Throw",
    0x05: "Hold",
    0x06: "Hold Success",
    0x07: "Block Stun",
    0x08: "Critical Stun",
    0x09: "Hit Stun",
    0x0A: "Thrown",
    0x0B: "Held",
    0x0C: "Ground",
    0x0D: "Special",
    0x0E: "Down Attack",
    0x0F: "Down Attack Stun",
    0x10: "Throw Miss",
}


def u8(data: bytes, offset: int) -> int:
    return data[offset]


def u16(data: bytes, offset: int) -> int:
    return struct.unpack_from("<H", data, offset)[0]


def s32(data: bytes, offset: int) -> int:
    return struct.unpack_from("<i", data, offset)[0]


def controller_name(value: int) -> str:
    return {0: "CPU", 1: "Human"}.get(value, f"Unknown({value})")


def inspect_player(data: bytes, number: int) -> None:
    base = PLAYER_BASE + number * PLAYER_STRIDE
    state = u8(data, base + 0x33)
    print(
        f"P{number + 1}  RAM 0x{base:06x} / virtual "
        f"0x{VIRTUAL_BASE + base:08x}"
    )
    print(
        f"  controller={controller_name(u8(data, base + 0x00)):<10} "
        f"character=0x{u8(data, base + 0x01):02x}  "
        f"costume=0x{u8(data, base + 0x02):02x}  "
        f"rounds_won={u8(data, base + 0x03)}"
    )
    print(
        f"  position=({s32(data, base + 0x04)}, "
        f"{s32(data, base + 0x08)}, {s32(data, base + 0x0c)})  "
        f"animation_speed={s32(data, base + 0x10)}"
    )
    print(
        f"  direction=0x{s32(data, base + 0x14) & 0xffffffff:08x}  "
        f"attack_direction=0x{s32(data, base + 0x18) & 0xffffffff:08x}  "
        f"body_direction=0x{s32(data, base + 0x1c) & 0xffffffff:08x}"
    )
    print(
        f"  hp={u16(data, base + 0x20)}  "
        f"pending_damage={u16(data, base + 0x22)}  "
        f"last_damage?={u16(data, base + 0x24)}  "
        f"damage_display?={u16(data, base + 0x26)}"
    )
    print(
        f"  combo_damage?={u16(data, base + 0x28)}  "
        f"recovery_amount?={u16(data, base + 0x2a)}"
    )
    print(
        f"  animation=0x{u16(data, base + 0x2c):04x}  "
        f"action_code=0x{u16(data, base + 0x2e):04x}  "
        f"action_request=0x{u16(data, base + 0x30):04x}  "
        f"action_flag=0x{u8(data, base + 0x32):02x}"
    )
    print(f"  action_state=0x{state:02x} ({ACTION_STATES.get(state, 'Unknown')})")
    print(f"  flags_34_5f={data[base + 0x34:base + 0x60].hex(' ')}")


def inspect_file(path: Path) -> None:
    data = path.read_bytes()
    if len(data) != RAM_SIZE:
        raise SystemExit(
            f"{path}: expected a 4 MiB dump (0x{RAM_SIZE:x}), got 0x{len(data):x}"
        )
    print(f"\n{path}")
    print(
        f"maximum_hp: P1={u16(data, MAX_HP_P1)} "
        f"P2={u16(data, MAX_HP_P2)}"
    )
    inspect_player(data, 0)
    inspect_player(data, 1)


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Inspect DOA++ P1/P2 state in one or more MAME RAM dumps."
    )
    parser.add_argument("dumps", nargs="+", type=Path)
    args = parser.parse_args()
    for path in args.dumps:
        inspect_file(path)


if __name__ == "__main__":
    main()
