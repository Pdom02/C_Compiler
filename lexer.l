% option noyywrap

%{
#include "Token.h"
}%

digit [0-9]
letter [a-zA-Z]

%%

// Token types will be, Identifier, Operator, Separator, Keyword, Literal, and, whitespace

// IDENTIFER
[letter][(_)*(letter||digit)*(_)*]* return IDENTIFIER;

// OPERATORS
"+" return ADDITION;
"-" return SUBTRACTION;
"/" return DIVISION; 
"\*" return MULTIPLICATION;
"\^" return RAISE;


int main(int argc, char **argv) {
    yylex();
    return 0;
}
