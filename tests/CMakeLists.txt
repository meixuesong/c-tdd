cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

project(unit_tests LANGUAGES CXX)

set(TEST_MAIN "unit_tests")
set(TEST_INCLUDES "./")


# Set up the project

message(STATUS "start build test: ${PROJECT_NAME}")

message(STATUS "cmake source dir ${CMAKE_SOURCE_DIR} ${CMAKE_CURRENT_LIST_DIR}")


#include(FetchContent)
#FetchContent_Declare(
#        Catch2
#        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
#        GIT_TAG v3.3.2
#        GIT_SHALLOW TRUE
#)
#FetchContent_MakeAvailable(Catch2)

find_package(Catch2 3 REQUIRED)
# These tests can use the Catch2-provided main

add_executable(${TEST_MAIN} main.cpp another_unit_tests.cpp)
target_include_directories(${TEST_MAIN} PUBLIC
        ${TEST_INCLUDES}
        ${CMAKE_SOURCE_DIR}/src
        )
target_link_libraries(${TEST_MAIN} PUBLIC ${LIBRARY_NAME} Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(${TEST_MAIN})