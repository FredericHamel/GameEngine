
file(GLOB src "UGEN/src/*.cpp" "UGEN/src/subsystem/*.cpp" "UGEN/src/exceptions/*.cpp")

include_directories("UGEN/include")

add_library(UGEN SHARED ${src})
target_link_libraries(UGEN
	${SDL2_LIBRARY}
	${SDL2MAIN_LIBRARY}
	${SDL2_IMAGE_LIBRARY}
	${SDL2_TTF_LIBRARY}
	${OPENAL_LIBRARY}
	${OPENGL_gl_LIBRARY}
	${GLEW_LIBRARY}
	${PHYSFS_LIBRARY})

file(GLOB install_include_files "UGEN/include/*")
set(list_install_dirs "")
set(list_install_files "")
foreach(item ${install_include_files})
  if(IS_DIRECTORY ${item})
    LIST(APPEND list_install_dirs ${item})
  else()
    LIST(APPEND list_install_files ${item})
  endif()
endforeach()


install(FILES ${list_install_files} DESTINATION "include/UGEN")
install(DIRECTORY ${list_install_dirs} DESTINATION "include/UGEN")

install(TARGETS UGEN
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib/static)
