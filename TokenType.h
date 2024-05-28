#include <iostream>

enum TOKEN_TYPES {
    //Operators
    PLUS, MINUS, DIVISOR, MULTIPLIER, RAISE, LEFT_PAREN, RIGHT_PAREN, LEFT_CURLY_BRACE,
    RIGHT_CURLY_BRACE, SEMICOLON, DOT,

    //Identifers
    IF, ELSE, WHILE, FOR, AND, OR,

    //Types
    INTEGER, FLOAT, STRING, CHARACTER, 

};