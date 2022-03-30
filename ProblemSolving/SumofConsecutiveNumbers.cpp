#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int number_1;
    int number_2;
    cout<<"Type the number ";
    cin>>num;
    number_1 = num/2;
    number_2 = num/2+1;
    if(num%2==0)
        number_2=number_1;
    cout<<"Number 1 ="<<number_1<<endl<<"Number 2 ="<<number_2;
}
