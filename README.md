```
+----------------------------------------------------+
+     _   _  _____  _____   _____ ___  ___ _   _     +
+    | | | |/  __ \/  ___| |  ___||  \/  || | | |    +
+    | | | || /  \/\ `--.  | |__  | .  . || | | |    +
+    | | | || |     `--. \ |  __| | |\/| || | | |    +
+    \ \_/ /| \__/\/\__/ / | |___ | |  | || |_| |    +
+     \___/  \____/\____/  \____/ \_|  |_/ \___/     +
+____________________________________________________+
+        Tomislav (frainfreeze) Kucar, 2018          +
+----------------------------------------------------+

VCS EMU is Atari 2600 emulator with builtin assembler 
                 and disassembler.


To use navigate to root dir in your terminal.

Build by running
$ cmake --build cmake-build-debug --target VCSEMU -- -j 4

Usage: cmake-build-debug/VCSEMU <option(s)> FILE
Options:
        -h, --help                  Show this help message
        -a, --assemble file.asm     Assembles file and outputs file.rom
        -d, --disassemble file.rom  Disassembles file and outputs file.dis
        -r, --run file.rom          Executes rom file

```
