#include "Fibo.hpp"

#include <iostream>

int main(int argc, char ** argv) {

    if (argc != 2) {
        std::cout << "usage: <N>" << std::endl;
        exit(-1);
    }

    const int N = atoi(argv[1]);

    for (int i=0; i<N; i++)
        std::cout << fibo(i) << std::endl;

    return 0;
}

