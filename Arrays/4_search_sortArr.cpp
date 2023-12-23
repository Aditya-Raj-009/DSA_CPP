#include<bits/stdc++.h>
using namespace std;

// for sorted array:

int search(int arr[], int high, int src, int low = 0)
{
    if(low>high)
    {
        return -1;
    }
    int mid = low+(high-low)/2;
    if(arr[mid] == src)
    {
        return mid;
    }
    if(arr[mid]>src)
    {
        return search(arr,mid-1,src,low);
    }
    
        return search(arr,high,src,mid+1);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    cout<<search(arr,n,7)<<endl;

    return 0;
}