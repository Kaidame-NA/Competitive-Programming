#include <iostream>

using namespace std;

int main()
{
    int inputNumber{0};
    cin >> inputNumber;
    while(inputNumber != 42)
    {
        cout << inputNumber << "\n";
        cin >> inputNumber;
    }
    return 0;
}