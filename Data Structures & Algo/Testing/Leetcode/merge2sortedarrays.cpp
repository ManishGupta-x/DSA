#include <vector>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        
        int gap = ceil((float)(nums1.size()+nums2.size())/2);   
        cout<<"initial Gap is "<<gap<<endl;
            for(int i = 0; i < nums2.size() ; i++){

                nums1.push_back(nums2[i]);
            }
        
        
        do{
            
            vector<int>::iterator it1 = nums1.begin();
            vector<int>::iterator it2 = it1 + gap;
            while(it2!= nums1.end()){

                    if(*it1 > *it2){

                     int t = *it1;
                        *it1 = *it2;
                        *it2 = t;
                    }
                    it1++;
                    it2++;
            }
            for (int i = 0; i < nums1.size(); i++)
            {
                cout<<nums1[i]<<" ";
            }
            
            if((float)gap/2 <1) break;
            gap = ceil((float)gap/2);
            cout<<endl<<"Gap is "<<gap<<endl;
           
            
        }while(gap>=1);

        
        if(nums1.size()%2!=0){

            return nums1[nums1.size() / 2];
        }else{

            return (nums1[nums1.size() / 2] + nums1[nums1.size() / 2 - 1]) / 2.0;
        }
        
        
            
    }
     vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int i =0 ; i< nums2.size();i++){
            
            nums1.pop_back();
        }
        for(int i =0 ; i< nums2.size();i++){
            
            nums1.push_back(nums2[i]);
        }
        int gap = ceil((float)nums1.size()/2);
        cout<<"initial Gap is "<<gap<<endl;
        do{
            
            vector<int>::iterator it1 = nums1.begin();
            vector<int>::iterator it2 = it1 + gap;
            while(it2!= nums1.end()){

                    if(*it1 > *it2){

                     int t = *it1;
                        *it1 = *it2;
                        *it2 = t;
                    }
                    it1++;
                    it2++;
            }
               
           
            if((float)gap/2 < 1)
            break;
            gap=ceil((float)gap/2);
            cout<<endl<<"Gap is "<<gap<<endl;
            
        }while(gap>=1);

        return nums1;
        
    }

    int main(){

        vector<int> num1 = {1,2,2,0,0,0};
        vector<int> num2 = {1,2,3};
        vector<int> nums = merge(num1,3,num2,3);
        for(int i =0 ; i< nums.size();i++){
            
            cout<<nums[i]<<" ";
        }
        return 0;
    }