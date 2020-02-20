//
// Created by User on 20.2.2020 г..
//

#ifndef HASHCODE2020_LIBRARY_H
#define HASHCODE2020_LIBRARY_H

#include <vector>

class library {
    public:
        std::vector<unsigned int> books;
        unsigned int daysForSignUp;
        unsigned int booksPerDay;

        void SetScore()
        {
            // Set Score Function
        }

        int getScore()
        {
            return this -> Score;
        }

    private:
        int Score;
};


#endif //HASHCODE2020_LIBRARY_H
