//
// Created by Xuesong Mei on 2023-05-29.
//
#include <catch2/catch_test_macros.hpp>
#include "chapter1.h"

TEST_CASE("sprintf test", "[chapter2]") {
    REQUIRE(calculate(1, 2) == 3);
}

TEST_CASE("calculate", "[chapter2]") {
    REQUIRE(calculate(2, 2) == 4);
}