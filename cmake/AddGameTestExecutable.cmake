file(GLOB
	src
	"GameTest/src/*.cc"
	"GameTest/src/*.cpp")

file(GLOB
	headers
	"GameTest/include/*.h")
add_executable(GameTest ${src} ${headers})

get_property(dirs DIRECTORY "${PROJECT_SOURCE_DIR}" PROPERTY INCLUDE_DIRECTORIES)
set_property(TARGET GameTest PROPERTY INCLUDE_DIRECTORIES "${dirs}" "${PROJECT_SOURCE_DIR}/GameTest/include")

# GLEW_LIBRARY not defined on linux or macosx
target_link_libraries(GameTest UGEN)

install(TARGETS GameTest
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib/static)
