with import <nixpkgs> {};
clangStdenv.mkDerivation {
  name = "tictactoe";
  src = ./.;
  nativeBuildInputs = [
    cmake
    catch2
    trompeloeil
  ];
}

