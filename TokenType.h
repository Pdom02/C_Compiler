#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

#include <iostream>
#include <unordered_map>
#include <regex>

enum TOKEN_TYPES {
    //Operators
    PLUS = 1000, 
    MINUS = 1001, 
    DIVISOR = 1002, 
    MULTIPLIER = 1003, 
    RAISE = 1004, 
    //Separator
    LEFT_PAREN = 1100, 
    RIGHT_PAREN = 1101, 
    LEFT_CURLY_BRACE = 1102,
    RIGHT_CURLY_BRACE = 1103, 
    SEMICOLON = 1104, 
    DOT = 1105,

    //Keywords
    IF = 1200, 
    ELSE = 1201, 
    WHILE = 1202, 
    FOR = 1203, 
    AND = 1204, 
    OR = 1205,

    //Identifier
    IDENTIFER = 1300,

    //Literal
    FLOAT = 1400, 
    BOOL = 1401, 
    STRING = 1402, 
    INTEGER = 1403, 
    CHARACTER = 1404,

    //Comment
    COMMENT = 1500,

};

extern std::unordered_map<TOKEN_TYPES, std::regex> tokenTypeMap;

//Regular expressions

//Operators
extern std::regex plus;
extern std::regex minus;
extern std::regex division;
extern std::regex star;
extern std::regex raisePower;

//Separators
// extern std::regex left_paren;
// extern std::regex right_paren;
// extern std::regex left_curly;
// extern std::regex right_curly;
// extern std::regex dot;

//identifer
// extern std::regex identifier;

//Literal
// extern std::regex float_type;
// extern std::regex bool_type;
// extern std::regex string_type;
// extern std::regex integer_type;
// extern std::regex character_type;

//comment
// extern std::regex comment;

#endif 
