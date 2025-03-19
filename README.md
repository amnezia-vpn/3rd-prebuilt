# 3rd-prebuilt

Repository with prebuilt binaries for [Amnezia-VPN](https://github.com/amnezia-vpn)

## Usage

This repository should be included as a submodule.

## Binaries

Binaries in this repository built on GitHub action in [3rd-build-ga](https://github.com/amnezia-vpn/3rd-build-ga).

All binaries in this repository must be from [releases](https://github.com/amnezia-vpn/3rd-build-ga/releases).

Files that you add into this repository must contain sha256 sum.

## Develop

Please use separate branch in this repository for every PR in [main repository](https://github.com/amnezia-vpn/amnezia-client) and merge it into master branch only when your PR is merged. 

Reviewer of your PR must check files hashes with the hashes from [releases](https://github.com/amnezia-vpn/3rd-build-ga/releases).

