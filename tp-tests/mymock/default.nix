with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "mymock";
    src = ./.;
    nativeBuildInputs = [
        cmake
        catch2
        trompeloeil
    ];
}

