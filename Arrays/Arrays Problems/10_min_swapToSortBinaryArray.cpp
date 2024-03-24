#include<bits/stdc++.h>
using namespace std;

int minSwap(int*,int);

int main(){

    int arr[] = {0, 0, 1, 0, 1, 0, 1, 1};
    cout<<"minimum no of swap required to this binary array is "<<minSwap(arr,sizeof(arr)/sizeof(int))<<endl;
    return 0;
}

int minSwap(int* arr,int n)
{
    int zeroCounter = 0, swap = 0;

    for(int i = n-1; i>=0; i--)
    {
        if(arr[i] == 0)
        {
            zeroCounter++;
        }
        else{
            swap+=zeroCounter;
        }
    }

    return swap;
}