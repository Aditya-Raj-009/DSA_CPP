#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    int times = 0,noOfSwap = 0;
    for(int i = 0; i<n-1; i++)
    {
        
            bool swapped = false;
        for(int j = 0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                noOfSwap++;
                swapped = true;
            }
           
           
        }
         times+=n-1-i;
         
        if(!swapped)
        {
            cout<<"Loop took "<<times<<" times.\nNo of Swaping: "<<noOfSwap<<"\n";
            break;
        }
        
    }
}

int main()
{
    int arr [] = {7,5,8,2,1,6,4};
    BubbleSort(arr,sizeof(arr)/sizeof(int));
    for(int a: arr)
    {
        cout<<a<<" ";
    }
    return 0;
}