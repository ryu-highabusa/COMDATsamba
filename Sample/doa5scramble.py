def unscramble(s: bytes) -> bytes:
    out = bytearray()
    for b in s:
        # map ASCII that could have come from a lowercase letter
        if 0x49 <= b <= 0x62:
            nb = b + 0x18
            out.append(nb if 0x61 <= nb <= 0x7A else b)
        else:
            out.append(b)
    return bytes(out)
