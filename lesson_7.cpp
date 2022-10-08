#include <iostream>


// Using conditional operator
int main() {
    std::cout << "let's play?" << std::endl;
    std::cout << "The first player enters a number and the second player must guess the number." << std::endl;
    std::cout << "Enter the number which do you want to guess: ";

    int responce;
    int attempt;

    std::cin >> responce;

    std::cout << "What number did the first user guess?: ";
    std::cin >> attempt;

    if (attempt == responce) 
    {
        std::cout << "yeah, you guessed! " << std::endl;
    }
    else if (attempt < responce)
    {
        std::cout << "You guessed wrong, the hidden number is greater than yours " << std::endl;
    }
    else
    {
        std::cout << "You guessed wrong, the hidden number is less than yours" << std::endl;
    }
}

