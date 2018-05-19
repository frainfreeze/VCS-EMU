cmake_minimum_required(VERSION 3.10)
project(src)

set(CMAKE_CXX_STANDARD 14)

add_executable(src main.cpp CPU.cpp CPU.h IO.cpp IO.h APU.cpp APU.h PPU.cpp PPU.h tools.cpp tools.h)