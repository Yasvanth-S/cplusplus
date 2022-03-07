#include "iostream"

using namespace std;

void Swap(int * p1, int * p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void Rotate(int p[], int n, int d)
{
    int i = 0;
    while(i < d)
    {
        int temp = p[0];
        for(int j = 1; j < n; j++)
        {
            Swap(&p[j-1], &p[j]);
        }
        p[n-1] = temp;
        i++;
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
    Rotate(arr, size, d);
    for(int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
}


