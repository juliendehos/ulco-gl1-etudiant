with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "poivrot-detector";
    src = ./.;
    nativeBuildInputs = [
        cmake
        catch2
    ];
    doCheck = true;
}

