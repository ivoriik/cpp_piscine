# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /opt/clion-2018.3.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.3.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ivoriik/CLionProjects/untitled1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ivoriik/CLionProjects/untitled1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/untitled1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/untitled1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/untitled1.dir/flags.make

CMakeFiles/untitled1.dir/main.cpp.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivoriik/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/untitled1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled1.dir/main.cpp.o -c /home/ivoriik/CLionProjects/untitled1/main.cpp

CMakeFiles/untitled1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivoriik/CLionProjects/untitled1/main.cpp > CMakeFiles/untitled1.dir/main.cpp.i

CMakeFiles/untitled1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivoriik/CLionProjects/untitled1/main.cpp -o CMakeFiles/untitled1.dir/main.cpp.s

CMakeFiles/untitled1.dir/SdlMode.cpp.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/SdlMode.cpp.o: ../SdlMode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivoriik/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/untitled1.dir/SdlMode.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled1.dir/SdlMode.cpp.o -c /home/ivoriik/CLionProjects/untitled1/SdlMode.cpp

CMakeFiles/untitled1.dir/SdlMode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/SdlMode.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivoriik/CLionProjects/untitled1/SdlMode.cpp > CMakeFiles/untitled1.dir/SdlMode.cpp.i

CMakeFiles/untitled1.dir/SdlMode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/SdlMode.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivoriik/CLionProjects/untitled1/SdlMode.cpp -o CMakeFiles/untitled1.dir/SdlMode.cpp.s

CMakeFiles/untitled1.dir/DateModule.cpp.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/DateModule.cpp.o: ../DateModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivoriik/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/untitled1.dir/DateModule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled1.dir/DateModule.cpp.o -c /home/ivoriik/CLionProjects/untitled1/DateModule.cpp

CMakeFiles/untitled1.dir/DateModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/DateModule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivoriik/CLionProjects/untitled1/DateModule.cpp > CMakeFiles/untitled1.dir/DateModule.cpp.i

CMakeFiles/untitled1.dir/DateModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/DateModule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivoriik/CLionProjects/untitled1/DateModule.cpp -o CMakeFiles/untitled1.dir/DateModule.cpp.s

CMakeFiles/untitled1.dir/CpuModule.cpp.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/CpuModule.cpp.o: ../CpuModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivoriik/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/untitled1.dir/CpuModule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled1.dir/CpuModule.cpp.o -c /home/ivoriik/CLionProjects/untitled1/CpuModule.cpp

CMakeFiles/untitled1.dir/CpuModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/CpuModule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivoriik/CLionProjects/untitled1/CpuModule.cpp > CMakeFiles/untitled1.dir/CpuModule.cpp.i

CMakeFiles/untitled1.dir/CpuModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/CpuModule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivoriik/CLionProjects/untitled1/CpuModule.cpp -o CMakeFiles/untitled1.dir/CpuModule.cpp.s

CMakeFiles/untitled1.dir/HostModule.cpp.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/HostModule.cpp.o: ../HostModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivoriik/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/untitled1.dir/HostModule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled1.dir/HostModule.cpp.o -c /home/ivoriik/CLionProjects/untitled1/HostModule.cpp

CMakeFiles/untitled1.dir/HostModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/HostModule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivoriik/CLionProjects/untitled1/HostModule.cpp > CMakeFiles/untitled1.dir/HostModule.cpp.i

CMakeFiles/untitled1.dir/HostModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/HostModule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivoriik/CLionProjects/untitled1/HostModule.cpp -o CMakeFiles/untitled1.dir/HostModule.cpp.s

CMakeFiles/untitled1.dir/NetModule.cpp.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/NetModule.cpp.o: ../NetModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivoriik/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/untitled1.dir/NetModule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled1.dir/NetModule.cpp.o -c /home/ivoriik/CLionProjects/untitled1/NetModule.cpp

CMakeFiles/untitled1.dir/NetModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/NetModule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivoriik/CLionProjects/untitled1/NetModule.cpp > CMakeFiles/untitled1.dir/NetModule.cpp.i

CMakeFiles/untitled1.dir/NetModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/NetModule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivoriik/CLionProjects/untitled1/NetModule.cpp -o CMakeFiles/untitled1.dir/NetModule.cpp.s

CMakeFiles/untitled1.dir/RamModule.cpp.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/RamModule.cpp.o: ../RamModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivoriik/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/untitled1.dir/RamModule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled1.dir/RamModule.cpp.o -c /home/ivoriik/CLionProjects/untitled1/RamModule.cpp

