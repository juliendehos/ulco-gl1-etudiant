with import <nixpkgs> {};

clangStdenv.mkDerivation {
  name = "imshow";
  src = ./.;

  buildInputs = [
    cmake
    pkg-config
    opencv_gtk
  ];

}

