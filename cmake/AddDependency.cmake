
# Add project dependency

if(COMMAND cmake_policy)
	cmake_policy(SET CMP0003 NEW)
endif()

set(CMAKE_MODULE_PATH 
	"${PROJECT_SOURCE_DIR}/cmake/modules")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(OpenGL REQUIRED)
find_package(PhysFS REQUIRED)


