#include <fstream>
#include <iostream>
#include <vector>

#include <glog/logging.h>

enum class Error { NoSuchFile, EmptyFile };

std::vector<std::string> readLines(const std::string & filename) {

    LOG(INFO) << "readLines (" << filename << ")";

    std::ifstream ifs(filename);
    if (not ifs.is_open())
        throw Error::NoSuchFile;

    std::vector<std::string> lines;
    std::string line;
    while (std::getline(ifs, line))
        lines.push_back(line);

    if (lines.empty())
        throw Error::EmptyFile;

    return lines;
}

void printReverseLines(const std::vector<std::string> & lines) {

    LOG(INFO) << "printReverseLines (" << lines.size() << " lines)";

    for (auto it=lines.rbegin(); it!=lines.rend(); ++it)
        std::cout << *it << std::endl;
}

int main(int argc, char ** argv) {

    google::InitGoogleLogging(argv[0]);

    if (argc != 2) {
        std::cerr << "usage: <filename>" << std::endl;
        LOG(INFO) << "bad usage, exiting";
        exit(-1);
    }

    try {
        const auto lines = readLines(argv[1]);
        printReverseLines(lines);
    }
    catch (const std::exception & e) {
        std::cerr << e.what() << std::endl;
        LOG(ERROR) << e.what();
    }
    catch (const Error & e) {
        switch (e) {
            case Error::NoSuchFile:
                LOG(ERROR) << "no such file";
                break;
            case Error::EmptyFile:
                LOG(ERROR) << "empty file";
        }
    }
    catch (...) {
        LOG(ERROR) << "unknown exception";
    }

    return 0;
}

