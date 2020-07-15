#include "../src/Bottle.hpp"

#include <catch2/catch.hpp>
#include <sstream>

TEST_CASE( "init Chimay" ) {
    const Bottle b {"Chimay", 0.75, 0.08};
    REQUIRE(b._name == "Chimay");
    REQUIRE(b._vol == 0.75);
    REQUIRE(b._deg == 0.08);
}

TEST_CASE( "init Orange Pur Jus" ) {
    const Bottle b {"Orange Pur Jus", 1, 0};
    REQUIRE(b._name == "Orange Pur Jus");
    REQUIRE(b._vol == 1);
    REQUIRE(b._deg == 0);
}

TEST_CASE( "alcoholVolume Chimay" ) {
    // TODO
}

TEST_CASE( "alcoholVolume Orange Pur Jus" ) {
    // TODO
}

TEST_CASE( "alcoholVolume Chimay + Orange" ) {
    // TODO
}

TEST_CASE( "alcoholVolume Chimay + Chimay" ) {
    // TODO
}

TEST_CASE( "isPoivrot Chimay + Orange" ) {
    // TODO
}

TEST_CASE( "isPoivrot Chimay + Chimay" ) {
    // TODO
}

TEST_CASE( "readBottles Chimay" ) {
    // TODO
}

TEST_CASE( "readBottles Chimay + Orange" ) {
    // TODO
}

