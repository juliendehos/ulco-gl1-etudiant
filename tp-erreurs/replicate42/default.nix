with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "fibo";
    src = ./.;
    buildInputs = [
        cmake
    ];
}
