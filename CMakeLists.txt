cmake_minimum_required(VERSION 3.13)

project(mylib VERSION 1.0.0)

# 'a' as in the library named 'a', not as an article but as a name
set(_add_a_library_source_dir ${CMAKE_CURRENT_LIST_DIR})
function(add_a_library name)
   add_library(${name} ${ARGN} ${_add_a_library_source_dir}/src/a.c)
   target_include_directories(${name}
       PUBLIC 
           $<BUILD_INTERFACE:${_add_a_library_source_dir}/include>
)
endfunction()

	
add_subdirectory(verify)