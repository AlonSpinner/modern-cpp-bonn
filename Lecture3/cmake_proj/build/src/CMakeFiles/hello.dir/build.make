# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build"

# Include any dependencies generated for this target.
include src/CMakeFiles/hello.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/hello.dir/flags.make

src/CMakeFiles/hello.dir/hello.cpp.o: src/CMakeFiles/hello.dir/flags.make
src/CMakeFiles/hello.dir/hello.cpp.o: ../src/hello.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/hello.dir/hello.cpp.o"
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/src" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello.dir/hello.cpp.o -c "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/src/hello.cpp"

src/CMakeFiles/hello.dir/hello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/hello.cpp.i"
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/src/hello.cpp" > CMakeFiles/hello.dir/hello.cpp.i

src/CMakeFiles/hello.dir/hello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/hello.cpp.s"
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/src" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/src/hello.cpp" -o CMakeFiles/hello.dir/hello.cpp.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/hello.cpp.o"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

src/libhello.a: src/CMakeFiles/hello.dir/hello.cpp.o
src/libhello.a: src/CMakeFiles/hello.dir/build.make
src/libhello.a: src/CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libhello.a"
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/src" && $(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean_target.cmake
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/src" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/hello.dir/build: src/libhello.a

.PHONY : src/CMakeFiles/hello.dir/build

src/CMakeFiles/hello.dir/clean:
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/src" && $(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/hello.dir/clean

src/CMakeFiles/hello.dir/depend:
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj" "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/src" "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build" "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/src" "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/src/CMakeFiles/hello.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/CMakeFiles/hello.dir/depend

