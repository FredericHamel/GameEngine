# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_SOURCE_DIR = /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics

# Include any dependencies generated for this target.
include CMakeFiles/GameGraphics.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GameGraphics.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GameGraphics.dir/flags.make

CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o: src/GameWindow.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GameWindow.cpp

CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GameWindow.cpp > CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.i

CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GameWindow.cpp -o CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.s

CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o

CMakeFiles/GameGraphics.dir/src/Color.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/Color.cpp.o: src/Color.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/Color.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/Color.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Color.cpp

CMakeFiles/GameGraphics.dir/src/Color.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/Color.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Color.cpp > CMakeFiles/GameGraphics.dir/src/Color.cpp.i

CMakeFiles/GameGraphics.dir/src/Color.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/Color.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Color.cpp -o CMakeFiles/GameGraphics.dir/src/Color.cpp.s

CMakeFiles/GameGraphics.dir/src/Color.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/Color.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/Color.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/Color.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/Color.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/Color.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/Color.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/Color.cpp.o

CMakeFiles/GameGraphics.dir/src/Debug.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/Debug.cpp.o: src/Debug.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/Debug.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/Debug.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Debug.cpp

CMakeFiles/GameGraphics.dir/src/Debug.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/Debug.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Debug.cpp > CMakeFiles/GameGraphics.dir/src/Debug.cpp.i

CMakeFiles/GameGraphics.dir/src/Debug.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/Debug.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Debug.cpp -o CMakeFiles/GameGraphics.dir/src/Debug.cpp.s

CMakeFiles/GameGraphics.dir/src/Debug.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/Debug.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/Debug.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/Debug.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/Debug.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/Debug.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/Debug.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/Debug.cpp.o

CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o: src/GraphicManager.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GraphicManager.cpp

CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GraphicManager.cpp > CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.i

CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GraphicManager.cpp -o CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.s

CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o

CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o: src/FileTools.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/FileTools.cpp

CMakeFiles/GameGraphics.dir/src/FileTools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/FileTools.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/FileTools.cpp > CMakeFiles/GameGraphics.dir/src/FileTools.cpp.i

CMakeFiles/GameGraphics.dir/src/FileTools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/FileTools.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/FileTools.cpp -o CMakeFiles/GameGraphics.dir/src/FileTools.cpp.s

CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o

CMakeFiles/GameGraphics.dir/src/Game.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/Game.cpp.o: src/Game.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/Game.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/Game.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Game.cpp

CMakeFiles/GameGraphics.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/Game.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Game.cpp > CMakeFiles/GameGraphics.dir/src/Game.cpp.i

CMakeFiles/GameGraphics.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/Game.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Game.cpp -o CMakeFiles/GameGraphics.dir/src/Game.cpp.s

CMakeFiles/GameGraphics.dir/src/Game.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/Game.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/Game.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/Game.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/Game.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/Game.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/Game.cpp.o

CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o: src/GameTime.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GameTime.cpp

CMakeFiles/GameGraphics.dir/src/GameTime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/GameTime.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GameTime.cpp > CMakeFiles/GameGraphics.dir/src/GameTime.cpp.i

CMakeFiles/GameGraphics.dir/src/GameTime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/GameTime.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GameTime.cpp -o CMakeFiles/GameGraphics.dir/src/GameTime.cpp.s

CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o

CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o: src/GameComponent.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GameComponent.cpp

CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GameComponent.cpp > CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.i

CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GameComponent.cpp -o CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.s

CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o

CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o: src/GameSystem.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GameSystem.cpp

CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GameSystem.cpp > CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.i

CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/GameSystem.cpp -o CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.s

CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o

CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o: src/Rectangle.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Rectangle.cpp

CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Rectangle.cpp > CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.i

CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Rectangle.cpp -o CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.s

CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o

CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o: src/ColoredPoint2D.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/ColoredPoint2D.cpp

CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/ColoredPoint2D.cpp > CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.i

CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/ColoredPoint2D.cpp -o CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.s

CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o

CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o: src/InputManager.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/InputManager.cpp

CMakeFiles/GameGraphics.dir/src/InputManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/InputManager.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/InputManager.cpp > CMakeFiles/GameGraphics.dir/src/InputManager.cpp.i

