with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "play-videos";
  src = ./.;

  buildInputs = [
    boost
    cmake
    gtkmm2
    pkg-config
    vlc
  ];

}

