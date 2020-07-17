with import <nixpkgs> {};
clangStdenv.mkDerivation {
    name = "pbt";
    src = ./.;
    nativeBuildInputs = [
        cmake
        rapidcheck
    ];
}

