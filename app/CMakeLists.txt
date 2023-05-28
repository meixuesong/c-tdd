set(EXECUTABLE_SOURCE_FILES main.c)

add_executable(${EXECUTABLE_NAME} ${EXECUTABLE_SOURCE_FILES})

#为了让my_lib.c起作用，需要将Library链接到udemy_cmake_learn1
# udemy_cmake_learn1依赖于Library
# 可以单独build Library，也可以单独build udemy_cmake_learn1
# cmake --build . --target Library
# cmake --build . --target udemy_cmake_learn1
target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME})

# 如果想只编译部分，例如只编译某个target（就是add_executable, add_library的第一个参数)，可以使用两种方式实现：
# 1. cmake --build . --target udemy_cmake_learn1
# 2. make udemy_cmake_learn1
# cmake会自动编译这个target以及它所依赖的target

