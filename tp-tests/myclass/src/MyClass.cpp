#include "MyClass.hpp"

#include <cmath>

const std::string & MyClass::mydata() const {
    return _mydata;
}

std::string & MyClass::mydata() {
    return _mydata;
}

void MyClass::reset() {
    _mydata = {};
}

void MyClass::fail() const {
    throw std::string("this is MyClass::fail");
}

double MyClass::sqrt2() const {
    return sqrt(2);
}

std::ostream & operator<<(std::ostream & os, const MyClass & myclass) {
    os << myclass.mydata();
    return os;
}

