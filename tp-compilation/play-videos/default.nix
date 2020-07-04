with import <nixpkgs> {};

with pkgs; stdenv.mkDerivation {
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

