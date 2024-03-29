#include<bits/stdc++.h>
using namespace std;


int  GCD(int a ,int b)
{
    if(a == 0)
    return b;
    return GCD(b%a,a);
}
void LeftRotateArray(int arr[] , int  n, int kTimes)
{
    kTimes%=n; // kTimes >=n

    int gcd = GCD(kTimes,n);

    for(int i = 0; i<gcd; i++)
    {
        int j = i;
        int temp = arr[i];

        while(1)
        {
            int r = j+kTimes;
            if(r>=n)
            {
                r-=n;
            }
            if (r == i)
            {
                break;
            }
            arr[j] = arr[r];
            j = r;
        }
        arr[j] = temp;
    }
}


int main()
{
    int arr [] = {1,2,3,4,5,6};
    LeftRotateArray(arr,sizeof(arr)/sizeof(int),2);

    for(int e:arr)
    {
        cout<<e<<" ";
    }
}