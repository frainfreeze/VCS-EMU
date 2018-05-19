#include <iostream>
#include "IO.h"
#include "APU.h"
#include "PPU.h"
#include "CPU.h"
#include "tools.h"

int main(int argc, char** argv) {

    // if asm file is specified assemble it and quit,
    // else if -d switch is provided disassemble file
    // and print to console. if -r switch is on
    // load the ROM specified on the command line
    tools::assembler();
    tools::disassembler();

    
    // start emulation
    CPU();

    // run CPU until the program is killed
    // for(;;) CPU.op();
    return 0;
}