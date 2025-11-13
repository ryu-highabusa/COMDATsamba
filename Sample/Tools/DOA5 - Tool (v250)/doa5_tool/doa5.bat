@echo OFF
title DOA5 - Tool v2.5
mode con LINES=15 COLS=65
Set _olddir_=%CD%
cd \
Echo. ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
Echo. ³                      DOA5 - Tool v2.5                       ³
Echo. ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
Echo. Copy the folder ( doa5_tool ) where are the .bin and .lnk files
Echo.
Echo.           
Set _user_=
Echo. 1. Rip characters
Echo. 2. Rip stages
Echo. 3. Rip DLC
Echo. 4. Rip demo
Echo. 5. Update names
Echo.
Echo. 
Set /P _resp_= Enter your choice (1, 2, 3, 4, 5): 
If "%_resp_%"=="1" Goto r_chr
If "%_resp_%"=="2" Goto r_stg
If "%_resp_%"=="3" Goto r_dlc
If "%_resp_%"=="4" Goto r_dem
If "%_resp_%"=="5" Goto u_all

:r_chr
cd %_olddir_%
md doa5_characters_(chara_common)
md doa5_chr_temp_dat
md doa5_chr_temp_ext
cd engine/
copy 1_doa5-lnk-bin.bms ..\..\
copy 2_doa5extract.bms ..\..\
copy 3_doa5decrypt.bms ..\..\
copy 5_update_filenames.bat ..\doa5_characters_(chara_common)
copy quickbms.exe ..\..\
cd ..\..\
quickbms.exe 1_doa5-lnk-bin.bms chara_common.bin doa5_tool/doa5_chr_temp_dat
quickbms -F "*.dat" 2_doa5extract.bms doa5_tool/doa5_chr_temp_dat doa5_tool/doa5_chr_temp_ext
cd doa5_tool/
rmdir doa5_chr_temp_dat /s /q
cd ..\
quickbms -F "*.ext" 3_doa5decrypt.bms doa5_tool/doa5_chr_temp_ext doa5_tool/doa5_characters_(chara_common)
del 1_doa5-lnk-bin.bms
del 2_doa5extract.bms
del 3_doa5decrypt.bms
del quickbms.exe
cd doa5_tool/
rmdir doa5_chr_temp_ext /s /q
cd doa5_characters_(chara_common)/
5_update_filenames.bat
del 5_update_filenames.bat
exit

:r_stg
cd %_olddir_%
md doa5_stages_(stage_common)
md doa5_stg_temp_dat
md doa5_stg_temp_ext
cd engine/
copy 1_doa5-lnk-bin.bms ..\..\
copy 2_doa5extract.bms ..\..\
copy 3_doa5decrypt.bms ..\..\
copy 5_update_filenames.bat ..\doa5_stages_(stage_common)
copy quickbms.exe ..\..\
cd ..\..\
quickbms.exe 1_doa5-lnk-bin.bms stage_common.bin doa5_tool/doa5_stg_temp_dat
quickbms -F "*.dat" 2_doa5extract.bms doa5_tool/doa5_stg_temp_dat doa5_tool/doa5_stg_temp_ext
cd doa5_tool/
rmdir doa5_stg_temp_dat /s /q
cd ..\
quickbms -F "*.ext" 3_doa5decrypt.bms doa5_tool/doa5_stg_temp_ext doa5_tool/doa5_stages_(stage_common)
del 1_doa5-lnk-bin.bms
del 2_doa5extract.bms
del 3_doa5decrypt.bms
del quickbms.exe
cd doa5_tool/
rmdir doa5_stg_temp_ext /s /q
cd doa5_stages_(stage_common)/
5_update_filenames.bat
del 5_update_filenames.bat
exit

:r_dlc
cd %_olddir_%
md doa5_dlc_(costume_pack)
md doa5_dlc_temp_dat
md doa5_dlc_temp_ext
cd engine/
copy 1_doa5-lnk-bin.bms ..\..\
copy 2_doa5extract.bms ..\..\
copy 3_doa5decrypt.bms ..\..\
copy 5_update_filenames.bat ..\doa5_dlc_(costume_pack)
copy quickbms.exe ..\..\
cd ..\..\
quickbms.exe 1_doa5-lnk-bin.bms costume_pack.bin doa5_tool/doa5_dlc_temp_dat
quickbms -F "*.dat" 2_doa5extract.bms doa5_tool/doa5_dlc_temp_dat doa5_tool/doa5_dlc_temp_ext
cd doa5_tool/
rmdir doa5_dlc_temp_dat /s /q
cd ..\
quickbms -F "*.ext" 3_doa5decrypt.bms doa5_tool/doa5_dlc_temp_ext doa5_tool/doa5_dlc_(costume_pack)
del 1_doa5-lnk-bin.bms
del 2_doa5extract.bms
del 3_doa5decrypt.bms
del quickbms.exe
cd doa5_tool/
rmdir doa5_dlc_temp_ext /s /q
cd doa5_dlc_(costume_pack)/
5_update_filenames.bat
del 5_update_filenames.bat
exit

:r_dem
cd %_olddir_%
md doa5_demo_(extracted)
cd engine/
copy 4_doa5-demo.txt ..\..\
copy quickbms.exe ..\..\
cd ..\..\
quickbms -o 4_doa5-demo.txt archive_order.bin doa5_tool/doa5_demo_(extracted)
del 4_doa5-demo.txt
del quickbms.exe
exit

:u_all
Set _user2_=
Echo.
Echo. 
Echo. ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿
Echo. ³Select the folder where are located the files you want to renames !!³
Echo. ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ
Echo. 
Echo. 
Set /P _resp2_=Ready ? y/n: 
If "%_resp2_%"=="y" Goto u_all_on
If "%_resp2_%"=="Y" Goto u_all_on
If "%_resp2_%"=="n" Goto u_all_off
If "%_resp2_%"=="N" Goto u_all_off

:u_all_on
cd %_olddir_%
cd engine/
For /F "Tokens=1 Delims=" %%I In ('cscript //nologo 0_browse_folder.vbs') Do Set _FolderName=%%I
copy 5_update_filenames.bat "%_FolderName%"
cd /d %_FolderName%
5_update_filenames.bat
del 5_update_filenames.bat
exit

:u_all_off
exit