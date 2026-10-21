# Add byte-verified research bookmarks without changing code or labels.
# @category DOA.Research
from __future__ import print_function
import json
from java.util import ArrayList
from ghidra.program.model.listing import CodeUnit

source = getSourceFile().getParentFile()
with open(str(source.toPath().resolve('doa5_bookmarks.json')), 'r') as handle:
    catalog = json.load(handle)
choices = ArrayList()
for name in sorted(catalog):
    choices.add(name)
selected = str(askChoice('DOA5 research notes', 'Select the export matching the open program', choices, choices.get(0)))
entries = catalog[selected]
added = 0
skipped = 0
marker = '[DOA5 executable comparison 2026-10-21]'
for entry in entries:
    if monitor.isCancelled():
        break
    address = toAddr(entry['address'])
    try:
        expected = bytearray.fromhex(entry['expected_hex'])
        actual = bytearray((getByte(address.add(i)) & 255) for i in range(len(expected)))
        if actual != expected:
            print('Skipped byte mismatch at ' + entry['address'])
            skipped += 1
            continue
        text = marker + '\n' + entry['note']
        listing = currentProgram.getListing()
        old = listing.getComment(CodeUnit.PLATE_COMMENT, address)
        if old is None or text not in old:
            listing.setComment(address, CodeUnit.PLATE_COMMENT, (old + '\n\n' if old else '') + text)
        currentProgram.getBookmarkManager().setBookmark(address, 'Note', 'DOA5 executable comparison', entry['note'])
        added += 1
    except Exception as error:
        print('Skipped ' + entry['address'] + ': ' + str(error))
        skipped += 1
print('Research notes: %d verified; %d skipped.' % (added, skipped))
