#include <iostream>
using namespace std;

int main() 
{
    int N, t1=0, t2=1, nextTerm=0;
    cin>>N;
    if(N==0||N==1||N==2||N==3)
        cout<<"Yes";
    for(int i=1;i<=N;++i) 
    {
        if(nextTerm==N)
        {
            cout<<"Yes";
            break;
        }
        else 
        {
            nextTerm=t1+t2;
            t1=t2;
            t2=nextTerm;
        }
    }
    return 0;
}