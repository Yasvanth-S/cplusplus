#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of lines to  print the pattern"<<endl;
    cin>>n;
    cout<<endl;
    int num = 0;
    int numm=0;
    int odd = 1;
    int even = 2;
    while(numm<n)
    {
        for(num=0; num<n;odd+=2,num+=1)
        {
            cout<<setw(2)<<odd<<" ";
        }
        cout<<endl;
        for(num=0; num<n;even+=2,num+=1)
        {
            cout<<setw(2)<<even<<" ";
        }
        cout<<endl;
        numm+=2;
    }
}

