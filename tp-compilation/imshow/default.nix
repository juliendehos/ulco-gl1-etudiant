with import <nixpkgs> {};

with pkgs; stdenv.mkDerivation {
  name = "imshow";
  src = ./.;

  buildInputs = [
    gnumake
    pkg-config
    (opencv.override { 
      enableGtk2 = true; 
      enableTIFF = false;
      enableEXR = false;
      enableJPEG2K = false;
      enableGStreamer = true;
      enableEigen = false;
    })
  ];

  installPhase = ''
    mkdir -p $out/bin
    cp imshow.out $out/bin
   ''; 

}

