#pragma once

class Myvect {
    private:
        int * _data;
        int _size;
        int _reserved;

    public:
        Myvect();
        ~Myvect();
        void push_back(int x);
        int get(int i) const;

    private:
        void realloc(int r);
};

