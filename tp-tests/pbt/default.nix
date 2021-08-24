with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "pbt";
    src = ./.;
    nativeBuildInputs = [
        cmake
        rapidcheck
    ];
}

