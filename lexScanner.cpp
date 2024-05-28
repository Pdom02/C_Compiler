#include "lexScanner.h"

Tokenizer::Tokenizer() {};


int Tokenizer::tokenize(std::vector<std::string>vect)
{

    if(vect.size() == 0)
    {
        std::cerr << "Vector is empty!!" << std::endl;
        return 1;
    }

    for(size_t i = 0; i < vect.size(); i++)
    {
        for(char c : vect.at(i))
        {
            if(c == '\n' || c == ' ')
            {
                if(!token.token_content.empty())
                {
                    tokens.push_back(token);
                    token.erase();
                }
            }
            else
            {
                token.token_content.append(1, c);
            }
            // std::cout << i << std::endl;
        }
        if(!token.token_content.empty())
        {
            tokens.push_back(token);
            token.erase();
        }
    }
    return 0;
}

void Tokenizer::printTokens()
{
    // std::cout << tokens.size() << std::endl;
    for(size_t i = 0; i < tokens.size(); i++)
    {
        std::cout << "Token " << i << ": " << tokens.at(i) << std::endl;
    }
}