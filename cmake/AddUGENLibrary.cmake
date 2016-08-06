
file(GLOB src "UGEN/src/*.cpp" "UGEN/src/subsystem/*.cpp" "UGEN/src/exceptions/*.cpp")

include_directories("UGEN/include")

add_library(UGEN SHARED ${src})
target_link_libraries(UGEN
	${SDL2_LIBRARY}
	${SDL2_IMAGE_LIBRARY}
	${SDL2_TTF_LIBRARY}
  ${OPENAL_LIBRARY}
	${OPENGL_gl_LIBRARY}
	${PHYSFS_LIBRARY})

install(DIRECTORY "UGEN/include" DESTINATION ".")

install(TARGETS UGEN
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib/static)
