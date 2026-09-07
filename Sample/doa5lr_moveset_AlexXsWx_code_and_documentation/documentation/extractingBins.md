# Extracting bins

You'll need [procmon](https://docs.microsoft.com/en-us/sysinternals/downloads/procmon).

## Extracting character bins

1. Launch the game
2. Launch procmon
3. Events: file system operations, include game.exe, include path that begins with doa folder
4. Clear currently captured events
5. Exclude that file that the game keeps reading over and over (probably audio)
6. Go to character selection screen (e.g. via training mode)
7. Hover over character you want, wait until it loads, then quickly hover over some other neighbour character, clear captured events in procmon, hover back over character you want
8. At the end of events captured by procmon, probably right after a read of 80 bytes, there should be a read of 100,000 - 300,000 bytes (probably from a patch_XX_catalog file), capped at 131,072 bytes per read. Copy that to a txt file, structured like `extractedBins/doa5lr_v1_02a-steam/moveset/doa5lr_v1_02a-steam_bins.txt` (spaces and new lines are important)
9. Open `base.html` in browser, select "extract bins using txt mode"
10. Drop the txt file onto the page
11. Open console (e.g. F12 in Google Chrome)
12. In the output, find `parsed` > `requiredFiles`
13. Drop required files (from DOA folder) onto the page; if browser pauses execution just hit "resume execution" (F8 in Chrome)
14. In the same output as where you found the `requiredFiles`, find `parsed` > `result` and click on its `(...)`
15. Expand entry for character you want
16. Click on `(...)` next to `saveBinFile`
17. Repeat steps 15-16 for other characters

## Extracting base bin

You're looking for a file of about 275,000 bytes, chunked at 131,072 bytes per read, that is loaded when you pass the "Press any button" screen from the startup sequence. There shouldn't be too many, you can extract them like character bins, and see if they have similar ending to the BASE bins provided with the repo (last section has lots of strings like "7P", "6P+K" and so on).  

Alternatively you can use procmon to locate the call game uses to read files, put a breakpoint there (warning: I don't know how anti cheat works, attaching debugger to the game exe may or may not result in account ban), and seeing if some input from a base bin is already in the memory before this call and right after it. Example input: `BC 00 27 60 00 04 06 00 02 00 02 28` (9P).  

## Extracting motion files

There's probably a tool that lets you do this already (maybe the Archive Tool), but if you wanna do it more manually here's how I did it:  
Make and save 3 replays - two with char you want (different costumes), one without it. Use procmon to find out which files are common between 1st and 2nd replay, and are not loaded for the 3rd replay. Sort by size (you're looking for a ~3mb file), take the one that is not encrypted (starts with "char_dat"). For base motion file, don't exclude files that are not loaded for the 3rd replay. Then you can use txt method explained for the moveset bins above.   
