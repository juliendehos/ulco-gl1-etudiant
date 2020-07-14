cmake_minimum_required( VERSION 3.0 )
project( mymock )

add_executable( mymock-test
    test/Order-test.cpp
    test/main.cpp )

enable_testing()
add_test( NAME mymock-test COMMAND mymock-test )

