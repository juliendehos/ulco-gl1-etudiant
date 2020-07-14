#include "Fibo.hpp"

#include <cassert>

int fibo_aux(int n, int f0, int f1) {
    assert(f0 <= f1);
    assert(f0 >= 0);
    return n<=0 ? f0 : fibo_aux(n-1, f1, f1+f0);
}

int fibo(int n) {
    return fibo_aux(n, 0, 1);
}

