|img|

Developed and tested on Debian 9. Requirements:

-  Cmake
-  C++ compiler
-  Python 3
-  SFML

::

   $ sudo apt-get install libsfml-dev
   $ git clone https://github.com/frainfreeze/VCS-EMU.git
   $ cd VCS-EMU
   $ cmake .
   $ make

|demo|

Notes
~~~~~

::

   Memory location $752d (29997) contains a new random byte on every instruction.
   Memory location $752e (29998) contains the ascii code of the last key pressed.

   Memory locations $752F (29999) to $81fe (33278) are reserved for audio.

   Memory locations $81ff (33279) to $f9ff (63999) map to the screen pixels.
   Different values will draw different colour pixels. The colours are:

|image2|

|demo2|

License
~~~~~~~

Public domain.

Links
~~~~~

-  `Preliminary data sheet, MOS TECH 1976 (pdf scan)`_
-  `The Instruction Set`_
-  `6502 Instruction Set`_
-  `The 6502/65C02/65C816 Instruction Set Decoded`_
-  `6502 Instruction
   Set <http://www.masswerk.at/6502/6502_instruction_set.html>`__
-  `The Registers`_
-  `Atari 2600 Specifications`_
-  `Visualizing a classic cpu in action: the 6502 (pdf)`_
-  `6502 vs. 6507`_
-  `Atari 2600 Programming for Newbies`_
-  `Addressing Modes`_
-  `Instruction Reference`_

.. _Preliminary data sheet, MOS TECH 1976 (pdf scan): https://www.mdawson.net/vic20chrome/cpu/mos_6500_mpu_preliminary_may_1976.pdf
.. _The Instruction Set: https://web.archive.org/web/20080218073724/http://www.obelisk.demon.co.uk/6502/instructions.html
.. _6502 Instruction Set: https://www.atariarchives.org/2bml/chapter_10.php
.. _The 6502/65C02/65C816 Instruction Set Decoded: http://www.llx.com/~nparker/a2/opcodes.html
.. _The Registers: https://web.archive.org/web/20080218084556/http://www.obelisk.demon.co.uk:80/6502/registers.html#N
.. _Atari 2600 Specifications: http://problemkaputt.de/2k6specs.htm
.. _`Visualizing a classic cpu in action: the 6502 (pdf)`: http://www.visual6502.org/docs/6502_in_action_14_web.pdf
.. _6502 vs. 6507: http://blog.visual6502.org/2010/09/6502-vs-6507.html
.. _Atari 2600 Programming for Newbies: http://www.randomterrain.com/atari-2600-memories-tutorial-andrew-davie-01.html
.. _Addressing Modes: https://web.archive.org/web/20080307103453/http://www.obelisk.demon.co.uk:80/6502/addressing.html
.. _Instruction Reference: https://web.archive.org/web/20080305225025/http://www.obelisk.demon.co.uk:80/6502/reference.html

.. |img| image:: http://i.imgur.com/OLly94X.png
.. |demo| image:: https://i.imgur.com/ARBJu1x.gif
.. |image2| image:: http://i.imgur.com/LGLzA81.png
.. |demo2| image:: https://thumbs.gfycat.com/EnviousPeriodicDorado-max-1mb.gif

