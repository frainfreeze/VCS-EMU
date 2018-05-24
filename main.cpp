#include <iostream>
#include <string>
#include <iomanip>

#include "include/mos6502.h"
#include "include/disassembler.h"
#include "include/assembler.h"

/*todo: add new switches*/

static void show_usage(const std::string &name) {
    std::cout << "+----------------------------------------------------+" << std::endl;
    std::cout << "+     _   _  _____  _____   _____ ___  ___ _   _     +" << std::endl;
    std::cout << R"(+    | | | |/  __ \/  ___| |  ___||  \/  || | | |    +)" << std::endl;
    std::cout << R"(+    | | | || /  \/\ `--.  | |__  | .  . || | | |    +)" << std::endl;
    std::cout << R"(+    | | | || |     `--. \ |  __| | |\/| || | | |    +)" << std::endl;
    std::cout << R"(+    \ \_/ /| \__/\/\__/ / | |___ | |  | || |_| |    +)" << std::endl;
    std::cout << R"(+     \___/  \____/\____/  \____/ \_|  |_/ \___/     +)" << std::endl;
    std::cout << "+____________________________________________________+" << std::endl;
    std::cout << "+        Tomislav (frainfreeze) Kucar, 2018          +" << std::endl;
    std::cout << "+----------------------------------------------------+" << std::endl;
    std::cout << "\nVCS EMU is Atari 2600 emulator with builtin assembler \n                 and disassembler.\n\n"
              << std::endl;
    std::cout << "Usage: " << name << " <option(s)> FILE\n"
              << "Options:\n"
              << "\t-h, --help                   Show this help message\n"
              << "\t-a, --assemble file.asm      Assembles file and outputs file.rom\n"
              << "\t-d, --disassemble file.rom   Disassembles file and outputs to console\n"
              << "\t-r, --run file.rom           Executes rom file\n"
              << "\t-x, --run-dump file.rom      Executes rom file and dumps memory to dump.rom"
              << std::endl;
}

//cpu
const int memSize = 65535;
uint8_t memory[memSize]; // 64K ram
void MemWrite(uint16_t addr, uint8_t byte) {
    memory[addr] = byte;
}

uint8_t MemRead(uint16_t addr) {
    return memory[addr];
}

//misc
int hex2dec(const std::string s)
{
    return std::stoul(s, nullptr, 16);
}


int main(int argc, char **argv) {
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
        } else if ((arg == "-x") || (arg == "--run-dump")) {
            option = 4;
            filename = argv[++i];
        } else {
            show_usage(argv[0]);
            return 1;
        }
    }

    std::stringstream ss;
    mos6502 cpu(MemRead, MemWrite);

    //load rom into string
    std::string buffer;
    std::ifstream in(filename);
    if (!in) {
        std::cerr << filename << " could not be opened for reading!" << std::endl;
        return 1;
    }
    while (in){ // While there's still stuff left to read
        in >> buffer;
    }
    in.close();

    int romLength = static_cast<int>(buffer.length());
    int bufferCounter = 0;

    switch (option) {
        case 1: //assemble
            tools::Assembler assembler;
            assembler.assemble(filename);
            break;

        case 2: //disassemble
            tools::Disassembler disassembler;
            disassembler.disassemble(filename);
            break;

        case 3:
        case 4: //run
            for (unsigned int i = 0; i < 65536; i++) {
                std::stringstream ss;
                if(bufferCounter<romLength){
                    ss << buffer[bufferCounter++];
                    ss << buffer[bufferCounter++];
                    memory[i] = hex2dec(ss.str());
                } else {
                    memory[i] = 0x00; // fill with NOPs
                }
            }

            cpu.Reset();
            cpu.Run(10000000);

            //write out the memory dump
            if (option == 4) {
                std::ofstream out("dump.rom");
                if (!out) {
                    std::cerr << "dump.rom could not be opened for writing!" << std::endl;
                    return 1;
                }

                //convert memory[] to hex string
                ss << std::hex << std::setfill('0');
                for (unsigned char i : memory) {
                    ss << std::setw(2) << static_cast<unsigned>(i);
                }

                out << ss.str() << std::endl;
                out.close();
                std::cout << "Executed rom and dumped memory successfully." << std::endl;
                break;
            }

            std::cout << "Executed rom successfully." << std::endl;
            break;

        default:
            show_usage(argv[0]);
            break;
    }

    return 0;
}