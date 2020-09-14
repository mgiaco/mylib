cmake_minimum_required(VERSION 3.13)

project(mylib VERSION 1.0.0)

add_library(${PROJECT_NAME}_obj OBJECT ${CMAKE_CURRENT_SOURCE_DIR}/src/a.c)

target_include_directories(${PROJECT_NAME}_obj
	PUBLIC 
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)
	
if((CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME OR MODERN_CMAKE_BUILD_TESTING) AND BUILD_TESTING)
	add_subdirectory(verify)
endif()

