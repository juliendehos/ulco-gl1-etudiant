cmake_minimum_required( VERSION 3.0 )
project( csvstats )
include_directories( include )

# library
add_library( csvstats-lib
    src/csvstats/csvstats.cpp )

# executable
add_executable( csvstats-app
  app/main.cpp )
target_link_libraries( csvstats-app csvstats-lib )

# install
install( TARGETS csvstats-app DESTINATION bin )

# testing
add_executable( csvstats-test
    test/csvstats/csvstats-test.cpp
    test/main.cpp )
target_link_libraries( csvstats-test csvstats-lib )
enable_testing()
add_test( NAME csvstats-test COMMAND csvstats-test )

