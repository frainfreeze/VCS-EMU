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

```
$ git clone https://github.com/frainfreeze/VCS-EMU.git
$ cd VCS-EMU
$ cmake .
$ make
```

### License
Public domain. 

### Links
- [Preliminary data sheet, MOS TECH 1976 (pdf scan)](https://www.mdawson.net/vic20chrome/cpu/mos_6500_mpu_preliminary_may_1976.pdf)
- [The Instruction Set](https://web.archive.org/web/20080218073724/http://www.obelisk.demon.co.uk/6502/instructions.html)
- [6502 Instruction Set](https://www.atariarchives.org/2bml/chapter_10.php)
- [The 6502/65C02/65C816 Instruction Set Decoded](http://www.llx.com/~nparker/a2/opcodes.html)
- [6502 Instruction Set](http://www.masswerk.at/6502/6502_instruction_set.html)
- [The Registers](https://web.archive.org/web/20080218084556/http://www.obelisk.demon.co.uk:80/6502/registers.html#N)
- [Atari 2600 Specifications](http://problemkaputt.de/2k6specs.htm)
- [Visualizing a classic cpu in action: the 6502 (pdf)](http://www.visual6502.org/docs/6502_in_action_14_web.pdf)
- [6502 vs. 6507](http://blog.visual6502.org/2010/09/6502-vs-6507.html)
- [Atari 2600 Programming for Newbies](http://www.randomterrain.com/atari-2600-memories-tutorial-andrew-davie-01.html)
- [Addressing Modes](https://web.archive.org/web/20080307103453/http://www.obelisk.demon.co.uk:80/6502/addressing.html)
- [Instruction Reference](https://web.archive.org/web/20080305225025/http://www.obelisk.demon.co.uk:80/6502/reference.html)
