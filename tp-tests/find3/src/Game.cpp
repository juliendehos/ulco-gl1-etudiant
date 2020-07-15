#include "Game.hpp"

Game::Game() : _nbTries(0), _status(Status::Play) {
}

Status Game::getStatus() const {
    return _status;
}

bool Game::applyAction(int i) {

    // ignore invalid moves
    if (i < 0 or i > 9 or _status != Status::Play)
        return false;

    // play valid move
    _nbTries++;
    if (i == 3)
        _status = Status::Win;
    else if (_nbTries == 5)
        _status = Status::Win;
    return true;
}

