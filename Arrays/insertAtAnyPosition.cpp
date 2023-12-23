#include<bits/stdc++.h>
using namespace std;

//  for unsorted array:

void insertAtPos(int arr[],int& n, int value, int pos)
{
    for(int i = n-1; i>=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    n+=1;
}

int main()
{
    int arr[] = {3,45,23,13,7};
    int n = sizeof(arr)/sizeof(int);
    insertAtPos(arr,n,19,0);

    for(int i = 0 ; i<n; i++)    
    {
        cout<<arr[i]<<" ";
    }
    
}