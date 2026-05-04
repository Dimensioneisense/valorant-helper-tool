#include "parser.h"
#include <fstream>

std::map<std::string, std::string> Parser::parseFile(const std::string& path) {
    std::map<std::string, std::string> result;
    std::ifstream f(path);
    std::string line;
    while (std::getline(f, line)) {
        auto pos = line.find(":");
        if (pos != std::string::npos)
            result[line.substr(0, pos)] = line.substr(pos + 1);
    }
    return result;
}
