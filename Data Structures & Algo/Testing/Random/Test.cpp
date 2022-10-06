#include <iostream>
using namespace std;
double function( double &x){
   
    return (x*x - 4*x -10);
   
}

int main() {
   
    double a = -1 , b = 6,r ;
   
    while((b-a) >= 0.01){
    r = (a + b) / 2;
    if(function(r) == 0){
        break;
    }else if(function(r)* function(a) <0){
        b=r;
    }else{
        a=r;
    }
   
    }

     cout<<"\n\n";
     cout<<"Root of the eqn is :  "<< r<<endl;
     cout<<"\n\n";
   
   
   
   
    return 0;
}