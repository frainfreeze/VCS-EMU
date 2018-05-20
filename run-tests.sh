echo -e "Running primitive tests:\n"
./VCSEMU -h
./VCSEMU -a test/test.asm
./VCSEMU -d dump.hex
./VCSEMU -r test/emu-test.rom