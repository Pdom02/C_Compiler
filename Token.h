#include <iostream>
#include <string>
#include <vector>

#include "TokenType.h"

//This class contains the contents of the token object, it also holds the vector which 
//will hold all tokens and a few helper functions

class Token{
    public:
        Token();
        Token(std::string token_content);
        std::string token_content;
        TOKEN_TYPES token_type;

        // std::vector<Token>tokens;
        //int tokenize(std::vector<std::string>vect);
        int erase();
        // void printTokens();
        ~Token() {};

        friend std::ostream& operator<<(std::ostream& print, Token const& obj);

};

