//Write a program to find number m to power n. The function power takes a double value for m and int value for n. Use default value for n to make the function to calculate squares when this argument
//is omitted.
#include <bits/stdc++.h>
using namespace std;

int power(int m, int n = 2)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result = result * m;
    }
    return result;
}
int main() 
{
    
    
    cout << power(2, 3) << endl;
    cout << power(2) << endl;
    return 0;

}
