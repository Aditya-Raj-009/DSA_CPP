#include<bits/stdc++.h>
using namespace std;


void sort012(int*, int);

int main()
{
    int a[] = {0,2,1,1,2,0,1,2,1,0,1,1,2,0};

    sort012(a,sizeof(a)/sizeof(int));

    for(int i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

void sort012(int a[], int n)
{
    int lo = 0, mid = 0, high = n-1;

    while(mid<=high)
    {
        switch (a[mid])
        {
        case 0: 
        swap(a[lo++],a[mid++]);
            break;

        case 1:
        mid++;
            break;

        case 2:
        swap(a[mid],a[high--]);
        break;

        }
    }
}
