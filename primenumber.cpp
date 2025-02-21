#include <bits/stdc++.h>
using namespace std;


void isPrime(int n);

int main()
{
    int n = 100;
    for (int i = 1; i <= n; i++)
    {
        isPrime(i);
    }
}

void isPrime(int n)
{
    if (n < 2 || (n != 2 && n % 2 == 0))
    {
        return;
    }
    if (n == 2 || n == 3)
    {
        cout << n << endl;
    }
    else
    {
        for (int i = 3; i <= floor(sqrt(n)); i += 2)
        {
            if (n % i == 0)
            {
                return;
            }
        }
        cout << n << endl;
    }
}