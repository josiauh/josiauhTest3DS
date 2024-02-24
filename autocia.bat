bannertool makebanner -i banner.png -a better.wav -o banner.bnr
bannertool.exe makesmdh -s "Josiauh Testing for 3DS" -l "Josiauh Testing for 3DS" -p "Josiauh" -i icon.png  -o icon.icn
makerom -f cia -o JT3DS.cia -DAPP_ENCRYPTED=false -rsf cia.rsf -target t -exefslogo -elf JT3DS.elf -icon JT3DS.smdh -banner banner.bnr