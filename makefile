# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /home/szymon/cmake-3.7.0-rc1-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /home/szymon/cmake-3.7.0-rc1-Linux-x86_64/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/szymon/cenigma_sz6315

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szymon/cmake-3.7.0-rc1-Linux-x86_64/bin

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	./cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	./ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/szymon/cmake-3.7.0-rc1-Linux-x86_64/bin/CMakeFiles /home/szymon/cmake-3.7.0-rc1-Linux-x86_64/bin/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/szymon/cmake-3.7.0-rc1-Linux-x86_64/bin/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named cenigma_sz6315

# Build rule for target.
cenigma_sz6315: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 cenigma_sz6315
.PHONY : cenigma_sz6315

# fast build rule for target.
cenigma_sz6315/fast:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/build
.PHONY : cenigma_sz6315/fast

Alphabet.o: Alphabet.cpp.o

.PHONY : Alphabet.o

# target to build an object file
Alphabet.cpp.o:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Alphabet.cpp.o
.PHONY : Alphabet.cpp.o

Alphabet.i: Alphabet.cpp.i

.PHONY : Alphabet.i

# target to preprocess a source file
Alphabet.cpp.i:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Alphabet.cpp.i
.PHONY : Alphabet.cpp.i

Alphabet.s: Alphabet.cpp.s

.PHONY : Alphabet.s

# target to generate assembly for a file
Alphabet.cpp.s:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Alphabet.cpp.s
.PHONY : Alphabet.cpp.s

Enigma.o: Enigma.cpp.o

.PHONY : Enigma.o

# target to build an object file
Enigma.cpp.o:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Enigma.cpp.o
.PHONY : Enigma.cpp.o

Enigma.i: Enigma.cpp.i

.PHONY : Enigma.i

# target to preprocess a source file
Enigma.cpp.i:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Enigma.cpp.i
.PHONY : Enigma.cpp.i

Enigma.s: Enigma.cpp.s

.PHONY : Enigma.s

# target to generate assembly for a file
Enigma.cpp.s:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Enigma.cpp.s
.PHONY : Enigma.cpp.s

EnigmaPiece.o: EnigmaPiece.cpp.o

.PHONY : EnigmaPiece.o

# target to build an object file
EnigmaPiece.cpp.o:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/EnigmaPiece.cpp.o
.PHONY : EnigmaPiece.cpp.o

EnigmaPiece.i: EnigmaPiece.cpp.i

.PHONY : EnigmaPiece.i

# target to preprocess a source file
EnigmaPiece.cpp.i:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/EnigmaPiece.cpp.i
.PHONY : EnigmaPiece.cpp.i

EnigmaPiece.s: EnigmaPiece.cpp.s

.PHONY : EnigmaPiece.s

# target to generate assembly for a file
EnigmaPiece.cpp.s:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/EnigmaPiece.cpp.s
.PHONY : EnigmaPiece.cpp.s

Main.o: Main.cpp.o

.PHONY : Main.o

# target to build an object file
Main.cpp.o:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Main.cpp.o
.PHONY : Main.cpp.o

Main.i: Main.cpp.i

.PHONY : Main.i

# target to preprocess a source file
Main.cpp.i:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Main.cpp.i
.PHONY : Main.cpp.i

Main.s: Main.cpp.s

.PHONY : Main.s

# target to generate assembly for a file
Main.cpp.s:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Main.cpp.s
.PHONY : Main.cpp.s

Mapping.o: Mapping.cpp.o

.PHONY : Mapping.o

# target to build an object file
Mapping.cpp.o:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Mapping.cpp.o
.PHONY : Mapping.cpp.o

Mapping.i: Mapping.cpp.i

.PHONY : Mapping.i

# target to preprocess a source file
Mapping.cpp.i:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Mapping.cpp.i
.PHONY : Mapping.cpp.i

Mapping.s: Mapping.cpp.s

.PHONY : Mapping.s

# target to generate assembly for a file
Mapping.cpp.s:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Mapping.cpp.s
.PHONY : Mapping.cpp.s

ParseFile.o: ParseFile.cpp.o

.PHONY : ParseFile.o

# target to build an object file
ParseFile.cpp.o:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/ParseFile.cpp.o
.PHONY : ParseFile.cpp.o

ParseFile.i: ParseFile.cpp.i

.PHONY : ParseFile.i

# target to preprocess a source file
ParseFile.cpp.i:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/ParseFile.cpp.i
.PHONY : ParseFile.cpp.i

ParseFile.s: ParseFile.cpp.s

.PHONY : ParseFile.s

# target to generate assembly for a file
ParseFile.cpp.s:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/ParseFile.cpp.s
.PHONY : ParseFile.cpp.s

Plugboard.o: Plugboard.cpp.o

.PHONY : Plugboard.o

# target to build an object file
Plugboard.cpp.o:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Plugboard.cpp.o
.PHONY : Plugboard.cpp.o

Plugboard.i: Plugboard.cpp.i

.PHONY : Plugboard.i

# target to preprocess a source file
Plugboard.cpp.i:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Plugboard.cpp.i
.PHONY : Plugboard.cpp.i

Plugboard.s: Plugboard.cpp.s

.PHONY : Plugboard.s

# target to generate assembly for a file
Plugboard.cpp.s:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Plugboard.cpp.s
.PHONY : Plugboard.cpp.s

Reflector.o: Reflector.cpp.o

.PHONY : Reflector.o

# target to build an object file
Reflector.cpp.o:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Reflector.cpp.o
.PHONY : Reflector.cpp.o

Reflector.i: Reflector.cpp.i

.PHONY : Reflector.i

# target to preprocess a source file
Reflector.cpp.i:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Reflector.cpp.i
.PHONY : Reflector.cpp.i

Reflector.s: Reflector.cpp.s

.PHONY : Reflector.s

# target to generate assembly for a file
Reflector.cpp.s:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Reflector.cpp.s
.PHONY : Reflector.cpp.s

Rotor.o: Rotor.cpp.o

.PHONY : Rotor.o

# target to build an object file
Rotor.cpp.o:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Rotor.cpp.o
.PHONY : Rotor.cpp.o

Rotor.i: Rotor.cpp.i

.PHONY : Rotor.i

# target to preprocess a source file
Rotor.cpp.i:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Rotor.cpp.i
.PHONY : Rotor.cpp.i

Rotor.s: Rotor.cpp.s

.PHONY : Rotor.s

# target to generate assembly for a file
Rotor.cpp.s:
	$(MAKE) -f CMakeFiles/cenigma_sz6315.dir/build.make CMakeFiles/cenigma_sz6315.dir/Rotor.cpp.s
.PHONY : Rotor.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... cenigma_sz6315"
	@echo "... Alphabet.o"
	@echo "... Alphabet.i"
	@echo "... Alphabet.s"
	@echo "... Enigma.o"
	@echo "... Enigma.i"
	@echo "... Enigma.s"
	@echo "... EnigmaPiece.o"
	@echo "... EnigmaPiece.i"
	@echo "... EnigmaPiece.s"
	@echo "... Main.o"
	@echo "... Main.i"
	@echo "... Main.s"
	@echo "... Mapping.o"
	@echo "... Mapping.i"
	@echo "... Mapping.s"
	@echo "... ParseFile.o"
	@echo "... ParseFile.i"
	@echo "... ParseFile.s"
	@echo "... Plugboard.o"
	@echo "... Plugboard.i"
	@echo "... Plugboard.s"
	@echo "... Reflector.o"
	@echo "... Reflector.i"
	@echo "... Reflector.s"
	@echo "... Rotor.o"
	@echo "... Rotor.i"
	@echo "... Rotor.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

