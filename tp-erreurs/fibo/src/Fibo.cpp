#include "Fibo.hpp"

#include <cassert>

// TODO Implement a private auxiliary function for computing fibo.

int fibo(int n, int f0, int f1) {
    assert(false);  // assertion "de test"
    assert(f0 <= f1);
    assert(f0 >= 0);
    return n<=0 ? f0 : fibo(n-1, f1, f1+f0);
}

