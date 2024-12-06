import struct

def read_anim_defs(file_path, offset_21, anim_def_value):
    """Reads and interprets Animation-Definition data from a file."""

    with open(file_path, "rb") as f:
        # Calculate the Anim-def offset
        anim_def_offset = anim_def_value * 4 + offset_21

        # Navigate to the Anim-def offset
        f.seek(anim_def_offset)
        anim_def_pointer = struct.unpack("<I", f.read(4))[0]

        # Go to the actual Anim-def data
        f.seek(anim_def_pointer)

        anim_def_data = []
        while True:
            # Read 2-byte pairs until the terminator (FF FF)
            pair = struct.unpack("<H", f.read(2))[0]
            if pair == 0xFFFF:  # Check for terminator
                break
            anim_def_data.append(pair)

        return anim_def_data

def interpret_anim_def(anim_def_data):
    """Parses and interprets Anim-def data."""
    interpretation = []
    i = 0
    while i < len(anim_def_data):
        flag = anim_def_data[i]

        if flag == 0x0200:  # Speed control
            speed = anim_def_data[i + 1]
            interpretation.append(f"Speed control: {speed}")
            i += 2
        elif flag == 0x0300:  # Sound effect
            frame = anim_def_data[i + 1]
            sound = anim_def_data[i + 2]
            interpretation.append(f"Play sound effect {sound} on frame {frame}")
            i += 3
        elif flag == 0x0400:  # Activate hitbox (throws/holds)
            interpretation.append("Activate hitbox")
            i += 1
        elif flag == 0x0500:  # Deactivate hitbox
            interpretation.append("Deactivate hitbox")
            i += 1
        elif flag == 0x0700:  # Infinite loop
            interpretation.append("Infinite loop")
            i += 1
        elif flag == 0x1000:  # Crouching hitbox
            interpretation.append("Crouching hitbox (high crush)")
            i += 1
        elif flag == 0x1F00:  # Player state
            state = anim_def_data[i + 1]
            state_desc = {
                0x0000: "Default",
                0x0100: "Ground state (invincible except for ground attacks)",
                0x0200: "In air",
                0x0300: "Counter",
                0x0400: "Attacking",
            }.get(state, f"Unknown state {state}")
            interpretation.append(f"Player state: {state_desc}")
            i += 2
        elif flag == 0x2100:  # Activate hitbox
            frame = anim_def_data[i + 1]
            hitbox_type = anim_def_data[i + 2]
            hitbox_desc = {
                0x0000: "Doesn't connect",
                0x0100: "All-body hitbox",
            }.get(hitbox_type, f"Unknown hitbox type {hitbox_type}")
            interpretation.append(f"Activate hitbox on frame {frame}: {hitbox_desc}")
            i += 3
        elif flag == 0x4500:  # Character rotation
            degrees = anim_def_data[i + 1]
            interpretation.append(f"Character rotation: {degrees} degrees")
            i += 2
        elif flag == 0x4700:  # Transition back to stance
            frames = anim_def_data[i + 1]
            interpretation.append(f"Transition back to stance over {frames} frames")
            i += 2
        else:
            interpretation.append(f"Unknown flag: {hex(flag)}")
            i += 1

    return interpretation

# Example usage
file_path = "character_data.bin"  # Replace with the actual file path
offset_21 = 0x7D00  # Replace with the actual OFFSET 21
anim_def_value = 0x100  # Anim-def for Ayane's :P::P:

anim_def_data = read_anim_defs(file_path, offset_21, anim_def_value)
interpretation = interpret_anim_def(anim_def_data)

for line in interpretation:
    print(line)
