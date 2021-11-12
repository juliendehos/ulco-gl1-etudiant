with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "reverselines";
    src = ./.;
    buildInputs = [
        cmake
        pkgconfig
        glog
    ];
}


