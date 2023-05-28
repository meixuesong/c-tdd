add_library(${LIBRARY_NAME} STATIC my_lib.c)

target_include_directories(${LIBRARY_NAME} PUBLIC "./")