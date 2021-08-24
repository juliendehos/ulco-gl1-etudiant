with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "selectfile";
    src = ./.;
    buildInputs = [
        cmake
        pkgconfig
        gtkmm3
    ];
}
