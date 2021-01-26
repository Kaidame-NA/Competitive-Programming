#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x)
{
    if(x < 2)
    {
        return false;
    }
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int cases = 0, m = 0, n = 0;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
        cin >> m >> n;
        for(int j = m; j <= n; j++)
        {
            if(isPrime(j))
            {
                cout << j << "\n";
            }
        }
        cout << "\n";
    }
    return 0;
}