with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "mymaths";
  src = ./.;

  buildInputs = [
    cmake
  ];

}

