with import <nixpkgs> {};
stdenv.mkDerivation {
  name = "tictactoe";
  src = ./.;
  nativeBuildInputs = [
    cmake
    catch2
    trompeloeil
  ];
}

