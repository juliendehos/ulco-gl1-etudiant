#pragma once

#include <string>

struct Store {
    virtual size_t inventory(const std::string & name) const = 0;
    virtual void remove(const std::string & name, size_t count) = 0;
};

