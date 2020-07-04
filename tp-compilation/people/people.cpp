#include <csv.h>
#include <iostream>

int main(int argc, char ** argv){
    if (argc != 2) {
        std::cout << "usage: <filename>" << std::endl;
        exit(-1);
    }
    io::CSVReader<3> in(argv[1]);
    in.read_header(io::ignore_extra_column, "firstname", "lastname", "birthyear");
    std::string first;
    std::string last;
    int year;
    while (in.read_row(first, last, year)) {
        std::cout << first << " " << last << " (" << year << ")\n";
    }
    return 0;
}

