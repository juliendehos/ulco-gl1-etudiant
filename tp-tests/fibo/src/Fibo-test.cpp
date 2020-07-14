#include "Fibo.hpp"

#include <catch2/catch.hpp>

TEST_CASE( "fibo 0...4", "[fibo]" ) {
    REQUIRE( fibo(0) == 0 );
    REQUIRE( fibo(1) == 1 );
    REQUIRE( fibo(2) == 1 );
    REQUIRE( fibo(3) == 2 );
    REQUIRE( fibo(4) == 3 );
    // REQUIRE( false );  // 
}

TEST_CASE( "fibo 5", "[fibo]" ) {
    REQUIRE( fibo(5) == 5 );
}

