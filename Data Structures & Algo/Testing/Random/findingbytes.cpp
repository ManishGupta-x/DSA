#include <iostream>
#include <math.h>
using namespace std;

int getbit(int n, int i)
{
    return ((n & (1<<i)) != 0);
}
int main() 
{
    int n ;
    cout<<"Enter Number: " ;
    cin>>n ;
    int max_byte = floor(log2(n)) ;
    for(int i=max_byte;i>=0;i--)
    {
        cout<<getbit(n,i)<<" ";
    }
    return 0;

}
