#include <catch2/catch.hpp>
#include <catch2/trompeloeil.hpp>

#include "../src/Order.hpp"

struct MockStore : Store {
    MAKE_CONST_MOCK1(inventory, size_t(const std::string &), override);
    MAKE_MOCK2(remove, void(const std::string &, size_t), override);
};

TEST_CASE("filling removes inventory when in stock") {
    MockStore beerStore;
    Order order {"Chimay", 50};

    {
        trompeloeil::sequence sequence;

        REQUIRE_CALL(beerStore, inventory("Chimay"))
            .RETURN(51)
            .IN_SEQUENCE(sequence);

        REQUIRE_CALL(beerStore, remove("Chimay", 50))
            .IN_SEQUENCE(sequence);

        order.fill(beerStore);
    }

    REQUIRE(order.is_filled());
}

