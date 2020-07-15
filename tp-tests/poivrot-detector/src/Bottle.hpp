#pragma once

#include <iostream>
#include <vector>

struct Bottle {
    std::string _name;
    double _vol;
    double _deg;
};

double alcoholVolume(const Bottle & b);

double alcoholVolume(const std::vector<Bottle> & bs);

bool isPoivrot(const std::vector<Bottle> & bs);

std::vector<Bottle> readBottles(std::istream & is);

