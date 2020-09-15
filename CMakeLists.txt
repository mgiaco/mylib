cmake_minimum_required(VERSION 3.13)

message("root")

set(CMAKE_VERBOSE_MAKEFILE ON)

project(mylib VERSION 1.0.0)

add_library(mylib INTERFACE)
target_sources(mylib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src/a.c)

target_include_directories(mylib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(verify)

