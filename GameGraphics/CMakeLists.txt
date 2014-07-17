
project(GameGraphics)
cmake_minimum_required(VERSION 2.6)

if(COMMAND cmake_policy)
	cmake_policy ( SET CMP0003 NEW )
endif()

set(CMAKE_MODULE_PATH ~/.config/Kitware/cmake/modules)
include(${CMAKE_MODULE_PATH}/clean-all.cmake)

InitCleanAll()


set(CMAKE_CXX_FLAGS "--std=c++0x -Wall -Werror")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

file(GLOB 
	lib_source_files
	src/*.cc
	src/*.cpp
)

find_package(OpenGL)
find_package(SDL2 "2" REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(PhysFS REQUIRED)

add_library(${CMAKE_PROJECT_NAME} SHARED ${lib_source_files})
target_link_libraries(${CMAKE_PROJECT_NAME}
	${OPENGL_LIBRARY}
	${SDL2_LIBRARY}
	${SDL2_IMAGE_LIBRARY}
	${PHYSFS_LIBRARY}
)	

include_directories("include/"
		${OPENGL_INCLUDE_DIR}
		${SDL2_INDLUDE_DIR}
		${SDL2_IMAGE_INCLUDE_DIR}
		${PHYSFS_INCLUDE_DIR}
)
