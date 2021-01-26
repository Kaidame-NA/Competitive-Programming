#include <iostream>
#include <string>

using namespace std;

int main()
{
    int cases {0};
    cin >> cases;

    for(int i = 0; i < cases; i++)
    {
        string line {""};
        string outputLine{""};
        cin >> line;
        for(int j = 0; j < line.length()/2; j+=2)
        {
            outputLine += line.at(j);
        }
        cout << outputLine << '\n';
    }
    return 0;
}