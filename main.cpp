#include <iostream>
#include <vector>
#include "include/IO.h"
#include "include/APU.h"
#include "include/PPU.h"
#include "include/CPU.h"
#include "include/disassembler.h"

static void show_usage(const std::string & name)
{
    std::cerr << "Usage: " << name << " <option(s)> FILE\n"
              << "Options:\n"
              << "\t-h, --help                  Show this help message\n"
              << "\t-a, --assemble file.asm     Assembles file and outputs file.rom\n"
              << "\t-d, --disassemble file.rom  Disassembles file and outputs file.dis\n"
              << "\t-r, --run file.rom          Executes rom file"
              << std::endl;
}

int main(int argc, char** argv) {
    // ./vcsemu -switch file
    if (argc < 3) {
        show_usage(argv[0]);
        return 1;
    }

    int option = 0;
    std::string filename;
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if ((arg == "-h") || (arg == "--help")) {
            show_usage(argv[0]);
            return 0;
        } else if ((arg == "-a") || (arg == "--assemble")) {
            option = 1;
            filename = argv[++i];
        } else if ((arg == "-d") || (arg == "--disassemble")) {
            option = 2;
            filename = argv[++i];
        } else if ((arg == "-r") || (arg == "--run")) {
            option = 3;
            filename = argv[++i];
        } else {
            show_usage(argv[0]);
            return 1;
        }
    }

    switch (option){
    case 1: //assemble
        std::cout << filename;
        //tools::assembler(filename);
        break;
    case 2: //disassemble
        tools::Disassembler disassembler;
        disassembler.disassemble(filename);
        break;
    case 3: //run
        std::cout <<   "+----------------------------------------------------+"  << std::endl;
        std::cout <<   "+     _   _  _____  _____   _____ ___  ___ _   _     +"  << std::endl;
        std::cout << R"(+    | | | |/  __ \/  ___| |  ___||  \/  || | | |    +)" << std::endl;
        std::cout << R"(+    | | | || /  \/\ `--.  | |__  | .  . || | | |    +)" << std::endl;
        std::cout << R"(+    | | | || |     `--. \ |  __| | |\/| || | | |    +)" << std::endl;
        std::cout << R"(+    \ \_/ /| \__/\/\__/ / | |___ | |  | || |_| |    +)" << std::endl;
        std::cout << R"(+     \___/  \____/\____/  \____/ \_|  |_/ \___/     +)" << std::endl;
        std::cout <<   "+____________________________________________________+"  << std::endl;
        std::cout <<   "+        Tomislav (frainfreeze) Kucar, 2018          +"  << std::endl;
        std::cout <<   "+----------------------------------------------------+"  << std::endl;
        // start emulation
        CPU();

        // run CPU until the program is killed
        // for(;;) CPU.op();//
    default:
        break;
    }

    return 0;
}