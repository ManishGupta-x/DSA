// Count Character occuring maximum times in a string 
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int main() 
{
    string s;
    getline(cin, s);
    int freq[26];
    for (int i = 0; i < 26;i++){

        freq[i] = 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;

    }
    char ans = 'a'; 
    int maxfreq = 0;
    for (int i = 0; i < 26;i++){

        if(freq[i]>=maxfreq){
            maxfreq = freq[i];
             ans = i + 'a';
        }
    }
   
    cout << "Maximum Freq is " << maxfreq << " of " << ans;
    return 0;

}
