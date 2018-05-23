cmake_minimum_required(VERSION 3.7)
project(src)

set(CMAKE_CXX_STANDARD 14)

add_executable(VCSEMU main.cpp include/mos6502.cpp include/mos6502.h include/IO.cpp include/IO.h include/APU.cpp include/APU.h include/assembler.h include/TIA.cpp include/TIA.h)

add_custom_target(
        run ALL
        COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/genDisassembler.py ${CMAKE_CURRENT_SOURCE_DIR}/ops.csv ${CMAKE_CURRENT_SOURCE_DIR}/include
        BYPRODUCTS include/disassembler.h
        COMMENT "Generating disassembler"
)

add_dependencies(VCSEMU run)

#todo: run tests after compile