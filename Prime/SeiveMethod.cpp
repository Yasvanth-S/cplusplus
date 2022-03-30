#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;

void SeiveMethod(ull n)
{
    bool PrimeArr[n+1];
    memset(PrimeArr, true, sizeof(PrimeArr));
    for(ull i = 2; i*i<=n;i++)
    {
        if(PrimeArr[i] == true)
        {
            for(ull j = i*2; j<=n;j+=i)
            {
                PrimeArr[j]=false;
            }
        }
    }
    //for(ull i = 2; i<n;i++)
    //{
        if(PrimeArr[n])
        {
            cout<<n<<" ";
        }
    //}
}

int main()
{
    SeiveMethod(999983); //upto 1000000
}

