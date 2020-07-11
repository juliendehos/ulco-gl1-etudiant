#include <iostream>
#include <exception>
#include <vector>

enum status_t { OK, TOO_LOW, TOO_HIGH, IS_37, IS_NEGATIVE };

status_t STATUS;

// Reads a number in stdin and sets STATUS (to OK, IS_37 or IS_NEGATIVE).
int readPositiveButNot37() {
    std::string line;
    std::cout << "enter num: ";
    std::flush(std::cout);
    std::getline(std::cin, line);
    int num = stod(line);
    if (num == 37) {
        STATUS = IS_37;
        return -1;
    }
    if (num < 0) {
        STATUS = IS_NEGATIVE;
        return -1;
    }
    STATUS = OK;
    return num;
}

// Replicates, n times, the integer 42 in a vector and sets STATUS. If n is
// invalid (< 0 or > 42), returns an empty vector.
std::vector<int> replicate42(int n) {
    if (n < 1) {
        STATUS = TOO_LOW;
        return {};
    }
    if (n > 42) {
        STATUS = TOO_HIGH;
        return {};
    }
    STATUS = OK;
    return std::vector<int>(n, 42);
}

int main() {

    // read number
    const int num = readPositiveButNot37();
    // TODO handle errors

    std::cout << "num = " << num << std::endl;

    // build vector
    const auto v = replicate42(num);
    // TODO handle errors

    // print vector
    for (const int x : v)
        std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}

