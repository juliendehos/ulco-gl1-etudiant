{ stdenv }:

stdenv.mkDerivation {
  name = "fccp";

  src = fetchTarball 
    "https://github.com/ben-strasser/fast-cpp-csv-parser/archive/master.tar.gz";

  buildPhase = "";

  installPhase = ''
    mkdir -p $out/include
    cp *.h $out/include/
  '';

}

