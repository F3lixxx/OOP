# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\ClionProjects\OOP\HW09_Operator overload\HW01"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\ClionProjects\OOP\HW09_Operator overload\HW01\build"

# Include any dependencies generated for this target.
include CMakeFiles/HW01.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/HW01.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/HW01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW01.dir/flags.make

CMakeFiles/HW01.dir/main.cpp.obj: CMakeFiles/HW01.dir/flags.make
CMakeFiles/HW01.dir/main.cpp.obj: D:/ClionProjects/OOP/HW09_Operator\ overload/HW01/main.cpp
CMakeFiles/HW01.dir/main.cpp.obj: CMakeFiles/HW01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\ClionProjects\OOP\HW09_Operator overload\HW01\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW01.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/HW01.dir/main.cpp.obj -MF CMakeFiles\HW01.dir\main.cpp.obj.d -o CMakeFiles\HW01.dir\main.cpp.obj -c "D:\ClionProjects\OOP\HW09_Operator overload\HW01\main.cpp"

CMakeFiles/HW01.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW01.dir/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\ClionProjects\OOP\HW09_Operator overload\HW01\main.cpp" > CMakeFiles\HW01.dir\main.cpp.i

CMakeFiles/HW01.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW01.dir/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\ClionProjects\OOP\HW09_Operator overload\HW01\main.cpp" -o CMakeFiles\HW01.dir\main.cpp.s

# Object files for target HW01
HW01_OBJECTS = \
"CMakeFiles/HW01.dir/main.cpp.obj"

# External object files for target HW01
HW01_EXTERNAL_OBJECTS =

HW01.exe: CMakeFiles/HW01.dir/main.cpp.obj
HW01.exe: CMakeFiles/HW01.dir/build.make
HW01.exe: CMakeFiles/HW01.dir/linkLibs.rsp
HW01.exe: CMakeFiles/HW01.dir/objects1.rsp
HW01.exe: CMakeFiles/HW01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\ClionProjects\OOP\HW09_Operator overload\HW01\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HW01.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HW01.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW01.dir/build: HW01.exe
.PHONY : CMakeFiles/HW01.dir/build

CMakeFiles/HW01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HW01.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HW01.dir/clean

CMakeFiles/HW01.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\ClionProjects\OOP\HW09_Operator overload\HW01" "D:\ClionProjects\OOP\HW09_Operator overload\HW01" "D:\ClionProjects\OOP\HW09_Operator overload\HW01\build" "D:\ClionProjects\OOP\HW09_Operator overload\HW01\build" "D:\ClionProjects\OOP\HW09_Operator overload\HW01\build\CMakeFiles\HW01.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/HW01.dir/depend
