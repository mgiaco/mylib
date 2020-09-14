list (APPEND verify_HEADER ${CMAKE_CURRENT_SOURCE_DIR}/source)

message("mylib")

list (APPEND verify_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/source/mylib_test.c)

add_executable(verify_exe ${verify_SOURCE} ${verify_HEADER})
target_include_directories(verify_exe PUBLIC ${verify_HEADER})
target_link_libraries(verify_exe $<TARGET_OBJECTS:mylib_obj>)

