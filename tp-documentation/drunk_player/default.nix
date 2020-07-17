with import <nixpkgs> {};

clangStdenv.mkDerivation {
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
