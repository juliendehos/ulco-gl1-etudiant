{ pkgs ? import <nixpkgs> {} }:

with pkgs; stdenv.mkDerivation {
    name = "cshell";
    src = ./.;

    nativeBuildInputs = [
        cmake
        catch2
        doxygen
    ];

    doCheck = true;
}


