#pragma once

#include "Game.hpp"

#include <iostream>

class Ui {
    private:
        Game & _game;
        std::ostream & _os;
        std::istream & _is;

    public:
        Ui(Game & game, std::ostream & os, std::istream & is);
        void step();
        void run();
};

