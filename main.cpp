#include <iostream>  
#include <string>
#include <chrono>
#include <exception>
#include <fstream>
#include <iterator>
#include <optional>
#include <sstream>

#include "src/scanner.h"
#include "src/token.h"


int main(int argc, char *argv[])
{


    const std::string source = "print(\"Hello, world!\")";
    cpplox::Scanner scanner(source);
    std::vector<cpplox::Token> tokensVec = scanner.tokenize();
    for (auto token : tokensVec)
    {
        std::cout << token.toString() << std::endl;
    }
    return 0;
}