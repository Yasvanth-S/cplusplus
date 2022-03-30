#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number_1 = 0;
    int number_2 = 0;
    cout<<"Enter the First number "<<endl;
    cin>>number_1;
    cout<<"Enter the Second number "<<endl;
    cin>>number_2;
    int temp = 0;
    while(1)
    {
        temp = number_1%number_2;
        if(temp == 0)
        {
            cout<<number_2;
            break;
        }
        number_1 = number_2;
        number_2 = temp;
    }
}


