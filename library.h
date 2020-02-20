//
// Created by User on 20.2.2020 г..
//

#ifndef HASHCODE2020_LIBRARY_H
#define HASHCODE2020_LIBRARY_H

#include <iostream>
#include <vector>
#include <algorithm>

class library {
    public:
        int name; // id
        std::vector<unsigned int> books;
        unsigned int daysForSignUp;
        unsigned int booksPerDay;

        library() = default;

        library(std::vector<unsigned int> books, unsigned int daysForSingUp, unsigned int booksPerDay) {
            this->books = books;
            this->daysForSignUp = daysForSingUp;
            this->booksPerDay = booksPerDay;
        }

        void SetScore(int daysForProcess)
        {
            // Set Score Function
            std::vector<unsigned int> asd = books;
            std::sort(asd.begin(), asd.end());
            int sum = 0;
            for(int i = 0; i < asd.size(); i++){
                sum += asd[i];
            }
            this -> Score = (daysForProcess - daysForSignUp) * booksPerDay*sum;
        }

        int getScore()
        {
            return this -> Score;
        }

        void printLibrary() {
            std::cout<<"This library takes "<<this->daysForSignUp<<" days to sign up"<<std::endl;
            std::cout<<"This library has "<<this->booksPerDay<<" books per day limit"<<std::endl;
            std::cout<<"Books in this library :"<<std::endl;
            for(int a  : this->books)
                std::cout<<a<<" ";
        }

    private:
        int Score;
};

std::vector<library> SortedLibraries(const std::vector<library>&);
std::vector<library> ScoredLibrary(const std::vector<library>&, int);
void generateSubmission(const std::vector<library>&);


#endif //HASHCODE2020_LIBRARY_H
