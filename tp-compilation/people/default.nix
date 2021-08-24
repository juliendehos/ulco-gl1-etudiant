with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "people";
  src = ./.;

  buildInputs = [
    (callPackage ./fccp.nix {})
  ];

  buildPhase = ''
    c++ -O2 -Wall -Wextra -pthread -o people people.cpp
  '';

  installPhase = ''
    mkdir -p $out/bin
    cp people $out/bin
   ''; 

}

