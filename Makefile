# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/frain/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.4203.549/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/frain/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.4203.549/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/frain/grada-final/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/frain/grada-final/src

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/home/frain/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.4203.549/bin/cmake/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/home/frain/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/181.4203.549/bin/cmake/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/frain/grada-final/src/CMakeFiles /home/frain/grada-final/src/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/frain/grada-final/src/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named run

# Build rule for target.
run: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 run
.PHONY : run

# fast build rule for target.
run/fast:
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/build
.PHONY : run/fast

#=============================================================================
# Target rules for targets named VCSEMU

# Build rule for target.
VCSEMU: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 VCSEMU
.PHONY : VCSEMU

# fast build rule for target.
VCSEMU/fast:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/build
.PHONY : VCSEMU/fast

include/APU.o: include/APU.cpp.o

.PHONY : include/APU.o

# target to build an object file
include/APU.cpp.o:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/APU.cpp.o
.PHONY : include/APU.cpp.o

include/APU.i: include/APU.cpp.i

.PHONY : include/APU.i

# target to preprocess a source file
include/APU.cpp.i:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/APU.cpp.i
.PHONY : include/APU.cpp.i

include/APU.s: include/APU.cpp.s

.PHONY : include/APU.s

# target to generate assembly for a file
include/APU.cpp.s:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/APU.cpp.s
.PHONY : include/APU.cpp.s

include/CPU.o: include/CPU.cpp.o

.PHONY : include/CPU.o

# target to build an object file
include/CPU.cpp.o:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/CPU.cpp.o
.PHONY : include/CPU.cpp.o

include/CPU.i: include/CPU.cpp.i

.PHONY : include/CPU.i

# target to preprocess a source file
include/CPU.cpp.i:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/CPU.cpp.i
.PHONY : include/CPU.cpp.i

include/CPU.s: include/CPU.cpp.s

.PHONY : include/CPU.s

# target to generate assembly for a file
include/CPU.cpp.s:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/CPU.cpp.s
.PHONY : include/CPU.cpp.s

include/IO.o: include/IO.cpp.o

.PHONY : include/IO.o

# target to build an object file
include/IO.cpp.o:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/IO.cpp.o
.PHONY : include/IO.cpp.o

include/IO.i: include/IO.cpp.i

.PHONY : include/IO.i

# target to preprocess a source file
include/IO.cpp.i:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/IO.cpp.i
.PHONY : include/IO.cpp.i

include/IO.s: include/IO.cpp.s

.PHONY : include/IO.s

# target to generate assembly for a file
include/IO.cpp.s:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/IO.cpp.s
.PHONY : include/IO.cpp.s

include/PPU.o: include/PPU.cpp.o

.PHONY : include/PPU.o

# target to build an object file
include/PPU.cpp.o:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/PPU.cpp.o
.PHONY : include/PPU.cpp.o

include/PPU.i: include/PPU.cpp.i

.PHONY : include/PPU.i

# target to preprocess a source file
include/PPU.cpp.i:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/PPU.cpp.i
.PHONY : include/PPU.cpp.i

include/PPU.s: include/PPU.cpp.s

.PHONY : include/PPU.s

# target to generate assembly for a file
include/PPU.cpp.s:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/PPU.cpp.s
.PHONY : include/PPU.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... run"
	@echo "... VCSEMU"
	@echo "... include/APU.o"
	@echo "... include/APU.i"
	@echo "... include/APU.s"
	@echo "... include/CPU.o"
	@echo "... include/CPU.i"
	@echo "... include/CPU.s"
	@echo "... include/IO.o"
	@echo "... include/IO.i"
	@echo "... include/IO.s"
	@echo "... include/PPU.o"
	@echo "... include/PPU.i"
	@echo "... include/PPU.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

