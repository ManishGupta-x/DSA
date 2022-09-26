#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

queue<int> reverse(queue<int> q)
{

    if (q.front() == q.back())
    {

        return q;
    }
    int poped = q.front();
    q.pop();
    queue<int> smalloutput = reverse(q);
    smalloutput.push(poped);
    return smalloutput;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            q.push(temp);
        }

        q = reverse(q);
        for (int i = 0; i < n; i++)
        {
            cout << q.front()<<" ";
            q.pop();
        }
        
    }
}