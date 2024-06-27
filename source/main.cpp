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

    //Remove spaces from each line and join them for parsing.
    for(size_t i = 0; i < vect.size(); i++)
    {
        for(auto itr = vect.at(i).begin();itr != vect.at(i).end(); itr++ )
        {
            if(*itr == '\n' || *itr == ' ')
            {
            
                if(!token.token_content.empty())
                {
                    for(const auto& pair : tokenTypeMap)
                    {
        
                        if(std::regex_match(token.token_content, pair.second))
                        {
                            token.token_type = pair.first;
                            tokens.push_back(Token(token.token_content, token.token_type));
                            token.erase();
                        }
                        //else it'll just iterate through the string
                    }
                }
            }
            else if(*itr == '(' || *itr == ')' || *itr == '{' || *itr == '}' || *itr == ';')
            {
                if(!token.token_content.empty())
                {
                    std::cout << "Token empty check" << std::endl;
                    for(const auto& pair : tokenTypeMap)
                    {
                        if(std::regex_match(token.token_content, pair.second))
                        {
                            token.token_type = pair.first;
                            std::cout<< "Token type is found" << std::endl;
                            tokens.push_back(Token(token.token_content, token.token_type));
                            token.erase();
                        }
                    }

                }
                token.token_content.append(1, *itr);
                for(const auto& pair : tokenTypeMap)
                {
                    if(std::regex_match(token.token_content, pair.second))
                    {
                        token.token_type = pair.first;
                        tokens.push_back(Token(token.token_content, token.token_type));
                        token.erase();
                    }
                }

            }
            else
            {
                token.token_content.append(1, *itr);
                std::cout << token.token_content << std::endl;
            }    
        }
        if(!token.token_content.empty())
        {
            for(const auto& pair : tokenTypeMap)
            {
                if(std::regex_match(token.token_content, pair.second))
                {
                    token.token_type = pair.first;
                }
            }
            tokens.push_back(Token(token.token_content, token.token_type));
            token.erase();
        }
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