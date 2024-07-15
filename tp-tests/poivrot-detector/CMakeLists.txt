cmake_minimum_required( VERSION 3.10 )
project( poivrot-detector )

add_executable( poivrot-detector
    src/Bottle.cpp
    src/main.cpp )
install( TARGETS poivrot-detector DESTINATION bin )

add_executable( poivrot-detector-test
    src/Bottle.cpp
    test/Bottle-test.cpp
    test/main.cpp )
enable_testing()
add_test( NAME poivrot-detector-test COMMAND poivrot-detector-test )

