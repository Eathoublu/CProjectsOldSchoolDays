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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/eathoublu/CLionProjects/python_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/eathoublu/CLionProjects/python_test/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/python_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/python_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/python_test.dir/flags.make

CMakeFiles/python_test.dir/main.c.o: CMakeFiles/python_test.dir/flags.make
CMakeFiles/python_test.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eathoublu/CLionProjects/python_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/python_test.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/python_test.dir/main.c.o   -c /Users/eathoublu/CLionProjects/python_test/main.c

CMakeFiles/python_test.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/python_test.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/eathoublu/CLionProjects/python_test/main.c > CMakeFiles/python_test.dir/main.c.i

CMakeFiles/python_test.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/python_test.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/eathoublu/CLionProjects/python_test/main.c -o CMakeFiles/python_test.dir/main.c.s

CMakeFiles/python_test.dir/main.c.o.requires:

.PHONY : CMakeFiles/python_test.dir/main.c.o.requires

CMakeFiles/python_test.dir/main.c.o.provides: CMakeFiles/python_test.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/python_test.dir/build.make CMakeFiles/python_test.dir/main.c.o.provides.build
.PHONY : CMakeFiles/python_test.dir/main.c.o.provides

CMakeFiles/python_test.dir/main.c.o.provides.build: CMakeFiles/python_test.dir/main.c.o


# Object files for target python_test
python_test_OBJECTS = \
"CMakeFiles/python_test.dir/main.c.o"

# External object files for target python_test
python_test_EXTERNAL_OBJECTS =

python_test: CMakeFiles/python_test.dir/main.c.o
python_test: CMakeFiles/python_test.dir/build.make
python_test: CMakeFiles/python_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/eathoublu/CLionProjects/python_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable python_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/python_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/python_test.dir/build: python_test

.PHONY : CMakeFiles/python_test.dir/build

CMakeFiles/python_test.dir/requires: CMakeFiles/python_test.dir/main.c.o.requires

.PHONY : CMakeFiles/python_test.dir/requires

CMakeFiles/python_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/python_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/python_test.dir/clean

CMakeFiles/python_test.dir/depend:
	cd /Users/eathoublu/CLionProjects/python_test/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/eathoublu/CLionProjects/python_test /Users/eathoublu/CLionProjects/python_test /Users/eathoublu/CLionProjects/python_test/cmake-build-debug /Users/eathoublu/CLionProjects/python_test/cmake-build-debug /Users/eathoublu/CLionProjects/python_test/cmake-build-debug/CMakeFiles/python_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/python_test.dir/depend

