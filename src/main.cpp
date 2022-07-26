#include <iostream>  
#include <string>
#include <chrono>
#include <exception>
#include <fstream>
#include <iterator>
#include <optional>
#include <sstream>

#include "scanner.h"
#include "token.h"

namespace cpplox{
int main(int argc, char *argv[])
{


    const std::string source = "print(\"Hello, world!\")";
    Scanner scanner(source);
    // std::vector<cpplox::Token> tokensVec = scanner.tokenize();
    return 0;
}}