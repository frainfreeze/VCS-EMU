# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_BINARY_DIR = /home/frain/grada-final/src/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/VCSEMU.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/VCSEMU.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VCSEMU.dir/flags.make

CMakeFiles/VCSEMU.dir/main.cpp.o: CMakeFiles/VCSEMU.dir/flags.make
CMakeFiles/VCSEMU.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frain/grada-final/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VCSEMU.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VCSEMU.dir/main.cpp.o -c /home/frain/grada-final/src/main.cpp

CMakeFiles/VCSEMU.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VCSEMU.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frain/grada-final/src/main.cpp > CMakeFiles/VCSEMU.dir/main.cpp.i

CMakeFiles/VCSEMU.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VCSEMU.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frain/grada-final/src/main.cpp -o CMakeFiles/VCSEMU.dir/main.cpp.s

CMakeFiles/VCSEMU.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/VCSEMU.dir/main.cpp.o.requires

CMakeFiles/VCSEMU.dir/main.cpp.o.provides: CMakeFiles/VCSEMU.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/VCSEMU.dir/main.cpp.o.provides

CMakeFiles/VCSEMU.dir/main.cpp.o.provides.build: CMakeFiles/VCSEMU.dir/main.cpp.o


CMakeFiles/VCSEMU.dir/include/CPU.cpp.o: CMakeFiles/VCSEMU.dir/flags.make
CMakeFiles/VCSEMU.dir/include/CPU.cpp.o: ../include/CPU.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frain/grada-final/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/VCSEMU.dir/include/CPU.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VCSEMU.dir/include/CPU.cpp.o -c /home/frain/grada-final/src/include/CPU.cpp

CMakeFiles/VCSEMU.dir/include/CPU.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VCSEMU.dir/include/CPU.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frain/grada-final/src/include/CPU.cpp > CMakeFiles/VCSEMU.dir/include/CPU.cpp.i

CMakeFiles/VCSEMU.dir/include/CPU.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VCSEMU.dir/include/CPU.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frain/grada-final/src/include/CPU.cpp -o CMakeFiles/VCSEMU.dir/include/CPU.cpp.s

CMakeFiles/VCSEMU.dir/include/CPU.cpp.o.requires:

.PHONY : CMakeFiles/VCSEMU.dir/include/CPU.cpp.o.requires

CMakeFiles/VCSEMU.dir/include/CPU.cpp.o.provides: CMakeFiles/VCSEMU.dir/include/CPU.cpp.o.requires
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/CPU.cpp.o.provides.build
.PHONY : CMakeFiles/VCSEMU.dir/include/CPU.cpp.o.provides

CMakeFiles/VCSEMU.dir/include/CPU.cpp.o.provides.build: CMakeFiles/VCSEMU.dir/include/CPU.cpp.o


CMakeFiles/VCSEMU.dir/include/IO.cpp.o: CMakeFiles/VCSEMU.dir/flags.make
CMakeFiles/VCSEMU.dir/include/IO.cpp.o: ../include/IO.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frain/grada-final/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/VCSEMU.dir/include/IO.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VCSEMU.dir/include/IO.cpp.o -c /home/frain/grada-final/src/include/IO.cpp

CMakeFiles/VCSEMU.dir/include/IO.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VCSEMU.dir/include/IO.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frain/grada-final/src/include/IO.cpp > CMakeFiles/VCSEMU.dir/include/IO.cpp.i

CMakeFiles/VCSEMU.dir/include/IO.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VCSEMU.dir/include/IO.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frain/grada-final/src/include/IO.cpp -o CMakeFiles/VCSEMU.dir/include/IO.cpp.s

CMakeFiles/VCSEMU.dir/include/IO.cpp.o.requires:

.PHONY : CMakeFiles/VCSEMU.dir/include/IO.cpp.o.requires

CMakeFiles/VCSEMU.dir/include/IO.cpp.o.provides: CMakeFiles/VCSEMU.dir/include/IO.cpp.o.requires
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/IO.cpp.o.provides.build
.PHONY : CMakeFiles/VCSEMU.dir/include/IO.cpp.o.provides

CMakeFiles/VCSEMU.dir/include/IO.cpp.o.provides.build: CMakeFiles/VCSEMU.dir/include/IO.cpp.o


CMakeFiles/VCSEMU.dir/include/APU.cpp.o: CMakeFiles/VCSEMU.dir/flags.make
CMakeFiles/VCSEMU.dir/include/APU.cpp.o: ../include/APU.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frain/grada-final/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/VCSEMU.dir/include/APU.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VCSEMU.dir/include/APU.cpp.o -c /home/frain/grada-final/src/include/APU.cpp

CMakeFiles/VCSEMU.dir/include/APU.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VCSEMU.dir/include/APU.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frain/grada-final/src/include/APU.cpp > CMakeFiles/VCSEMU.dir/include/APU.cpp.i

