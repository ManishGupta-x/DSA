#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void check(int a, int b, int c)
{
    int x, y;
    int minimum = min(a, min(b, c));
    if (minimum % 2 == 0)
    {
        x = pow((minimum / 2), 2) + 1;
        y = pow((minimum / 2), 2) - 1;
    }
    else
    {
        x = ceil(pow(minimum, 2) / 2);
        y = floor(pow(minimum, 2) / 2);
    }
    if (minimum == a)
    {

        if ((b == x || b == y) && (c == x || c == y))
        {
            cout << "Yes Its a triplet";
        }
    }
    else if (minimum == b)
    {

        if ((a == x || a == y) && (c == x || c == y))
        {
            cout << "Yes Its a triplet";
        }
    }
    else if (minimum == c)
    {

        if ((b == x || b == y) && (a == x || a == y))
        {
            cout << "Yes Its a triplet";
        }
    }
    else
    {

        cout << "Not a Triplet";
    }
}

int main()
{
    int a, b, c;
    cout << "Enter 3 Numbers to check for triplet: ";
    cin >> a >> b >> c;
    check(a, b, c);
    return 0;
}
