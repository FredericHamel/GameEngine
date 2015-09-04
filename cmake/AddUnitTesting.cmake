
file(GLOB test_projects RELATIVE ${PROJECT_SOURCE_DIR} test/*)

get_property(dirs DIRECTORY ${PROJECT_SOURCE_DIR} PROPERTY "INCLUDE_DIRECTORIES")

foreach(include_dir ${dirs})
	message("include_dir: ${include_dir}")
endforeach()

foreach(test ${test_projects})
	string(REGEX MATCH "([A-Za-z_]*)$" p_name ${test})
	file(GLOB sources ${PROJECT_SOURCE_DIR}/${test}/src/*.cc ${PROJECT_SOURCE_DIR}/${test}/src/*.cpp)
	if(sources)
		set_property(TARGET ${p_test} PROPERTY "INCLUDE_DIRECTORIES" "${dirs}" "${test}/include")
		message("${p_name}: Added")
		add_executable(${p_name} ${sources})
		target_link_libraries(${p_name} GameGraphics)
	endif()
endforeach()
