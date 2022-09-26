#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int checkspan (queue <int> q , int top){

    int count = 1;
    while (!q.empty())
    {
        q.pop();
        if()
    }
    
    
}
int main()
{

    int n;
    cin >> n;

    stack<int> stock;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        stock.push(temp);
    }
     int a[n];
     for (int i = 0; i < n; i++)
     {
        int span = checkspan(stock, stock.top());
        a[i] = span;
     }
     for (int i = 0; i < n; i++)
     {
         cout << a[i] << " ";
     }
     
     
    
   


    return 0;
}
