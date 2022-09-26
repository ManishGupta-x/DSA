#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool is_sorted(int a[], int n)
{

    if (n == 1 || n == 0)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    bool issmallarray = is_sorted(a + 1, n - 1);
    return issmallarray;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (is_sorted(a, n))
    {
        cout << "Sorted";
    }else{

        cout << "Not sorted";
    }

    return 0;
}
