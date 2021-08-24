with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "myclass";
    src = ./.;
    nativeBuildInputs = [
        cmake
        catch2
    ];
    doCheck = true;
}

