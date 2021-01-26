#include <iostream>

using namespace std;

int main()
{
    int numOfOs{0};
    cin >> numOfOs;
    cout << "W";
    for(int i = 0; i < numOfOs; i++)
    {
        cout << "o";
    }
    cout << "w\n";
    return 0;
}