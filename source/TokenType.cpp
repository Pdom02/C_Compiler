#include "TokenType.h"

// Regexes

//Comment
std::regex comment("^\\/\\/[^\n\r]+(?:[\n\r]|\\*\\))$");

//Literal
std::regex float_literal("[0-9]*\\.[0-9][0-9]*");
std::regex string_literal("[a-zA-Z]");
std::regex integer_literal("^[0-9]");
std::regex character_literal("[a-zA-Z]{1}");

//Keywords
std::regex if_key("if");
std::regex else_key("else");
std::regex while_key("while");
std::regex for_key("for");
std::regex and_key("and");
std::regex or_key("or");


//Operators
std::regex plus("\\+");
std::regex minus("\\-");
std::regex division("\\/");
std::regex star("\\*");
std::regex raisePower("\\^");
std::regex equals("^=$");

//Separators
std::regex left_paren("\\($");
std::regex right_paren("\\)$");
std::regex left_curly("\\{$");
std::regex right_curly("\\}$");
std::regex semicolon("^;$");
std::regex dot("\\.$");


//Identifier
std::regex identifier("[a-zA-Z_][a-zA-Z0-9_]*");


//Map shit
std::unordered_map<TOKEN_TYPES, std::regex> tokenTypeMap = {

    {FLOAT, float_literal},
    {STRING, string_literal},
    {INTEGER, integer_literal},
    {CHARACTER, character_literal},

    {IF, if_key},
    {ELSE, else_key},
    {WHILE, while_key},
    {FOR, for_key},
    {AND, and_key},
    {OR, or_key},

    {PLUS, plus},
    {MINUS, minus},
    {DIVISOR, division},
    {MULTIPLIER, star},
    {RAISE, raisePower},
    {EQUAL, equals},
    
    {IDENTIFER, identifier},

    {LEFT_PAREN, left_paren},
    {RIGHT_PAREN, right_paren},
    {LEFT_CURLY_BRACE, left_curly},
    {RIGHT_CURLY_BRACE, right_curly},
    {SEMICOLON, semicolon},
    {DOT, dot},


    {COMMENT, comment},

    

};