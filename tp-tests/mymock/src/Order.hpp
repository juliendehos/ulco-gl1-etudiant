#pragma once

#include "Store.hpp"

struct Order {

    std::string what;
    size_t amount;

    Order(std::string article, size_t count) : what(article), amount(count) {}

    void fill(Store & store) {
        store.inventory(what);
        store.remove(what, amount);
    }

    bool is_filled() const {
        return true;
    }
};

