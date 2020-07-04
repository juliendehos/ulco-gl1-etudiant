#include <iostream>
#include "Myvect.hpp"

int fiboMod42(int x) {
    return x<2 ? x : (fiboMod42(x-1) + fiboMod42(x-2)) % 42;
}

int mul42(int x) {
    return 42*x;
}

int main(int argc, char ** argv) {
    if (argc!=2) {
        std::cout << "usage: " << argv[0] << " <N>" << std::endl;
        exit(-1);
    }
    const int N = std::stoi(argv[1]);
    if (N<1) {
        std::cout << "invalid number" << std::endl;
        exit(-1);
    }

    Myvect v;
    for (int i=0; i<=N; i++)
        v.push_back(fiboMod42(i));
        // TODO v.push_back(mul42(i));
    for (int i=0; i<=N; i++)
        std::cout << v.get(i) << " ";
    std::cout << std::endl;

    return 0;
}

