#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string exp;
    cin >> exp;
    int open = 0, close = 0;
    if (exp.length() % 2 != 0)
    {

        cout << -1;
        return 0;
    }

    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '{')
        {
            open++;
        }
        else
        {
            close++;
        }
    }
    cout << abs(open - close) / 2;

    return 0;
}
