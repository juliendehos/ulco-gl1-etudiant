cmake_minimum_required( VERSION 3.10 )
project( pbt )

add_executable( pbt-test main.cpp )
target_link_libraries(pbt-test rapidcheck)

