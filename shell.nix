{pkgs ? import <nixpkgs> {}}:
pkgs.mkShell {
  nativeBuildInputs = with pkgs.buildPackages; [
		gcc
		gnumake
		python3
		gdb
		clang-tools
		valgrind
	];
}
