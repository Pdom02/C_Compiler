#include <iostream>
#include <string>
#include <vector>

#include "TokenType.h"


class Token{
    public:
        std::string token_content;
        TOKEN_TYPES token_type;
    
        Token(std::string token, TOKEN_TYPES tokenType);
        int tokenize(std::vector<std::string>vect);
        int erase();

        friend std::ostream& operator<<(std::ostream& print, Token const& obj);

};

std::ostream& operator<<(std::ostream& print, Token const& obj)
{
    print << "Type: " << obj.token_type << " Lexeme: " << obj.token_content << std::endl;
    return print;
}