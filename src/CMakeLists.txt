
#建议使用变量来设置文件列表，这样可以方便的添加或删除文件
#不建议使用file(GLOB ...)来设置文件列表，因为这样会导致CMake无法自动检测文件列表的变化
set(LIBRARY_SOURCE_FILES my_lib.c)
set(LIBRARY_HEADER_FILES my_lib.h)

add_library(${LIBRARY_NAME} STATIC ${LIBRARY_SOURCE_FILES} ${LIBRARY_HEADER_FILES})

target_include_directories(${LIBRARY_NAME} PUBLIC "./")