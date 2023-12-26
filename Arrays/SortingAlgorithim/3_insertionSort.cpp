#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 1; i<n; i++)
    {
        int j = i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key)
        {
           arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int arr[] = {12,8,11,7,1,4,9,6};
    insertionSort(arr,sizeof(arr)/sizeof(int));
    
    for(int a: arr)
    {
        cout<<a<<" ";
    }


    return 0;
}