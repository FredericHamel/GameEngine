# Build binary out of sources. 
if(${PROJECT_SOURCE_DIR} STREQUAL ${PROJECT_BINARY_DIR})
	message(FATAL_ERROR "Chose a different PROJECT_BINARY_DIR")
endif()

# Declare project
cmake_minimum_required(VERSION 2.4)
project(UGEN_GAME_ENGINE)

include(cmake/AddCompilerFlags.cmake)
include(cmake/AddDependency.cmake)
include(cmake/AddGameGraphicsLibrary.cmake)
include(cmake/AddGameTestExecutable.cmake)
include(cmake/AddUnitTesting.cmake)

