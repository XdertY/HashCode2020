#include <iostream>
#include <vector>

struct library
{
    library()
    {
        // enter the scoring function
    }

    std::vector<unsigned int> books;
    unsigned int daysForSignUp;
    unsigned int booksPerDay;

    int getScore()
    {
        return this -> Score;
    }

private:
    int Score;
};

int main() {
    std::cout << "Kur!" << std::endl;
    return 0;
}
