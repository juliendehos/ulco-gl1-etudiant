
cmake_minimum_required(VERSION 3.0)
project( imshow )

find_package( PkgConfig REQUIRED )
pkg_check_modules( PKGS REQUIRED opencv )
include_directories( ${PKGS_INCLUDE_DIRS} )

add_executable( imshow imshow.cpp )
target_link_libraries( imshow ${PKGS_LIBRARIES} )

install( TARGETS imshow DESTINATION bin )
