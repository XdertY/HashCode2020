//
// Created by User on 20.2.2020 г..
//

#include "library.h"

std::vector<library> SortedLibraries(const std::vector<library>& inputLibraries)
{
    auto sortedLibrary = inputLibraries;
    std::sort(sortedLibrary.begin(), sortedLibrary.end(), [](library a, library b){ return a.getScore() > a.getScore();});
    return sortedLibrary;
}

std::vector<library> ScoredLibrary(const std::vector<library>& inputLibraries, int Days)
{
    auto scoreLibrary = SortedLibraries(inputLibraries);
    //TODO:

    return scoreLibrary;
}