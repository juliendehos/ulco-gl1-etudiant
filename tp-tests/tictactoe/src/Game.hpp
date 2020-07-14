#pragma once

enum class Status {Play0, Play1, Win0, Win1, Tie};

class Game {
    public:
        virtual ~Game() = default;

        virtual void reset() = 0;
        virtual bool applyAction(int i, int j) = 0;
        virtual Status getStatus() const = 0;
};

