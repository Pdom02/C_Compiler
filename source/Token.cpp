#include <iostream>
#include <string>
#include "Token.h"

Token::Token() 
{
    token_content = "";
};
Token::Token(std::string tokenContent, TOKEN_TYPES tokenType)
{
    token_content = tokenContent;
    token_type = tokenType;
}


int Token::erase()
{
    token_content = "";

    return 0;
}

//Friend function

std::ostream& operator<<(std::ostream& print, Token const& obj)
{
    print << "Type: " << obj.token_type << " Lexeme: " << obj.token_content << std::endl;
    return print;
}


