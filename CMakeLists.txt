cmake_minimum_required( VERSION "2.8.0" )
set( MAIN_EXECUTABLE my_exe )

project( ${MAIN_EXECUTABLE} CXX C )

#find_package( jet_shared REQUIRED )
#find_package( jet_static REQUIRED )
#include_directories( ${jet_shared_INCLUDE_DIRS} )
#set( LIBS /usr/lib/libjet_static.a )
set( LIBS /usr/lib/libjet_shared.so )

set( LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build )
set( EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build )

include_directories( include )

add_executable( ${MAIN_EXECUTABLE} src/main.cc )
target_link_libraries( ${MAIN_EXECUTABLE} ${LIBS} )

if( CMAKE_COMPILER_IS_GNUCXX )
    message( STATUS "GCC detected, adding compile flags" )
    set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O3 -std=gnu++0x -g" )
endif( CMAKE_COMPILER_IS_GNUCXX )

