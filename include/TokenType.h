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
    EQUAL = 1005,
    
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
    STRING = 1401, 
    INTEGER = 1402, 
    CHARACTER = 1403,

    //Comment
    COMMENT = 1500,

    UNKNOWN_TOKEN = 2000,

};

extern std::unordered_map<TOKEN_TYPES, std::regex> tokenTypeMap;

//Regular expressions

//Operators
extern std::regex plus;
extern std::regex minus;
extern std::regex division;
extern std::regex star;
extern std::regex raisePower;
extern std::regex equals;

//Separators
extern std::regex left_paren;
extern std::regex right_paren;
extern std::regex left_curly;
extern std::regex right_curly;
extern std::regex semicolon;
extern std::regex dot;

//identifer
extern std::regex identifier;

//Keywords
extern std::regex if_key;
extern std::regex else_key;
extern std::regex while_key;
extern std::regex for_key;
extern std::regex and_key;
extern std::regex or_key;

//Literal
extern std::regex float_literal;
extern std::regex string_literal;
extern std::regex integer_literal;
extern std::regex character_literal;

//comment
extern std::regex comment;

#endif 
