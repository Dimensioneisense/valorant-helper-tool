#pragma once
#include <string>
#include <map>

class Parser {
public:
    std::map<std::string, std::string> parseFile(const std::string& path);
};
