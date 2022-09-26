#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int convert(int n)
{
    int i=0,sum = 0;
    while (n != 0)
    {
        
        int digit = n % 10;
        if(digit > 7){

            cout << "Number is not Octal";
            return 0;
        }
        if (digit >0)
        {
            sum += digit*pow(8, i);
            i++;
        }else{
            i++;
        }
        n = n / 10;
    }
    cout << "Converted Decimal Number = " << sum;
    return 0;
}
int main()
{
    int n;
    cout << "Enter Octal Number : ";
    cin >> n;
    convert(n);
    return 0;
}
