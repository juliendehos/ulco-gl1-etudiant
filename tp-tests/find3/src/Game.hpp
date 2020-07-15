#pragma once

enum Status {Play, Win, Lose};

class Game {
    private:
        int _nbTries;
        Status _status;

    public:
        Game();
        Status getStatus() const;
        bool applyAction(int i);
};

