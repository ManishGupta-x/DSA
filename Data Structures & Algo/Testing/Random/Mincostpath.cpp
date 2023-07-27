#include <bits/stdc++.h> 
using namespace std;

int mincostpath(int **arr, int n , int m, int i, int j){

    if(i == n-1 && j == m-1){
        return arr[i][j];
    }

    if(i >= n || j >= m){
        return INT_MAX;
    }
    int right = mincostpath(arr, n, m, i, j+1);
    int down = mincostpath(arr, n, m, i+1, j);
    int diagonal = mincostpath(arr, n, m, i+1, j+1);

    int mincost = min(right, min(down, diagonal));
    return mincost + arr[i][j];
}

//Memoization code
int mincostpath_Mem(int **arr, int n , int m, int i, int j, int **dp){

    if(i == n-1 && j == m-1){
        return arr[i][j];
    }

    if(i >= n || j >= m){
        return INT_MAX;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    int right = mincostpath_Mem(arr, n, m, i, j+1, dp);
    int down = mincostpath_Mem(arr, n, m, i+1, j, dp);
    int diagonal = mincostpath_Mem(arr, n, m, i+1, j+1, dp);

    int mincost = min(right, min(down, diagonal));
    dp[i][j] = mincost + arr[i][j];
    return dp[i][j];
}

int mincostpath(int **arr, int n, int m){
    
    int **dp = new int*[n];
    for(int i = 0; i < n; i++){
        dp[i] = new int[m];
        for(int j = 0; j < m; j++){
            dp[i][j] = -1;
        }
    }
    return mincostpath_Mem(arr, n, m, 0, 0, dp);
}

int main(){

    int n, m;
    cin >> n >> m;
    int **arr = new int*[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[m];
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int ans = mincostpath(arr, n, m);
    cout << "Ans : " << ans;
    return 0;

}