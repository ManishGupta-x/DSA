#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int sum(int a[], int n)
{

    if (n == 0)
    {
        return 0;
    }
    int smallOutput = sum(a + 1, n - 1);
    return (a[0] + smallOutput);
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
    cout << "Sum of array : " << sum(a,n);

    return 0;
}
