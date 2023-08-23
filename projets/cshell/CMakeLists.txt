cmake_minimum_required( VERSION 3.10 )
project( cshell )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories( include )

# library
add_library( cshell-lib
    src/cshell/cat.cpp )

# executable
add_executable( cshell-app
  app/main.cpp )
target_link_libraries( cshell-app cshell-lib )

# install
install( TARGETS cshell-app DESTINATION bin )

# testing
add_executable( cshell-test
    test/cshell/cat-test.cpp
    test/main.cpp )
target_link_libraries( cshell-test cshell-lib )
enable_testing()
add_test( NAME cshell-test COMMAND cshell-test )

