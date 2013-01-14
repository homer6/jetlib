cmake_minimum_required( VERSION "2.8.0" )
set( MAIN_EXECUTABLE test )

project( ${MAIN_EXECUTABLE} CXX C )
#add_subdirectory( lib )

set( JET_LIBRARY_SOURCES
    lib/Directory.cc
    lib/File.cc
    lib/Hostname.cc
    lib/HttpClient.cc
    lib/HttpHeader.cc
    lib/HttpRequest.cc
    lib/HttpResponse.cc
    lib/HttpServer.cc
    lib/IpAddress.cc
    lib/TcpClient.cc
    lib/TcpEndpoint.cc
    lib/TcpServer.cc
    lib/TcpConnection.cc
    lib/Int16.cc
    lib/Int32.cc
    lib/Int64.cc
    lib/Int8.cc
    lib/UnsignedInt16.cc
    lib/UnsignedInt32.cc
    lib/UnsignedInt64.cc
    lib/UnsignedInt8.cc
    lib/Utf8Character.cc
    lib/Utf8String.cc
    lib/Exception.cc
)

add_library( jet_shared SHARED ${JET_LIBRARY_SOURCES} )
add_library( jet_static STATIC ${JET_LIBRARY_SOURCES} )

set( LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build )
set( EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/build )

include_directories( include )

add_executable( ${MAIN_EXECUTABLE} tests/main.cc )

#Currently compiled the tests executable with shared libraries. Change the below
#"jet_shared" to "jet_static" to use static linking instead.
target_link_libraries( ${MAIN_EXECUTABLE} jet_shared )

if( CMAKE_COMPILER_IS_GNUCXX )
    message( STATUS "GCC detected, adding compile flags" )
    set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O3 -std=gnu++0x -g" )
endif( CMAKE_COMPILER_IS_GNUCXX )

