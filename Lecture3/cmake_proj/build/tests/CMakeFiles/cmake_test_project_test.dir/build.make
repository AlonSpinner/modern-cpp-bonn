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
include tests/CMakeFiles/cmake_test_project_test.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/cmake_test_project_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/cmake_test_project_test.dir/flags.make

tests/CMakeFiles/cmake_test_project_test.dir/test_blah.cpp.o: tests/CMakeFiles/cmake_test_project_test.dir/flags.make
tests/CMakeFiles/cmake_test_project_test.dir/test_blah.cpp.o: ../tests/test_blah.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/cmake_test_project_test.dir/test_blah.cpp.o"
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/tests" && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cmake_test_project_test.dir/test_blah.cpp.o -c "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/tests/test_blah.cpp"

tests/CMakeFiles/cmake_test_project_test.dir/test_blah.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmake_test_project_test.dir/test_blah.cpp.i"
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/tests/test_blah.cpp" > CMakeFiles/cmake_test_project_test.dir/test_blah.cpp.i

tests/CMakeFiles/cmake_test_project_test.dir/test_blah.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmake_test_project_test.dir/test_blah.cpp.s"
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/tests" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/tests/test_blah.cpp" -o CMakeFiles/cmake_test_project_test.dir/test_blah.cpp.s

# Object files for target cmake_test_project_test
cmake_test_project_test_OBJECTS = \
"CMakeFiles/cmake_test_project_test.dir/test_blah.cpp.o"

# External object files for target cmake_test_project_test
cmake_test_project_test_EXTERNAL_OBJECTS =

tests/cmake_test_project_test: tests/CMakeFiles/cmake_test_project_test.dir/test_blah.cpp.o
tests/cmake_test_project_test: tests/CMakeFiles/cmake_test_project_test.dir/build.make
tests/cmake_test_project_test: lib/libgtest.a
tests/cmake_test_project_test: lib/libgtest_main.a
tests/cmake_test_project_test: src/libblah.so
tests/cmake_test_project_test: lib/libgtest.a
tests/cmake_test_project_test: tests/CMakeFiles/cmake_test_project_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cmake_test_project_test"
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/tests" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmake_test_project_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/cmake_test_project_test.dir/build: tests/cmake_test_project_test

.PHONY : tests/CMakeFiles/cmake_test_project_test.dir/build

tests/CMakeFiles/cmake_test_project_test.dir/clean:
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/tests" && $(CMAKE_COMMAND) -P CMakeFiles/cmake_test_project_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/cmake_test_project_test.dir/clean

tests/CMakeFiles/cmake_test_project_test.dir/depend:
	cd "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj" "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/tests" "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build" "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/tests" "/home/cear20/Desktop/Link to repos/modern-cpp-bonn/Lecture3/cmake_proj/build/tests/CMakeFiles/cmake_test_project_test.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : tests/CMakeFiles/cmake_test_project_test.dir/depend

