#include <bits/stdc++.h> 

using namespace std;

int trap(vector<int>& height) {
        
        int leftmax=0 , rightmax=0, left[height.size()], right[height.size()];
        for(int i = 0 ; i<height.size(); i++ ){
            
                if(height[i]>=leftmax){
                    
                    leftmax = height[i];
                    left[i] = leftmax;
                }else{
                    
                    left[i]= leftmax;
                }
            
            
        }
        for(int i = height.size()-1 ; i>=0; i--){
            
                if(height[i]>=rightmax){
                    
                    rightmax = height[i];
                    right[i] = rightmax;
                }else{
                    
                    right[i]= rightmax;
                }
            
            
        }

        for (int i = 0; i < height.size(); i++)
        {
            cout << left[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < height.size(); i++)
        {
            cout << right[i] << " ";
        }
        cout << endl;
        
        int count=0;
        
        for(int i =0 ; i < height.size(); i++){
            
            count += min(left[i],right[i])-height[i];
        }
        
        return count;
    }
int main(){


    vector<int> arr = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << trap(arr);
    return 0;

}