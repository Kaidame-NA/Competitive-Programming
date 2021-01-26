#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T = 0, N = 0, exponent = 0, numOfZeroes = 0;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> N;
        exponent = 1;
        numOfZeroes = 0;
        while(pow(5,exponent) <= N)
        {
            numOfZeroes += (int) (N/pow(5, exponent));
            exponent++;
        }

        cout << numOfZeroes << "\n";
    }
    return 0;
}