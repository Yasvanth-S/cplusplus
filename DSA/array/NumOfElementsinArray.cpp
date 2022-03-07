#include "iostream"

using namespace std;
int main()
{

    int i[] = {10, 20, 30, 40, 50};
    char c[] = {'a', 'b', 'c', 'd', 'e'};
    float f[] = {3.75, 8.19, 7.4, 9.5};
    
    int i_size = 0, c_size = 0, f_size = 0;

    i_size = sizeof(i)/sizeof(i[0]);
    c_size = sizeof(c)/sizeof(c[0]);
    f_size = sizeof(f)/sizeof(f[0]);

    cout<<"Size of Integer array:"<<i_size<<"\n";
    cout<<"Size of Char array:"<<c_size<<"\n";
    cout<<"Size of Float array:"<<f_size;

}


