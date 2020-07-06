#include "Fibo.hpp"

#include <iostream>

int main() {
    const int N = 20;
    for (int i=0; i<N; i++)
        std::cout << fibo(i) << std::endl;
    return 0;
}

