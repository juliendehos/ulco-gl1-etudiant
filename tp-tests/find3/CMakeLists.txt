cmake_minimum_required( VERSION 3.0 )
project( find3 )

add_executable( find3
    src/Game.cpp
    src/main.cpp )

add_executable( find3-test 
    src/Game.cpp
    test/main.cpp )
target_link_libraries(find3-test rapidcheck)

