#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int newnum = 0,n;
    cout << "Enter Number :" ;
    cin>>n;
    int d = n;
    while (n!=0)
    {
        int x = n % 10;
        newnum = newnum + (x * x * x);
        n = n / 10;
    }
    if (newnum == d)
    {
        cout << "Its a Armstrong Number ";
    }else
    {
        cout << "Not a Armstrong Number ";
    }
    
        return 0;
}
