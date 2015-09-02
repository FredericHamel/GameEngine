# Build binary out of sources. 
if(${PROJECT_SOURCE_DIR} STREQUAL ${PROJECT_BINARY_DIR})
	message(FATAL_ERROR "Chose a different PROJECT_BINARY_DIR")
endif()

# Declare project
project(UGEN_GAME_ENGINE)
cmake_minimum_required(VERSION 2.4)

include(cmake/AddCompilerFlags.cmake)
include(cmake/AddDependency.cmake)
include(cmake/AddGameGraphicsLibrary.cmake)
include(cmake/AddGameTestExecutable.cmake)

file(GLOB test_projects RELATIVE ${PROJECT_SOURCE_DIR} test/*)

get_property(dirs DIRECTORY ${PROJECT_SOURCE_DIR} PROPERTY "INCLUDE_DIRECTORIES")

foreach(include_dir ${dirs})
	message("${include_dir}")
endforeach()

foreach(test ${test_projects})
	string(REGEX MATCH "([A-Za-z_]*)$" p_name ${test})
	message("${p_name}")
	file(GLOB sources ${PROJECT_SOURCE_DIR}/${test}/src/*.cc ${PROJECT_SOURCE_DIR}/${test}/src/*.cpp)
	
	message("${sources}")

	set_property(TARGET ${p_test} PROPERTY "INCLUDE_DIRECTORIES" "${dirs}" "${test}/include")
	if(NOT "${sources}" STREQUAL "")
		add_executable(${p_name} ${sources})
		target_link_libraries(${p_name} GameGraphics)
	endif()
endforeach()
