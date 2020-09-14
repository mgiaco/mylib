list (APPEND verify_HEADER ${CMAKE_CURRENT_SOURCE_DIR}/source)
list (APPEND verify_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/source/mylib_test.c)

add_a_library(verify_a_library OBJECT)
# add path to a_config.h to a library
target_include_directories(verify_a_library PUBLIC ${verify_HEADER})

add_executable(verify_exe ${verify_SOURCE})
target_include_directories(verify_exe PUBLIC ${verify_HEADER})
target_link_libraries(verify_exe verify_a_library)

