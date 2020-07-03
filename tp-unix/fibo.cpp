// fibo.cpp
// g++ -O2 -Wall -Wextra -o fibo.out fibo.cpp

#include <chrono>
#include <iostream>

using namespace std;

int fibo(int n) { return n<2 ? n : fibo(n-1) + fibo(n-2); }

int main(int argc, char ** argv)
{
    // check command line arguments
    if (argc < 2)
    {
        cerr << "usage: " << argv[0] << " <n>" << endl;
        exit(-1);
    }
    int n = stoi(argv[1]);

    // compute fibonacci
    chrono::high_resolution_clock::time_point t0, t1;
    t0 = chrono::high_resolution_clock::now();
    int f = fibo(n);
    t1 = chrono::high_resolution_clock::now();
    auto dt = chrono::duration_cast<chrono::duration<double>>(t1 - t0).count(); 

    // display results
    cout << "n; fibo(n); duration" << endl;
    cout << n << "; " << f << "; " << dt << endl;

    return 0;
}

