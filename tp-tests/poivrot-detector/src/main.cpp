#include "Bottle.hpp"

#include <fstream>

int main(int argc, char ** argv) {

    if (argc != 2) {
        std::cout << "usage: <filename>" << std::endl;
        exit(-1);
    }

    std::ifstream ifs(argv[1]);

    const auto bs = readBottles(ifs);

    if (isPoivrot(bs))
        std::cout << "veuillez consulter" << std::endl;
    else
        std::cout << "tout va bien" << std::endl;

    return 0;
}

