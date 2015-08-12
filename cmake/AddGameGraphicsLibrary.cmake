
file(GLOB src "GameGraphics/src/*.cpp")

include_directories("GameGraphics/include")

add_library(GameGraphics SHARED ${src})
target_link_libraries(GameGraphics
	${SDL2_LIBRARY}
	${SDL2_IMAGE_LIBRARY}
	${SDL2_TTF_LIBRARY}
	${OPENGL_gl_LIBRARY}
	${PHYSFS_LIBRARY})

