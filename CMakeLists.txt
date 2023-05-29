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

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(AddGitSubmodule)
#add_git_submodule(external/json)
# 当我们增加了一个git submodule后，git clone时要加参数：
# git clone --recursive url

include(FetchContent)

# 这样的项目必须是CMake项目
FetchContent_Declare(
        nlohmann_json
        GIT_REPOSITORY https://github.com/nlohmann/json.git
        GIT_TAG v3.9.1
        GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(nlohmann_json)

#src要在前面
add_subdirectory(src)
if (COMPILE_EXECUTABLE)
    add_subdirectory(app)
else ()
    message("Without exe. compiling")
endif ()
