#include <string>
#include <iostream>
#include <vector>

#include "Token.h"

class Tokenizer
{
    public:
        Tokenizer();
        Token token;
        std::vector<Token>tokens;

        int tokenize(std::vector<std::string>vect);
        void printTokens();
};