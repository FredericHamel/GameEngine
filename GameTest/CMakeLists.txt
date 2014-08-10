project(GameTest)
cmake_minimum_required(VERSION 2.6)

if(COMMAND cmake_policy)
	cmake_policy ( SET CMP0015 NEW )
endif()


set(CMAKE_MODULE_PATH "~/.config/Kitware/cmake/modules")
include(${CMAKE_MODULE_PATH}/clean-all.cmake)

set(CMAKE_CXX_FLAGS "-Wall --std=c++0x")
set(CMAKE_EXE_LINKER_FLAGS -L../GameGraphics/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

InitCleanAll()

file(GLOB
	source_file
	${CMAKE_SOURCE_DIR}/src/*.cc
	${CMAKE_SOURCE_DIR}/src/*.cpp
)

### find_package(SDL2 "2" REQUIRED)
##find_library(GAME_GRAPHICS_LIBRARY NAME GameGraphics PATHS ../GameGraphics/lib/)
include_directories("include/"
	"../GameGraphics/include/"
)

add_executable(${CMAKE_PROJECT_NAME} ${source_file})
target_link_libraries(${CMAKE_PROJECT_NAME} ${GAME_GRAPHICS_LIBRARY} ${SDL2_LIBRARY} /usr/lib/libSDL2_ttf.so GameGraphics)
