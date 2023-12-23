#include<bits/stdc++.h>
using namespace std;


void insertAtEnd(int arr[], int& n, int value)
{
    arr[n] = value;
    n+=1;
}
int main()
{
    int arr[] = {3,6,2,5,1};
    int n = 5;
    insertAtEnd(arr,n,8);

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}