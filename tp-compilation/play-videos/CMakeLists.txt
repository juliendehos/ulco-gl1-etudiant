cmake_minimum_required( VERSION 3.10 )
project( play-videos )

# TODO gtkmm-3.0 libvlc
# TODO boost (system filesystem)

add_executable( play-videos
    src/Filesystem.cpp 
    src/PlayerWindow.cpp 
    src/play-videos.cpp )

install( TARGETS play-videos DESTINATION bin )

