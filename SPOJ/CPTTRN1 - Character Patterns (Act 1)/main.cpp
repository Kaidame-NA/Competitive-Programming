#include <iostream>

using namespace std;

int main()
{
    int cases{0}, lines{0}, columns{0};
    cin >> cases;

    for(int i{0}; i < cases; i++)
    {
        cin >> lines >> columns;

        for(int j{0}; j<lines; j++)
        {
            for(int k{0};k<columns; k++)
            {
                if(j%2 == 0) {
                    if (k % 2 == 0) {
                        cout << "*";
                    } else {
                        cout << ".";
                    }
                }
                else
                {
                    if (k % 2 == 1) {
                        cout << "*";
                    } else {
                        cout << ".";
                    }
                }
            }

            cout << "\n";
        }
    }
    return 0;
}
