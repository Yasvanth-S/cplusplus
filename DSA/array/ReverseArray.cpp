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
        Swap(&p[start], &p[end]);
        ++start;
        --end;
    }
}

int main()
{
    int arr[] = {2, 4, 6, 7, 8, 10, 12, 14, 16, 18};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array: ";
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Reversed Array: ";
    Reverse(arr, 0, size-1);
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