CMakeFiles/VCSEMU.dir/include/APU.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VCSEMU.dir/include/APU.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frain/grada-final/src/include/APU.cpp -o CMakeFiles/VCSEMU.dir/include/APU.cpp.s

CMakeFiles/VCSEMU.dir/include/APU.cpp.o.requires:

.PHONY : CMakeFiles/VCSEMU.dir/include/APU.cpp.o.requires

CMakeFiles/VCSEMU.dir/include/APU.cpp.o.provides: CMakeFiles/VCSEMU.dir/include/APU.cpp.o.requires
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/APU.cpp.o.provides.build
.PHONY : CMakeFiles/VCSEMU.dir/include/APU.cpp.o.provides

CMakeFiles/VCSEMU.dir/include/APU.cpp.o.provides.build: CMakeFiles/VCSEMU.dir/include/APU.cpp.o


CMakeFiles/VCSEMU.dir/include/PPU.cpp.o: CMakeFiles/VCSEMU.dir/flags.make
CMakeFiles/VCSEMU.dir/include/PPU.cpp.o: ../include/PPU.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/frain/grada-final/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/VCSEMU.dir/include/PPU.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VCSEMU.dir/include/PPU.cpp.o -c /home/frain/grada-final/src/include/PPU.cpp

CMakeFiles/VCSEMU.dir/include/PPU.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VCSEMU.dir/include/PPU.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/frain/grada-final/src/include/PPU.cpp > CMakeFiles/VCSEMU.dir/include/PPU.cpp.i

CMakeFiles/VCSEMU.dir/include/PPU.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VCSEMU.dir/include/PPU.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/frain/grada-final/src/include/PPU.cpp -o CMakeFiles/VCSEMU.dir/include/PPU.cpp.s

CMakeFiles/VCSEMU.dir/include/PPU.cpp.o.requires:

.PHONY : CMakeFiles/VCSEMU.dir/include/PPU.cpp.o.requires

CMakeFiles/VCSEMU.dir/include/PPU.cpp.o.provides: CMakeFiles/VCSEMU.dir/include/PPU.cpp.o.requires
	$(MAKE) -f CMakeFiles/VCSEMU.dir/build.make CMakeFiles/VCSEMU.dir/include/PPU.cpp.o.provides.build
.PHONY : CMakeFiles/VCSEMU.dir/include/PPU.cpp.o.provides

CMakeFiles/VCSEMU.dir/include/PPU.cpp.o.provides.build: CMakeFiles/VCSEMU.dir/include/PPU.cpp.o


# Object files for target VCSEMU
VCSEMU_OBJECTS = \
"CMakeFiles/VCSEMU.dir/main.cpp.o" \
"CMakeFiles/VCSEMU.dir/include/CPU.cpp.o" \
"CMakeFiles/VCSEMU.dir/include/IO.cpp.o" \
"CMakeFiles/VCSEMU.dir/include/APU.cpp.o" \
"CMakeFiles/VCSEMU.dir/include/PPU.cpp.o"

# External object files for target VCSEMU
VCSEMU_EXTERNAL_OBJECTS =

VCSEMU: CMakeFiles/VCSEMU.dir/main.cpp.o
VCSEMU: CMakeFiles/VCSEMU.dir/include/CPU.cpp.o
VCSEMU: CMakeFiles/VCSEMU.dir/include/IO.cpp.o
VCSEMU: CMakeFiles/VCSEMU.dir/include/APU.cpp.o
VCSEMU: CMakeFiles/VCSEMU.dir/include/PPU.cpp.o
VCSEMU: CMakeFiles/VCSEMU.dir/build.make
VCSEMU: CMakeFiles/VCSEMU.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/frain/grada-final/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable VCSEMU"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VCSEMU.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VCSEMU.dir/build: VCSEMU

.PHONY : CMakeFiles/VCSEMU.dir/build

CMakeFiles/VCSEMU.dir/requires: CMakeFiles/VCSEMU.dir/main.cpp.o.requires
CMakeFiles/VCSEMU.dir/requires: CMakeFiles/VCSEMU.dir/include/CPU.cpp.o.requires
CMakeFiles/VCSEMU.dir/requires: CMakeFiles/VCSEMU.dir/include/IO.cpp.o.requires
CMakeFiles/VCSEMU.dir/requires: CMakeFiles/VCSEMU.dir/include/APU.cpp.o.requires
CMakeFiles/VCSEMU.dir/requires: CMakeFiles/VCSEMU.dir/include/PPU.cpp.o.requires

.PHONY : CMakeFiles/VCSEMU.dir/requires

CMakeFiles/VCSEMU.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VCSEMU.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VCSEMU.dir/clean

CMakeFiles/VCSEMU.dir/depend:
	cd /home/frain/grada-final/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frain/grada-final/src /home/frain/grada-final/src /home/frain/grada-final/src/cmake-build-debug /home/frain/grada-final/src/cmake-build-debug /home/frain/grada-final/src/cmake-build-debug/CMakeFiles/VCSEMU.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/VCSEMU.dir/depend
