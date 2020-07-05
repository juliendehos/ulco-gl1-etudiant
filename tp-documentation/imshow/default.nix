with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "imshow";
  src = ./.;

  buildInputs = [
    cmake
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

}

