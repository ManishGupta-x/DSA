// Binary Search
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool binarySearch(vector <int> arr , int n , int element ){

    int mid, start=0, end=n;
    while (start<=end)
    {
        mid = (start + end) / 2;
        if(arr[mid]== element){
            return true;
        }else if(element < arr[mid]){

            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return false;
}

int main() 
{
    int n;
    cout << "Enter Number of Elements in an array : ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << "Enter Element to search";
    int element;
    cin >> element;
    if(binarySearch(arr, n, element)){

        cout << "Element Found";
    }else {

        cout << "Element Not found";
    }

    return 0;

}
