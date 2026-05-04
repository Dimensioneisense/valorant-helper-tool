#include <iostream>
#include <fstream>
#include <string>
#include "parser.h"

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << "Usage: parser <file.json>" << std::endl;
        return 1;
    }
    Parser p;
    auto result = p.parseFile(argv[1]);
    std::cout << "Parsed " << result.size() << " entries" << std::endl;
    return 0;
}
