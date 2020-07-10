#include <iostream>
#include <exception>
#include <vector>

// enum class RangeError { TooLow, TooHigh };

std::vector<int> replicate42(int n) {
    return std::vector<int>(n, 42);
}

int readNum() {
    while (true) {
        int num;
            std::string line;
            std::cout << "enter num: ";
            std::flush(std::cout);
            std::getline(std::cin, line);
            num = stod(line);
            if (num == 37)
                throw std::length_error("oh no, this is 37!");
            return num;
    }
}

int main() {

    const int num = readNum();
    std::cout << "num = " << num << std::endl;
    const auto v = replicate42(num);
    for (const int x : v)
        std::cout << x << " ";
    std::cout << std::endl;
    
    return 0;
}
