#include <iostream>
#include <bits/stdc++.h>
#include  <vector>
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
    for (int i = 0;i < n; i++){

        for (int j = 0; j < n - i-1;j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(auto i : arr){
        cout << i << " ";
    }
        return 0;

}
