#include "iostream"

using namespace std;

void Swap(int * p1, int * p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void Reverse(int p[], int start, int end)
{
    while(start < end)
    {
        Swap(&p[start] ,&p[end]);
        ++start;
        --end;
    }
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    int d = 3;
    cout<<"Orignal Array= ";
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Roated "<<d<<" times Array= ";
    Reverse(arr, 0, d-1);
    Reverse(arr, d, size-1);
    Reverse(arr, 0, size-1);
    for(int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
