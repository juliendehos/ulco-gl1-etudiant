cmake_minimum_required( VERSION 3.0 )
project( webserver )

add_subdirectory( ext/drogon )

add_executable( webserver main.cpp )
target_link_libraries( webserver PRIVATE drogon )

install( TARGETS webserver DESTINATION bin )

