# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Competitive-Programming\CPP\AddSubtract

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Competitive-Programming\CPP\AddSubtract\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Competitive_Programming.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Competitive_Programming.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Competitive_Programming.dir\flags.make

CMakeFiles\Competitive_Programming.dir\AddSubtract.cpp.obj: CMakeFiles\Competitive_Programming.dir\flags.make
CMakeFiles\Competitive_Programming.dir\AddSubtract.cpp.obj: ..\AddSubtract.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Competitive-Programming\CPP\AddSubtract\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Competitive_Programming.dir/AddSubtract.cpp.obj"
	C:\PROGRA~2\MICROS~4\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Competitive_Programming.dir\AddSubtract.cpp.obj /FdCMakeFiles\Competitive_Programming.dir\ /FS -c D:\Competitive-Programming\CPP\AddSubtract\AddSubtract.cpp
<<

CMakeFiles\Competitive_Programming.dir\AddSubtract.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Competitive_Programming.dir/AddSubtract.cpp.i"
	C:\PROGRA~2\MICROS~4\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe > CMakeFiles\Competitive_Programming.dir\AddSubtract.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Competitive-Programming\CPP\AddSubtract\AddSubtract.cpp
<<

CMakeFiles\Competitive_Programming.dir\AddSubtract.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Competitive_Programming.dir/AddSubtract.cpp.s"
	C:\PROGRA~2\MICROS~4\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Competitive_Programming.dir\AddSubtract.cpp.s /c D:\Competitive-Programming\CPP\AddSubtract\AddSubtract.cpp
<<

# Object files for target Competitive_Programming
Competitive_Programming_OBJECTS = \
"CMakeFiles\Competitive_Programming.dir\AddSubtract.cpp.obj"

# External object files for target Competitive_Programming
Competitive_Programming_EXTERNAL_OBJECTS =

Competitive_Programming.exe: CMakeFiles\Competitive_Programming.dir\AddSubtract.cpp.obj
Competitive_Programming.exe: CMakeFiles\Competitive_Programming.dir\build.make
Competitive_Programming.exe: CMakeFiles\Competitive_Programming.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Competitive-Programming\CPP\AddSubtract\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Competitive_Programming.exe"
	"C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Competitive_Programming.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100177~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~4\2017\BUILDT~1\VC\Tools\MSVC\1416~1.270\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Competitive_Programming.dir\objects1.rsp @<<
 /out:Competitive_Programming.exe /implib:Competitive_Programming.lib /pdb:D:\Competitive-Programming\CPP\AddSubtract\cmake-build-debug\Competitive_Programming.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Competitive_Programming.dir\build: Competitive_Programming.exe

.PHONY : CMakeFiles\Competitive_Programming.dir\build

CMakeFiles\Competitive_Programming.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Competitive_Programming.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Competitive_Programming.dir\clean

CMakeFiles\Competitive_Programming.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Competitive-Programming\CPP\AddSubtract D:\Competitive-Programming\CPP\AddSubtract D:\Competitive-Programming\CPP\AddSubtract\cmake-build-debug D:\Competitive-Programming\CPP\AddSubtract\cmake-build-debug D:\Competitive-Programming\CPP\AddSubtract\cmake-build-debug\CMakeFiles\Competitive_Programming.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Competitive_Programming.dir\depend

