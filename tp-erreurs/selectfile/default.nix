with import <nixpkgs> {};
clangStdenv.mkDerivation {
    name = "selectfile";
    src = ./.;
    buildInputs = [
        cmake
        pkgconfig
        gtkmm3
    ];
}
