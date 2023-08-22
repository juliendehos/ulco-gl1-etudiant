with import <nixpkgs> {};

with pkgs; stdenv.mkDerivation {
  name = "hello-gtk";
  src = ./.;

  buildInputs = [
    gnumake
    pkg-config
    gtkmm3
  ];

  installPhase = ''
    mkdir -p $out/bin
    cp *.out $out/bin
   ''; 

}

