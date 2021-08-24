with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "imshow";
  src = ./.;

  buildInputs = [
    cmake
    pkg-config
    opencv_gtk
  ];

}

