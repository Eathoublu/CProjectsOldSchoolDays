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
CMAKE_SOURCE_DIR = /Users/eathoublu/CLionProjects/20191216_ds

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/eathoublu/CLionProjects/20191216_ds/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/20191216_ds.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/20191216_ds.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/20191216_ds.dir/flags.make

CMakeFiles/20191216_ds.dir/main.c.o: CMakeFiles/20191216_ds.dir/flags.make
CMakeFiles/20191216_ds.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eathoublu/CLionProjects/20191216_ds/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/20191216_ds.dir/main.c.o"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/20191216_ds.dir/main.c.o   -c /Users/eathoublu/CLionProjects/20191216_ds/main.c

CMakeFiles/20191216_ds.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/20191216_ds.dir/main.c.i"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/eathoublu/CLionProjects/20191216_ds/main.c > CMakeFiles/20191216_ds.dir/main.c.i

CMakeFiles/20191216_ds.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/20191216_ds.dir/main.c.s"
	/Applications/Xcode-beta.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/eathoublu/CLionProjects/20191216_ds/main.c -o CMakeFiles/20191216_ds.dir/main.c.s

CMakeFiles/20191216_ds.dir/main.c.o.requires:

.PHONY : CMakeFiles/20191216_ds.dir/main.c.o.requires

CMakeFiles/20191216_ds.dir/main.c.o.provides: CMakeFiles/20191216_ds.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/20191216_ds.dir/build.make CMakeFiles/20191216_ds.dir/main.c.o.provides.build
.PHONY : CMakeFiles/20191216_ds.dir/main.c.o.provides

CMakeFiles/20191216_ds.dir/main.c.o.provides.build: CMakeFiles/20191216_ds.dir/main.c.o


# Object files for target 20191216_ds
20191216_ds_OBJECTS = \
"CMakeFiles/20191216_ds.dir/main.c.o"

# External object files for target 20191216_ds
20191216_ds_EXTERNAL_OBJECTS =

20191216_ds: CMakeFiles/20191216_ds.dir/main.c.o
20191216_ds: CMakeFiles/20191216_ds.dir/build.make
20191216_ds: CMakeFiles/20191216_ds.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/eathoublu/CLionProjects/20191216_ds/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 20191216_ds"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/20191216_ds.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/20191216_ds.dir/build: 20191216_ds

.PHONY : CMakeFiles/20191216_ds.dir/build

CMakeFiles/20191216_ds.dir/requires: CMakeFiles/20191216_ds.dir/main.c.o.requires

.PHONY : CMakeFiles/20191216_ds.dir/requires

CMakeFiles/20191216_ds.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/20191216_ds.dir/cmake_clean.cmake
.PHONY : CMakeFiles/20191216_ds.dir/clean

CMakeFiles/20191216_ds.dir/depend:
	cd /Users/eathoublu/CLionProjects/20191216_ds/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/eathoublu/CLionProjects/20191216_ds /Users/eathoublu/CLionProjects/20191216_ds /Users/eathoublu/CLionProjects/20191216_ds/cmake-build-debug /Users/eathoublu/CLionProjects/20191216_ds/cmake-build-debug /Users/eathoublu/CLionProjects/20191216_ds/cmake-build-debug/CMakeFiles/20191216_ds.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/20191216_ds.dir/depend

