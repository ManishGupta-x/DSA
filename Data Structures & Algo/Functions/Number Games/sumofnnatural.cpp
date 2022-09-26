#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main() 
{
    int n;
    cout<<"Enter the number of natural numbers : ";
    cin>>n;
    cout<<"The sum of "<<n<<" natural numbers is : "<<sum(n);
    return 0;

}
