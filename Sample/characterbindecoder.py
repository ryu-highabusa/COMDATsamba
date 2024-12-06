import struct

def read_anim_defs(file_path, offset_21, anim_def_value):
    """Reads and interprets Animation-Definition data from a file."""
    with open(file_path, "rb") as f:
        # Calculate the Anim-def offset and navigate there
        anim_def_offset = anim_def_value * 4 + offset_21
        f.seek(anim_def_offset)

        # Read the pointer to Anim-def data
        anim_def_pointer = struct.unpack("<I", f.read(4))[0]

        # Go to the actual Anim-def data
        f.seek(anim_def_pointer)

        anim_def_data = []
        while True:
            # Safely read 2 bytes
            pair_data = f.read(2)
            if len(pair_data) < 2:
                # If we don't have 2 bytes, break the loop (end of data)
                break

            # Unpack the 2-byte value
            pair = struct.unpack("<H", pair_data)[0]

            # Stop reading when encountering the terminator (0xFFFF)
            if pair == 0xFFFF:
                break

            # Add the pair to the list
            anim_def_data.append(pair)

        return anim_def_data

# Example usage
file_path = "character_data.bin"  # The path to your binary file
offset_21 = 0x7D00  # Example value for OFFSET 21
anim_def_value = 0x100  # Example value for the animation definition

anim_def_data = read_anim_defs(file_path, offset_21, anim_def_value)
print(anim_def_data)
