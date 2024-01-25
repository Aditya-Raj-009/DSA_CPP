/*
Given a sequence arr[] of size n, Write a function int equilibrium(int[] arr, int n) that 
returns an equilibrium index (if any) or -1 if no equilibrium index exists. 

The equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. 
*/

#include<bits/stdc++.h>
using namespace std;

int equilibriumPoint(int* arr, int size);

int main(int argc, char const *argv[])
{
    int arr [] = {-7, 1, 5, 2, -4, 3, 0}  ;
    cout<<equilibriumPoint(arr,sizeof(arr)/sizeof(0))<<endl;
    

   return 0;
}

int equilibriumPoint(int arr[], int size)
{
    int key = 0;

    for(int i = 0 ; i<size; i++)
    {
        key+=arr[i];
    }
    int leftSum = 0;
    for(int i = 0; i<size; i++)
    {
        key-=arr[i];
        if(leftSum == key)
        {
            return i+1;
        }
        leftSum+=arr[i];
    }
    
    return -1;
}