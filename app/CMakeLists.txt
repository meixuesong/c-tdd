add_executable(${EXECUTABLE_NAME} main.c)

#为了让my_lib.c起作用，需要将Library链接到udemy_cmake_learn1
# udemy_cmake_learn1依赖于Library
# 可以单独build Library，也可以单独build udemy_cmake_learn1
# cmake --build . --target Library
# cmake --build . --target udemy_cmake_learn1
target_link_libraries(${EXECUTABLE_NAME} PUBLIC ${LIBRARY_NAME})