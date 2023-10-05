# hello-example/CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

project(hello-example VERSION 1.0)

enable_language(CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "")

set(SELF_EXE hello-example)
set(SELF_SOURCE_FILES hello.cpp)

add_executable(${SELF_EXE} ${SELF_SOURCE_FILES})

install(TARGETS ${SELF_EXE} DESTINATION bin)

if(CMAKE_EXPORT_COMPILE_COMMANDS)
    set(CMAKE_CXX_STANDARD_INCLUDE_DIRECTORIES ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES})
endif()
