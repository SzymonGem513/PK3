# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Szymon\Desktop\PK3\PK3_Lab3_dziedziczene

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Szymon\Desktop\PK3\PK3_Lab3_dziedziczene\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PK3_Lab3_dziedziczene.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/PK3_Lab3_dziedziczene.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PK3_Lab3_dziedziczene.dir/flags.make

CMakeFiles/PK3_Lab3_dziedziczene.dir/main.cpp.obj: CMakeFiles/PK3_Lab3_dziedziczene.dir/flags.make
CMakeFiles/PK3_Lab3_dziedziczene.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Szymon\Desktop\PK3\PK3_Lab3_dziedziczene\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PK3_Lab3_dziedziczene.dir/main.cpp.obj"
	C:\PROGRA~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PK3_Lab3_dziedziczene.dir\main.cpp.obj -c C:\Users\Szymon\Desktop\PK3\PK3_Lab3_dziedziczene\main.cpp

CMakeFiles/PK3_Lab3_dziedziczene.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PK3_Lab3_dziedziczene.dir/main.cpp.i"
	C:\PROGRA~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Szymon\Desktop\PK3\PK3_Lab3_dziedziczene\main.cpp > CMakeFiles\PK3_Lab3_dziedziczene.dir\main.cpp.i

CMakeFiles/PK3_Lab3_dziedziczene.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PK3_Lab3_dziedziczene.dir/main.cpp.s"
	C:\PROGRA~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Szymon\Desktop\PK3\PK3_Lab3_dziedziczene\main.cpp -o CMakeFiles\PK3_Lab3_dziedziczene.dir\main.cpp.s

# Object files for target PK3_Lab3_dziedziczene
PK3_Lab3_dziedziczene_OBJECTS = \
"CMakeFiles/PK3_Lab3_dziedziczene.dir/main.cpp.obj"

# External object files for target PK3_Lab3_dziedziczene
PK3_Lab3_dziedziczene_EXTERNAL_OBJECTS =

PK3_Lab3_dziedziczene.exe: CMakeFiles/PK3_Lab3_dziedziczene.dir/main.cpp.obj
PK3_Lab3_dziedziczene.exe: CMakeFiles/PK3_Lab3_dziedziczene.dir/build.make
PK3_Lab3_dziedziczene.exe: CMakeFiles/PK3_Lab3_dziedziczene.dir/linklibs.rsp
PK3_Lab3_dziedziczene.exe: CMakeFiles/PK3_Lab3_dziedziczene.dir/objects1.rsp
PK3_Lab3_dziedziczene.exe: CMakeFiles/PK3_Lab3_dziedziczene.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Szymon\Desktop\PK3\PK3_Lab3_dziedziczene\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PK3_Lab3_dziedziczene.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PK3_Lab3_dziedziczene.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PK3_Lab3_dziedziczene.dir/build: PK3_Lab3_dziedziczene.exe
.PHONY : CMakeFiles/PK3_Lab3_dziedziczene.dir/build

CMakeFiles/PK3_Lab3_dziedziczene.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PK3_Lab3_dziedziczene.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PK3_Lab3_dziedziczene.dir/clean

CMakeFiles/PK3_Lab3_dziedziczene.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Szymon\Desktop\PK3\PK3_Lab3_dziedziczene C:\Users\Szymon\Desktop\PK3\PK3_Lab3_dziedziczene C:\Users\Szymon\Desktop\PK3\PK3_Lab3_dziedziczene\cmake-build-debug C:\Users\Szymon\Desktop\PK3\PK3_Lab3_dziedziczene\cmake-build-debug C:\Users\Szymon\Desktop\PK3\PK3_Lab3_dziedziczene\cmake-build-debug\CMakeFiles\PK3_Lab3_dziedziczene.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PK3_Lab3_dziedziczene.dir/depend

