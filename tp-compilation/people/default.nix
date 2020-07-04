with import <nixpkgs> {};

with pkgs; stdenv.mkDerivation {
  name = "people";
  src = ./.;

  buildInputs = [
    (callPackage ./fccp.nix {})
  ];

  buildPhase = ''
    g++ -O2 -Wall -Wextra -pthread -o people people.cpp
  '';

  installPhase = ''
    mkdir -p $out/bin
    cp people $out/bin
   ''; 

}

