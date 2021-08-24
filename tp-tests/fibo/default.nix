with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "fibo";
    src = ./.;
    nativeBuildInputs = [
        cmake
        catch2
    ];
    doCheck = true;
}

