with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "reverselines";
    src = ./.;
    buildInputs = [
        cmake
        pkg-config
        glog
    ];
}


