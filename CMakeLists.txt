cmake_minimum_required(VERSION 3.20)
project(udemy_cmake_learn1 VERSION 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)

add_library(Library STATIC my_lib.c)

add_executable(udemy_cmake_learn1 main.c)

#为了让my_lib.c起作用，需要将Library链接到udemy_cmake_learn1
# udemy_cmake_learn1依赖于Library
# 可以单独build Library，也可以单独build udemy_cmake_learn1
# cmake --build . --target Library
# cmake --build . --target udemy_cmake_learn1
target_link_libraries(udemy_cmake_learn1 PUBLIC Library)