#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <string>
using namespace std;

bool checkredundant(string s)
{

    stack<char> exp;
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')')
        {

            while (exp.top() != '(')
            {
                count++;
                exp.pop();
            }

            if (count == 0 || count == 1)
            {

                exp.pop();
                return true;
            }
            else
            {

                exp.pop();
                count = 0;
            }
        }

        exp.push(s[i]);
    }

    return false;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (checkredundant(s))
        {
            cout << "True\n";
        }
        else
        {
            cout << "False\n";
        }
    }

    return 0;
}
