/*
This is a placeholder file to define the tokenTypeMap and the regular expressions. This will need to be organized better
*/
#include "TokenType.h"

//regexes
std::regex plus("\\+");
std::regex minus("-");
std::regex division("\\/");
std::regex star("\\*");
std::regex raisePower("\\^");

//Map shit
std::unordered_map<TOKEN_TYPES, std::regex> tokenTypeMap = {
    {PLUS, plus},
    {MINUS, minus},
    {DIVISOR, division},
    {MULTIPLIER, star},
    {RAISE, raisePower},

};