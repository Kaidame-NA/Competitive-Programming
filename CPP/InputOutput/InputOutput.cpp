#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int number{ };
    std::cin >> number;
    std::cout << "You printed: " << number << '\n';
    return 0;
}