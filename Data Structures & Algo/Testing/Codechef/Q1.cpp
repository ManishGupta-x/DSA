
// You are given an array A containing N integers. 
//Find if it is possible to divide the elements of the array A into two arrays B and C such that no of distict elements in B and C are equal
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
        }
        if (count == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        

    }
    
    return 0;

}
