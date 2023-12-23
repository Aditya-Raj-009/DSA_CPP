#include<bits/stdc++.h>
using namespace std;


// for unsorted array:

int deleteValue(int arr[],int& n, int del)
{
    int pos = -1;

    for(int i = 0; i<n; i++)
    {
        if(arr[i] == del)
        {
            pos = i;
        }
    }
    if(pos == -1)
    {
        return 0;
    }
    for(int i = pos; i<n; i++)
    {
        arr[i] = arr[i+1];
    }
    n-=1;
    return 1;
}

int main()
{
    int arr[] = {4,51,12,24,7,3};
    int n = sizeof(arr)/sizeof(int);

    if(deleteValue(arr,n,24))
    {
        cout<<"Deleted Successfully"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}