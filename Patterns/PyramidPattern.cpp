#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lines;
    cout<<"Number of lines to be printed: ";
    cin>>lines;
    int spaces = lines * 2 - 2;
    int star = 1;
    for(int i = 0; i < lines; i++)
    {
        for(int j = 0; j < spaces;cout<<" ", j++);
        for(int j = 0; j < star;cout<<"* ", j++);
        spaces-=2;
        star+=2;
        cout<<endl;
    }
}


