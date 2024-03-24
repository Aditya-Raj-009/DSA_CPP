#include<bits/stdc++.h>
using namespace std;

void swap(int&,int&);
void waveSort(int*, int);

int main()
{
    int arr[] = {10,7,9,8,1,3,5};
    waveSort(arr,sizeof(arr)/sizeof(int));

    for(int e: arr)
    {
        cout<<e<<" ";
    }
    return 0;
}

void waveSort(int * arr, int size)
{
    for(int i = 0; i<size-1; i+=2)
    {
        if(i>0 && arr[i-1]>arr[i])
        {
            swap(arr[i-1],arr[i]);
        }
        if(arr[i+1]>arr[i])
        {
            swap(arr[i+1],arr[i]);
        }
    }
}

void swap(int &a, int &b)
{
    a^=b;
    b^=a;
    a^=b;
}