CMakeFiles/untitled1.dir/RamModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/RamModule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivoriik/CLionProjects/untitled1/RamModule.cpp > CMakeFiles/untitled1.dir/RamModule.cpp.i

CMakeFiles/untitled1.dir/RamModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/RamModule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivoriik/CLionProjects/untitled1/RamModule.cpp -o CMakeFiles/untitled1.dir/RamModule.cpp.s

CMakeFiles/untitled1.dir/OsModule.cpp.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/OsModule.cpp.o: ../OsModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivoriik/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/untitled1.dir/OsModule.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled1.dir/OsModule.cpp.o -c /home/ivoriik/CLionProjects/untitled1/OsModule.cpp

CMakeFiles/untitled1.dir/OsModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/OsModule.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivoriik/CLionProjects/untitled1/OsModule.cpp > CMakeFiles/untitled1.dir/OsModule.cpp.i

CMakeFiles/untitled1.dir/OsModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/OsModule.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivoriik/CLionProjects/untitled1/OsModule.cpp -o CMakeFiles/untitled1.dir/OsModule.cpp.s

CMakeFiles/untitled1.dir/NcursesMode.cpp.o: CMakeFiles/untitled1.dir/flags.make
CMakeFiles/untitled1.dir/NcursesMode.cpp.o: ../NcursesMode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ivoriik/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/untitled1.dir/NcursesMode.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/untitled1.dir/NcursesMode.cpp.o -c /home/ivoriik/CLionProjects/untitled1/NcursesMode.cpp

CMakeFiles/untitled1.dir/NcursesMode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/untitled1.dir/NcursesMode.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ivoriik/CLionProjects/untitled1/NcursesMode.cpp > CMakeFiles/untitled1.dir/NcursesMode.cpp.i

CMakeFiles/untitled1.dir/NcursesMode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/untitled1.dir/NcursesMode.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ivoriik/CLionProjects/untitled1/NcursesMode.cpp -o CMakeFiles/untitled1.dir/NcursesMode.cpp.s

# Object files for target untitled1
untitled1_OBJECTS = \
"CMakeFiles/untitled1.dir/main.cpp.o" \
"CMakeFiles/untitled1.dir/SdlMode.cpp.o" \
"CMakeFiles/untitled1.dir/DateModule.cpp.o" \
"CMakeFiles/untitled1.dir/CpuModule.cpp.o" \
"CMakeFiles/untitled1.dir/HostModule.cpp.o" \
"CMakeFiles/untitled1.dir/NetModule.cpp.o" \
"CMakeFiles/untitled1.dir/RamModule.cpp.o" \
"CMakeFiles/untitled1.dir/OsModule.cpp.o" \
"CMakeFiles/untitled1.dir/NcursesMode.cpp.o"

# External object files for target untitled1
untitled1_EXTERNAL_OBJECTS =

untitled1: CMakeFiles/untitled1.dir/main.cpp.o
untitled1: CMakeFiles/untitled1.dir/SdlMode.cpp.o
untitled1: CMakeFiles/untitled1.dir/DateModule.cpp.o
untitled1: CMakeFiles/untitled1.dir/CpuModule.cpp.o
untitled1: CMakeFiles/untitled1.dir/HostModule.cpp.o
untitled1: CMakeFiles/untitled1.dir/NetModule.cpp.o
untitled1: CMakeFiles/untitled1.dir/RamModule.cpp.o
untitled1: CMakeFiles/untitled1.dir/OsModule.cpp.o
untitled1: CMakeFiles/untitled1.dir/NcursesMode.cpp.o
untitled1: CMakeFiles/untitled1.dir/build.make
untitled1: CMakeFiles/untitled1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ivoriik/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable untitled1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/untitled1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/untitled1.dir/build: untitled1

.PHONY : CMakeFiles/untitled1.dir/build

CMakeFiles/untitled1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/untitled1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/untitled1.dir/clean

CMakeFiles/untitled1.dir/depend:
	cd /home/ivoriik/CLionProjects/untitled1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ivoriik/CLionProjects/untitled1 /home/ivoriik/CLionProjects/untitled1 /home/ivoriik/CLionProjects/untitled1/cmake-build-debug /home/ivoriik/CLionProjects/untitled1/cmake-build-debug /home/ivoriik/CLionProjects/untitled1/cmake-build-debug/CMakeFiles/untitled1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/untitled1.dir/depend

