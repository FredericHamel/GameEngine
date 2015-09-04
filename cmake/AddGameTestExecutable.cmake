file(GLOB
	src
	"GameTest/src/*.cc"
	"GameTest/src/*.cpp")

add_executable(GameTest ${src})

get_property(dirs DIRECTORY "${PROJECT_SOURCE_DIR}" PROPERTY INCLUDE_DIRECTORIES)
set_property(TARGET GameTest PROPERTY INCLUDE_DIRECTORIES "${dirs}" "${PROJECT_SOURCE_DIR}/GameTest/include")

target_link_libraries(GameTest
	GameGraphics)

install(TARGETS GameTest
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib/static)
