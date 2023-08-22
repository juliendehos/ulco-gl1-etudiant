with import <nixpkgs> {};

with pkgs; stdenv.mkDerivation {
  name = "imshow";
  src = ./.;

  buildInputs = [
    gnumake
    pkg-config
    gtkmm3
  ];

  installPhase = ''
    mkdir -p $out/bin
    cp imshow.out $out/bin
   ''; 

}

