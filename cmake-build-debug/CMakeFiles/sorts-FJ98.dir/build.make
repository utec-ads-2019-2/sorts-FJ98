# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/felix/clion-2019.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/felix/clion-2019.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sorts-FJ98.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sorts-FJ98.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sorts-FJ98.dir/flags.make

CMakeFiles/sorts-FJ98.dir/main.cpp.o: CMakeFiles/sorts-FJ98.dir/flags.make
CMakeFiles/sorts-FJ98.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sorts-FJ98.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sorts-FJ98.dir/main.cpp.o -c /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/main.cpp

CMakeFiles/sorts-FJ98.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sorts-FJ98.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/main.cpp > CMakeFiles/sorts-FJ98.dir/main.cpp.i

CMakeFiles/sorts-FJ98.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sorts-FJ98.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/main.cpp -o CMakeFiles/sorts-FJ98.dir/main.cpp.s

CMakeFiles/sorts-FJ98.dir/mocker.cpp.o: CMakeFiles/sorts-FJ98.dir/flags.make
CMakeFiles/sorts-FJ98.dir/mocker.cpp.o: ../mocker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sorts-FJ98.dir/mocker.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sorts-FJ98.dir/mocker.cpp.o -c /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/mocker.cpp

CMakeFiles/sorts-FJ98.dir/mocker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sorts-FJ98.dir/mocker.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/mocker.cpp > CMakeFiles/sorts-FJ98.dir/mocker.cpp.i

CMakeFiles/sorts-FJ98.dir/mocker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sorts-FJ98.dir/mocker.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/mocker.cpp -o CMakeFiles/sorts-FJ98.dir/mocker.cpp.s

CMakeFiles/sorts-FJ98.dir/tester.cpp.o: CMakeFiles/sorts-FJ98.dir/flags.make
CMakeFiles/sorts-FJ98.dir/tester.cpp.o: ../tester.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/sorts-FJ98.dir/tester.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sorts-FJ98.dir/tester.cpp.o -c /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/tester.cpp

CMakeFiles/sorts-FJ98.dir/tester.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sorts-FJ98.dir/tester.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/tester.cpp > CMakeFiles/sorts-FJ98.dir/tester.cpp.i

CMakeFiles/sorts-FJ98.dir/tester.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sorts-FJ98.dir/tester.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/tester.cpp -o CMakeFiles/sorts-FJ98.dir/tester.cpp.s

# Object files for target sorts-FJ98
sorts__FJ98_OBJECTS = \
"CMakeFiles/sorts-FJ98.dir/main.cpp.o" \
"CMakeFiles/sorts-FJ98.dir/mocker.cpp.o" \
"CMakeFiles/sorts-FJ98.dir/tester.cpp.o"

# External object files for target sorts-FJ98
sorts__FJ98_EXTERNAL_OBJECTS =

sorts-FJ98: CMakeFiles/sorts-FJ98.dir/main.cpp.o
sorts-FJ98: CMakeFiles/sorts-FJ98.dir/mocker.cpp.o
sorts-FJ98: CMakeFiles/sorts-FJ98.dir/tester.cpp.o
sorts-FJ98: CMakeFiles/sorts-FJ98.dir/build.make
sorts-FJ98: CMakeFiles/sorts-FJ98.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable sorts-FJ98"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sorts-FJ98.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sorts-FJ98.dir/build: sorts-FJ98

.PHONY : CMakeFiles/sorts-FJ98.dir/build

CMakeFiles/sorts-FJ98.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sorts-FJ98.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sorts-FJ98.dir/clean

CMakeFiles/sorts-FJ98.dir/depend:
	cd /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98 /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98 /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/cmake-build-debug /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/cmake-build-debug /home/felix/GitHubs-2019-2/ADS-20192/sorts-FJ98/cmake-build-debug/CMakeFiles/sorts-FJ98.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sorts-FJ98.dir/depend

