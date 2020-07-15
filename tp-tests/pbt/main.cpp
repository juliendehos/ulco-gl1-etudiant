#include <rapidcheck.h>

#include <vector>
#include <algorithm>

int main() {

    rc::check("double reversal yields the original value",
            [](const std::vector<int> &l0) {
                auto l1 = l0;
                std::reverse(begin(l1), end(l1));
                std::reverse(begin(l1), end(l1));
                RC_ASSERT(l0 == l1);
            });

    rc::check("silly test",
            [] {
                auto gen0 = rc::gen::inRange(0, 5);
                auto gen1 = rc::gen::distinctFrom(gen0, 2);
                const int x = *gen1;
                // in a real test, we'd do something with x then check the result
                RC_ASSERT(x >= 0);
                RC_ASSERT(x < 5);
                RC_ASSERT(x != 2);
            });

    return 0;
}

