#!/bin/bash

set -e

cd ..
rm -rf build
mkdir build
cd build
cmake ..
cmake --build .
./udemy_cmake_learn1
