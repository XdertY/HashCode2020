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
        std::vector<unsigned int> books;
        unsigned int daysForSignUp;
        unsigned int booksPerDay;

        library(std::vector<unsigned int> books, unsigned int daysForSingUp, unsigned int booksPerDay) {
            this->books = books;
            this->daysForSignUp = daysForSingUp;
            this->booksPerDay = booksPerDay;
        }

        void SetScore()
        {
            // Set Score Function
            this -> Score = 1;
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


#endif //HASHCODE2020_LIBRARY_H
