// Used to calculate Maximum subarray sum 

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int maxSum = INT_MIN,currentSum =0;
    vector<int> a;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        a.push_back(b);
    }
    for (int i = 0; i < n; i++)
    {
        currentSum += a[i];
        if(currentSum<0){
            currentSum = 0;
        }
        maxSum = max(currentSum, maxSum);
    }
    cout << "Maximum sum : " << maxSum;
    return 0;
}
