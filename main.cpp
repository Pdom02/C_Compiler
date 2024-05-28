#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "lexScanner.h"

int main(int argc, const char* argv[])
{
    if(argc < 2)
    {
        std::cerr << "Not enough arguments" << std::endl;
    }
    else if(argc > 2)
    {
        std::cerr << "Too many arguments" << std::endl;
    }
    else
    {
        Tokenizer token;

        std::ifstream fin; //file input
        std::string line; //We will store the file contents line by line into the vector of lines
        std::vector<std::string> lineStorage; //This is the prepped state of the file data before it moves to the Tokenizer

        fin.open(argv[1]);

        // Add all the file contents into lineStorage

        while(getline(fin, line))
        {
            lineStorage.push_back(line);
        }
        
        fin.close();

        token.tokenize(lineStorage);
        token.printTokens();
    }

    return 0;
}