//Change all characters of a string to upper case 
#include <iostream>
#include <bits/stdc++.h>
#include  <vector>
#include <string>
using namespace std;

int main() 
{
    string str;
    getline(cin, str);
    // for (int i = 0; i < str.length(); i++)
    // {       
    //     if(str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] = str[i] - 32;
    //     }
        
    // }

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    return 0;

}
