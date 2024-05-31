#include "TokenType.h"

// Regexes

//Operators
std::regex plus("\\+");
std::regex minus("-");
std::regex division("\\/");
std::regex star("\\*");
std::regex raisePower("\\^");

//Separators
std::regex left_paren("\\(");
std::regex right_paren("\\)");
std::regex left_curly("\\{");
std::regex right_curly("\\}");
std::regex semicolon(";");
std::regex dot("\\.");

//Identifier
std::regex identifier("[a-z]([a-zA-Z0-9_])*");

//Keywords
std::regex if_key("if");
std::regex else_key("else");
std::regex while_key("while");
std::regex for_key("for");
std::regex and_key("and");
std::regex or_key("or");

//Map shit
std::unordered_map<TOKEN_TYPES, std::regex> tokenTypeMap = {
    {PLUS, plus},
    {MINUS, minus},
    {DIVISOR, division},
    {MULTIPLIER, star},
    {RAISE, raisePower},

    {LEFT_PAREN, left_paren},
    {RIGHT_PAREN, right_paren},
    {LEFT_CURLY_BRACE, left_curly},
    {RIGHT_CURLY_BRACE, right_curly},
    {SEMICOLON, semicolon},
    {DOT, dot},
    
    {IDENTIFER, identifier},

    {IF, if_key},
    {ELSE, else_key},
    {WHILE, while_key},
    {FOR, for_key},
    {AND, and_key},
    {OR, or_key},
    

};