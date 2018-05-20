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


Precompiled binaries are provided in the bin folder.

Usage: VCSEMU <option(s)> FILE
Options:
        -h, --help                  Show this help message
        -a, --assemble file.asm     Assembles file and outputs file.rom
        -d, --disassemble file.rom  Disassembles file and outputs file.dis
        -r, --run file.rom          Executes rom file
```

### Intro
Bad code, go away.

### Development
Dependencies
- Cmake
- C++ compiler
- Python 3

To build open terminal in the root directory and execute
```
$ cmake .
$ make
```

### License
Public domain. 