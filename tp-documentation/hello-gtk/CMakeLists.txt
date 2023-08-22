
cmake_minimum_required(VERSION 3.0)
project( hello-gtk )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKGS REQUIRED gtkmm-3.0 )
include_directories( ${PKGS_INCLUDE_DIRS} )

add_executable( hello-gtk hello-gtk.cpp )
target_link_libraries( hello-gtk ${PKGS_LIBRARIES} )

install( TARGETS hello-gtk DESTINATION bin )

