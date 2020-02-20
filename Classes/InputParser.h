#ifndef HASHCODE2020_INPUTPARSER_H
#define HASHCODE2020_INPUTPARSER_H
#include <fstream>
#include <iostream>
#include <vector>
#include "../library.h"

class InputParser {
public:
    InputParser() {
        std::fstream inputFile;
        //std::string inputNames[6];
        inputFile.open("../a_example.txt");
        unsigned int currentElement;
        std::string currentRow;
        getline(inputFile, currentRow);
        int totalBooks, totalLibraries, totalDays;
        totalBooks = currentRow[0] - '0';
        totalLibraries = currentRow[2] - '0';
        totalDays = currentRow[4] - '0';


        std::vector<unsigned int> books;
        std::vector<library> libraries;
        currentRow = "";
        for(int i = 0 ; i < totalBooks; i++) {
            inputFile>>currentElement;
            books.push_back(currentElement);
            std::cout<<currentElement;
        }

        getline(inputFile, currentRow);


        for(int i = 0 ; i < totalLibraries; i++) {
            getline(inputFile, currentRow);
            int booksNumber = currentRow[0] - '0';
            unsigned int daysForSignUp = currentRow[2] - '0';
            unsigned int booksPerDay = currentRow[4] - '0';
            std::vector<unsigned int> bookIds;
            for(int j = 0 ; j < booksNumber; j++) {
                inputFile>>currentElement;
                bookIds.push_back(currentElement);
            }
            library currLibrary(bookIds, daysForSignUp, booksPerDay);
            currLibrary.printLibrary();
            libraries.push_back(currLibrary);
            getline(inputFile, currentRow);


        }
    }
};

#endif //HASHCODE2020_INPUTPARSER_H
