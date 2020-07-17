with import <nixpkgs> {};
clangStdenv.mkDerivation {
    name = "mymock";
    src = ./.;
    nativeBuildInputs = [
        cmake
        catch2
        trompeloeil
    ];
}

