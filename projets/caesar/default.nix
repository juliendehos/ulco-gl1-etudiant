with import <nixpkgs> {};
stdenv.mkDerivation {
    name = "caesar";
    src = ./.;
    nativeBuildInputs = [
        cmake
        catch2
        rapidcheck
        mdbook
        python3Packages.sphinx
    ];
}

