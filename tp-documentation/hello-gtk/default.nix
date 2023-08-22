with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "hello-gtk";
  src = ./.;

  buildInputs = [
    cmake
    pkg-config
    gtkmm3
  ];

}

