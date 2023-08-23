cmake_minimum_required( VERSION 3.0 )
project( guess )

add_executable( guess
    src/main.cpp )
install( TARGETS guess DESTINATION bin )

add_executable( guess-test
    test/main.cpp )
enable_testing()
add_test( NAME guess-test COMMAND guess-test )

