#
# Copyright 2020, Samuel Brand
#

cmake_minimum_required( VERSION 3.12 FATAL_ERROR )

project( sharedlibrary )

if( EXISTS ${CMAKE_BINARY_DIR}/conan_paths.cmake )
    include( ${CMAKE_BINARY_DIR}/conan_paths.cmake )
else()
    message( WARNING "The file conan_paths.cmake doesn't exist, you have to run conan install first" )
endif()

set( Boost_NO_SYSTEM_PATHS ON )
set( Boost_USE_STATIC_LIBS ON )
set( Boost_USE_MULTITHREADED ON )
set( Boost_USE_STATIC_RUNTIME $<$<COMPILER_ID:MSVC>:ON> )
find_package( Boost 1.71.0 REQUIRED COMPONENTS filesystem )

add_subdirectory( src )
