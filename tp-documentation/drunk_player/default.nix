let 

  # Change les paramètres du paquet opencv.
  # Nécessite de recompiler opencv.
  config = {
    packageOverrides = pkgz: {
      opencv = pkgz.opencv.override { 
        enableGtk2 = false; 
        enableGtk3 = true; 
        enableGStreamer = false;
        enableFfmpeg = true;
        enableTIFF = false;
        enableEXR = false;
        enableEigen = false;
        enableContrib = false;
      };
    };
  };

  # pkgs = import <nixpkgs> { inherit config; };
  pkgs = import <nixpkgs> {};

in pkgs.stdenv.mkDerivation {
  name = "drunk_player";
  src = ./.;

  buildInputs = with pkgs; [
    boost
    cmake
    doxygen
    pkg-config
    opencv
  ];

}

