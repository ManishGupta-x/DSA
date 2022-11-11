#include <bits/stdc++.h> 
using namespace std;

    string reverse(string s)
    {
        int n = s.size();
        for(int i = 0; i < n/2; i++){
            
            swap(s[i],s[n-i-1]);
        }
        
        return s;
    }
    string reverseWords(string s) {
        
        string reversed;
        string ans;
        int words =1;
        for(int i = 0 ; i < s.size(); i++){
            
            if(s[i]==' '){
                
                words++;
            }
        }
        cout<<"Words: "<<words<<endl;
        int k = 0;
        for(int i =0 ; i < words; i++){
            
            while(s[k] != ' ' || s[k]!='\0'){
                
                reversed.insert(reversed.end(),s[k]);
                k++;
                
            }
            string ans = reverse(reversed);
            ans.insert(reversed.end(),' ');
            k++;
        }
        cout<<"String: "<<ans<<endl;
        return ans;
    }


int main(){


    string s = "Let's take LeetCode contest";
    cout << reverseWords(s);
    return 0;

}