#include <iostream>
#include <string>
#include "Token.h"

Token::Token() 
{
    token_content = "";
};
Token::Token(std::string tokenContent)
{
    token_content = tokenContent;
}


int Token::erase()
{
    token_content = "";

    return 0;
}

// void Token::printTokens()
//  {
//     std::cout << "Print" << std::endl;
//     for (const auto& token : tokens) {
//         std::cout << "Fuck" << std::endl;
//         std::cout << token << std::endl;
//     }
// }


std::ostream& operator<<(std::ostream& print, Token const& obj)
{
    print << "Type: " << " Lexeme: " << obj.token_content << std::endl;
    return print;
}