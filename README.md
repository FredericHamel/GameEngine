GameEngine
==========

The actual game engine.
Still in devellopment.

Dependency
==========
- SDL2
- SDL2_image
- SDL2_ttf
- OpenAL
- OpenGL
- GLEW (Windows only)
- physfs 2.0.3

CMake build
===========

1. Make a build directory:
	mkdir build

2. Change to build directory:
	cd build

3. Choose the build system you want:
	- MinGW Makefile on Windows (tested)
	cmake -G "MinGW Makefile" ..
	make
	
	- Makefile linux(tested) or mac (not tested)
	cmake ..
	make
	


Build.sh
1. Run ./Build.sh to build the library.

