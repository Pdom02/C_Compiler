# C++ Compiler

Basic C++ Compiler, built for educational purposes 

Currently working on the lexical scanner, the first stage of the compiler.

# Overview of Files


## Header Files

### TokenType.h
 - This contains the possible types of each token, declarations of all of the regular expressions for each type, and a hashmap with pairs of the
types and regex values.

###  Token.h
  - This contains the Token class constructors and methods, the behavior is as such:
  - A Token is initialy created as a place holder object to manage token function calls, it serves as a temporary object to
  pass values to new instantiations. When a true token is instantiated, it is given a string of the token content, and a
  type which is defined in the TokenType.h file.

## Source Files

### TokenType.cpp
 - This contains the actual definitions of the regular expressions and populates the hashmap.

### Token.cpp
 - This contains a default constructor, the overloaded constructor, a function to wipe the temporary token content, and an operator
overload to print token items.

### main.cpp
- This is where the tokenizer process is actually implemented, the program takes an input file and will scan each line into a vector,
then it will tokenize the input and return the lexemes with their associated types.
