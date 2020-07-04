with import <nixpkgs> {};

with pkgs; stdenv.mkDerivation {
  name = "webserver";
  src = ./.;

  buildInputs = [
    boost
    brotli
    c-ares
    cmake
    jsoncpp
    libuuid
    openssl
    postgresql
    zlib
  ];

}

