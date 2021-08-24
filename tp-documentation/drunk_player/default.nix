with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "drunk_player";
  src = ./.;

  buildInputs = [
    boost
    cmake
    doxygen
    pkg-config
    opencv_gtk
  ];

}
