cmake_minimum_required( VERSION "2.8.0" )
set( MAIN_EXECUTABLE test )

project( ${MAIN_EXECUTABLE} CXX C )
#add_subdirectory( lib )

set( JET_LIBRARY_SOURCES lib/File.cc )

add_library( jet ${JET_LIBRARY_SOURCES} )

set( LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build )
set( EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build )

include_directories( include )

add_executable( ${MAIN_EXECUTABLE} tests/main.cc )
target_link_libraries( ${MAIN_EXECUTABLE} jet )


if( CMAKE_COMPILER_IS_GNUCXX )
    message( STATUS "GCC detected, adding compile flags" )
    set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O3" )
endif( CMAKE_COMPILER_IS_GNUCXX )
