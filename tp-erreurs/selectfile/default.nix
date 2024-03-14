with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "selectfile";
    src = ./.;
    buildInputs = [
        cmake
        pkg-config
        gtkmm3
        glog
    ];
}
