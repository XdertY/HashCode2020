#include <iostream>
#include <vector>

struct library
{
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

int main() {
    std::cout << "Kur!" << std::endl;
    return 0;
}
