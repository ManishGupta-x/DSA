#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int factor = 0, n;
    cout << "Enter Number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (n % i == 0)
        {
            factor++;
        }
    }
    if (factor == 2)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not Prime Number";
    }

    return 0;
}
