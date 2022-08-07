#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
    int strow = 0, stcol = 0, i = 0;

    while(strow < row && stcol < col)
    {
        for( i = stcol; i < col; ++i)
        {
            cout<<arr[strow][i]<<" ";
        }
        strow++;
        for(i = strow; i < row; ++i)
        {
            cout<<arr[i][col-1]<<" ";
        }
        col--;
        if(strow<row)
        {
            for(i = col-1; i >= stcol; --i)
            {
                cout<<arr[row-1][i]<<" ";
            }
        }
        row--;
        if(stcol < col)
        {
            for(i = row-1; i >=strow; --i)
            {
                cout<<arr[i][stcol]<<" ";
            }
        }
        stcol++;
    }
    return 0;
}




