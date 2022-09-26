//Find number of times a string occurs in a string
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    string s1, s2;
    cin >> s1 >> s2;
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++;
    }
    int count = 0,min_freq=s2.length();
    for (int i = 0; i < s2.length(); i++)
    {
        if (freq[s2[i] - 'a'] < min_freq)
        {
            min_freq = freq[s2[i] - 'a'];
        }
        
    }
    cout << min_freq;
    
    
    return 0;

}
