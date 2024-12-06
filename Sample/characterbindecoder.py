import struct

def read_anim_defs(file_path, offset_21, anim_def_value):
    """Reads and interprets Animation-Definition data from a file."""
    with open(file_path, "rb") as f:
        # Calculate the Anim-def offset and navigate there
        anim_def_offset = anim_def_value * 4 + offset_21
        print(f"Anim-def offset: {hex(anim_def_offset)}")  # Debugging line
        f.seek(anim_def_offset)

        # Read the pointer to Anim-def data
        anim_def_pointer_data = f.read(4)
        if len(anim_def_pointer_data) < 4:
            print("Error: Not enough data to read anim_def_pointer.")
            return []
        anim_def_pointer = struct.unpack("<I", anim_def_pointer_data)[0]
        print(f"Anim-def pointer: {hex(anim_def_pointer)}")  # Debugging line

        # Check if the pointer is within the file bounds
        f.seek(0, 2)  # Move to the end of the file
        file_size = f.tell()
        if anim_def_pointer >= file_size:
            print(f"Error: Anim-def pointer {hex(anim_def_pointer)} is beyond the file size ({hex(file_size)}).")
            return []

        # Go to the actual Anim-def data
        f.seek(anim_def_pointer)

        # Read a larger chunk of data to check what's at the pointer
        chunk_size = 64  # Read 64 bytes to inspect the data
        chunk_data = f.read(chunk_size)
        print(f"Data at pointer ({hex(anim_def_pointer)}): {chunk_data.hex()}")

        if not chunk_data:
            print("No data found at the pointer.")
            return []

        anim_def_data = []
        while True:
            # Safely read 2 bytes
            pair_data = f.read(2)
            if len(pair_data) < 2:
                # If we don't have 2 bytes, break the loop (end of data)
                print("End of data or incomplete data read.")
                break

            # Unpack the 2-byte value
            pair = struct.unpack("<H", pair_data)[0]
            print(f"Read pair: {hex(pair)}")  # Debugging line

            # Stop reading when encountering the terminator (0xFFFF)
            if pair == 0xFFFF:
                print("Encountered terminator (0xFFFF).")  # Debugging line
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
