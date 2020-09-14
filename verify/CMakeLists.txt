list (APPEND verify_HEADER ${CMAKE_CURRENT_SOURCE_DIR}/source)

list (APPEND verify_SOURCE
	${CMAKE_CURRENT_SOURCE_DIR}/source/mylib_test.c
)

add_executable(verify ${verify_SOURCE} ${verify_HEADER})
target_include_directories(verify PUBLIC ${verify_HEADER})
target_link_libraries(verify mylib_obj )

