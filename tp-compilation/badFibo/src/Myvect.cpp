#include <cassert>
#include <cstring>
#include <iostream>
#include "Myvect.hpp"

Myvect::Myvect() : _data(nullptr), _size(0), _reserved(0) {
    realloc(1);
}

Myvect::~Myvect() {
    // TODO if (_data) delete [] _data;
}

void Myvect::push_back(int x) {
    if (_size == _reserved)
        realloc(_size*2);
    _data[_size] = x;
    _size++;
}

int Myvect::get(int i) const {
    assert(i>=0);
    assert(i<_size);
    return _data[i];
}

void Myvect::realloc(int r) {
    assert(r>=_size);
    std::cout << "realloc " << r << std::endl;
    int * t = new int [r];
    std::memcpy(t, _data, _size*sizeof(int));
    // TODO delete [] _data;
    _data = t;
    _reserved = r;
}

