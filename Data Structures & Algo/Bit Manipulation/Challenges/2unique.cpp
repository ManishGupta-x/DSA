//to find 2 unique numbers in a array of numbers
//hint : Use XOR
#include <iostream>
#include <bits/stdc++.h>
#include  <vector>
using namespace std;
int setBit(int n, int pos){
    return ((n & (1 << pos)) !=0);
}
void unique(int a[] , int n){

    int xorsum = 0;
    for(int i = 0; i < n; i++){
        xorsum ^= a[i];
    }
    int setbit = 0,pos=0;
    int tempxor = xorsum;
    while (setbit!=1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxorsum = 0;
    for(int i = 0; i < n; i++){
        if(setBit(a[i],pos-1)){

            newxorsum ^= a[i];
        }
    }
    cout<<newxorsum<<endl;
    cout<<(tempxor^newxorsum);
    
}
int main() 
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    unique(a,n);
    return 0;

}
