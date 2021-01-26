#include <iostream>
#include <string>
using namespace std;

int reverse(int x)
{
    string temp = "";
    for(int i = to_string(x).length(); --i >= 0;)
    {
        temp += to_string(x).at(i);
    }
    return stoi(temp);
}

int main()
{
    int cases = 0, num1 = 0, num2 = 0;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
        cin >> num1 >> num2;
        cout << reverse(reverse(num1) + reverse(num2)) << "\n";
    }
    return 0;
}