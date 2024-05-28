#include <string>
#include <iostream>
#include <vector>

class Tokenizer
{
    public:
        Tokenizer();
        std::string tok;
        std::vector<std::string>tokens;

        int tokenize(std::vector<std::string>vect);
        void printTokens();
};