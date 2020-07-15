with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "find3";
    src = ./.;
    nativeBuildInputs = [
        cmake
        rapidcheck
    ];
}

