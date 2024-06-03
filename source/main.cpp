#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "Token.h"

int tokenize(std::vector<std::string>vect, Token &token, std::vector<Token> &tokens)
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
            token.token_content.append(1, c);
            for(const auto& pair : tokenTypeMap)
            {
                if(std::regex_match(token.token_content, pair.second))
                {
                    token.token_type = pair.first;
                }
            }
        }
        //     if(c == '\n' || c == ' ')
        //     {
        //         if(!token.token_content.empty())
        //         {
        //             for(const auto& pair : tokenTypeMap)
        //             {
        //                 if(std::regex_match(token.token_content, pair.second))
        //                 {
        //                     token.token_type = pair.first;
        //                 }
        //                 // else
        //                 // {
        //                 //     token.token_type = UNKNOWN_TOKEN;
        //                 // }
        //             }
        //             // Token copyTok(token.token_content);
        //             //Call the switch statement function here
        //             tokens.push_back(Token(token.token_content, token.token_type));
        //             token.erase();
        //         }
        //     }
        //     else
        //     {
        //         token.token_content.append(1, c);
        //     }
        //     // std::cout << i << std::endl;
        // }
        // if(!token.token_content.empty())
        // {
        //     for(const auto& pair : tokenTypeMap)
        //     {
        //         if(std::regex_match(token.token_content, pair.second))
        //         {
        //             token.token_type = pair.first;
        //         }
        //     }
        //     tokens.push_back(Token(token.token_content, token.token_type));
        //     token.erase();
        // }
    }
    return 0;

}

void printTokens(std::vector<Token>tokens)
{
    for(const auto& token : tokens)
    {
        std::cout << token <<std::endl;
    }
}


int main(int argc, const char* argv[])
{
    if(argc < 2)
    {
        std::cerr << "Not enough arguments" << std::endl;
    }
    else if(argc > 2)
    {
        std::cerr << "Too many arguments" << std::endl;
    }
    else
    {
        Token token;

        std::ifstream fin; //file input
        std::string line; //We will store the file contents line by line into the vector of lines
        std::vector<std::string> lineStorage; //This is the prepped state of the file data before it moves to the Tokenizer
        std::vector<Token> tokens;

        fin.open(argv[1]);

        std::cout << "File opened" << std::endl;
        // Add all the file contents into lineStorage

        while(getline(fin, line))
        {
            lineStorage.push_back(line);
        }
        
        fin.close();
        
        std::cout << "File closed" << std::endl;

        tokenize(lineStorage, token, tokens);
        std::cout << "tokenize complete" << std::endl;
        printTokens(tokens);
        
    }

    return 0;
}