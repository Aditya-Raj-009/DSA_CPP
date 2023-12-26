#include<bits/stdc++.h>
#include<array>
using namespace std;

void merge(int*, int ,int, int);

void mergeSort(int arr[],int start, int end)
{
    
   if(start>=end)
   {
    return;
   }
   int mid = start+(end-start)/2;
   mergeSort(arr,start,mid);
   mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

void merge(int arr[], int start, int mid, int end)
{
    int* arrTemp = new int[end-start+1];

    int firstSubarr = start, secondSubbarr = mid+1, k=0;

    while(firstSubarr<=mid && secondSubbarr<=end)
    {
        if(arr[firstSubarr]<=arr[secondSubbarr])
        {
            arrTemp[k++] = arr[firstSubarr++];
        }
        else{
            arrTemp[k++] = arr[secondSubbarr++];
        }
       
    }
   
    while(firstSubarr<=mid)
    {
        arrTemp[k++] = arr[firstSubarr++];
    }
    
   
    while(secondSubbarr<=end)
    {
        arrTemp[k++] = arr[secondSubbarr++];
    }
    
    for(int r = start; r<=end; r++)
    {
        arr[r] = arrTemp[r-start];
    }

    delete[] arrTemp;
}

int main(int argc, char const *argv[])
{
   int arr[] = {5,4,1,7,2,8};
    mergeSort(arr,0,(sizeof(arr)/sizeof(int))-1);

    for(int a: arr)
    {
        cout<<a<<" ";
    }
    return 0;
}
