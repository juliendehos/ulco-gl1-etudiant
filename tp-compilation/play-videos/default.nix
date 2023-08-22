with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "play-videos";
  src = ./.;

  buildInputs = [
    boost
    cmake
    gtkmm3
    pkg-config
    vlc
  ];

}

