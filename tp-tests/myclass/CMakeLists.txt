cmake_minimum_required( VERSION 3.10 )
project( myclass )

add_executable( myclass-test
    src/MyClass.cpp
    src/MyClass-test.cpp
    src/test.cpp )

enable_testing()
add_test( myclass-test myclass-test )

