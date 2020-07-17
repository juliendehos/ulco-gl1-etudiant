with import <nixpkgs> {};
clangStdenv.mkDerivation {
    name = "poivrot-detector";
    src = ./.;
    nativeBuildInputs = [
        cmake
        catch2
    ];
    doCheck = true;
}

