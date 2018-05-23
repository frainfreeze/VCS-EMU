//
// Created by frain on 5/20/18.
//
#ifndef SRC_ASSEMBLER_H
#define SRC_ASSEMBLER_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

namespace tools{
    class Assembler {
    private:
        static std::string assemble_(const std::basic_stringstream<char, std::char_traits<char>, std::allocator<char>>::__string_type &buffer, bool dump = false)
        {
            std::cout << buffer;

            //read until you hit either $ # or newline (that's opcode keyword)
            //   - skip $ # and read number
            //   - get numbers size
            //   - depending on keyword and number size spit out hex opcode into stringstream
            //return stringstream.str

            return "a9c0aae869c400"; //hardcoded test2.asm
        }

        std::string strip_white(const std::string& input)
        {
            size_t b = input.find_first_not_of(' ');
            if (b == std::string::npos) b = 0;
            return input.substr(b, input.find_last_not_of(' ') + 1 - b);
        }

        std::string strip_comments(const std::string &input, const std::string &delimiters)
        {
            return strip_white(input.substr(0, input.find_first_of(delimiters)));
        }

    public:
        int assemble(const std::string &filename)
        {
            // load file
            std::ifstream in(filename);

            if (!in) {
                std::cerr << filename << " could not be opened for reading!" << std::endl;
                return 1;
            }

            // remove comments
            std::string input;
            std::stringstream cleanSource;
            std::string delimiter(";");
            while ( getline(in, input) && !input.empty() ) {
                cleanSource << strip_comments(input, delimiter) << std::endl ;
            }
            in.close();

            //assemble it
            std::string asm_ = assemble_(cleanSource.str());

            //strip original extension from filename and add new
            const std::string ext(".asm");
            const std::string extNew(".rom");
            std::string fout;
            if ( filename != ext && filename.size() > ext.size() && filename.substr(filename.size() - ext.size()) == ".asm" ){
                fout = filename.substr(0, filename.size() - ext.size());
            }
            fout+=extNew;

            //write the out to file.rom
            std::ofstream out(fout);

            if (!out) {
                std::cerr << fout << " could not be opened for writing!" << std::endl;
                return 1;
            }
            out << asm_;
            out.close();

            return 0;
        }
    };
} //namespace tools
#endif //SRC_ASSEMBLER_H
