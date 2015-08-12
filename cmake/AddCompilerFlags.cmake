
# Default compiler flags
# Compile as c++11
if(MINGW)
	set(CMAKE_CXX_FLAGS "-std=gnu++11 ${CMAKE_CXX_FLAGS}")
elseif(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
	message(FATAL_ERROR "Not compatible yet")
elseif(WIN32)
	# Disable window by default
	if(MSVC)
		set_target_properties(UGEN_GAME_ENGINE PROPERTIES LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS")
	else()
		set(CMAKE_CXX_FLAGS "-mwindows ${CMAKE_CXX_FLAGS}")
	endif()
else()
	set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
endif()
