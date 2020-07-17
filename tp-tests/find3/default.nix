with import <nixpkgs> {};
clangStdenv.mkDerivation {
    name = "find3";
    src = ./.;
    nativeBuildInputs = [
        cmake
        rapidcheck
    ];
}

