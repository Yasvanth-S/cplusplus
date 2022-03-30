#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define R 3
#define C 6

void SpiralPrint(int m, int n, int arr[R][C])
{
    int i, k = 0, l = 0;
    /* k- starting row index
     * m-ending row index
     * l-starting column index
     * n-ending column indes
     * i-iterator
     */

    while(k<m&&l<n)
    {
        /*Print the first rows from the remaining rows*/
        for(i=l; i<n; i++)
        {
            cout<<arr[k][i]<<" ";
        }
        k++;
    }
}

int main()
{
    int a[R][C] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18}};
    SpiralPrint(R,C,a);
    return 0;
}

