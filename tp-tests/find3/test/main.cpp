#include <rapidcheck.h>

#include "../src/Game.hpp"

#include <vector>
#include <algorithm>

Game runGame(const std::vector<int> & actions) {
    Game game;
    for (int i : actions)
        game.applyAction(i);
    return game;
}

int main() {

    using namespace rc;

    // https://github.com/emil-e/rapidcheck/blob/master/doc/generators_ref.md#containers

    // TODO calling getStatus two times yields the same result

    // TODO status != Play after 4 valid actions (0-9)

    // TODO status == Lose after 4 valid actions (0-9) but no 3

    // TODO status == Win after 4 valid actions (0-9) at most where the last one is 3

    return 0;
}

