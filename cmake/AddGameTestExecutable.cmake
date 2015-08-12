file(GLOB
	src
	"GameTest/src/*.cc"
	"GameTest/src/*.cpp")

include_directories("GameTest/include")

add_executable(GameTest ${src})

target_link_libraries(GameTest
	GameGraphics)

install(TARGETS GameTest
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib/static)
