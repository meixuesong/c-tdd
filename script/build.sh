#!/bin/bash

set -e

cd ..
rm -rf build
mkdir build
cd build
cmake ..
cmake --build .
app/udemy-cmake-learn1
