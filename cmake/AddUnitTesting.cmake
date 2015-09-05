
# Get all unit testing directories
file(GLOB test_projects RELATIVE ${PROJECT_SOURCE_DIR} test/*)

# Get include_directories properties
get_property(dirs DIRECTORY ${PROJECT_SOURCE_DIR} PROPERTY "INCLUDE_DIRECTORIES")

# Print all include directories.
foreach(include_dir ${dirs})
	message("include_dir: ${include_dir}")
endforeach()

foreach(test ${test_projects})
	string(REGEX MATCH "([A-Za-z_]*)$" p_name ${test})
	file(GLOB sources ${PROJECT_SOURCE_DIR}/${test}/src/*.cc ${PROJECT_SOURCE_DIR}/${test}/src/*.cpp)
	if(sources)
		# Message indicating unit testing state.
		message("${p_name}: Added")

		# Add executable
		add_executable(${p_name} ${sources})

		# Set include directories
		set_property(TARGET ${p_name} PROPERTY INCLUDE_DIRECTORIES "${dirs};${PROJECT_SOURCE_DIR}/${test}/include")
	
		# Link library
		target_link_libraries(${p_name} GameGraphics)
	endif()
endforeach()
