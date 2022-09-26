#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    for (int i = 1; i < n; i++)
    {
        int current = a[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {

            arr[j + 1] = arr[j];
            j--;
        }
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
}

return 0;
}
