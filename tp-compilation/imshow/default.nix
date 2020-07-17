with import <nixpkgs> {};

let
  _opencv = pkgs.opencv.override {  
    enableGtk2 = true; 
    enableGStreamer = true;
    enableFfmpeg = true;
    enableTIFF = false;
    enableEXR = false;
    enableJPEG2K = false;
    enableEigen = false;
  };

in with pkgs; clangStdenv.mkDerivation {
  name = "imshow";
  src = ./.;

  buildInputs = [
    gnumake
    pkg-config
    _opencv
  ];

  installPhase = ''
    mkdir -p $out/bin
    cp imshow.out $out/bin
   ''; 

}

