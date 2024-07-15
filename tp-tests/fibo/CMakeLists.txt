cmake_minimum_required( VERSION 3.10 )
project( fibo )

add_executable( fibo
    src/Fibo.cpp
    src/main.cpp )

install( TARGETS fibo DESTINATION bin )

add_executable( test-fibo
    src/Fibo.cpp
    src/Fibo-test.cpp
    src/test-fibo.cpp )

enable_testing()
add_test( NAME test-fibo COMMAND test-fibo )

