cmake_minimum_required(VERSION 3.10)
project(ooz)
set(CMAKE_CXX_STANDARD 17)

if (MSVC)
        set(CMAKE_CXX_FLAGS "/O2")

        set(CMAKE_FIND_LIBRARY_SUFFIXES ".lib")
        add_compile_options(/MT)
        add_link_options(/INCREMENTAL:NO /NODEFAULTLIB:MSVCRT)
else()
        set(CMAKE_CXX_FLAGS "-O2")
endif()

file(GLOB SOURCES *.cpp)

add_library(ooz_dynamic SHARED ${SOURCES})
add_library(ooz_static STATIC ${SOURCES})

target_compile_options(ooz_static PRIVATE "-static")

set_target_properties(ooz_dynamic PROPERTIES OUTPUT_NAME ooz)
set_target_properties(ooz_static PROPERTIES OUTPUT_NAME ooz)
