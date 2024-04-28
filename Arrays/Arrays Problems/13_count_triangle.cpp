#include<bits/stdc++.h>
using namespace std;

int count_triangle(int arr[], int n)
{
    
    sort(arr, arr+n);
    int count = 0;

    for(int i = 0; i<n-2; i++)
    {
        int k = i+2;
        for(int j = i+1; j<n; j++)
        {
            while(k<n && arr[k]<arr[i]+arr[j])
            {
                k++;
                if(k>j)
                {
                    count+=k-j-1;
                }
            }
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 21, 22, 100, 101, 200, 300};

    cout<<count_triangle(arr,sizeof(arr)/sizeof(int));
    return 0;
}
