with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "selectfile";
    src = ./.;
    buildInputs = [
        cmake
        glog
        gtkmm3
        pkgconfig
    ];
}
