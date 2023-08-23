{ pkgs ? import <nixpkgs> {} }:

with pkgs; clangStdenv.mkDerivation {
    name = "csvstats";
    src = ./.;

    nativeBuildInputs = [
        cmake
        catch2
    ];

    doCheck = true;
}


