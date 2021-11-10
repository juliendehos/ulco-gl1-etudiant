cmake_minimum_required( VERSION 3.10 )
project( selectfile )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package( PkgConfig REQUIRED )
pkg_check_modules( GTKMM REQUIRED gtkmm-3.0 )
include_directories( ${GTKMM_INCLUDE_DIRS} )

add_executable( selectfile 
    src/selectfile.cpp
    src/MyWindow.cpp )
target_link_libraries( selectfile ${GTKMM_LIBRARIES} glog )
install( TARGETS selectfile DESTINATION bin )

