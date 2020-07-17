with import <nixpkgs> {};

clangStdenv.mkDerivation {
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

