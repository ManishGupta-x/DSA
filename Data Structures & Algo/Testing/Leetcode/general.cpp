#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<int,int> freq;
    freq[0] = 1;
    freq[1] = 2;
    freq[2] = 3;
    freq[3] = 4;
    freq[4] = 5;
    freq[5] = 6;
    unordered_map<int,int> :: iterator it = freq.begin();
    while(it != freq.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}