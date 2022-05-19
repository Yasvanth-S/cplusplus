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
    int SubMat[row][column];
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
            SubMat[i][j] = 0;
            SubMat[i][j] = Mat1[i][j] - Mat2[i][j];
        }
    }
    cout<<"Two Matrices after Subtraction"<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<SubMat[i][j]<<" ";
        }
        cout<<endl;
    }
}
