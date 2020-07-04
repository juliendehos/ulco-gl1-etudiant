cmake_minimum_required( VERSION 3.0 )
project( badFibo )
set( CMAKE_CXX_FLAGS "-Wall -Wextra -O0" )
add_executable( badFibo src/badFibo.cpp src/Myvect.cpp )

