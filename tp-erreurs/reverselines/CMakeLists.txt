cmake_minimum_required( VERSION 3.10 )
project( reverselines )
add_executable( reverselines main.cpp )
target_link_libraries( reverselines -lglog )
install( TARGETS reverselines DESTINATION bin )

