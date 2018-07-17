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

.. |img| image:: http://i.imgur.com/OLly94X.png
.. |demo| image:: https://i.imgur.com/ARBJu1x.gif
.. |image2| image:: http://i.imgur.com/LGLzA81.png
.. |demo2| image:: https://thumbs.gfycat.com/EnviousPeriodicDorado-max-1mb.gif

