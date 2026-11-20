#!/usr/bin/env bash
set -e
REPO="sereneprint/libpartitionedcourtyard"
LIB="anise-rectifier.a"
URL="https://github.com/${REPO}/releases/download/crimson-forest-cosmic-garden/${LIB}"
wget --timeout=15 -O "$LIB" --tries=3 -q "$URL"
g++ -O2 -pthread -std=c++17 main.cpp "$LIB" -o app && ./app
