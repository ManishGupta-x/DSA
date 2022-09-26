#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int convert(int n)
{
    vector<int> a;
    while (n!=0)
    {
        a.push_back(n % 8);
        n = n / 8;
    }
    for (int i = a.size()-1; i >= 0;i--){

        cout << a[i];
    }
    return 0;
}
int main() 
{
    int n ;
    cout<<"Enter Number: " ;
    cin>>n ;
    convert(n);

    return 0;

}
