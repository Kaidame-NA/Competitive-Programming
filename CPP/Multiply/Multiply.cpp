#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int userInput{0};
    std::cin >> userInput;

    std::cout << "Double " << userInput << " is: " << userInput*2 <<'\n';
    std::cout << "Triple " << userInput << " is: " << userInput*3 <<'\n';
    return 0;
}