#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main() 
{
    stack<int> p;
    stack<int> e;
    int n;
    cin >> n;
    for (int i = 0; i < n ; i++)
    {
        int temp;
        cin >> temp;
        p.push(temp);
    }
    for (int i = 0; i < n; i++)
    {
        e.push(p.top());
        p.pop();
    }

    for (int i = 0; i < n; i++)
    {
        cout << e.top() << " ";
        e.pop();
    }
    
    
    
    return 0;

}
