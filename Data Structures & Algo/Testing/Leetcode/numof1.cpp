#include <bits/stdc++.h> 
using namespace std;

int hammingWeight(uint32_t n) {
        
        int count = 0;
       
        while(n!=0){
            
            if(n%2==1) count++;
            n = n/2;
        }
        
        
        return count;
        
        
    }

int main(){


    
    cout<<hammingWeight(00000000000000000000000000001011);
    return 0;

}