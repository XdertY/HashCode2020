#ifndef HASHCODE2020_INPUTPARSER_H
#define HASHCODE2020_INPUTPARSER_H
#include <fstream>
#include <iostream>
#include <vector>
#include "../library.h"

class InputParser {
public:
    InputParser() {
        std::ifstream inputFiles[6];
        std::string inputNames[6];
//        inputFiles[0].open("../a_example.txt");
//        inputFiles[1].open("../b_read_on.txt");
//        inputFiles[2].open("../c_incunabula.txt");
//        inputFiles[3].open("../d_tough_choices.txt");
//        inputFiles[4].open("../e_so_many_books.txt");
        inputFiles[5].open("../f_libraries_of_the_world.txt");

        for (std::ifstream & inputFile : inputFiles) {
            if (inputFile.is_open()) {

                unsigned int currentElement;
                std::string currentRow;
                std::string booksStr, librariesStr, daysStr;
                std::getline(inputFile, booksStr, ' ');
                std::getline(inputFile, librariesStr, ' ');
                std::getline(inputFile, daysStr);



                int totalBooks, totalLibraries, totalDays;
                totalBooks = stoi(booksStr);
                totalLibraries = stoi(librariesStr);
                totalDays =  stoi(daysStr);


                std::vector<unsigned int> books;
                std::vector<library> libraries;
                currentRow = "";
                for (int i = 0; i < totalBooks; i++) {
                    inputFile >> currentElement;
                    books.push_back(currentElement);
                }

                getline(inputFile, currentRow);


                for (int i = 0; i < totalLibraries; i++) {
                    std::getline(inputFile, booksStr, ' ');
                    std::getline(inputFile, librariesStr, ' ');
                    std::getline(inputFile, daysStr);
                    int booksNumber = stoi(booksStr);
                    unsigned int daysForSignUp = stoi(librariesStr);
                    unsigned int booksPerDay = stoi(daysStr);
                    std::vector<unsigned int> bookIds;
                    for (int j = 0; j < booksNumber; j++) {
                        inputFile >> currentElement;
                        bookIds.push_back(currentElement);
                    }
                    library currLibrary(bookIds, daysForSignUp, booksPerDay);
                    //currLibrary.printLibrary();
                    libraries.push_back(currLibrary);
                    getline(inputFile, currentRow);
                }
                ScoredLibrary(libraries, totalDays);

            }
        }
    }
};

#endif //HASHCODE2020_INPUTPARSER_H
