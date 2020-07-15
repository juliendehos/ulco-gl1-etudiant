with import <nixpkgs> {};
stdenv.mkDerivation rec {
    name = "poivrot-detector";
    src = ./.;
    nativeBuildInputs = [
        cmake
        catch2
    ];
    doCheck = true;
}

