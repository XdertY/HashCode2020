//
// Created by User on 20.2.2020 г..
//

#include "library.h"

std::vector<library> SortedLibraries(const std::vector<library>& inputLibraries)
{
    auto sortedLibrary = inputLibraries;
    std::sort(sortedLibrary.begin(), sortedLibrary.end(), [](library a, library b){ return a.getScore() > b.getScore();});
    return sortedLibrary;
}

std::vector<library> ScoredLibrary(const std::vector<library>& inputLibraries, int days)
{
    int signUpDays = days;
    auto sortLibrary = SortedLibraries(inputLibraries);
    std::vector<library> scoreLibrary;
    //TODO:
    for(const auto& lib : sortLibrary)
    {
        signUpDays -=  lib.daysForSignUp;
        if(signUpDays <= 0) break;

        library temp_lib;
        temp_lib.name = lib.name;
        temp_lib.booksPerDay = lib.booksPerDay;
        temp_lib.daysForSignUp = lib.daysForSignUp;

        for(int book = 0; book < signUpDays * lib.booksPerDay || book < lib.books.size(); book++ )
        {
            temp_lib.books.push_back(lib.books.at(book));
        }
    }
    return scoreLibrary;
}