#include "iostream"

int main()
{
    int ecount = 0;
    int moves = 0;
    int arr[] = {8,3,5,9,10,12,16};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size ; i++)
    {
        if(arr[i] % 2 == 0)
        {
            ++ecount;
        }
    }
    for(int i = 0; i < ecount; i++)
    {
        if(arr[i] %2 != 0)
        {
            ++moves;
        }
    }
    std::cout<<moves;
}
