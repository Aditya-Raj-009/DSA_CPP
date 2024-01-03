#include<bits/stdc++.h>
using namespace std;

int zeroCounter(int arr[],int n)
{
   int i = 0, j = n-1;

    while(i<=j)
    {
        int mid = i+(j-i)/2;

        if(arr[mid] == 0 && arr[mid-1] == 1)
        {
          return (n-1)-mid+1;
            
        }
        else if(arr[mid] == 1 && arr[mid+1] == 0)
        {
          return (n-1)-mid;
            
        }
        else if(arr[mid] == 0 && (arr[mid-1] == 0 || arr[mid+1] == 0))
        {
             j = mid;
        }
        else 
        {
            i = mid+1;
        }

    }
    return 0;
}

    int main(int argc, char const *argv[])
    {
        
        int arr[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

        cout<<zeroCounter(arr,sizeof(arr)/sizeof(int));
        return 0;
    }
    