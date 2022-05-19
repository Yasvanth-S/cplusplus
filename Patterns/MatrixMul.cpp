#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 0, column = 0;
    cout<<"Enter the Number of Row: ";
    cin>>row;
    cout<<"Enter the Number of Column: ";
    cin>>column;
    cout<<endl;
    int Mat1[row][column];
    int Mat2[row][column];
    int MulMat[row][column];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<"Enter the number for matrix 1 row "<<i<<" column "<<j<<" :";
            cin>>Mat1[i][j];
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<"Enter the number for matrix 2 row "<<i<<" column "<<j<<" :";
            cin>>Mat2[i][j];
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            MulMat[i][j] = 0;
            for(int k = 0; k < column; k++)
            {
                MulMat[i][j] += Mat1[i][k] * Mat2[k][i];
            }
        }
    }
    cout<<"Two Matrices after Multiplication"<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<MulMat[i][j]<<" ";
        }
        cout<<endl;
    }
}
