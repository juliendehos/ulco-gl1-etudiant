cmake_minimum_required( VERSION 3.0 )
project( drunk_player )

include_directories( src )

# import boost
find_package(Boost COMPONENTS system filesystem REQUIRED)

# import opencv
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

# build the drunk_player library
add_library( drunk_player STATIC 
    src/drunk_player/Chrono.cpp 
    src/drunk_player/Filesystem.cpp 
    src/drunk_player/Player.cpp 
    src/drunk_player/Random.cpp )

# build the drunk_player_gui.out binary
add_executable( drunk_player_gui.out 
    src/drunk_player_gui/drunk_player_gui.cpp )
target_link_libraries( drunk_player_gui.out 
    ${Boost_LIBRARIES} ${OpenCV_LIBS} drunk_player )

# build the drunk_player_cli.out binary
add_executable( drunk_player_cli.out 
    src/drunk_player_cli/drunk_player_cli.cpp )
target_link_libraries( drunk_player_cli.out 
    ${Boost_LIBRARIES} ${OpenCV_LIBS} drunk_player )

# install binaries
install (TARGETS drunk_player_cli.out drunk_player_gui.out
    DESTINATION bin)

