
#include "Game.hpp"

#include <iostream>
#include <stdexcept>

int main() {

    Game game;

    while (game.getStatus() == Status::Play) {
        std::cout << "enter a number (0 - 9): ";
        std::cout.flush();
        std::string line;
        if (not std::getline(std::cin, line))
            throw std::invalid_argument("bad input");
        try {
            const int i = std::stoi(line);
            if (game.applyAction(i))
                std::cout << "playing " << i << std::endl;
            else
                std::cout << "invalid move" << std::endl;
        }
        catch (...) {
            std::cout << "parse error" << std::endl;
        }
    }

    if (game.getStatus() == Status::Win)
        std::cout << "You win !" << std::endl;
    else
        std::cout << "You lose !" << std::endl;

    return 0;
}

