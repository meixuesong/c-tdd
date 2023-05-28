cmake_minimum_required(VERSION 3.20)
project(udemy_cmake_learn1 VERSION 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)

#src要在前面
add_subdirectory(src)
add_subdirectory(app)