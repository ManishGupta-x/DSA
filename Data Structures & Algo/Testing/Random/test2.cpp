#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    char a[r+2][c+2], dummy[r][c];
    for(int i =0 ; i < c+2 ; i++){

        a[0][i] = '.';
    }
     for(int i =0 ; i < r+2 ; i++){

        a[i][0] = '.';
    }
     for(int i =0 ; i < r+2 ; i++){

        a[i][c+1] = '.';
    }
     for(int i =0 ; i < c+2 ; i++){

        a[r+1][i] = '.';
    }

    for (int i = 1; i<=r; i++)
    {
        for (int j = 1; j<=c; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        {
            dummy[i][j] = a[i+1][j+1];
        }
    }




     for (int i = 1; i <=r; i++)
     {
         for (int j = 1; j <=c; j++)
         {
             if (a[i][j] == 'X')
             {
                 int count = 0;


         if (a[i - 1][j] == '.')
         { 
             count++;
         }


         if (a[i + 1][j] == '.')
         {
             count++;
         }



         if (a[i][j - 1] == '.')
         {
             count++;
         }


         if (a[i][j + 1] == '.')
         {
             count++;
         }


                 if (count == 4 || count == 3)
                 {
                     dummy[i-1][j-1] = '.';
                 }

     }
         }
     }


 for (int i = 0; i < r; i++)
 {
     for (int j = 0; j < c; j++)
     {
         cout << dummy[i][j];
     }
     cout << endl;
 }

    return 0;
}