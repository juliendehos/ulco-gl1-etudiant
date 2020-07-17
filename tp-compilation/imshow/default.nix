with import <nixpkgs> {};

with pkgs; clangStdenv.mkDerivation {
  name = "imshow";
  src = ./.;

  buildInputs = [
    gnumake
    pkg-config
    opencv_gtk
  ];

  installPhase = ''
    mkdir -p $out/bin
    cp imshow.out $out/bin
   ''; 

}

