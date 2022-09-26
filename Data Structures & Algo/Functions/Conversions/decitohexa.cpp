#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int convert(int n)
{
    vector<int> a;
    while (n != 0)
    {
        a.push_back(n % 16);
        n = n / 16;
    }
    for (int i = a.size() - 1; i >= 0; i--)
    {

        if (a[i] > 9)
        {
            cout << char(a[i] + 55);
        }
        else
        {
            cout << a[i];
        }
    }
    return 0;
}
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    convert(n);

    return 0;
}
