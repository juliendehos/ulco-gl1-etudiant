with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "drunk_player";
  src = ./.;

  buildInputs = [
    boost
    cmake
    doxygen
    pkg-config

    (opencv.override { 
      enableGtk2 = true; 
      enableGStreamer = true;
      enableFfmpeg = true;

      enableTIFF = false;
      enableEXR = false;
      enableJPEG2K = false;
      enableEigen = false;
    })
  ];

}
