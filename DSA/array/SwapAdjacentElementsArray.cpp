#include "iostream"

using namespace std;

void Swap(int * p1, int * p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void Rearrange(int p[], int n)
{
    for(int i = 0; i < n-1; i = i+2)
    {
        Swap(&p[i], &p[i+1]);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array= ";
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Swaped Array= ";
    Rearrange(arr, size);
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
