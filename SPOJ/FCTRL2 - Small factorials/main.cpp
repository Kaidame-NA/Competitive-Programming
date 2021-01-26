#include <iostream>

using namespace std;

void factorial(int n)
{
    int product[200] = {0};
    product[199] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j<200; j++)
        {
            product[j] *= i;
        }
        for(int j = 200; --j>=0;)
        {
            if(product[j] >= 10)
            {
                product[j-1] += (int) (product[j]/10);
                product[j] %= 10;
            }
        }
    }
    bool firstNumber = false;
    for(int i = 0; i<200; i++)
    {
        if(product[i] == 0 && !firstNumber)
        {
            continue;
        }
        else if(!firstNumber && product[i] != 0)
        {
            cout << product[i];
            firstNumber = true;
        }
        else
        {
            cout << product[i];
        }
    }
    cout << "\n";
}

int main()
{
    int cases = 0, n = 0;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
        cin >> n;
        factorial(n);
    }
}