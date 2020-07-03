#include "csv.h"
#include <iostream>

int main(){
    io::CSVReader<3> in("people.csv");
    in.read_header(io::ignore_extra_column, "firstname", "lastname", "birthyear");
    std::string first;
    std::string last;
    int year;
    while (in.read_row(first, last, year)) {
        std::cout << first << " " << last << " (" << year << ")\n";
    }
    return 0;
}

