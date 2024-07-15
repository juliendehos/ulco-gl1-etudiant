cmake_minimum_required( VERSION 3.10 )
project( mymaths )

# library
add_library( mymaths SHARED
    src/mymaths/add.cpp
    src/mymaths/mul.cpp )
target_include_directories( mymaths PUBLIC "include" )
INSTALL( TARGETS mymaths 
    LIBRARY DESTINATION lib
    INCLUDES DESTINATION include )

# executable
add_executable( mymaths-app src/app/main.cpp )
target_link_libraries( mymaths-app mymaths )
install( TARGETS mymaths-app DESTINATION bin )


