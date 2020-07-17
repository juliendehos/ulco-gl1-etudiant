with import <nixpkgs> {};
clangStdenv.mkDerivation {
    name = "myclass";
    src = ./.;
    nativeBuildInputs = [
        cmake
        catch2
    ];
    doCheck = true;
}

