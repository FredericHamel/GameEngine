
file(GLOB src "GameGraphics/src/*.cpp" "GameGraphics/src/subsystem/*.cpp" "GameGraphics/src/exceptions/*.cpp")

include_directories("GameGraphics/include")

add_library(GameGraphics SHARED ${src})
target_link_libraries(GameGraphics
	${SDL2_LIBRARY}
	${SDL2_IMAGE_LIBRARY}
	${SDL2_TTF_LIBRARY}
	${OPENGL_gl_LIBRARY}
	${PHYSFS_LIBRARY})

install(DIRECTORY "GameGraphics/include" DESTINATION ".")

install(TARGETS GameGraphics
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib/static)
