with import <nixpkgs> {};
clangStdenv.mkDerivation {
    name = "fibo";
    src = ./.;
    nativeBuildInputs = [
        cmake
        catch2
    ];
    doCheck = true;
}

