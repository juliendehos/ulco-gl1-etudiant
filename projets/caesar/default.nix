with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "caesar";
    src = ./.;
    nativeBuildInputs = [
        cmake
        catch2
        rapidcheck
        python3Packages.sphinx
    ];
}

