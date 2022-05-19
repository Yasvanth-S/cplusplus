#include <bits/stdc++.h>
using namespace std;

class ConstDest
{
    int * p = NULL;
    public:
        ConstDest()
        {
            p = new int(5);
            cout<<*p;
        }

        ~ConstDest()
        {
            delete p;
        }
};

int main()
{
    ConstDest Variable;
    cout<<endl;
}


