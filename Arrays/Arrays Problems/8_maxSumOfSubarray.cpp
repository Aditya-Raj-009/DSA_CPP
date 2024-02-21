#include<bits/stdc++.h>
using namespace std;

int maxSumSubArray(int *, int);

int main(int argc, char const *argv[])
{
    int arr[] = {-1,-2,-3,-4,-5};

    cout<<maxSumSubArray(arr,sizeof(arr)/sizeof(int))<<endl;
    return 0;
}

int maxSumSubArray(int arr[], int size)
{
    int i = 0;
    int maxSum = INT_MIN,currSum = 0;

    while(i<size)
    {
        currSum+=arr[i];
            if(currSum>maxSum)
            {
                maxSum = currSum;
            }
            if(currSum<0)
            {
                currSum = 0;
            }
            i++;
    }

    return maxSum;
}

