#define CATCH_CONFIG_MAIN

#include <cstdint>
#include "my_lib.h"
// #include <catch2/catch_test_macros.hpp>
#include <catch2/catch.hpp>

TEST_CASE( "Factorials are computed", "[Factorial]" ) {
    REQUIRE( Factorial(0) == 1 );
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}
