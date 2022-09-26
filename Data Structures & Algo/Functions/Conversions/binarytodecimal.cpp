#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int convert(int n)
{
    int i=0,sum = 0;
    while (n != 0)
    {
        
        int digit = n % 10;
        if(digit > 1){

            cout << "Number is not binary";
            return 0;
        }
        if (digit == 1)
        {
            sum += pow(2, i);
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
    cout << "Enter Binary Number : ";
    cin >> n;
    convert(n);
    return 0;
}
