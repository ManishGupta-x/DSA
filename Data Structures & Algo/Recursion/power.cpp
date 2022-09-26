#include <iostream>
#include <bits/stdc++.h>
#include  <vector>
using namespace std;
int power(int x , int n ){

    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}
int main() 
{
    int x, n;
    cin >> x >> n;
    power(x, n);
    return 0;

}
