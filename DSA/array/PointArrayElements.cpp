#include "iostream"

using namespace std;

void PointArray(int * p, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<*(p + i)<<"\n";
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12};
    int size = sizeof(arr)/sizeof(arr[0]);
    PointArray(arr, size);
}

