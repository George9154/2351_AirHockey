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
CMAKE_SOURCE_DIR = /home/fizzer/PucksInDeep/RPi/RPi-pucktracker/puck_tracker_cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fizzer/PucksInDeep/build/PuckTrackerCpp

# Include any dependencies generated for this target.
include CMakeFiles/savgol.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/savgol.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/savgol.dir/flags.make

CMakeFiles/savgol.dir/lib/savgol/savgol.cpp.o: CMakeFiles/savgol.dir/flags.make
CMakeFiles/savgol.dir/lib/savgol/savgol.cpp.o: /home/fizzer/PucksInDeep/RPi/RPi-pucktracker/puck_tracker_cpp/lib/savgol/savgol.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fizzer/PucksInDeep/build/PuckTrackerCpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/savgol.dir/lib/savgol/savgol.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/savgol.dir/lib/savgol/savgol.cpp.o -c /home/fizzer/PucksInDeep/RPi/RPi-pucktracker/puck_tracker_cpp/lib/savgol/savgol.cpp

CMakeFiles/savgol.dir/lib/savgol/savgol.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/savgol.dir/lib/savgol/savgol.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fizzer/PucksInDeep/RPi/RPi-pucktracker/puck_tracker_cpp/lib/savgol/savgol.cpp > CMakeFiles/savgol.dir/lib/savgol/savgol.cpp.i

CMakeFiles/savgol.dir/lib/savgol/savgol.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/savgol.dir/lib/savgol/savgol.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fizzer/PucksInDeep/RPi/RPi-pucktracker/puck_tracker_cpp/lib/savgol/savgol.cpp -o CMakeFiles/savgol.dir/lib/savgol/savgol.cpp.s

# Object files for target savgol
savgol_OBJECTS = \
"CMakeFiles/savgol.dir/lib/savgol/savgol.cpp.o"

# External object files for target savgol
savgol_EXTERNAL_OBJECTS =

libsavgol.so: CMakeFiles/savgol.dir/lib/savgol/savgol.cpp.o
libsavgol.so: CMakeFiles/savgol.dir/build.make
libsavgol.so: libtracker.so
libsavgol.so: CMakeFiles/savgol.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fizzer/PucksInDeep/build/PuckTrackerCpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libsavgol.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/savgol.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/savgol.dir/build: libsavgol.so

.PHONY : CMakeFiles/savgol.dir/build

CMakeFiles/savgol.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/savgol.dir/cmake_clean.cmake
.PHONY : CMakeFiles/savgol.dir/clean

CMakeFiles/savgol.dir/depend:
	cd /home/fizzer/PucksInDeep/build/PuckTrackerCpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fizzer/PucksInDeep/RPi/RPi-pucktracker/puck_tracker_cpp /home/fizzer/PucksInDeep/RPi/RPi-pucktracker/puck_tracker_cpp /home/fizzer/PucksInDeep/build/PuckTrackerCpp /home/fizzer/PucksInDeep/build/PuckTrackerCpp /home/fizzer/PucksInDeep/build/PuckTrackerCpp/CMakeFiles/savgol.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/savgol.dir/depend

