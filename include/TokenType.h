#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

#include <iostream>
#include <unordered_map>
#include <regex>

enum TOKEN_TYPES {
    //Operators
    OPERATOR = 1000,
    PLUS = 1001, 
    MINUS = 1002, 
    DIVISOR = 1003, 
    MULTIPLIER = 1004, 
    RAISE = 1005, 
    EQUAL = 1006,
    
    //Separator
    SEPARATOR = 1100,
    LEFT_PAREN = 1101, 
    RIGHT_PAREN = 1102, 
    LEFT_CURLY_BRACE = 1103,
    RIGHT_CURLY_BRACE = 1104, 
    SEMICOLON = 1105, 
    DOT = 1106,

    //Keywords
    KEYWORD = 1200,
    IF = 1201, 
    ELSE = 1202, 
    WHILE = 1203, 
    FOR = 1204, 
    AND = 1205, 
    OR = 1206,

    //Identifier
    IDENTIFER = 1300,

    //Literal
    // LITERAL = 1400,
    FLOAT = 1401, 
    STRING = 1402, 
    INTEGER = 1403, 
    CHARACTER = 1404,

    //Comment
    COMMENT = 1500,

    UNKNOWN_TOKEN = 2000,

};

extern std::unordered_map<TOKEN_TYPES, std::regex> tokenTypeMap;

//Regular expressions

//Operators
extern std::regex _OPERATOR;
extern std::regex plus;
extern std::regex minus;
extern std::regex division;
extern std::regex star;
extern std::regex raisePower;
extern std::regex equals;

//Separators
extern std::regex _SEPARATOR;
extern std::regex left_paren;
extern std::regex right_paren;
extern std::regex left_curly;
extern std::regex right_curly;
extern std::regex semicolon;
extern std::regex dot;

//identifer
extern std::regex _IDENTIFIER;

//Keywords
extern std::regex _KEYWORD;
extern std::regex if_key;
extern std::regex else_key;
extern std::regex while_key;
extern std::regex for_key;
extern std::regex and_key;
extern std::regex or_key;

//Literal
// extern std::regex _LITERAL;
extern std::regex float_literal;
extern std::regex string_literal;
extern std::regex integer_literal;
extern std::regex character_literal;

//comment
extern std::regex comment;

//whitespace
extern std::regex whitespace;
extern std::regex newline;

#endif