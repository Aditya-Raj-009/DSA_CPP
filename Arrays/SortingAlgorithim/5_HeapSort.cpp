#include<bits/stdc++.h>
using namespace std;

 void heapify(int*,int,int);
 void heapSort(int*, int);
 void swap(int*, int,int);

 int main(){

    int arr[] = {5,7,2,4,1,9,0,3,6};

    heapSort(arr,sizeof(arr)/sizeof(int));

    for(int ele: arr)
    {
        cout<<ele<<" ";
    }
    return 0;
 }

 void heapify(int* arr, int size, int i)
 {
    int l = 2*i + 1, r = l+1, largest = i;

    if(l<size && arr[l]>arr[largest])
    {
        largest = l;
    }
    if(r<size && arr[r]>arr[largest])
    {
        largest = r;
    }
    if(largest!=i)
    {
        swap(arr,largest,i);
        heapify(arr,size,largest);
    }
 }

void heapSort(int* arr, int size)
{
    for(int i = size/2 -1; i>=0; i--)
    {
        heapify(arr,size,i);
    }

    for(int i = size -1; i>0; i--)
    {
        swap(arr,i,0);
        heapify(arr,i,0);
    }
}

void swap(int* arr, int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
