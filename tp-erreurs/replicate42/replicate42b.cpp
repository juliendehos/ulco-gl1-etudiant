#include <iostream>
#include <exception>
#include <vector>

enum class NumError { TooLow, TooHigh, Is37, IsNegative };

// Reads a number in stdin. Throws a NumError if 37 or negative.
int readPositiveButNot37() {
    std::string line;
    std::cout << "enter num: ";
    std::flush(std::cout);
    std::getline(std::cin, line);
    int num = stod(line);
    // TODO handle errors
    return num;
}

// Reads a number in stdin. Throws a NumError if too low or too high.
std::vector<int> replicate42(int n) {
    // TODO handle errors
    return std::vector<int>(n, 42);
}

int main() {

    // TODO handle errors

    // read number
    const int num = readPositiveButNot37();
    std::cout << "num = " << num << std::endl;

    // build vector
    const auto v = replicate42(num);

    // print vector
    for (const int x : v)
        std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}

