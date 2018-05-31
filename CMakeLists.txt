cmake_minimum_required(VERSION 3.7)
project(src)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_CXX_STANDARD 14)

add_executable(VCSEMU main.cpp include/mos6502.cpp include/mos6502.h include/IO.cpp include/IO.h include/APU.cpp include/APU.h include/assembler.h include/TIA.cpp include/TIA.h)

add_custom_target(
        run ALL
        COMMAND python3 ${CMAKE_CURRENT_SOURCE_DIR}/bin/genDisassembler.py ${CMAKE_CURRENT_SOURCE_DIR}/bin/ops.csv ${CMAKE_CURRENT_SOURCE_DIR}/include
        BYPRODUCTS include/disassembler.h
        COMMENT "Generating disassembler"
)

add_dependencies(VCSEMU run)

#look for SFML and add it
set (CMAKE_MODULE_PATH "/usr/share/SFML/cmake/Modules")
find_package (SFML REQUIRED system window graphics network audio)

include_directories(${SFML_INCLUDE_DIR})

target_link_libraries(VCSEMU ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
#todo: run tests after compile