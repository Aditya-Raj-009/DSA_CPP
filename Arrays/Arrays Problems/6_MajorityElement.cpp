/**
 * Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than 
 * n/2 times (and hence there is at most one such element).
 */

#include<bits/stdc++.h>
using namespace std;

int majority(int*,int);
bool isMajority(int * , int, int);

int main(int argc, char const *argv[])
{
    int arr[] = {3,3,4,2,4,4,2,4,4};

    int candi = majority(arr,sizeof(arr)/sizeof(int));

    if(isMajority(arr,sizeof(arr)/sizeof(0),candi))
    {
        cout<<candi<<endl;
    }
    else{
        cout<<"No majority element found";
    }
    return 0;
}

int majority(int arr[], int n)
{
    int majority = 0,count = 1;
    
    for(int i = 1; i<n; i++)
    {
        if(arr[majority]==arr[i])
        {
            count++;
            
        }
        else{
            count--;
        }
        if(count == 0)
        {
            count = 1;
            majority = i;
        }
    }
    return arr[majority];
}

bool isMajority(int arr[], int n, int candi)
{
    int count = 0;
    
    for(int i = 0; i<n; i++)
    {
        if(arr[i] == candi)
        {
            count++;
        }
    }
    if(count > n/2)
    {
        return 1;
    }
    return 0;
}

