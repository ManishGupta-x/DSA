
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n1,n2,sum=0,carry=0;
    cout<<"Enter First Number: ";
    cin>>n1;
    cout<<"Enter Second Number: ";
    cin>>n2;
    while(n1!=0 || n2!=0)
    {
        int digit1 = n1 % 10;
        int digit2 = n2 % 10;
        int sum = digit1 + digit2 + carry;
        if(sum>1)
        {
            carry = 1;
            sum = sum % 2;
        }
        else
        {
            carry = 0;
        }
        cout<<sum;
        n1 = n1 / 10;
        n2 = n2 / 10;
    }
    return 0;

}
