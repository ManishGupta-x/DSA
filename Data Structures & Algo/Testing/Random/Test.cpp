#include <bits/stdc++.h>
using namespace std;

int findparity(int num)
{
    if (num % 2 == 0)
        return 2;
    else
        return 1;
}

int *finalNum(int *arr, int changed)
{
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int *p = &arr[changed + 1];

    if (findparity(*(p - 1)) == 1)
    {
        for (int i = 0; i < (size-changed-1); i++)
        {
            if (i % 2 == 0)
            {
                *p = 0;
                p++;
            }
            else
            {
                *p = 1;
                p++;
            }
			if(*(p-1) == arr[size-1]){
				break;
			}
            //     arr[i]=newarreven[p];
        }
    }
    else
    {
        for (int i = 0; i < (size-changed-1); i++)
        {
            if (i % 2 == 0)
            {
                *p = 0;
                p++;
            }
            else
            {
                *p = 1;
                p++;
            }
        }
    }
    // else{
    //     arr[i]=newarrodd[q];
    // }

    return arr;
}

int * checkParity(int* arr)
{
    int* complans=NULL;
    bool parity, nextParity;
    int size = sizeof(arr) / sizeof(arr[0]);
    // true for even false for odd
    int value;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 1; j < size; j++)
        {
            int a = findparity(arr[i]);
            int b = findparity(arr[j]);
            if (a == b)
            {
                arr[j]++;
                complans = finalNum(arr, j);
                return arr;
            }
            else
                continue;
        }
    }
    
}

int *digits(int num, int size)
{

    int *arr = new int[size];
    int dig;
    for (int i = size - 1; i >= 0; i--)
    {
        if (num != 0)
        {
            dig = num % 10;
            arr[i] = dig;
            num = num / 10;
        }
    }
    return arr;
}

// if (value%2==0) parity = true;
// else parity = false;
int main()
{
    int number;
    cin >> number;
    int size = floor(log10(number) + 1);
    int * ansarr = digits(number, size);
    int * q = checkParity(ansarr);
	for (int i=0; i<size;i++){
        cout<<*(q+i);
    }
    return 0;
}