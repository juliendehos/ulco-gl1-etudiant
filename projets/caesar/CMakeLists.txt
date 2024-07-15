cmake_minimum_required( VERSION 3.10 )
project( caesar )

add_executable( caesar
    src/main.cpp )
install( TARGETS caesar DESTINATION bin )

add_executable( caesar-ut
    test/ut.cpp
    test/ut-main.cpp )
