//Linear search 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout << "Enter Number of elements in array : " ;
    cin>>n;
    int arr[n];
    cout << "Enter elements in array : " ;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout << "Enter element to be searched : " ;
    cin>>x;
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        cout << "Element found ";
    }else
    {
        cout << "Element not found ";
    }
    return 0;

}
