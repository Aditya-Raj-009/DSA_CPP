#include<bits/stdc++.h>
using namespace std;


void selectionSort(int*, int);

int main()
{
    int arr[] = {8,12,6,5,9,2,11,3,7,1,13,10,4};
    selectionSort(arr,sizeof(arr)/sizeof(int));

    for(int i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}

void selectionSort(int arr[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        int curr = i;

        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[curr])
            {
                curr = j;
            }
        }
        if(curr!=i)
        {
            int temp = arr[i];
            arr[i] = arr[curr];
            arr[curr] = temp;
        }
    }
}