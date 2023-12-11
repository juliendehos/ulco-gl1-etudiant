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
    // "Chimay" 0.75 0.08
    // => alcoholVolume == 0.06
    // TODO
}

TEST_CASE( "alcoholVolume Orange Pur Jus" ) {
    // "Orange Pur Jus" 1 0
    // => alcoholVolume == 0
    // TODO
}

TEST_CASE( "alcoholVolume Chimay + Orange" ) {
    // "Chimay" 0.75 0.08
    // "Orange Pur Jus" 1 0
    // => alcoholVolume == 0.06
    // TODO
}

TEST_CASE( "alcoholVolume Chimay + Chimay" ) {
    // "Chimay" 0.75 0.08
    // "Chimay" 0.75 0.08
    // => alcoholVolume == 0.12
    // TODO
}

TEST_CASE( "isPoivrot Chimay + Orange" ) {
    // "Chimay" 0.75 0.08
    // "Orange Pur Jus" 1 0
    // => isPoivrot == false
    // TODO
}

TEST_CASE( "isPoivrot Chimay + Chimay" ) {
    // "Chimay" 0.75 0.08
    // "Chimay" 0.75 0.08
    // => isPoivrot == true
    // TODO
}

TEST_CASE( "readBottles Chimay" ) {
    // "Chimay; 0.75; 0.08"
    // => _name == Chimay, etc
    // TODO
}

TEST_CASE( "readBottles Chimay + Orange" ) {
    // "Chimay; 0.75; 0.08\nOrange Pur Jus; 1; 0"
    // => _name_0 == Chimay, etc
    // => _name_1 == Orange, etc
    // TODO
}

