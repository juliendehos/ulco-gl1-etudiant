#include "Ui.hpp"

#include <cassert>

Ui::Ui(Game & game, std::ostream & os, std::istream & is) :
    _game(game), _os(os), _is(is) {
}

void Ui::step() {
    _os << "enter action (i j): ";
    _os.flush();
    int i, j;
    _is >> i >> j;
    if (_game.applyAction(i, j))
        _os << "playing " << i << " " << j << "\n";
    else
        _os << "invalid move\n";
}

void Ui::run() {
    _game.reset();
    Status status;
    while (true) {
        status = _game.getStatus();
        if (status != Status::Play0 and status != Status::Play1)
            break;
        step();
    }
    if (status == Status::Win0)
        _os << "Player0 wins\n";
    else if (status == Status::Win1)
        _os << "Player1 wins\n";
    else
        _os << "it's a tie\n";
}

