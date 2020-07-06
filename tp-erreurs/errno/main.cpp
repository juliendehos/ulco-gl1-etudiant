#include <iostream>
#include <cmath>
#include <cerrno>
#include <cstring>

int main(int argc, char ** argv) {

    if (argc != 2) {
        std::cout << "usage: <num>" << std::endl;
        exit(-1);
    }

    const char *str = argv[1];
    char *end;
    const double num = strtod(str, &end);
    if (str == end) {
        std::cout << "not a number" << std::endl;
        exit(-1);
    }

    const double sqrt_num = std::sqrt(num);
    if (errno == EDOM) {
        std::cout << std::strerror(errno) << std::endl;
        exit(-1);
    }
    std::cout << sqrt_num << std::endl;

    return 0;
}
