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
CMAKE_SOURCE_DIR = /Users/eathoublu/CLionProjects/20180419

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/eathoublu/CLionProjects/20180419/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/20180419.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/20180419.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/20180419.dir/flags.make

CMakeFiles/20180419.dir/lab2_4.cpp.o: CMakeFiles/20180419.dir/flags.make
CMakeFiles/20180419.dir/lab2_4.cpp.o: ../lab2_4.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eathoublu/CLionProjects/20180419/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/20180419.dir/lab2_4.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/20180419.dir/lab2_4.cpp.o -c /Users/eathoublu/CLionProjects/20180419/lab2_4.cpp

CMakeFiles/20180419.dir/lab2_4.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/20180419.dir/lab2_4.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eathoublu/CLionProjects/20180419/lab2_4.cpp > CMakeFiles/20180419.dir/lab2_4.cpp.i

CMakeFiles/20180419.dir/lab2_4.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/20180419.dir/lab2_4.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eathoublu/CLionProjects/20180419/lab2_4.cpp -o CMakeFiles/20180419.dir/lab2_4.cpp.s

CMakeFiles/20180419.dir/lab2_4.cpp.o.requires:

.PHONY : CMakeFiles/20180419.dir/lab2_4.cpp.o.requires

CMakeFiles/20180419.dir/lab2_4.cpp.o.provides: CMakeFiles/20180419.dir/lab2_4.cpp.o.requires
	$(MAKE) -f CMakeFiles/20180419.dir/build.make CMakeFiles/20180419.dir/lab2_4.cpp.o.provides.build
.PHONY : CMakeFiles/20180419.dir/lab2_4.cpp.o.provides

CMakeFiles/20180419.dir/lab2_4.cpp.o.provides.build: CMakeFiles/20180419.dir/lab2_4.cpp.o


# Object files for target 20180419
20180419_OBJECTS = \
"CMakeFiles/20180419.dir/lab2_4.cpp.o"

# External object files for target 20180419
20180419_EXTERNAL_OBJECTS =

20180419: CMakeFiles/20180419.dir/lab2_4.cpp.o
20180419: CMakeFiles/20180419.dir/build.make
20180419: CMakeFiles/20180419.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/eathoublu/CLionProjects/20180419/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 20180419"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/20180419.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/20180419.dir/build: 20180419

.PHONY : CMakeFiles/20180419.dir/build

CMakeFiles/20180419.dir/requires: CMakeFiles/20180419.dir/lab2_4.cpp.o.requires

.PHONY : CMakeFiles/20180419.dir/requires

CMakeFiles/20180419.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/20180419.dir/cmake_clean.cmake
.PHONY : CMakeFiles/20180419.dir/clean

CMakeFiles/20180419.dir/depend:
	cd /Users/eathoublu/CLionProjects/20180419/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/eathoublu/CLionProjects/20180419 /Users/eathoublu/CLionProjects/20180419 /Users/eathoublu/CLionProjects/20180419/cmake-build-debug /Users/eathoublu/CLionProjects/20180419/cmake-build-debug /Users/eathoublu/CLionProjects/20180419/cmake-build-debug/CMakeFiles/20180419.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/20180419.dir/depend

