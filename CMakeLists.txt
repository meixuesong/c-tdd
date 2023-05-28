cmake_minimum_required(VERSION 3.20)
project(udemy_cmake_learn1 VERSION 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
# extensions就是非标准的扩展, 比如gcc的扩展
set(CMAKE_C_EXTENSIONS OFF)

#加变量
# Library的双引号不是必须的, CMake会自动识别类型
set(LIBRARY_NAME "Library")
set(EXECUTABLE_NAME "udemy-cmake-learn1")

#用来设置参数
#然后可以在命令行传参数进来
#cmake -DCOMPILE_EXECUTABLE=ON ..
# -D 可以用于参数和option
option(COMPILE_EXECUTABLE "Whether to compile executable" OFF)


#src要在前面
add_subdirectory(src)
if (COMPILE_EXECUTABLE)
    add_subdirectory(app)
else ()
    message("Without exe. compiling")
endif ()