CMakeFiles/GameGraphics.dir/src/InputManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/InputManager.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/InputManager.cpp -o CMakeFiles/GameGraphics.dir/src/InputManager.cpp.s

CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o

CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o: src/DrawableGameComponent.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_13)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/DrawableGameComponent.cpp

CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/DrawableGameComponent.cpp > CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.i

CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/DrawableGameComponent.cpp -o CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.s

CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o

CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o: src/Point2D.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_14)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Point2D.cpp

CMakeFiles/GameGraphics.dir/src/Point2D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/Point2D.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Point2D.cpp > CMakeFiles/GameGraphics.dir/src/Point2D.cpp.i

CMakeFiles/GameGraphics.dir/src/Point2D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/Point2D.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Point2D.cpp -o CMakeFiles/GameGraphics.dir/src/Point2D.cpp.s

CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o

CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o: src/ImageTools.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_15)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/ImageTools.cpp

CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/ImageTools.cpp > CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.i

CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/ImageTools.cpp -o CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.s

CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o

CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o: src/Sprite.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_16)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Sprite.cpp

CMakeFiles/GameGraphics.dir/src/Sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/Sprite.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Sprite.cpp > CMakeFiles/GameGraphics.dir/src/Sprite.cpp.i

CMakeFiles/GameGraphics.dir/src/Sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/Sprite.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/Sprite.cpp -o CMakeFiles/GameGraphics.dir/src/Sprite.cpp.s

CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o

CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o: CMakeFiles/GameGraphics.dir/flags.make
CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o: src/SpriteFont.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles $(CMAKE_PROGRESS_17)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o -c /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/SpriteFont.cpp

CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/SpriteFont.cpp > CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.i

CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/src/SpriteFont.cpp -o CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.s

CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o.requires:
.PHONY : CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o.requires

CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o.provides: CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o.requires
	$(MAKE) -f CMakeFiles/GameGraphics.dir/build.make CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o.provides.build
.PHONY : CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o.provides

CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o.provides.build: CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o

# Object files for target GameGraphics
GameGraphics_OBJECTS = \
"CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/Color.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/Debug.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/Game.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o" \
"CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o"

# External object files for target GameGraphics
GameGraphics_EXTERNAL_OBJECTS =

lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/Color.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/Debug.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/Game.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/build.make
lib/libGameGraphics.so: /usr/lib64/libGLU.so
lib/libGameGraphics.so: /usr/lib64/libGL.so
lib/libGameGraphics.so: /usr/lib64/libSM.so
lib/libGameGraphics.so: /usr/lib64/libICE.so
lib/libGameGraphics.so: /usr/lib64/libX11.so
lib/libGameGraphics.so: /usr/lib64/libXext.so
lib/libGameGraphics.so: /usr/lib64/libSDL2.so
lib/libGameGraphics.so: /usr/lib64/libSDL2_image.so
lib/libGameGraphics.so: /usr/lib64/libphysfs.so
lib/libGameGraphics.so: CMakeFiles/GameGraphics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library lib/libGameGraphics.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GameGraphics.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GameGraphics.dir/build: lib/libGameGraphics.so
.PHONY : CMakeFiles/GameGraphics.dir/build

CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/GameWindow.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/Color.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/Debug.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/GraphicManager.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/FileTools.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/Game.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/GameTime.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/GameComponent.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/GameSystem.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/Rectangle.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/ColoredPoint2D.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/InputManager.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/DrawableGameComponent.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/Point2D.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/ImageTools.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/Sprite.cpp.o.requires
CMakeFiles/GameGraphics.dir/requires: CMakeFiles/GameGraphics.dir/src/SpriteFont.cpp.o.requires
.PHONY : CMakeFiles/GameGraphics.dir/requires

CMakeFiles/GameGraphics.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GameGraphics.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GameGraphics.dir/clean

CMakeFiles/GameGraphics.dir/depend:
	cd /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics /home/frederic/Documents/Projet_CPP/ProjetGame/GameGraphics/CMakeFiles/GameGraphics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GameGraphics.dir/depend

