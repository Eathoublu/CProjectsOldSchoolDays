# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/eathoublu/CLionProjects/test_3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/eathoublu/CLionProjects/test_3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_3.dir/flags.make

CMakeFiles/test_3.dir/main.c.o: CMakeFiles/test_3.dir/flags.make
CMakeFiles/test_3.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eathoublu/CLionProjects/test_3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_3.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_3.dir/main.c.o   -c /Users/eathoublu/CLionProjects/test_3/main.c

CMakeFiles/test_3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_3.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/eathoublu/CLionProjects/test_3/main.c > CMakeFiles/test_3.dir/main.c.i

CMakeFiles/test_3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_3.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/eathoublu/CLionProjects/test_3/main.c -o CMakeFiles/test_3.dir/main.c.s

CMakeFiles/test_3.dir/main.c.o.requires:

.PHONY : CMakeFiles/test_3.dir/main.c.o.requires

CMakeFiles/test_3.dir/main.c.o.provides: CMakeFiles/test_3.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/test_3.dir/build.make CMakeFiles/test_3.dir/main.c.o.provides.build
.PHONY : CMakeFiles/test_3.dir/main.c.o.provides

CMakeFiles/test_3.dir/main.c.o.provides.build: CMakeFiles/test_3.dir/main.c.o


CMakeFiles/test_3.dir/help2.c.o: CMakeFiles/test_3.dir/flags.make
CMakeFiles/test_3.dir/help2.c.o: ../help2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eathoublu/CLionProjects/test_3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/test_3.dir/help2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_3.dir/help2.c.o   -c /Users/eathoublu/CLionProjects/test_3/help2.c

CMakeFiles/test_3.dir/help2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_3.dir/help2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/eathoublu/CLionProjects/test_3/help2.c > CMakeFiles/test_3.dir/help2.c.i

CMakeFiles/test_3.dir/help2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_3.dir/help2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/eathoublu/CLionProjects/test_3/help2.c -o CMakeFiles/test_3.dir/help2.c.s

CMakeFiles/test_3.dir/help2.c.o.requires:

.PHONY : CMakeFiles/test_3.dir/help2.c.o.requires

CMakeFiles/test_3.dir/help2.c.o.provides: CMakeFiles/test_3.dir/help2.c.o.requires
	$(MAKE) -f CMakeFiles/test_3.dir/build.make CMakeFiles/test_3.dir/help2.c.o.provides.build
.PHONY : CMakeFiles/test_3.dir/help2.c.o.provides

CMakeFiles/test_3.dir/help2.c.o.provides.build: CMakeFiles/test_3.dir/help2.c.o


# Object files for target test_3
test_3_OBJECTS = \
"CMakeFiles/test_3.dir/main.c.o" \
"CMakeFiles/test_3.dir/help2.c.o"

# External object files for target test_3
test_3_EXTERNAL_OBJECTS =

test_3: CMakeFiles/test_3.dir/main.c.o
test_3: CMakeFiles/test_3.dir/help2.c.o
test_3: CMakeFiles/test_3.dir/build.make
test_3: CMakeFiles/test_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/eathoublu/CLionProjects/test_3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable test_3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_3.dir/build: test_3

.PHONY : CMakeFiles/test_3.dir/build

CMakeFiles/test_3.dir/requires: CMakeFiles/test_3.dir/main.c.o.requires
CMakeFiles/test_3.dir/requires: CMakeFiles/test_3.dir/help2.c.o.requires

.PHONY : CMakeFiles/test_3.dir/requires

CMakeFiles/test_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_3.dir/clean

CMakeFiles/test_3.dir/depend:
	cd /Users/eathoublu/CLionProjects/test_3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/eathoublu/CLionProjects/test_3 /Users/eathoublu/CLionProjects/test_3 /Users/eathoublu/CLionProjects/test_3/cmake-build-debug /Users/eathoublu/CLionProjects/test_3/cmake-build-debug /Users/eathoublu/CLionProjects/test_3/cmake-build-debug/CMakeFiles/test_3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_3.dir/depend

