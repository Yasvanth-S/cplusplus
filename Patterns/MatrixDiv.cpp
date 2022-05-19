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
    double Mat1[row][column];
    double Mat2[row][column];
    double DivMat[row][column];
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
            DivMat[i][j] = 0;
            DivMat[i][j] = Mat1[i][j] / Mat2[i][j];
        }
    }
    cout<<"Two Matrices after Divition"<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<DivMat[i][j]<<" ";
        }
        cout<<endl;
    }
}
