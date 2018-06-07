<p align="center">
  <img src="http://i.imgur.com/OLly94X.png">
</p>

Developed and tested on Debian 9. Requirements:
- Cmake
- C++ compiler
- Python 3
- SFML

```
$ sudo apt-get install libsfml-dev
$ git clone https://github.com/frainfreeze/VCS-EMU.git
$ cd VCS-EMU
$ cmake .
$ make
```

![demo](https://i.imgur.com/ARBJu1x.gif)


### Notes
```
Memory location $752d (29997) contains a new random byte on every instruction.
Memory location $752e (29998) contains the ascii code of the last key pressed.

Memory locations $752F (29999) to $81fe (33278) are reserved for audio.

Memory locations $81ff (33279) to $f9ff (63999) map to the screen pixels. 
Different values will draw different colour pixels. The colours are:
```
![](http://i.imgur.com/LGLzA81.png)


![demo2](https://thumbs.gfycat.com/EnviousPeriodicDorado-max-1mb.gif)

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
