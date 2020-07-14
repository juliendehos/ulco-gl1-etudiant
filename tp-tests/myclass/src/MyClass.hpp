#pragma once

#include <iostream>

class MyClass {
    private:
        std::string _mydata;
    public:
        const std::string & mydata() const;
        std::string & mydata();
        void reset();
        void fail() const;
        double sqrt2() const;
};

std::ostream & operator<<(std::ostream & os, const MyClass & myclass);

