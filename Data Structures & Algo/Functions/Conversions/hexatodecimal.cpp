#include <iostream>
#include <bits/stdc++.h>
#include <ctype.h>
#include <string.h>
using namespace std;

int convert(char n[])
{
   int j = 0, sum = 0;
   int max = strlen(n);
   for (int i = max - 1; i >= 0; i--)
   {
      if (isalpha(n[i]))
      {

         if (n[i] == 'a')
         {
            sum += 10 * pow(16, j);
            j++;
         }
         else if (n[i] == 'b')
         {
            sum += 11 * pow(16, j);
            j++;
         }
         else if (n[i] == 'c')
         {
            sum += 12 * pow(16, j);
            j++;
         }
         else if (n[i] == 'c')
         {
            sum += 13 * pow(16, j);
            j++;
         }
         else if (n[i] == 'e')
         {
            sum += 14 * pow(16, j);
            j++;
         }
         else if (n[i] == 'f')
         {
            sum += 15 * pow(16, j);
            j++;
         }
      }
      else
      {
         sum += (n[i] - '0') * pow(16, j);
         j++;
      }
   }

   cout << "Converted Decimal Number = " << sum;
   return 0;
}
int main()
{
   char n[100];
   cout << "Enter Hexadecimal Number : ";
   cin >> n;
   convert(n);
   return 0;
}
