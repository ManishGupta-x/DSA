#include <bits/stdc++.h> 
 using namespace std;
 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> s;
        unordered_map<int , int> nge;
        
        for(int i = 0 ; i < nums2.size();i++){
            
            if(i==0){
                
                s.push(i);
            }else{
                
                if(nums2[s.top()]>=nums2[i]){
                    
                    s.push(i);
                }else{
                    
                    while(nums2[s.top()] < nums2[i] && !s.empty()){
                        
                         int front = s.top();
                         s.pop();
                         nge[nums2[front]] = nums2[i];
                         
                    }
                    s.push(i);
                    
                }
            }
        }
        
        while(!s.empty()){
            int front = s.top();
            s.pop();
            nge[nums2[front]] = -1;
            
            
        }
        unordered_map<int , int> :: iterator it;
        while (it != nge.end()) {
            cout << "Key:  "<<it->first << " -> " << it->second << endl;
            it++;
        }
        
        
        
        
        vector<int> ans;
        for(int i =0 ; i < nums1.size(); i++){
            
            ans.push_back(nge[nums1[i]]);
        }
        return ans;
        
    }

    
    int main(){
    
        vector<int> nums1 = {4,1,2};
        vector<int> nums2 = {1,3,4,2};
        vector<int> ans = nextGreaterElement(nums1,nums2);
        for(int i = 0 ; i < ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return 0;
    
    }