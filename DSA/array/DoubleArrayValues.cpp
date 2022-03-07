#include "iostream"

using namespace std;

void DoubleArrayElements(int p[], int n)
{
    for(int i = 0; i < n; i++)
    {
        // can use p[i] = p[i]*2 or p[i]*=2 to change the original value
        // to double the array without changing the original value
        cout<<p[i] * 2<<"\n";
    }
}

int main()
{
    int arr[] = {6, 3, 8, 9, 12};
    int size = sizeof(arr)/sizeof(arr[0]);
    DoubleArrayElements(arr, size);
}

    
