#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

void SixnPlusMinus(ull num)
{
    if(num == 0)
    {
        cout<<"No";
    }
    else if(num %2 == 0 || num %3 == 0 || num %5 ==0 || num %7 ==0)
    {
        cout<<"No";
    }
    else
    {
        for(int i = 1; i<num; i++)
        {
            if((6*i+1)==num)
            {
                cout<<"Yes";
                break;
            }
            else if((6*i-1)==num)
            {
                cout<<"Yes";
                break;
            }
        }
    }
}

int main()
{
    SixnPlusMinus(982451653);
}

