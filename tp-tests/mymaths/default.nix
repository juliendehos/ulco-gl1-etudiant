with import <nixpkgs> {};
stdenv.mkDerivation rec {
    name = "mymaths";
    src = ./.;

    nativeBuildInputs = [
        cmake
        catch2
    ];

    doCheck = true;
    checkPhase = ''
      LD_LIBRARY_PATH="$(pwd)" ctest --force-new-ctest-process
    '';
}

